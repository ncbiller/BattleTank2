// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/TankAIController.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Tank AI Controller Begin Play"));
	ATank * ControlledTank = GetControlledTank();
	ATank * PlayerTank = GetPlayerTank();


	if (ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("AI Tank Controller Has Tank %s"), *ControlledTank->GetName());
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AITank Controller Cant find Tank"));
	}

	if (ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("AI Tank Controller for Tank %s, Can See Player Tank %s"), *ControlledTank->GetName(), *PlayerTank->GetName());
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AITank Controller Cant find Tank"));
	}
}

ATank * ATankAIController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank()
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	return Cast<ATank>(PlayerPawn);
}
