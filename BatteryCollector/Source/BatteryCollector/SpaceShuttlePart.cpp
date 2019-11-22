// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShuttlePart.h"

ASpaceShuttlePart::ASpaceShuttlePart() {
	GetMesh()->SetSimulatePhysics(true);

	//Default weight of the part
	PartWeight = 100.0;


}
void ASpaceShuttlePart::WasCollected_Implementation() {
	//Use the base pickup behavor
	Super::WasCollected_Implementation();

	UE_LOG(LogTemp, Warning, TEXT("Collecterd"));


	if (isDestroyable) {
		//Destroy the part
		Destroy();
	}

}
float ASpaceShuttlePart::GetPartWeight() {
	return PartWeight;
}