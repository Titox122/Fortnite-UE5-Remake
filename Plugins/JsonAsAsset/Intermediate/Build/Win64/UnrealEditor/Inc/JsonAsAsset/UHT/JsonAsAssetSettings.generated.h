// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/JsonAsAssetSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JSONASASSET_JsonAsAssetSettings_generated_h
#error "JsonAsAssetSettings.generated.h already included, missing '#pragma once' in JsonAsAssetSettings.h"
#endif
#define JSONASASSET_JsonAsAssetSettings_generated_h

#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParseKey_Statics; \
	JSONASASSET_API static class UScriptStruct* StaticStruct();


template<> JSONASASSET_API UScriptStruct* StaticStruct<struct FParseKey>();

#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_SPARSE_DATA
#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParseVersions);


#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_ACCESSORS
#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonAsAssetSettings(); \
	friend struct Z_Construct_UClass_UJsonAsAssetSettings_Statics; \
public: \
	DECLARE_CLASS(UJsonAsAssetSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/JsonAsAsset"), NO_API) \
	DECLARE_SERIALIZER(UJsonAsAssetSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonAsAssetSettings(UJsonAsAssetSettings&&); \
	NO_API UJsonAsAssetSettings(const UJsonAsAssetSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonAsAssetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonAsAssetSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJsonAsAssetSettings) \
	NO_API virtual ~UJsonAsAssetSettings();


#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_120_PROLOG
#define FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_SPARSE_DATA \
	FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_ACCESSORS \
	FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSONASASSET_API UClass* StaticClass<class UJsonAsAssetSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h


#define FOREACH_ENUM_EPARSEVERSION(op) \
	op(GAME_UE4_0) \
	op(GAME_UE4_1) \
	op(GAME_UE4_2) \
	op(GAME_UE4_3) \
	op(GAME_UE4_4) \
	op(GAME_UE4_5) \
	op(GAME_ArkSurvivalEvolved) \
	op(GAME_UE4_6) \
	op(GAME_UE4_7) \
	op(GAME_UE4_8) \
	op(GAME_UE4_9) \
	op(GAME_UE4_10) \
	op(GAME_SeaOfThieves) \
	op(GAME_UE4_11) \
	op(GAME_GearsOfWar4) \
	op(GAME_UE4_12) \
	op(GAME_UE4_13) \
	op(GAME_StateOfDecay2) \
	op(GAME_UE4_14) \
	op(GAME_TEKKEN7) \
	op(GAME_UE4_15) \
	op(GAME_UE4_16) \
	op(GAME_PlayerUnknownsBattlegrounds) \
	op(GAME_TrainSimWorld2020) \
	op(GAME_UE4_17) \
	op(GAME_AWayOut) \
	op(GAME_UE4_18) \
	op(GAME_KingdomHearts3) \
	op(GAME_FinalFantasy7Remake) \
	op(GAME_AceCombat7) \
	op(GAME_UE4_19) \
	op(GAME_Paragon) \
	op(GAME_UE4_20) \
	op(GAME_Borderlands3) \
	op(GAME_UE4_21) \
	op(GAME_StarWarsJediFallenOrder) \
	op(GAME_UE4_22) \
	op(GAME_UE4_23) \
	op(GAME_ApexLegendsMobile) \
	op(GAME_UE4_24) \
	op(GAME_UE4_25) \
	op(GAME_UE4_25_Plus) \
	op(GAME_RogueCompany) \
	op(GAME_DeadIsland2) \
	op(GAME_KenaBridgeofSpirits) \
	op(GAME_CalabiYau) \
	op(GAME_UE4_26) \
	op(GAME_GTATheTrilogyDefinitiveEdition) \
	op(GAME_ReadyOrNot) \
	op(GAME_BladeAndSoul) \
	op(GAME_TowerOfFantasy) \
	op(GAME_Dauntless) \
	op(GAME_TheDivisionResurgence) \
	op(GAME_StarWarsJediSurvivor) \
	op(GAME_Snowbreak) \
	op(GAME_UE4_27) \
	op(GAME_Splitgate) \
	op(GAME_HYENAS) \
	op(GAME_HogwartsLegacy) \
	op(GAME_OutlastTrials) \
	op(GAME_Valorant) \
	op(GAME_Gollum) \
	op(GAME_Grounded) \
	op(GAME_UE4_28) \
	op(GAME_UE5_0) \
	op(GAME_MeetYourMaker) \
	op(GAME_UE5_1) \
	op(GAME_UE5_2) \
	op(GAME_UE5_3) \
	op(GAME_UE5_4) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
