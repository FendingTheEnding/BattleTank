// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTrack.h"

void UTankTrack::SetThrottle(float Throttle)
{
	// TODO clamp throttle value 
	FString Name = GetName();
	//UE_LOG(LogTemp, Warning, TEXT("%s: %f"), *Name, Throttle);

	FVector ForceApplied = GetForwardVector()*Throttle*TrackMaxDrivingForce;
	FVector ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}