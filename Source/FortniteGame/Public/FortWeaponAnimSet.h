// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortWeaponAnimSet.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortWeaponAnimSet : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool bShouldUseIK;


UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAimOffsetBlendSpace*TargetingAimOffset;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAimOffsetBlendSpace*NonTargetingAimOffset;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPoseLevel2;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAimOffsetBlendSpace*RelaxedAimOffset;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UBlendSpace*JogAdditiveBlendSpace;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UBlendSpace*JogCoreBlendSpace;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UBlendSpace*JogAdditiveBlendSpaceRelaxed;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UBlendSpace*JogAdditiveBlendSpaceRelaxedLevel2;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*SprintAnimation;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*CrouchTargetingPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*CrouchNonTargetingPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*CrouchRelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UBlendSpace*CrouchCoreTargetingBlendSpace;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UBlendSpace*CrouchCoreNonTargetingBlendSpace;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UBlendSpace*CrouchWalkAdditiveBlendSpace;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UBlendSpace*CrouchJogAdditiveBlendSpace;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UBlendSpace*CrouchJogAdditiveBlendSpaceRelaxed;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*CrouchSprintAnimation;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*IdleNoise_AR_DownSights;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*SwimJumpSurfaceEndAdditve;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*SwimJumpSurfaceLoopAdditve;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*SwimJumpFallLoopAdditve;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*SwimJumpStartLoopAdditve;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*SwimJumpStartAdditve;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*FlyModeLoopAdditive;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*FlyModeStartAdditive;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*ZipLineStartAdditve;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*JetPackJumpAdditve;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*JetPackStartAdditve;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*FallAdditive;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*JumpLoopAdditive;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*JumpUpAdditive;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*IdleNoise;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*TargetingPose;


//pronto
 
/*UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*NonTargetingPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;

UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequence*RelaxedPose;*/ 

};
