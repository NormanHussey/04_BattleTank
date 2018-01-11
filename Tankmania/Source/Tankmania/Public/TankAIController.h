// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AIController.h"
#include "Tankmania.h"
#include "Tank.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANKMANIA_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ATank * GetAIControlledTank() const;

	virtual void BeginPlay() override;

private:
	ATank * GetPlayerTank()const;

	
};
