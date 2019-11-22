// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "SpaceShuttlePart.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ASpaceShuttlePart : public APickup
{
	GENERATED_BODY()
	
public:

	//Sets default values for this actor's properties
	ASpaceShuttlePart();

	//Override the WasCollected function - use Implementation because its a Blueprint native event
	void WasCollected_Implementation() override;

	//Public way to access space shuttle parts weight
	float GetPartWeight();

protected:
	//Set the amount of weight the part set to the character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Part", meta = (BlueprintProtected = "true"))
		float PartWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Part", meta = (BlueprintProtected = "true"))
		bool isDestroyable = true;
};
