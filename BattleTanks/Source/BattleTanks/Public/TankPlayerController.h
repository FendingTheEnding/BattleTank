// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be last include

// Forward Declaration
class ATank;

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ATank* GetControlledTank() const;
	// Make it so shot hits at crosshair
	void AimTowardsCrosshair();

	//Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;
	// Gets vector of look direction
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	// Gets Hit location of crosshair
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLoction) const;

	UPROPERTY(EditAnyWhere)
	float CrosshairXLocation = 0.5f;
	UPROPERTY(EditAnyWhere)
	float CrosshairYLocation = 0.3333f;
	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000;
};
