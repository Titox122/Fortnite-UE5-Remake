// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteGame/Public/FortPlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortPlayerPawn() {}
// Cross Module References
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortPawn();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortPlayerPawn();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortPlayerPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortniteGame();
// End Cross Module References
	void AFortPlayerPawn::StaticRegisterNativesAFortPlayerPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFortPlayerPawn);
	UClass* Z_Construct_UClass_AFortPlayerPawn_NoRegister()
	{
		return AFortPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFortPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerShield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupEmoteAnimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroupEmoteAnimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupEmoteLeaderRotationYawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroupEmoteLeaderRotationYawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumTimeBetweenSteps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumTimeBetweenSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastStepTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastStepTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupEmoteMaximumZDifference_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroupEmoteMaximumZDifference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpLastActivatedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpLastActivatedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnburrowLaunchXYSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnburrowLaunchXYSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnburrowLaunchZSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnburrowLaunchZSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DBNODeferTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DBNODeferTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggroRangeOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AggroRangeOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerReviveSignalInStorm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SetByCallerReviveSignalInStorm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintCancelTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintCancelTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterSprintBoostAllowedTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterSprintBoostAllowedTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZiplineSocketZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZiplineSocketZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientSwimDiveInputTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientSwimDiveInputTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSoundStimulusBroadcastInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSoundStimulusBroadcastInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmoteStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmoteStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmoteRandomNum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmoteRandomNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleSpeedAtTimeOfJump_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VehicleSpeedAtTimeOfJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingTetherLaunch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PendingTetherLaunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherJumpLastTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherJumpLastTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PickupSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIndicatorVisibilityDistForEnemies_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxIndicatorVisibilityDistForEnemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIndicatorVisibilityDistForAllies_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxIndicatorVisibilityDistForAllies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowCarriedPlayerStrengthXY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowCarriedPlayerStrengthXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowCarriedPlayerStrengthZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowCarriedPlayerStrengthZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropCarriedPlayerForwardOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DropCarriedPlayerForwardOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropCarriedPlayerHeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DropCarriedPlayerHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropCarriedPlayerTraceHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DropCarriedPlayerTraceHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParachuteCooldownToOpen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParachuteCooldownToOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParachuteCooldownToClose_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParachuteCooldownToClose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBeforeSwimmingLayerDeactivated_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBeforeSwimmingLayerDeactivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParachuteAndSkydiveAudioFadeInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParachuteAndSkydiveAudioFadeInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParachuteAndSkydiveAudioFadeOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParachuteAndSkydiveAudioFadeOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingAudioFadeOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwimmingAudioFadeOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingAudioInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwimmingAudioInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastQuickBarSwitchRequestTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastQuickBarSwitchRequestTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchLerpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchLerpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAbilityCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeAbilityCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostModeExitStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostModeExitStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostModeExitDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostModeExitDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsNearSafeZoneEdge_MetaData[];
#endif
		static void NewProp_bIsNearSafeZoneEdge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNearSafeZoneEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayingSafeZoneEffects_MetaData[];
#endif
		static void NewProp_bPlayingSafeZoneEffects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayingSafeZoneEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoSafeZoneCleanup_MetaData[];
#endif
		static void NewProp_bDoSafeZoneCleanup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoSafeZoneCleanup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSwimmingAnimLayerLinked_MetaData[];
#endif
		static void NewProp_bIsSwimmingAnimLayerLinked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSwimmingAnimLayerLinked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprintJump_MetaData[];
#endif
		static void NewProp_bIsSprintJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprintJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDisableSprintTag_MetaData[];
#endif
		static void NewProp_bHasDisableSprintTag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDisableSprintTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSwimSprintCancel_MetaData[];
#endif
		static void NewProp_bDisableSwimSprintCancel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSwimSprintCancel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWaterJump_MetaData[];
#endif
		static void NewProp_bIsWaterJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWaterJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWaterSprintBoost_MetaData[];
#endif
		static void NewProp_bIsWaterSprintBoost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWaterSprintBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWaterSprintBoostPending_MetaData[];
#endif
		static void NewProp_bIsWaterSprintBoostPending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWaterSprintBoostPending;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayingPassengerToPassengerAnimation_MetaData[];
#endif
		static void NewProp_bPlayingPassengerToPassengerAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayingPassengerToPassengerAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayingDriverToPassengerAnimation_MetaData[];
#endif
		static void NewProp_bPlayingDriverToPassengerAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayingDriverToPassengerAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTargeting_MetaData[];
#endif
		static void NewProp_bIsTargeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTargeting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTargetingConsumableThrow_MetaData[];
#endif
		static void NewProp_bIsTargetingConsumableThrow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTargetingConsumableThrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSwappingCharacterParts_MetaData[];
#endif
		static void NewProp_bIsSwappingCharacterParts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSwappingCharacterParts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBalloonMovementActivated_MetaData[];
#endif
		static void NewProp_bBalloonMovementActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBalloonMovementActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsScriptedBot_MetaData[];
#endif
		static void NewProp_bIsScriptedBot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScriptedBot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildHotfix_MetaData[];
#endif
		static void NewProp_bBuildHotfix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildHotfix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInWaterVolume_MetaData[];
#endif
		static void NewProp_bIsInWaterVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInWaterVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSkydiving_MetaData[];
#endif
		static void NewProp_bIsSkydiving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSkydiving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsParachuteOpen_MetaData[];
#endif
		static void NewProp_bIsParachuteOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParachuteOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalIsSkydiving_MetaData[];
#endif
		static void NewProp_bLocalIsSkydiving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalIsSkydiving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalIsParachuteForcedOpen_MetaData[];
#endif
		static void NewProp_bLocalIsParachuteForcedOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalIsParachuteForcedOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsParachuteForcedOpen_MetaData[];
#endif
		static void NewProp_bIsParachuteForcedOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParachuteForcedOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSkydivingFromBus_MetaData[];
#endif
		static void NewProp_bIsSkydivingFromBus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSkydivingFromBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSkydivingFromLaunchPad_MetaData[];
#endif
		static void NewProp_bIsSkydivingFromLaunchPad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSkydivingFromLaunchPad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingSkydiveLaunch_MetaData[];
#endif
		static void NewProp_bPendingSkydiveLaunch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingSkydiveLaunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInVortex_MetaData[];
#endif
		static void NewProp_bIsInVortex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInVortex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicatedIsInVortex_MetaData[];
#endif
		static void NewProp_bReplicatedIsInVortex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicatedIsInVortex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInSlipperyMovement_MetaData[];
#endif
		static void NewProp_bIsInSlipperyMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInSlipperyMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicatedIsInSlipperyMovement_MetaData[];
#endif
		static void NewProp_bReplicatedIsInSlipperyMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicatedIsInSlipperyMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBelowAutoDeployTestHeight_MetaData[];
#endif
		static void NewProp_bIsBelowAutoDeployTestHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBelowAutoDeployTestHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlopeSliding_MetaData[];
#endif
		static void NewProp_bIsSlopeSliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlopeSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsProxySimulationTimedOut_MetaData[];
#endif
		static void NewProp_bIsProxySimulationTimedOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsProxySimulationTimedOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPedestalHero_MetaData[];
#endif
		static void NewProp_bIsPedestalHero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPedestalHero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInGliderRedeploy_MetaData[];
#endif
		static void NewProp_bInGliderRedeploy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInGliderRedeploy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalInGliderRedeploy_MetaData[];
#endif
		static void NewProp_bLocalInGliderRedeploy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalInGliderRedeploy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBeingRepossessed_MetaData[];
#endif
		static void NewProp_bBeingRepossessed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeingRepossessed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitAbilitySystemComponentFromPlayerState_MetaData[];
#endif
		static void NewProp_bInitAbilitySystemComponentFromPlayerState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitAbilitySystemComponentFromPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartedInteractSearch_MetaData[];
#endif
		static void NewProp_bStartedInteractSearch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartedInteractSearch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPawnLODDirty_MetaData[];
#endif
		static void NewProp_bPawnLODDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPawnLODDirty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingJetpack_MetaData[];
#endif
		static void NewProp_bIsUsingJetpack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingJetpack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingEmote_MetaData[];
#endif
		static void NewProp_bIsPlayingEmote_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingEmote;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowingOverdriveEffect_MetaData[];
#endif
		static void NewProp_bShowingOverdriveEffect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowingOverdriveEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRespawning_MetaData[];
#endif
		static void NewProp_bIsRespawning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRespawning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRespawningInAir_MetaData[];
#endif
		static void NewProp_bIsRespawningInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRespawningInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializedPostRepPlayerState_MetaData[];
#endif
		static void NewProp_bInitializedPostRepPlayerState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializedPostRepPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCharacterPartRigidBodyNode_MetaData[];
#endif
		static void NewProp_bEnableCharacterPartRigidBodyNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCharacterPartRigidBodyNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializedCharacterPartRBANSettings_MetaData[];
#endif
		static void NewProp_bInitializedCharacterPartRBANSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializedCharacterPartRBANSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasWaterParticleSystem_MetaData[];
#endif
		static void NewProp_bHasWaterParticleSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasWaterParticleSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanShowDefaultSkin_MetaData[];
#endif
		static void NewProp_bCanShowDefaultSkin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShowDefaultSkin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisabledTetheringSupport_MetaData[];
#endif
		static void NewProp_bDisabledTetheringSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabledTetheringSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInFrontEndHologram_MetaData[];
#endif
		static void NewProp_bIsInFrontEndHologram_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInFrontEndHologram;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceMoveRelativeToCameraRotation_MetaData[];
#endif
		static void NewProp_bForceMoveRelativeToCameraRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMoveRelativeToCameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWaitingForEmoteInteraction_MetaData[];
#endif
		static void NewProp_bIsWaitingForEmoteInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWaitingForEmoteInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEmoteLeader_MetaData[];
#endif
		static void NewProp_bIsEmoteLeader_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEmoteLeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSyncAnimationWithEmoteLeader_MetaData[];
#endif
		static void NewProp_bShouldSyncAnimationWithEmoteLeader_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSyncAnimationWithEmoteLeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldJitterAnimationSyncWithEmoteLeader_MetaData[];
#endif
		static void NewProp_bShouldJitterAnimationSyncWithEmoteLeader_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldJitterAnimationSyncWithEmoteLeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleFileEmoteSecondLine_MetaData[];
#endif
		static void NewProp_bDoubleFileEmoteSecondLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleFileEmoteSecondLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmoteUsesSecondaryFire_MetaData[];
#endif
		static void NewProp_bEmoteUsesSecondaryFire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmoteUsesSecondaryFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockGroupEmoteLeaderRotation_MetaData[];
#endif
		static void NewProp_bLockGroupEmoteLeaderRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockGroupEmoteLeaderRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaterFootSplashActive_MetaData[];
#endif
		static void NewProp_bWaterFootSplashActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaterFootSplashActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWaterInteractionEffects_MetaData[];
#endif
		static void NewProp_bEnableWaterInteractionEffects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWaterInteractionEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisallowInterrogation_MetaData[];
#endif
		static void NewProp_bDisallowInterrogation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisallowInterrogation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFortPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FortPlayerPawn.h" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//floats XDDDD\n" },
