// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FortPlayerPawn.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AthenaGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API AAthenaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool HackDetected;

	UFUNCTION(Exec, Category = "Commands")
	void AddHealth(float PlayerHealth);

	UFUNCTION(Exec, Category = "Commands")
	void AddShield(float PlayerShield);
	
	void DetectPlayerSpeed();
};
