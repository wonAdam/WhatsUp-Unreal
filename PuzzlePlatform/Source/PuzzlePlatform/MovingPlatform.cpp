// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
	SetMobility(EComponentMobility::Movable);
	PrimaryActorTick.bCanEverTick = true;
}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority() == true)
	{
		SetReplicates(true);
		SetReplicateMovement(true);
	}
}


void AMovingPlatform::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (HasAuthority() == false)
	{
		FVector Location = GetActorLocation();
		Location += FVector::XAxisVector * 5.0f * DeltaSeconds;

		SetActorLocation(Location);
	}
}

