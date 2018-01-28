// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AIController.h"
#include "Tankmania.h"
#include "TankAIController.generated.h"

/**
 * 
 */

UCLASS()
class TANKMANIA_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

protected:
	// How close can the AI tank get
	UPROPERTY(EditAnywhere, Category = "Setup")
	float AcceptanceRadius = 8000.0;
		
private:
	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetPawn(APawn* InPawn) override;

	UFUNCTION()
	void OnPossessedTankDeath();


};
