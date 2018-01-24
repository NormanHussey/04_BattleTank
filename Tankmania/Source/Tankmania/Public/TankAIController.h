// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AIController.h"
#include "Tankmania.h"
#include "TankAIController.generated.h"

/**
 * 
 */
// Forward Declaration
class ATank;

UCLASS()
class TANKMANIA_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

private:
	
	virtual void Tick(float DeltaTime) override;
	
	// How close can the AI tank get
	float AcceptanceRadius = 300.0;
};
