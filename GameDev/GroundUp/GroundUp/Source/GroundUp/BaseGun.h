// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "BaseGun.generated.h"

class UStaticMeshComponent;

UCLASS()
class GROUNDUP_API ABaseGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseGun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float MaxBulletDistance;
	float Damage;
	float FireRate;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* GunMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetMBD(float value);
	float GetMBD();
	void SetDmg(float value);
	float GetDmg();
	void SetFR(float value);
	float GetFR();
};
