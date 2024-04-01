// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteGame/Public/FortWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortWeapon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortWeapon();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortniteGame();
// End Cross Module References
	void AFortWeapon::StaticRegisterNativesAFortWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFortWeapon);
	UClass* Z_Construct_UClass_AFortWeapon_NoRegister()
	{
		return AFortWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFortWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMeshOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAutomaticWeaponCatchup_MetaData[];
#endif
		static void NewProp_bAllowAutomaticWeaponCatchup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAutomaticWeaponCatchup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumBullets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNumBullets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleTraceNearWallThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleTraceNearWallThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopeImpactEffectDistanceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScopeImpactEffectDistanceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalLifespanMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalLifespanMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalLifespanMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalLifespanMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDisplayAmmoCounter_MetaData[];
#endif
		static void NewProp_bShouldDisplayAmmoCounter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDisplayAmmoCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAimFromMuzzleAtCloseRange_MetaData[];
#endif
		static void NewProp_bShouldAimFromMuzzleAtCloseRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAimFromMuzzleAtCloseRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysAimFromMuzzle_MetaData[];
#endif
		static void NewProp_bAlwaysAimFromMuzzle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysAimFromMuzzle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainAimLocationDuringTargeting_MetaData[];
#endif
		static void NewProp_bMaintainAimLocationDuringTargeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainAimLocationDuringTargeting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseScopeTargeting_MetaData[];
#endif
		static void NewProp_bUseScopeTargeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScopeTargeting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFirstPersonTargeting_MetaData[];
#endif
		static void NewProp_bUseFirstPersonTargeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFirstPersonTargeting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPersistentFireFX_MetaData[];
#endif
		static void NewProp_bPersistentFireFX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistentFireFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBeamParticles_MetaData[];
#endif
		static void NewProp_bUseBeamParticles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBeamParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateRangeAbilityPerBurstShot_MetaData[];
#endif
		static void NewProp_bActivateRangeAbilityPerBurstShot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateRangeAbilityPerBurstShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseImpactFXForProjectiles_MetaData[];
#endif
		static void NewProp_bUseImpactFXForProjectiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseImpactFXForProjectiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseImpactFXForProjectileOverlaps_MetaData[];
#endif
		static void NewProp_bUseImpactFXForProjectileOverlaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseImpactFXForProjectileOverlaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseImpactDecals_MetaData[];
#endif
		static void NewProp_bUseImpactDecals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseImpactDecals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePersistentBeam_MetaData[];
#endif
		static void NewProp_bUsePersistentBeam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePersistentBeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMuzzleTraceNearWall_MetaData[];
#endif
		static void NewProp_bIsMuzzleTraceNearWall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMuzzleTraceNearWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopePostProcessEnabled_MetaData[];
#endif
		static void NewProp_ScopePostProcessEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScopePostProcessEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopePostProcessBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScopePostProcessBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstShotAccuracyMinWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstShotAccuracyMinWaitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchWalkSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchWalkSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverheatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverheatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeHeatWasLastAdded_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeHeatWasLastAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeOverheatedBegan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOverheatedBegan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCacheAimPointOnFire_MetaData[];
#endif
		static void NewProp_bCacheAimPointOnFire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheAimPointOnFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecoilDelay_MetaData[];
#endif
		static void NewProp_bEnableRecoilDelay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecoilDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FortWeapon.h" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshOverride_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshOverride = { "WeaponMeshOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, WeaponMeshOverride), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshOverride_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_EquipMontage_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_EquipMontage_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_EquipMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_ReloadMontage_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_ReloadMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_FireMontage_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_FireMontage = { "FireMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, FireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_FireMontage_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_FireMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bAllowAutomaticWeaponCatchup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup = { "bAllowAutomaticWeaponCatchup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_CurrentNumBullets_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_CurrentNumBullets = { "CurrentNumBullets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, CurrentNumBullets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_CurrentNumBullets_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_CurrentNumBullets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_MuzzleTraceNearWallThreshold_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_MuzzleTraceNearWallThreshold = { "MuzzleTraceNearWallThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, MuzzleTraceNearWallThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_MuzzleTraceNearWallThreshold_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_MuzzleTraceNearWallThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopeImpactEffectDistanceOffset_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopeImpactEffectDistanceOffset = { "ScopeImpactEffectDistanceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, ScopeImpactEffectDistanceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopeImpactEffectDistanceOffset_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopeImpactEffectDistanceOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMin_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMin = { "DecalLifespanMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, DecalLifespanMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMin_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMax_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMax = { "DecalLifespanMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, DecalLifespanMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMax_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldDisplayAmmoCounter_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldDisplayAmmoCounter_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bShouldDisplayAmmoCounter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldDisplayAmmoCounter = { "bShouldDisplayAmmoCounter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldDisplayAmmoCounter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldDisplayAmmoCounter_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldDisplayAmmoCounter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldAimFromMuzzleAtCloseRange_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldAimFromMuzzleAtCloseRange_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bShouldAimFromMuzzleAtCloseRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldAimFromMuzzleAtCloseRange = { "bShouldAimFromMuzzleAtCloseRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldAimFromMuzzleAtCloseRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldAimFromMuzzleAtCloseRange_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldAimFromMuzzleAtCloseRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAlwaysAimFromMuzzle_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAlwaysAimFromMuzzle_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bAlwaysAimFromMuzzle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAlwaysAimFromMuzzle = { "bAlwaysAimFromMuzzle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAlwaysAimFromMuzzle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAlwaysAimFromMuzzle_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAlwaysAimFromMuzzle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bMaintainAimLocationDuringTargeting_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bMaintainAimLocationDuringTargeting_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bMaintainAimLocationDuringTargeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bMaintainAimLocationDuringTargeting = { "bMaintainAimLocationDuringTargeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bMaintainAimLocationDuringTargeting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bMaintainAimLocationDuringTargeting_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bMaintainAimLocationDuringTargeting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseScopeTargeting_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseScopeTargeting_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bUseScopeTargeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseScopeTargeting = { "bUseScopeTargeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseScopeTargeting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseScopeTargeting_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseScopeTargeting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseFirstPersonTargeting_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseFirstPersonTargeting_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bUseFirstPersonTargeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseFirstPersonTargeting = { "bUseFirstPersonTargeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseFirstPersonTargeting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseFirstPersonTargeting_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseFirstPersonTargeting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bPersistentFireFX_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bPersistentFireFX_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bPersistentFireFX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bPersistentFireFX = { "bPersistentFireFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bPersistentFireFX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bPersistentFireFX_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bPersistentFireFX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseBeamParticles_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseBeamParticles_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bUseBeamParticles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseBeamParticles = { "bUseBeamParticles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseBeamParticles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseBeamParticles_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseBeamParticles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bActivateRangeAbilityPerBurstShot_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bActivateRangeAbilityPerBurstShot_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bActivateRangeAbilityPerBurstShot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bActivateRangeAbilityPerBurstShot = { "bActivateRangeAbilityPerBurstShot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bActivateRangeAbilityPerBurstShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bActivateRangeAbilityPerBurstShot_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bActivateRangeAbilityPerBurstShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectiles_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectiles_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bUseImpactFXForProjectiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectiles = { "bUseImpactFXForProjectiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectiles_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectileOverlaps_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectileOverlaps_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bUseImpactFXForProjectileOverlaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectileOverlaps = { "bUseImpactFXForProjectileOverlaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectileOverlaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectileOverlaps_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectileOverlaps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactDecals_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactDecals_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bUseImpactDecals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactDecals = { "bUseImpactDecals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactDecals_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactDecals_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUsePersistentBeam_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUsePersistentBeam_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bUsePersistentBeam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUsePersistentBeam = { "bUsePersistentBeam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUsePersistentBeam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUsePersistentBeam_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUsePersistentBeam_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bIsMuzzleTraceNearWall_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bIsMuzzleTraceNearWall_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bIsMuzzleTraceNearWall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bIsMuzzleTraceNearWall = { "bIsMuzzleTraceNearWall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bIsMuzzleTraceNearWall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bIsMuzzleTraceNearWall_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bIsMuzzleTraceNearWall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessEnabled_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessEnabled_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->ScopePostProcessEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessEnabled = { "ScopePostProcessEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessEnabled_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessBlendWeight_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessBlendWeight = { "ScopePostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, ScopePostProcessBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessBlendWeight_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessBlendWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_FirstShotAccuracyMinWaitTime_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_FirstShotAccuracyMinWaitTime = { "FirstShotAccuracyMinWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, FirstShotAccuracyMinWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_FirstShotAccuracyMinWaitTime_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_FirstShotAccuracyMinWaitTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_CrouchWalkSpeedThreshold_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_CrouchWalkSpeedThreshold = { "CrouchWalkSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, CrouchWalkSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_CrouchWalkSpeedThreshold_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_CrouchWalkSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_OverheatValue_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_OverheatValue = { "OverheatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, OverheatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_OverheatValue_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_OverheatValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeHeatWasLastAdded_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeHeatWasLastAdded = { "TimeHeatWasLastAdded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, TimeHeatWasLastAdded), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeHeatWasLastAdded_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeHeatWasLastAdded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeOverheatedBegan_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeOverheatedBegan = { "TimeOverheatedBegan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, TimeOverheatedBegan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeOverheatedBegan_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeOverheatedBegan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bCacheAimPointOnFire_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bCacheAimPointOnFire_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bCacheAimPointOnFire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bCacheAimPointOnFire = { "bCacheAimPointOnFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bCacheAimPointOnFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bCacheAimPointOnFire_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bCacheAimPointOnFire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_bEnableRecoilDelay_MetaData[] = {
		{ "Category", "FortWeapon" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFortWeapon_Statics::NewProp_bEnableRecoilDelay_SetBit(void* Obj)
	{
		((AFortWeapon*)Obj)->bEnableRecoilDelay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_bEnableRecoilDelay = { "bEnableRecoilDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortWeapon), &Z_Construct_UClass_AFortWeapon_Statics::NewProp_bEnableRecoilDelay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_bEnableRecoilDelay_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_bEnableRecoilDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FortWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshComponent = { "WeaponMeshComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWeapon, WeaponMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshComponent_MetaData), Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFortWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_EquipMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_ReloadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_FireMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAllowAutomaticWeaponCatchup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_CurrentNumBullets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_MuzzleTraceNearWallThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopeImpactEffectDistanceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_DecalLifespanMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldDisplayAmmoCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bShouldAimFromMuzzleAtCloseRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bAlwaysAimFromMuzzle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bMaintainAimLocationDuringTargeting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseScopeTargeting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseFirstPersonTargeting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bPersistentFireFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseBeamParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bActivateRangeAbilityPerBurstShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactFXForProjectileOverlaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUseImpactDecals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bUsePersistentBeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bIsMuzzleTraceNearWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_ScopePostProcessBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_FirstShotAccuracyMinWaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_CrouchWalkSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_OverheatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeHeatWasLastAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_TimeOverheatedBegan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bCacheAimPointOnFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_bEnableRecoilDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWeapon_Statics::NewProp_WeaponMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFortWeapon_Statics::ClassParams = {
		&AFortWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFortWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AFortWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFortWeapon()
	{
		if (!Z_Registration_Info_UClass_AFortWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFortWeapon.OuterSingleton, Z_Construct_UClass_AFortWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFortWeapon.OuterSingleton;
	}
	template<> FORTNITEGAME_API UClass* StaticClass<AFortWeapon>()
	{
		return AFortWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortWeapon);
	AFortWeapon::~AFortWeapon() {}
	struct Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFortWeapon, AFortWeapon::StaticClass, TEXT("AFortWeapon"), &Z_Registration_Info_UClass_AFortWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFortWeapon), 2739173000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWeapon_h_3493888595(TEXT("/Script/FortniteGame"),
		Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
