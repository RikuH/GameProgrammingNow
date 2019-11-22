// Fill out your copyright notice in the Description page of Project Settings.

#include "LaunchPadTriggerBox.h"
#include "DrawDebugHelpers.h"

ALaunchPadTriggerBox::ALaunchPadTriggerBox() {
	OnActorBeginOverlap.AddDynamic(this, &ALaunchPadTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ALaunchPadTriggerBox::OnOverlapEnd);
}

void ALaunchPadTriggerBox::BeginPlay() {
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Green, true, -1, 0, 5);
	UE_LOG(LogTemp, Warning, TEXT("asddsa"));

}

void ALaunchPadTriggerBox::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor) {
	if (OtherActor && (OtherActor != this) && OtherActor == SpecificActor) {
		UE_LOG(LogTemp, Warning, TEXT("has entered the box"));
	}
}

void ALaunchPadTriggerBox::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor) {
	if (OtherActor && (OtherActor != this) && OtherActor == SpecificActor) {
		UE_LOG(LogTemp, Warning, TEXT("has left the box"));
	}
}