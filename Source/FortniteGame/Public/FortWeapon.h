// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortWeapon.generated.h"

UCLASS()
class FORTNITEGAME_API AFortWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFortWeapon();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class USkeletalMesh* WeaponMeshOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* EquipMontage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* ReloadMontage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* FireMontage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowAutomaticWeaponCatchup;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentNumBullets;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MuzzleTraceNearWallThreshold;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScopeImpactEffectDistanceOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecalLifespanMin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecalLifespanMax;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldDisplayAmmoCounter;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldAimFromMuzzleAtCloseRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysAimFromMuzzle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaintainAimLocationDuringTargeting;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseScopeTargeting;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFirstPersonTargeting;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPersistentFireFX;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBeamParticles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bActivateRangeAbilityPerBurstShot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseImpactFXForProjectiles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseImpactFXForProjectileOverlaps;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseImpactDecals;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePersistentBeam;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMuzzleTraceNearWall;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScopePostProcessEnabled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScopePostProcessBlendWeight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FirstShotAccuracyMinWaitTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrouchWalkSpeedThreshold;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverheatValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeHeatWasLastAdded;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeOverheatedBegan;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCacheAimPointOnFire;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableRecoilDelay;
   
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    class USkeletalMeshComponent* WeaponMeshComponent; // Debes declarar la variable correctamente


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
