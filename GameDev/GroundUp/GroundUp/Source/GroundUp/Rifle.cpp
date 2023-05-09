// Fill out your copyright notice in the Description page of Project Settings.


#include "Rifle.h"

ARifle::ARifle() {
	GunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunMesh"));
	SetRootComponent(GunMesh);
	PrimaryActorTick.bCanEverTick = true;

	SetMBD(5000);
	SetDmg(2);
	SetFR(0.1);
}