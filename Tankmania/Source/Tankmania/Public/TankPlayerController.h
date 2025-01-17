// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */

class ATank;
class UTankAimingComponent;

UCLASS()
class TANKMANIA_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnPossessedTankDeath();

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
	void FoundAimingComponent(UTankAimingComponent* AimCompRef);
	
private:


	// Start the tank moving the barrel so that a shot woud hit where the crosshair intersects the world
	void AimTowardsCrosshair();
	
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5;
	
	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.33333;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

	void SetPawn(APawn * InPawn);


	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000.0;

};
