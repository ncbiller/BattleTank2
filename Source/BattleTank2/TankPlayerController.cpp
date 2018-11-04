// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"


ATank * ATankPlayerController::GetControlledTank() const {

	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Tank Controller Begin Play"));
	ATank * MyTank;

	MyTank = GetControlledTank();

	if (MyTank) {
		UE_LOG(LogTemp, Warning, TEXT("Tank Controller Has Tank %s"), *MyTank->GetName());
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Tank Controller Cant find Tank"));
	}
}
