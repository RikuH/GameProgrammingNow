// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BatteryCollectorCharacter.generated.h"

UCLASS(config=Game)
class ABatteryCollectorCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	/** Collection Sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollectionSphere;

public:
	ABatteryCollectorCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	//Accessor function for initial power
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetInitialPower();

	//Accessor function for current power
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetCurrentPower();

	//Accessor function for characers power
	// @param PowerChange This is the amount to change the power by, and it can be positive or negative
	UFUNCTION(BLueprintCallable, Category = "Power")
	void UpdatePower(float PowerChange);

	void SetCollectionEnabled(bool bEnabled);
	bool GetCollectionEnabled();

	UFUNCTION(BlueprintCallable)
	void SlowDown(AActor* PickedInventoryItem);

	UFUNCTION(BlueprintCallable)
	void AllPartsCollected();

	//Called when we press key to collect any pickups inside the collectionsphere
	UFUNCTION(BlueprintCallable, Category = "Pickups")
		void CollectPickups();

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	//Starter power level of our character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float InitialPower;

	//Multiplier for the character speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float SpeedFactor;

	//Speed when character speed is 0
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BaseSpeed;

	UFUNCTION(BlueprintImplementableEvent, Category = "Power")
	void PowerChangeEffect();

	//Current power level of our character
	UPROPERTY(VisibleAnywhere, Category = "Power")
	float CharacterPower;
private:

	bool bCollectionEnabled;

	UPROPERTY(VisibleAnywhere)
	bool isCarrying;

	AActor* InventoryItem;

	int Collected = 0;

	/** called when something enters the sphere component **/
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	//Returns ColectionSpehere subobject
	FORCEINLINE class USphereComponent* GetSphereComponent() const { return CollectionSphere; }

};