#endif
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "floats XDDDD" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, PlayerHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerHealth_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerShield_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerShield = { "PlayerShield", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, PlayerShield), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerShield_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerShield_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteAnimOffset_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteAnimOffset = { "GroupEmoteAnimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, GroupEmoteAnimOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteAnimOffset_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteAnimOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteLeaderRotationYawOffset_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteLeaderRotationYawOffset = { "GroupEmoteLeaderRotationYawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, GroupEmoteLeaderRotationYawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteLeaderRotationYawOffset_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteLeaderRotationYawOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MinimumTimeBetweenSteps_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MinimumTimeBetweenSteps = { "MinimumTimeBetweenSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, MinimumTimeBetweenSteps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MinimumTimeBetweenSteps_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MinimumTimeBetweenSteps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastStepTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastStepTime = { "LastStepTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, LastStepTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastStepTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastStepTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteMaximumZDifference_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteMaximumZDifference = { "GroupEmoteMaximumZDifference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, GroupEmoteMaximumZDifference), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteMaximumZDifference_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteMaximumZDifference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_JumpLastActivatedTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_JumpLastActivatedTime = { "JumpLastActivatedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, JumpLastActivatedTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_JumpLastActivatedTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_JumpLastActivatedTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchXYSpeed_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchXYSpeed = { "UnburrowLaunchXYSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, UnburrowLaunchXYSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchXYSpeed_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchXYSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchZSpeed_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchZSpeed = { "UnburrowLaunchZSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, UnburrowLaunchZSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchZSpeed_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchZSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DBNODeferTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DBNODeferTime = { "DBNODeferTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, DBNODeferTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DBNODeferTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DBNODeferTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_AggroRangeOverride_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_AggroRangeOverride = { "AggroRangeOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, AggroRangeOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_AggroRangeOverride_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_AggroRangeOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SetByCallerReviveSignalInStorm_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SetByCallerReviveSignalInStorm = { "SetByCallerReviveSignalInStorm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, SetByCallerReviveSignalInStorm), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SetByCallerReviveSignalInStorm_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SetByCallerReviveSignalInStorm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SprintCancelTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SprintCancelTime = { "SprintCancelTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, SprintCancelTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SprintCancelTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SprintCancelTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_WaterSprintBoostAllowedTimer_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_WaterSprintBoostAllowedTimer = { "WaterSprintBoostAllowedTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, WaterSprintBoostAllowedTimer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_WaterSprintBoostAllowedTimer_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_WaterSprintBoostAllowedTimer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ZiplineSocketZOffset_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ZiplineSocketZOffset = { "ZiplineSocketZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, ZiplineSocketZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ZiplineSocketZOffset_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ZiplineSocketZOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ClientSwimDiveInputTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ClientSwimDiveInputTime = { "ClientSwimDiveInputTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, ClientSwimDiveInputTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ClientSwimDiveInputTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ClientSwimDiveInputTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MoveSoundStimulusBroadcastInterval_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MoveSoundStimulusBroadcastInterval = { "MoveSoundStimulusBroadcastInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, MoveSoundStimulusBroadcastInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MoveSoundStimulusBroadcastInterval_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MoveSoundStimulusBroadcastInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteStartTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteStartTime = { "EmoteStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, EmoteStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteStartTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteRandomNum_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteRandomNum = { "EmoteRandomNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, EmoteRandomNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteRandomNum_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteRandomNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_VehicleSpeedAtTimeOfJump_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_VehicleSpeedAtTimeOfJump = { "VehicleSpeedAtTimeOfJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, VehicleSpeedAtTimeOfJump), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_VehicleSpeedAtTimeOfJump_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_VehicleSpeedAtTimeOfJump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PendingTetherLaunch_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PendingTetherLaunch = { "PendingTetherLaunch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, PendingTetherLaunch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PendingTetherLaunch_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PendingTetherLaunch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TetherJumpLastTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TetherJumpLastTime = { "TetherJumpLastTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, TetherJumpLastTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TetherJumpLastTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TetherJumpLastTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PickupSpeedMultiplier_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PickupSpeedMultiplier = { "PickupSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, PickupSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PickupSpeedMultiplier_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PickupSpeedMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForEnemies_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForEnemies = { "MaxIndicatorVisibilityDistForEnemies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, MaxIndicatorVisibilityDistForEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForEnemies_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForEnemies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForAllies_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForAllies = { "MaxIndicatorVisibilityDistForAllies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, MaxIndicatorVisibilityDistForAllies), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForAllies_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForAllies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthXY_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthXY = { "ThrowCarriedPlayerStrengthXY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, ThrowCarriedPlayerStrengthXY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthXY_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthXY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthZ_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthZ = { "ThrowCarriedPlayerStrengthZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, ThrowCarriedPlayerStrengthZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthZ_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerForwardOffset_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerForwardOffset = { "DropCarriedPlayerForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, DropCarriedPlayerForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerForwardOffset_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerForwardOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerHeightOffset_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerHeightOffset = { "DropCarriedPlayerHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, DropCarriedPlayerHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerHeightOffset_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerHeightOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerTraceHeight_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerTraceHeight = { "DropCarriedPlayerTraceHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, DropCarriedPlayerTraceHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerTraceHeight_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerTraceHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToOpen_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToOpen = { "ParachuteCooldownToOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, ParachuteCooldownToOpen), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToOpen_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToOpen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToClose_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToClose = { "ParachuteCooldownToClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, ParachuteCooldownToClose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToClose_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToClose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TimeBeforeSwimmingLayerDeactivated_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TimeBeforeSwimmingLayerDeactivated = { "TimeBeforeSwimmingLayerDeactivated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, TimeBeforeSwimmingLayerDeactivated), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TimeBeforeSwimmingLayerDeactivated_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TimeBeforeSwimmingLayerDeactivated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeInTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeInTime = { "ParachuteAndSkydiveAudioFadeInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, ParachuteAndSkydiveAudioFadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeInTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeOutTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeOutTime = { "ParachuteAndSkydiveAudioFadeOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, ParachuteAndSkydiveAudioFadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeOutTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioFadeOutTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioFadeOutTime = { "SwimmingAudioFadeOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, SwimmingAudioFadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioFadeOutTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioFadeOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioInterpSpeed_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioInterpSpeed = { "SwimmingAudioInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, SwimmingAudioInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioInterpSpeed_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastQuickBarSwitchRequestTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastQuickBarSwitchRequestTime = { "LastQuickBarSwitchRequestTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, LastQuickBarSwitchRequestTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastQuickBarSwitchRequestTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastQuickBarSwitchRequestTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchStartTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchStartTime = { "CrouchStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, CrouchStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchStartTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchEndTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchEndTime = { "CrouchEndTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, CrouchEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchEndTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchEndTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchLerpTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchLerpTime = { "CrouchLerpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, CrouchLerpTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchLerpTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchLerpTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MeleeAbilityCooldown_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MeleeAbilityCooldown = { "MeleeAbilityCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, MeleeAbilityCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MeleeAbilityCooldown_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MeleeAbilityCooldown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitStartTime_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitStartTime = { "GhostModeExitStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, GhostModeExitStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitStartTime_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitDuration_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitDuration = { "GhostModeExitDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortPlayerPawn, GhostModeExitDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitDuration_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsNearSafeZoneEdge_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//bools Xd\n" },
#endif
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bools Xd" },
#endif
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsNearSafeZoneEdge_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsNearSafeZoneEdge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsNearSafeZoneEdge = { "bIsNearSafeZoneEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsNearSafeZoneEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsNearSafeZoneEdge_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsNearSafeZoneEdge_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingSafeZoneEffects_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingSafeZoneEffects_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bPlayingSafeZoneEffects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingSafeZoneEffects = { "bPlayingSafeZoneEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingSafeZoneEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingSafeZoneEffects_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingSafeZoneEffects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoSafeZoneCleanup_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoSafeZoneCleanup_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bDoSafeZoneCleanup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoSafeZoneCleanup = { "bDoSafeZoneCleanup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoSafeZoneCleanup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoSafeZoneCleanup_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoSafeZoneCleanup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwimmingAnimLayerLinked_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwimmingAnimLayerLinked_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsSwimmingAnimLayerLinked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwimmingAnimLayerLinked = { "bIsSwimmingAnimLayerLinked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwimmingAnimLayerLinked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwimmingAnimLayerLinked_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwimmingAnimLayerLinked_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSprintJump_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSprintJump_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsSprintJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSprintJump = { "bIsSprintJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSprintJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSprintJump_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSprintJump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasDisableSprintTag_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasDisableSprintTag_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bHasDisableSprintTag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasDisableSprintTag = { "bHasDisableSprintTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasDisableSprintTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasDisableSprintTag_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasDisableSprintTag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisableSwimSprintCancel_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisableSwimSprintCancel_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bDisableSwimSprintCancel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisableSwimSprintCancel = { "bDisableSwimSprintCancel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisableSwimSprintCancel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisableSwimSprintCancel_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisableSwimSprintCancel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterJump_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterJump_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsWaterJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterJump = { "bIsWaterJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterJump_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterJump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoost_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoost_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsWaterSprintBoost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoost = { "bIsWaterSprintBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoost_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoostPending_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoostPending_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsWaterSprintBoostPending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoostPending = { "bIsWaterSprintBoostPending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoostPending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoostPending_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoostPending_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingPassengerToPassengerAnimation_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingPassengerToPassengerAnimation_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bPlayingPassengerToPassengerAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingPassengerToPassengerAnimation = { "bPlayingPassengerToPassengerAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingPassengerToPassengerAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingPassengerToPassengerAnimation_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingPassengerToPassengerAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingDriverToPassengerAnimation_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingDriverToPassengerAnimation_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bPlayingDriverToPassengerAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingDriverToPassengerAnimation = { "bPlayingDriverToPassengerAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingDriverToPassengerAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingDriverToPassengerAnimation_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingDriverToPassengerAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargeting_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargeting_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsTargeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargeting = { "bIsTargeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargeting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargeting_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargeting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargetingConsumableThrow_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargetingConsumableThrow_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsTargetingConsumableThrow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargetingConsumableThrow = { "bIsTargetingConsumableThrow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargetingConsumableThrow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargetingConsumableThrow_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargetingConsumableThrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwappingCharacterParts_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwappingCharacterParts_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsSwappingCharacterParts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwappingCharacterParts = { "bIsSwappingCharacterParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwappingCharacterParts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwappingCharacterParts_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwappingCharacterParts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBalloonMovementActivated_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBalloonMovementActivated_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bBalloonMovementActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBalloonMovementActivated = { "bBalloonMovementActivated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBalloonMovementActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBalloonMovementActivated_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBalloonMovementActivated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsScriptedBot_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsScriptedBot_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsScriptedBot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsScriptedBot = { "bIsScriptedBot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsScriptedBot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsScriptedBot_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsScriptedBot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBuildHotfix_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBuildHotfix_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bBuildHotfix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBuildHotfix = { "bBuildHotfix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBuildHotfix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBuildHotfix_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBuildHotfix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInWaterVolume_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInWaterVolume_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsInWaterVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInWaterVolume = { "bIsInWaterVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInWaterVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInWaterVolume_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInWaterVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydiving_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydiving_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsSkydiving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydiving = { "bIsSkydiving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydiving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydiving_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydiving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteOpen_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteOpen_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsParachuteOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteOpen = { "bIsParachuteOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteOpen_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteOpen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsSkydiving_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsSkydiving_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bLocalIsSkydiving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsSkydiving = { "bLocalIsSkydiving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsSkydiving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsSkydiving_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsSkydiving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsParachuteForcedOpen_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsParachuteForcedOpen_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bLocalIsParachuteForcedOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsParachuteForcedOpen = { "bLocalIsParachuteForcedOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsParachuteForcedOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsParachuteForcedOpen_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsParachuteForcedOpen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteForcedOpen_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteForcedOpen_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsParachuteForcedOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteForcedOpen = { "bIsParachuteForcedOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteForcedOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteForcedOpen_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteForcedOpen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromBus_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromBus_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsSkydivingFromBus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromBus = { "bIsSkydivingFromBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromBus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromBus_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromBus_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromLaunchPad_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromLaunchPad_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsSkydivingFromLaunchPad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromLaunchPad = { "bIsSkydivingFromLaunchPad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromLaunchPad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromLaunchPad_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromLaunchPad_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPendingSkydiveLaunch_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPendingSkydiveLaunch_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bPendingSkydiveLaunch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPendingSkydiveLaunch = { "bPendingSkydiveLaunch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPendingSkydiveLaunch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPendingSkydiveLaunch_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPendingSkydiveLaunch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInVortex_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInVortex_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsInVortex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInVortex = { "bIsInVortex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInVortex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInVortex_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInVortex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInVortex_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInVortex_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bReplicatedIsInVortex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInVortex = { "bReplicatedIsInVortex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInVortex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInVortex_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInVortex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInSlipperyMovement_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInSlipperyMovement_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsInSlipperyMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInSlipperyMovement = { "bIsInSlipperyMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInSlipperyMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInSlipperyMovement_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInSlipperyMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInSlipperyMovement_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInSlipperyMovement_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bReplicatedIsInSlipperyMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInSlipperyMovement = { "bReplicatedIsInSlipperyMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInSlipperyMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInSlipperyMovement_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInSlipperyMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsBelowAutoDeployTestHeight_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsBelowAutoDeployTestHeight_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsBelowAutoDeployTestHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsBelowAutoDeployTestHeight = { "bIsBelowAutoDeployTestHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsBelowAutoDeployTestHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsBelowAutoDeployTestHeight_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsBelowAutoDeployTestHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSlopeSliding_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSlopeSliding_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsSlopeSliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSlopeSliding = { "bIsSlopeSliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSlopeSliding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSlopeSliding_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSlopeSliding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsProxySimulationTimedOut_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsProxySimulationTimedOut_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsProxySimulationTimedOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsProxySimulationTimedOut = { "bIsProxySimulationTimedOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsProxySimulationTimedOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsProxySimulationTimedOut_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsProxySimulationTimedOut_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPedestalHero_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPedestalHero_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsPedestalHero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPedestalHero = { "bIsPedestalHero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPedestalHero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPedestalHero_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPedestalHero_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInGliderRedeploy_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInGliderRedeploy_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bInGliderRedeploy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInGliderRedeploy = { "bInGliderRedeploy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInGliderRedeploy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInGliderRedeploy_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInGliderRedeploy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalInGliderRedeploy_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalInGliderRedeploy_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bLocalInGliderRedeploy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalInGliderRedeploy = { "bLocalInGliderRedeploy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalInGliderRedeploy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalInGliderRedeploy_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalInGliderRedeploy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBeingRepossessed_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBeingRepossessed_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bBeingRepossessed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBeingRepossessed = { "bBeingRepossessed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBeingRepossessed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBeingRepossessed_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBeingRepossessed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitAbilitySystemComponentFromPlayerState_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitAbilitySystemComponentFromPlayerState_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bInitAbilitySystemComponentFromPlayerState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitAbilitySystemComponentFromPlayerState = { "bInitAbilitySystemComponentFromPlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitAbilitySystemComponentFromPlayerState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitAbilitySystemComponentFromPlayerState_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitAbilitySystemComponentFromPlayerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bStartedInteractSearch_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bStartedInteractSearch_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bStartedInteractSearch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bStartedInteractSearch = { "bStartedInteractSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bStartedInteractSearch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bStartedInteractSearch_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bStartedInteractSearch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPawnLODDirty_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPawnLODDirty_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bPawnLODDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPawnLODDirty = { "bPawnLODDirty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPawnLODDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPawnLODDirty_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPawnLODDirty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsUsingJetpack_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsUsingJetpack_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsUsingJetpack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsUsingJetpack = { "bIsUsingJetpack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsUsingJetpack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsUsingJetpack_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsUsingJetpack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPlayingEmote_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPlayingEmote_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsPlayingEmote = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPlayingEmote = { "bIsPlayingEmote", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPlayingEmote_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPlayingEmote_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPlayingEmote_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShowingOverdriveEffect_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShowingOverdriveEffect_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bShowingOverdriveEffect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShowingOverdriveEffect = { "bShowingOverdriveEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShowingOverdriveEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShowingOverdriveEffect_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShowingOverdriveEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawning_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawning_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsRespawning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawning = { "bIsRespawning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawning_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawningInAir_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawningInAir_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsRespawningInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawningInAir = { "bIsRespawningInAir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawningInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawningInAir_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawningInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedPostRepPlayerState_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedPostRepPlayerState_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bInitializedPostRepPlayerState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedPostRepPlayerState = { "bInitializedPostRepPlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedPostRepPlayerState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedPostRepPlayerState_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedPostRepPlayerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableCharacterPartRigidBodyNode_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableCharacterPartRigidBodyNode_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bEnableCharacterPartRigidBodyNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableCharacterPartRigidBodyNode = { "bEnableCharacterPartRigidBodyNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableCharacterPartRigidBodyNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableCharacterPartRigidBodyNode_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableCharacterPartRigidBodyNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedCharacterPartRBANSettings_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedCharacterPartRBANSettings_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bInitializedCharacterPartRBANSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedCharacterPartRBANSettings = { "bInitializedCharacterPartRBANSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedCharacterPartRBANSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedCharacterPartRBANSettings_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedCharacterPartRBANSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasWaterParticleSystem_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasWaterParticleSystem_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bHasWaterParticleSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasWaterParticleSystem = { "bHasWaterParticleSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasWaterParticleSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasWaterParticleSystem_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasWaterParticleSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bCanShowDefaultSkin_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bCanShowDefaultSkin_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bCanShowDefaultSkin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bCanShowDefaultSkin = { "bCanShowDefaultSkin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bCanShowDefaultSkin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bCanShowDefaultSkin_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bCanShowDefaultSkin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisabledTetheringSupport_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisabledTetheringSupport_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bDisabledTetheringSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisabledTetheringSupport = { "bDisabledTetheringSupport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisabledTetheringSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisabledTetheringSupport_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisabledTetheringSupport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInFrontEndHologram_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInFrontEndHologram_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsInFrontEndHologram = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInFrontEndHologram = { "bIsInFrontEndHologram", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInFrontEndHologram_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInFrontEndHologram_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInFrontEndHologram_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bForceMoveRelativeToCameraRotation_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bForceMoveRelativeToCameraRotation_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bForceMoveRelativeToCameraRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bForceMoveRelativeToCameraRotation = { "bForceMoveRelativeToCameraRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bForceMoveRelativeToCameraRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bForceMoveRelativeToCameraRotation_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bForceMoveRelativeToCameraRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaitingForEmoteInteraction_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaitingForEmoteInteraction_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsWaitingForEmoteInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaitingForEmoteInteraction = { "bIsWaitingForEmoteInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaitingForEmoteInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaitingForEmoteInteraction_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaitingForEmoteInteraction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsEmoteLeader_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsEmoteLeader_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bIsEmoteLeader = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsEmoteLeader = { "bIsEmoteLeader", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsEmoteLeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsEmoteLeader_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsEmoteLeader_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldSyncAnimationWithEmoteLeader_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldSyncAnimationWithEmoteLeader_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bShouldSyncAnimationWithEmoteLeader = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldSyncAnimationWithEmoteLeader = { "bShouldSyncAnimationWithEmoteLeader", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldSyncAnimationWithEmoteLeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldSyncAnimationWithEmoteLeader_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldSyncAnimationWithEmoteLeader_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldJitterAnimationSyncWithEmoteLeader_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldJitterAnimationSyncWithEmoteLeader_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bShouldJitterAnimationSyncWithEmoteLeader = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldJitterAnimationSyncWithEmoteLeader = { "bShouldJitterAnimationSyncWithEmoteLeader", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldJitterAnimationSyncWithEmoteLeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldJitterAnimationSyncWithEmoteLeader_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldJitterAnimationSyncWithEmoteLeader_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoubleFileEmoteSecondLine_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoubleFileEmoteSecondLine_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bDoubleFileEmoteSecondLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoubleFileEmoteSecondLine = { "bDoubleFileEmoteSecondLine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoubleFileEmoteSecondLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoubleFileEmoteSecondLine_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoubleFileEmoteSecondLine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEmoteUsesSecondaryFire_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEmoteUsesSecondaryFire_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bEmoteUsesSecondaryFire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEmoteUsesSecondaryFire = { "bEmoteUsesSecondaryFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEmoteUsesSecondaryFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEmoteUsesSecondaryFire_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEmoteUsesSecondaryFire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLockGroupEmoteLeaderRotation_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLockGroupEmoteLeaderRotation_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bLockGroupEmoteLeaderRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLockGroupEmoteLeaderRotation = { "bLockGroupEmoteLeaderRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLockGroupEmoteLeaderRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLockGroupEmoteLeaderRotation_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLockGroupEmoteLeaderRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bWaterFootSplashActive_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bWaterFootSplashActive_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bWaterFootSplashActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bWaterFootSplashActive = { "bWaterFootSplashActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bWaterFootSplashActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bWaterFootSplashActive_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bWaterFootSplashActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableWaterInteractionEffects_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableWaterInteractionEffects_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bEnableWaterInteractionEffects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableWaterInteractionEffects = { "bEnableWaterInteractionEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableWaterInteractionEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableWaterInteractionEffects_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableWaterInteractionEffects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisallowInterrogation_MetaData[] = {
		{ "Category", "FortPlayerPawn" },
		{ "ModuleRelativePath", "Public/FortPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisallowInterrogation_SetBit(void* Obj)
	{
		((AFortPlayerPawn*)Obj)->bDisallowInterrogation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisallowInterrogation = { "bDisallowInterrogation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFortPlayerPawn), &Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisallowInterrogation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisallowInterrogation_MetaData), Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisallowInterrogation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFortPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PlayerShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteAnimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteLeaderRotationYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MinimumTimeBetweenSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastStepTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GroupEmoteMaximumZDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_JumpLastActivatedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchXYSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_UnburrowLaunchZSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DBNODeferTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_AggroRangeOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SetByCallerReviveSignalInStorm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SprintCancelTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_WaterSprintBoostAllowedTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ZiplineSocketZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ClientSwimDiveInputTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MoveSoundStimulusBroadcastInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_EmoteRandomNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_VehicleSpeedAtTimeOfJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PendingTetherLaunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TetherJumpLastTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_PickupSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForEnemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MaxIndicatorVisibilityDistForAllies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ThrowCarriedPlayerStrengthZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerForwardOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_DropCarriedPlayerTraceHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteCooldownToClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_TimeBeforeSwimmingLayerDeactivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_ParachuteAndSkydiveAudioFadeOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioFadeOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_SwimmingAudioInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_LastQuickBarSwitchRequestTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_CrouchLerpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_MeleeAbilityCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_GhostModeExitDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsNearSafeZoneEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingSafeZoneEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoSafeZoneCleanup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwimmingAnimLayerLinked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSprintJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasDisableSprintTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisableSwimSprintCancel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaterSprintBoostPending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingPassengerToPassengerAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPlayingDriverToPassengerAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargeting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsTargetingConsumableThrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSwappingCharacterParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBalloonMovementActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsScriptedBot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBuildHotfix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInWaterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydiving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsSkydiving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalIsParachuteForcedOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsParachuteForcedOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSkydivingFromLaunchPad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPendingSkydiveLaunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInVortex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInVortex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInSlipperyMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bReplicatedIsInSlipperyMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsBelowAutoDeployTestHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsSlopeSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsProxySimulationTimedOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPedestalHero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInGliderRedeploy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLocalInGliderRedeploy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bBeingRepossessed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitAbilitySystemComponentFromPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bStartedInteractSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bPawnLODDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsUsingJetpack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsPlayingEmote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShowingOverdriveEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsRespawningInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedPostRepPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableCharacterPartRigidBodyNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bInitializedCharacterPartRBANSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bHasWaterParticleSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bCanShowDefaultSkin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisabledTetheringSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsInFrontEndHologram,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bForceMoveRelativeToCameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsWaitingForEmoteInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bIsEmoteLeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldSyncAnimationWithEmoteLeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bShouldJitterAnimationSyncWithEmoteLeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDoubleFileEmoteSecondLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEmoteUsesSecondaryFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bLockGroupEmoteLeaderRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bWaterFootSplashActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bEnableWaterInteractionEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortPlayerPawn_Statics::NewProp_bDisallowInterrogation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortPlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFortPlayerPawn_Statics::ClassParams = {
		&AFortPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFortPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFortPlayerPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPlayerPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFortPlayerPawn()
	{
		if (!Z_Registration_Info_UClass_AFortPlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFortPlayerPawn.OuterSingleton, Z_Construct_UClass_AFortPlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFortPlayerPawn.OuterSingleton;
	}
	template<> FORTNITEGAME_API UClass* StaticClass<AFortPlayerPawn>()
	{
		return AFortPlayerPawn::StaticClass();
	}
	AFortPlayerPawn::AFortPlayerPawn() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortPlayerPawn);
	AFortPlayerPawn::~AFortPlayerPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPlayerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFortPlayerPawn, AFortPlayerPawn::StaticClass, TEXT("AFortPlayerPawn"), &Z_Registration_Info_UClass_AFortPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFortPlayerPawn), 2391067235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPlayerPawn_h_3416838305(TEXT("/Script/FortniteGame"),
		Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
