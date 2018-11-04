// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Tank AI Controller Begin Play"));
	ATank * ControlledTank;

	ControlledTank = GetControlledTank();

	if (ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("AI Tank Controller Has Tank %s"), *ControlledTank->GetName());
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AITank Controller Cant find Tank"));
	}
}

ATank * ATankAIController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}
