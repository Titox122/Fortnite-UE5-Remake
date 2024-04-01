// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortPawn.h"
#include "FortPlayerPawn.generated.h"

/**
 *
 */
UCLASS()
class FORTNITEGAME_API AFortPlayerPawn : public AFortPawn
{
	GENERATED_BODY()

public:
	//floats XDDDD
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlayerHealth = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlayerShield = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroupEmoteAnimOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroupEmoteLeaderRotationYawOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumTimeBetweenSteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LastStepTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroupEmoteMaximumZDifference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float JumpLastActivatedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnburrowLaunchXYSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnburrowLaunchZSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DBNODeferTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AggroRangeOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SetByCallerReviveSignalInStorm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SprintCancelTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterSprintBoostAllowedTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ZiplineSocketZOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClientSwimDiveInputTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveSoundStimulusBroadcastInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EmoteStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EmoteRandomNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VehicleSpeedAtTimeOfJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PendingTetherLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TetherJumpLastTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PickupSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxIndicatorVisibilityDistForEnemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxIndicatorVisibilityDistForAllies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrowCarriedPlayerStrengthXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrowCarriedPlayerStrengthZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropCarriedPlayerForwardOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropCarriedPlayerHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropCarriedPlayerTraceHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ParachuteCooldownToOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ParachuteCooldownToClose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeBeforeSwimmingLayerDeactivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ParachuteAndSkydiveAudioFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ParachuteAndSkydiveAudioFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SwimmingAudioFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SwimmingAudioInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LastQuickBarSwitchRequestTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CrouchStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CrouchEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CrouchLerpTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeleeAbilityCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GhostModeExitStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GhostModeExitDuration;

	//bools Xd
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsNearSafeZoneEdge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayingSafeZoneEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDoSafeZoneCleanup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSwimmingAnimLayerLinked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSprintJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasDisableSprintTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisableSwimSprintCancel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsWaterJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsWaterSprintBoost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsWaterSprintBoostPending;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayingPassengerToPassengerAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayingDriverToPassengerAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsTargeting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsTargetingConsumableThrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSwappingCharacterParts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBalloonMovementActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsScriptedBot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBuildHotfix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInWaterVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSkydiving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsParachuteOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLocalIsSkydiving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLocalIsParachuteForcedOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsParachuteForcedOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSkydivingFromBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSkydivingFromLaunchPad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPendingSkydiveLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInVortex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReplicatedIsInVortex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInSlipperyMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReplicatedIsInSlipperyMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBelowAutoDeployTestHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSlopeSliding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsProxySimulationTimedOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsPedestalHero;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInGliderRedeploy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLocalInGliderRedeploy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBeingRepossessed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInitAbilitySystemComponentFromPlayerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStartedInteractSearch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPawnLODDirty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsUsingJetpack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsPlayingEmote;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowingOverdriveEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsRespawning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsRespawningInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInitializedPostRepPlayerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableCharacterPartRigidBodyNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInitializedCharacterPartRBANSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasWaterParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanShowDefaultSkin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisabledTetheringSupport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInFrontEndHologram;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForceMoveRelativeToCameraRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsWaitingForEmoteInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsEmoteLeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldSyncAnimationWithEmoteLeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldJitterAnimationSyncWithEmoteLeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDoubleFileEmoteSecondLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEmoteUsesSecondaryFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLockGroupEmoteLeaderRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWaterFootSplashActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableWaterInteractionEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisallowInterrogation;
};
