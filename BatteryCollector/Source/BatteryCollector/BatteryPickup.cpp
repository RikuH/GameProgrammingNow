// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include "BatteryCollector.h"

//Set default values
ABatteryPickup::ABatteryPickup() {
	GetMesh()->SetSimulatePhysics(true);

	//The base power of the battery
	BatteryPower = 150.0f;
}

void ABatteryPickup::WasCollected_Implementation() {
	//Use the base pickup behavor
	Super::WasCollected_Implementation();

	if (isDestroyable) {
		//Destroy the battery
		Destroy();
	}
}

float ABatteryPickup::GetPower() {
	return BatteryPower;
}
