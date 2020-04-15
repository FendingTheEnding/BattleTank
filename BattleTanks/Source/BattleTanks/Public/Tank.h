// Copyright Kratzer 2020
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
// Always do this last
#include "Tank.generated.h"

// Forward Declaration
//class UTankAimingComponent;
//class UTankMovementComponent;

UCLASS()
class BATTLETANKS_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(BlueprintReadOnly)
	//UTankAimingComponent* TankAimingComponent = nullptr;
	//UPROPERTY(BlueprintReadOnly)
	//UTankMovementComponent* TankMovementComponent = nullptr;
	
public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintCallable, Category = Setup)
	//void SetBarrelReference(UTankBarrel* BarrelToSet);
	//UFUNCTION(BlueprintCallable, Category = Setup)
	//void SetTurretReference(UTankTurret* TurretToSet);

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//void AimAt(FVector HitLocation);

	

	//UPROPERTY(EditDefaultsOnly, Category = Firing)
	//float LaunchSpeed = 50000; // 1500 m/s
	//UPROPERTY(EditDefaultsOnly, Category = Firing)
	//float ReloadTimeInSeconds = 2.5f;

	//UPROPERTY(EditDefaultsOnly, Category = Setup)
	//UClass* ProjectileBlueprint; // Alternative TSubclassOf<AProjectile>* ProjectileBlueprint && Forward Declaration: class AProjectile

private:
	// Local barrel reference
	//UTankBarrel* Barrel = nullptr; //TODO remove
	
	//double LastFireTime = 0.0;
};
