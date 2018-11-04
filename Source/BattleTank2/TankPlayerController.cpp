// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"


ATank * ATankPlayerController::GetControlledTank() const {

	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	//PrimaryActorTick.bCanEverTick = true;

	UE_LOG(LogTemp, Warning, TEXT("Tank Controller Begin Play"));
	ATank * ControlledTank;

	ControlledTank = GetControlledTank();

	if (ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("Tank Controller Has Tank %s"), *ControlledTank->GetName());
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Tank Controller Cant find Tank"));
	}
}

void ATankPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	AimTowardsCrosshair();
	
}

void ATankPlayerController::AimTowardsCrosshair() {

}
