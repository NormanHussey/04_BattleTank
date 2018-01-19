// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"
#include "Tankmania.h"

void UTankTurret::Rotate(float RelativeSpeed)
{
	auto RotationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto NewRotation = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, NewRotation, 0));
}


