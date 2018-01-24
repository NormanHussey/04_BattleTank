// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"
#include "Tankmania.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
/*
	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Can't find the Player Controller!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("The Player Controller is possessing: %s"), *(PlayerTank->GetName()))
	}
	*/
}


void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (PlayerTank)
	{
		// Move towards the player
		MoveToActor(PlayerTank, AcceptanceRadius, true, true, false, 0, true);
/*
		if (MoveToActor(PlayerTank, AcceptanceRadius, true, true, false, 0, true) == EPathFollowingRequestResult::Failed)
		{
			UE_LOG(LogTemp, Error, TEXT("PathFollowing request failed!"))
		}
*/
		// Aim towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		// Fire if ready
		
		ControlledTank->Fire();

	}

}