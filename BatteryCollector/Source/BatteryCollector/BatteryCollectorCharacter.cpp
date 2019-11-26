// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectorCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Pickup.h"
#include "Components/SphereComponent.h"
#include "BatteryPickup.h"
#include "SpaceShuttlePart.h"
//////////////////////////////////////////////////////////////////////////
// ABatteryCollectorCharacter

ABatteryCollectorCharacter::ABatteryCollectorCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;			 // Character moves in the direction of input...
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;		// The camera follows at this distance behind the character
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false;								// Camera does not rotate relative to arm

	//Create the collection sphere
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->OnComponentBeginOverlap.AddDynamic(this, &ABatteryCollectorCharacter::OnOverlapBegin);
	CollectionSphere->SetupAttachment(RootComponent);
	CollectionSphere->SetSphereRadius(200.0f);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character)
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	//Set a base power level for the characer
	InitialPower = 2000.0f;
	CharacterPower = InitialPower;

	//Set the dependence of the speed on the power level
	SpeedFactor = 0.75f;
	BaseSpeed = 10.0f;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABatteryCollectorCharacter::SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Collect", IE_Pressed, this, &ABatteryCollectorCharacter::CollectPickups);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABatteryCollectorCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABatteryCollectorCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ABatteryCollectorCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ABatteryCollectorCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ABatteryCollectorCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ABatteryCollectorCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ABatteryCollectorCharacter::OnResetVR);
}

void ABatteryCollectorCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ABatteryCollectorCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ABatteryCollectorCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void ABatteryCollectorCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ABatteryCollectorCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ABatteryCollectorCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ABatteryCollectorCharacter::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ABatteryCollectorCharacter::CollectPickups()
{
	if (GetCollectionEnabled()) {

		//Get all overlapping Actors and store them in an array
		TArray<AActor*> CollectedActors;
		CollectionSphere->GetOverlappingActors(CollectedActors);

		//Keep track of the collected
		float CollectedPower = 0;
		float InventoryWeight = 0;


		//For each Actor we collected
		for (int32 iCollected = 0; iCollected < CollectedActors.Num(); iCollected++)
		{

			//Cast the actor to APickup
			APickup* const TestPickup = Cast<APickup>(CollectedActors[iCollected]);

			//If the cast is successful and the pickup is valid and active
			if (TestPickup && !TestPickup->IsPendingKill() && TestPickup->IsActive())
			{
				//call the pickups WasCollected function
				TestPickup->WasCollected();

				//Check to see if the pickup is also a battery
				ABatteryPickup* const TestBattery = Cast<ABatteryPickup>(TestPickup);

				if (TestBattery)
				{
					//Increases the collected power
					CollectedPower += TestBattery->GetPower();
				}

				//Deactive the pickup
				TestPickup->SetActive(false);
			}
		}
		
		//This is a bit of a dangerous check
		//if (CollectedPower > 0)
		//{
			this->UpdatePower(CollectedPower);
		//}

		

	}
}

float ABatteryCollectorCharacter::GetInitialPower()
{
	return this->InitialPower;
}
float ABatteryCollectorCharacter::GetCurrentPower()
{
	return this->CharacterPower;
}

//Called whenever power is increased or decreased
void ABatteryCollectorCharacter::UpdatePower(float PowerChange)
{
	//CharacterPower = CharacterPower + PowerChange;
	this->CharacterPower += PowerChange;

	if (!isCarrying) {
		//Change speed based on power
		GetCharacterMovement()->MaxWalkSpeed = BaseSpeed + SpeedFactor * CharacterPower;// -InventoryWeight;
	}

	//Call blueprint implemented visual effect
	PowerChangeEffect();
}

bool ABatteryCollectorCharacter::GetCollectionEnabled(){
	return this->bCollectionEnabled;
}

void ABatteryCollectorCharacter::SetCollectionEnabled(bool bEnabled){
	this->bCollectionEnabled = bEnabled;
}

//Slow down the player when picked up a part
void ABatteryCollectorCharacter::SlowDown(AActor* PickedInventoryItem) {
	Collected++;
	this->InventoryItem = PickedInventoryItem;
	//GetCharacterMovement()->MaxWalkSpeed = (BaseSpeed + SpeedFactor * CharacterPower) / 2;
	GetCharacterMovement()->MaxWalkSpeed = GetCharacterMovement()->MaxWalkSpeed / 1.5f;
	isCarrying = true;
	UE_LOG(LogTemp, Warning, TEXT("Slow"));

}

//When all parts have collected and returned to middle base
void ABatteryCollectorCharacter::AllPartsCollected() {
	if (Collected >= 5) {
		isCarrying = false;
		UE_LOG(LogTemp, Warning, TEXT("Voitit"));

	}
}
void ABatteryCollectorCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr)) {
		
	}
		UE_LOG(LogTemp, Warning, TEXT("Collision"));
 }
