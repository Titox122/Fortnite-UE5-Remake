// By Project164#6604

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortWeaponAnimSet.h"
#include "FortWeapon.h"
#include "FortWeaponRangedItemDefinition.generated.h"

/**
 *
 */
UCLASS()
class FORTNITEGAME_API UFortWeaponRangedItemDefinition : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AFortWeapon> WeaponActorClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class USkeletalMesh* WeaponMeshOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UTexture2D* ReticleCenterImage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UTexture2D* ReticleCenterPerfectAimImage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowDirectionalArrowWhenFarOff;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bItemCanBeStolen;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bItemHasDurability;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysCountForCollectionQuest;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MiniMapViewableDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class ABrush* MiniMapIconBrush;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UTexture2D* ResourceObject;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class USkeletalMesh* PickupSkeletalMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class USoundCue* PickupSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class USoundCue* DropSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinLevel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNeverPersisted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText SearchTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrontendPreviewScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UTexture2D* SmallPreviewImage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UTexture2D* LargePreviewImage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrontendPreviewPivotOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrontendPreviewInitialRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFortWeaponAnimSet* FortWeaponAnimationSet;

};
