// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tankmania.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetAIControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller not possesing a tank!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller possessing: %s"), *(ControlledTank->GetName()))
	}
}


ATank* ATankAIController::GetAIControlledTank() const
{

	return Cast<ATank>(GetPawn());
}

