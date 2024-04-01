// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "FortWorldSettings.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API AFortWorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TSubclassOf<class AActor> WorldTimeOfDayManager;
	
};
