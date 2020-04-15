// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * TankTrack is used to set maximum driving force, and to apply forces to the tank
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANKS_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// Sets throttle to value between -1/+1
	UFUNCTION(BlueprintCallable, Category = Input)
	void SetThrottle(float Throttle);

	// Max force per track in Newtons
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 80000000.f; // Assume 40 ton tank and 1g acceleration
};
