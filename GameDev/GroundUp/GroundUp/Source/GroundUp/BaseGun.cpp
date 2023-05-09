// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGun.h"

// Sets default values
ABaseGun::ABaseGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseGun::SetMBD(float value) {
	MaxBulletDistance = value;
}
float ABaseGun::GetMBD() {
	return MaxBulletDistance;
}
void ABaseGun::SetDmg(float value) {
	Damage = value;
}
float ABaseGun::GetDmg() {
	return Damage;
}
void ABaseGun::SetFR(float value) {
	FireRate = value;
}
float ABaseGun::GetFR() {
	return FireRate;
}
