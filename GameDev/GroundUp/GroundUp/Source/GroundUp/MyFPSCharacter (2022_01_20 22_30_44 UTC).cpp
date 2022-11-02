// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFPSCharacter.h"

// Sets default values
AMyFPSCharacter::AMyFPSCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	bUseControllerRotationYaw = false;

	cam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	cam->AttachTo(RootComponent);
	cam->SetRelativeLocation(FVector(0, 0, 40));
}

// Called when the game starts or when spawned
void AMyFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Hori", this, &AMyFPSCharacter::HoriMove);
	InputComponent->BindAxis("Vert", this, &AMyFPSCharacter::VertMove);

	InputComponent->BindAxis("HoriRot", this, &AMyFPSCharacter::HoriRot);
	InputComponent->BindAxis("VertRot", this, &AMyFPSCharacter::VertRot);
}

void AMyFPSCharacter::HoriMove(float value)
{
	if (value) {
		AddMovementInput(GetActorRightVector(), value);
	}
}

void AMyFPSCharacter::VertMove(float value)
{
	if (value) {
		AddMovementInput(GetActorForwardVector(), value);
	}
}

void AMyFPSCharacter::HoriRot(float value)
{
	if (value) {
		AddActorLocalRotation(FRotator(0, value, 0));
	}
}

void AMyFPSCharacter::VertRot(float value) {
	if (value) {
		float temp = cam->GetRelativeRotation().Pitch + value;

		if (temp < 65 && temp > -65) {
			cam->AddLocalRotation(FRotator(value, 0, 0));
		}
	}
}