// Copyright Kratzer 2020
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
// Always do this last
#include "Tank.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTankDelegate);

// Forward Declaration
//class UTankAimingComponent;
//class UTankMovementComponent;

UCLASS()
class BATTLETANKS_API ATank : public APawn
{
	GENERATED_BODY()

private:
	// Sets default values for this pawn's properties
	ATank();

public:
	// Return current health as a percentage of starting health, between 0 and 1
	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealthPercent() const;

	FTankDelegate OnDeath;

	// Call by the engine when actor damage is dealt
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(BlueprintReadOnly)
	//UTankAimingComponent* TankAimingComponent = nullptr;
	//UPROPERTY(BlueprintReadOnly)
	//UTankMovementComponent* TankMovementComponent = nullptr;
	
public:	
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	int32 StartingHealth = 100;

	UPROPERTY(VisibleAnywhere, Category = "Health")
	int32 CurrentHealth; // Initialize at BeginPlay()

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
