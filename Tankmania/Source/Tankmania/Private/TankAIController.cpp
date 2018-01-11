// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tankmania.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Can't find the Player Controller!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("The Player Controller is possessing: %s"), *(PlayerTank->GetName()))
	}
}


ATank* ATankAIController::GetAIControlledTank() const
{

	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}
