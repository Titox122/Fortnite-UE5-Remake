// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonAsAsset/Private/Settings/JsonAsAssetSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonAsAssetSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	JSONASASSET_API UClass* Z_Construct_UClass_UJsonAsAssetSettings();
	JSONASASSET_API UClass* Z_Construct_UClass_UJsonAsAssetSettings_NoRegister();
	JSONASASSET_API UEnum* Z_Construct_UEnum_JsonAsAsset_EParseVersion();
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FParseKey();
	UPackage* Z_Construct_UPackage__Script_JsonAsAsset();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParseVersion;
	static UEnum* EParseVersion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParseVersion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParseVersion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JsonAsAsset_EParseVersion, (UObject*)Z_Construct_UPackage__Script_JsonAsAsset(), TEXT("EParseVersion"));
		}
		return Z_Registration_Info_UEnum_EParseVersion.OuterSingleton;
	}
	template<> JSONASASSET_API UEnum* StaticEnum<EParseVersion>()
	{
		return EParseVersion_StaticEnum();
	}
	struct Z_Construct_UEnum_JsonAsAsset_EParseVersion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JsonAsAsset_EParseVersion_Statics::Enumerators[] = {
		{ "GAME_UE4_0", (int64)GAME_UE4_0 },
		{ "GAME_UE4_1", (int64)GAME_UE4_1 },
		{ "GAME_UE4_2", (int64)GAME_UE4_2 },
		{ "GAME_UE4_3", (int64)GAME_UE4_3 },
		{ "GAME_UE4_4", (int64)GAME_UE4_4 },
		{ "GAME_UE4_5", (int64)GAME_UE4_5 },
		{ "GAME_ArkSurvivalEvolved", (int64)GAME_ArkSurvivalEvolved },
		{ "GAME_UE4_6", (int64)GAME_UE4_6 },
		{ "GAME_UE4_7", (int64)GAME_UE4_7 },
		{ "GAME_UE4_8", (int64)GAME_UE4_8 },
		{ "GAME_UE4_9", (int64)GAME_UE4_9 },
		{ "GAME_UE4_10", (int64)GAME_UE4_10 },
		{ "GAME_SeaOfThieves", (int64)GAME_SeaOfThieves },
		{ "GAME_UE4_11", (int64)GAME_UE4_11 },
		{ "GAME_GearsOfWar4", (int64)GAME_GearsOfWar4 },
		{ "GAME_UE4_12", (int64)GAME_UE4_12 },
		{ "GAME_UE4_13", (int64)GAME_UE4_13 },
		{ "GAME_StateOfDecay2", (int64)GAME_StateOfDecay2 },
		{ "GAME_UE4_14", (int64)GAME_UE4_14 },
		{ "GAME_TEKKEN7", (int64)GAME_TEKKEN7 },
		{ "GAME_UE4_15", (int64)GAME_UE4_15 },
		{ "GAME_UE4_16", (int64)GAME_UE4_16 },
		{ "GAME_PlayerUnknownsBattlegrounds", (int64)GAME_PlayerUnknownsBattlegrounds },
		{ "GAME_TrainSimWorld2020", (int64)GAME_TrainSimWorld2020 },
		{ "GAME_UE4_17", (int64)GAME_UE4_17 },
		{ "GAME_AWayOut", (int64)GAME_AWayOut },
		{ "GAME_UE4_18", (int64)GAME_UE4_18 },
		{ "GAME_KingdomHearts3", (int64)GAME_KingdomHearts3 },
		{ "GAME_FinalFantasy7Remake", (int64)GAME_FinalFantasy7Remake },
		{ "GAME_AceCombat7", (int64)GAME_AceCombat7 },
		{ "GAME_UE4_19", (int64)GAME_UE4_19 },
		{ "GAME_Paragon", (int64)GAME_Paragon },
		{ "GAME_UE4_20", (int64)GAME_UE4_20 },
		{ "GAME_Borderlands3", (int64)GAME_Borderlands3 },
		{ "GAME_UE4_21", (int64)GAME_UE4_21 },
		{ "GAME_StarWarsJediFallenOrder", (int64)GAME_StarWarsJediFallenOrder },
		{ "GAME_UE4_22", (int64)GAME_UE4_22 },
		{ "GAME_UE4_23", (int64)GAME_UE4_23 },
		{ "GAME_ApexLegendsMobile", (int64)GAME_ApexLegendsMobile },
		{ "GAME_UE4_24", (int64)GAME_UE4_24 },
		{ "GAME_UE4_25", (int64)GAME_UE4_25 },
		{ "GAME_UE4_25_Plus", (int64)GAME_UE4_25_Plus },
		{ "GAME_RogueCompany", (int64)GAME_RogueCompany },
		{ "GAME_DeadIsland2", (int64)GAME_DeadIsland2 },
		{ "GAME_KenaBridgeofSpirits", (int64)GAME_KenaBridgeofSpirits },
		{ "GAME_CalabiYau", (int64)GAME_CalabiYau },
		{ "GAME_UE4_26", (int64)GAME_UE4_26 },
		{ "GAME_GTATheTrilogyDefinitiveEdition", (int64)GAME_GTATheTrilogyDefinitiveEdition },
		{ "GAME_ReadyOrNot", (int64)GAME_ReadyOrNot },
		{ "GAME_BladeAndSoul", (int64)GAME_BladeAndSoul },
		{ "GAME_TowerOfFantasy", (int64)GAME_TowerOfFantasy },
		{ "GAME_Dauntless", (int64)GAME_Dauntless },
		{ "GAME_TheDivisionResurgence", (int64)GAME_TheDivisionResurgence },
		{ "GAME_StarWarsJediSurvivor", (int64)GAME_StarWarsJediSurvivor },
		{ "GAME_Snowbreak", (int64)GAME_Snowbreak },
		{ "GAME_UE4_27", (int64)GAME_UE4_27 },
		{ "GAME_Splitgate", (int64)GAME_Splitgate },
		{ "GAME_HYENAS", (int64)GAME_HYENAS },
		{ "GAME_HogwartsLegacy", (int64)GAME_HogwartsLegacy },
		{ "GAME_OutlastTrials", (int64)GAME_OutlastTrials },
		{ "GAME_Valorant", (int64)GAME_Valorant },
		{ "GAME_Gollum", (int64)GAME_Gollum },
		{ "GAME_Grounded", (int64)GAME_Grounded },
		{ "GAME_UE4_28", (int64)GAME_UE4_28 },
		{ "GAME_UE5_0", (int64)GAME_UE5_0 },
		{ "GAME_MeetYourMaker", (int64)GAME_MeetYourMaker },
		{ "GAME_UE5_1", (int64)GAME_UE5_1 },
		{ "GAME_UE5_2", (int64)GAME_UE5_2 },
		{ "GAME_UE5_3", (int64)GAME_UE5_3 },
		{ "GAME_UE5_4", (int64)GAME_UE5_4 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JsonAsAsset_EParseVersion_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Grabbed from (https://github.com/FabianFG/CUE4Parse/blob/master/CUE4Parse/UE4/Versions/EGame.cs)\n" },
		{ "GAME_AceCombat7.Name", "GAME_AceCombat7" },
		{ "GAME_ApexLegendsMobile.Name", "GAME_ApexLegendsMobile" },
		{ "GAME_ArkSurvivalEvolved.Name", "GAME_ArkSurvivalEvolved" },
		{ "GAME_AWayOut.Name", "GAME_AWayOut" },
		{ "GAME_BladeAndSoul.Name", "GAME_BladeAndSoul" },
		{ "GAME_Borderlands3.Name", "GAME_Borderlands3" },
		{ "GAME_CalabiYau.Name", "GAME_CalabiYau" },
		{ "GAME_Dauntless.Name", "GAME_Dauntless" },
		{ "GAME_DeadIsland2.Name", "GAME_DeadIsland2" },
		{ "GAME_FinalFantasy7Remake.Name", "GAME_FinalFantasy7Remake" },
		{ "GAME_GearsOfWar4.Name", "GAME_GearsOfWar4" },
		{ "GAME_Gollum.Name", "GAME_Gollum" },
		{ "GAME_Grounded.Name", "GAME_Grounded" },
		{ "GAME_GTATheTrilogyDefinitiveEdition.Name", "GAME_GTATheTrilogyDefinitiveEdition" },
		{ "GAME_HogwartsLegacy.Name", "GAME_HogwartsLegacy" },
		{ "GAME_HYENAS.Name", "GAME_HYENAS" },
		{ "GAME_KenaBridgeofSpirits.Name", "GAME_KenaBridgeofSpirits" },
		{ "GAME_KingdomHearts3.Name", "GAME_KingdomHearts3" },
		{ "GAME_MeetYourMaker.Name", "GAME_MeetYourMaker" },
		{ "GAME_OutlastTrials.Name", "GAME_OutlastTrials" },
		{ "GAME_Paragon.Name", "GAME_Paragon" },
		{ "GAME_PlayerUnknownsBattlegrounds.Name", "GAME_PlayerUnknownsBattlegrounds" },
		{ "GAME_ReadyOrNot.Name", "GAME_ReadyOrNot" },
		{ "GAME_RogueCompany.Name", "GAME_RogueCompany" },
		{ "GAME_SeaOfThieves.Name", "GAME_SeaOfThieves" },
		{ "GAME_Snowbreak.Name", "GAME_Snowbreak" },
		{ "GAME_Splitgate.Name", "GAME_Splitgate" },
		{ "GAME_StarWarsJediFallenOrder.Name", "GAME_StarWarsJediFallenOrder" },
		{ "GAME_StarWarsJediSurvivor.Name", "GAME_StarWarsJediSurvivor" },
		{ "GAME_StateOfDecay2.Name", "GAME_StateOfDecay2" },
		{ "GAME_TEKKEN7.Name", "GAME_TEKKEN7" },
		{ "GAME_TheDivisionResurgence.Name", "GAME_TheDivisionResurgence" },
		{ "GAME_TowerOfFantasy.Name", "GAME_TowerOfFantasy" },
		{ "GAME_TrainSimWorld2020.Name", "GAME_TrainSimWorld2020" },
		{ "GAME_UE4_0.Name", "GAME_UE4_0" },
		{ "GAME_UE4_1.Name", "GAME_UE4_1" },
		{ "GAME_UE4_10.Name", "GAME_UE4_10" },
		{ "GAME_UE4_11.Name", "GAME_UE4_11" },
		{ "GAME_UE4_12.Name", "GAME_UE4_12" },
		{ "GAME_UE4_13.Name", "GAME_UE4_13" },
		{ "GAME_UE4_14.Name", "GAME_UE4_14" },
		{ "GAME_UE4_15.Name", "GAME_UE4_15" },
		{ "GAME_UE4_16.Name", "GAME_UE4_16" },
		{ "GAME_UE4_17.Name", "GAME_UE4_17" },
		{ "GAME_UE4_18.Name", "GAME_UE4_18" },
		{ "GAME_UE4_19.Name", "GAME_UE4_19" },
		{ "GAME_UE4_2.Name", "GAME_UE4_2" },
		{ "GAME_UE4_20.Name", "GAME_UE4_20" },
		{ "GAME_UE4_21.Name", "GAME_UE4_21" },
		{ "GAME_UE4_22.Name", "GAME_UE4_22" },
		{ "GAME_UE4_23.Name", "GAME_UE4_23" },
		{ "GAME_UE4_24.Name", "GAME_UE4_24" },
		{ "GAME_UE4_25.Name", "GAME_UE4_25" },
		{ "GAME_UE4_25_Plus.Name", "GAME_UE4_25_Plus" },
		{ "GAME_UE4_26.Name", "GAME_UE4_26" },
		{ "GAME_UE4_27.Name", "GAME_UE4_27" },
		{ "GAME_UE4_28.Name", "GAME_UE4_28" },
		{ "GAME_UE4_3.Name", "GAME_UE4_3" },
		{ "GAME_UE4_4.Name", "GAME_UE4_4" },
		{ "GAME_UE4_5.Name", "GAME_UE4_5" },
		{ "GAME_UE4_6.Name", "GAME_UE4_6" },
		{ "GAME_UE4_7.Name", "GAME_UE4_7" },
		{ "GAME_UE4_8.Name", "GAME_UE4_8" },
		{ "GAME_UE4_9.Name", "GAME_UE4_9" },
		{ "GAME_UE5_0.Name", "GAME_UE5_0" },
		{ "GAME_UE5_1.Name", "GAME_UE5_1" },
		{ "GAME_UE5_2.Name", "GAME_UE5_2" },
		{ "GAME_UE5_3.Name", "GAME_UE5_3" },
		{ "GAME_UE5_4.Name", "GAME_UE5_4" },
		{ "GAME_Valorant.Name", "GAME_Valorant" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Grabbed from (https:github.com/FabianFG/CUE4Parse/blob/master/CUE4Parse/UE4/Versions/EGame.cs)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JsonAsAsset_EParseVersion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JsonAsAsset,
		nullptr,
		"EParseVersion",
		"EParseVersion",
		Z_Construct_UEnum_JsonAsAsset_EParseVersion_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JsonAsAsset_EParseVersion_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JsonAsAsset_EParseVersion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JsonAsAsset_EParseVersion_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_JsonAsAsset_EParseVersion()
	{
		if (!Z_Registration_Info_UEnum_EParseVersion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParseVersion.InnerSingleton, Z_Construct_UEnum_JsonAsAsset_EParseVersion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParseVersion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParseKey;
class UScriptStruct* FParseKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParseKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParseKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParseKey, (UObject*)Z_Construct_UPackage__Script_JsonAsAsset(), TEXT("ParseKey"));
	}
	return Z_Registration_Info_UScriptStruct_ParseKey.OuterSingleton;
}
template<> JSONASASSET_API UScriptStruct* StaticStruct<FParseKey>()
{
	return FParseKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParseKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParseKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParseKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParseKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "// Must start with 0x\n" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Must start with 0x" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParseKey, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParseKey, Guid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Guid_MetaData), Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Guid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParseKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParseKey_Statics::NewProp_Guid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParseKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
		nullptr,
		&NewStructOps,
		"ParseKey",
		Z_Construct_UScriptStruct_FParseKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParseKey_Statics::PropPointers),
		sizeof(FParseKey),
		alignof(FParseKey),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParseKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParseKey_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParseKey_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FParseKey()
	{
		if (!Z_Registration_Info_UScriptStruct_ParseKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParseKey.InnerSingleton, Z_Construct_UScriptStruct_FParseKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParseKey.InnerSingleton;
	}
	DEFINE_FUNCTION(UJsonAsAssetSettings::execGetParseVersions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UJsonAsAssetSettings::GetParseVersions();
		P_NATIVE_END;
	}
	void UJsonAsAssetSettings::StaticRegisterNativesUJsonAsAssetSettings()
	{
		UClass* Class = UJsonAsAssetSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParseVersions", &UJsonAsAssetSettings::execGetParseVersions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics
	{
		struct JsonAsAssetSettings_eventGetParseVersions_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JsonAsAssetSettings_eventGetParseVersions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonAsAssetSettings, nullptr, "GetParseVersions", nullptr, nullptr, Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::JsonAsAssetSettings_eventGetParseVersions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::JsonAsAssetSettings_eventGetParseVersions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJsonAsAssetSettings);
	UClass* Z_Construct_UClass_UJsonAsAssetSettings_NoRegister()
	{
		return UJsonAsAssetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UJsonAsAssetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExportDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPackageSaving_MetaData[];
#endif
		static void NewProp_bAllowPackageSaving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPackageSaving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipResultNodeConnection_MetaData[];
#endif
		static void NewProp_bSkipResultNodeConnection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipResultNodeConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLocalFetch_MetaData[];
#endif
		static void NewProp_bEnableLocalFetch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLocalFetch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchiveDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArchiveDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealVersion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_UnrealVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MappingFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDownloadExistingTextures_MetaData[];
#endif
		static void NewProp_bDownloadExistingTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDownloadExistingTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchiveKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArchiveKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChangeURL_MetaData[];
#endif
		static void NewProp_bChangeURL_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangeURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonAsAssetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonAsAssetSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonAsAssetSettings_GetParseVersions, "GetParseVersions" }, // 756900017
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A editor plugin to allow JSON files from FModel to a asset in the Content Browser\n" },
		{ "IncludePath", "Settings/JsonAsAssetSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "A editor plugin to allow JSON files from FModel to a asset in the Content Browser" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ExportDirectory_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/**\n\x09* Export directory for FModel\n\x09*\x09  (Output/Exports)\n\x09* \n\x09* NOTE: Please use the file selector, do not manually paste it\n\x09*\x09\x09or replace \"\\\" with \"/\"\n\x09*/" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Export directory for FModel\n        (Output/Exports)\n\nNOTE: Please use the file selector, do not manually paste it\n              or replace \"\\\" with \"/\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ExportDirectory = { "ExportDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJsonAsAssetSettings, ExportDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ExportDirectory_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ExportDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bAllowPackageSaving_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/**\n\x09* When importing/downloading any asset type using JsonAsAsset,\n\x09* save the package (asset) after finalization.\n\x09* \n\x09* NOTE: This is recommended to be turned off, as this may override\n\x09*\x09\x09your own assets, causing irreversible changes. \n\x09*/" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "When importing/downloading any asset type using JsonAsAsset,\nsave the package (asset) after finalization.\n\nNOTE: This is recommended to be turned off, as this may override\n              your own assets, causing irreversible changes." },
	};
#endif
	void Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bAllowPackageSaving_SetBit(void* Obj)
	{
		((UJsonAsAssetSettings*)Obj)->bAllowPackageSaving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bAllowPackageSaving = { "bAllowPackageSaving", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJsonAsAssetSettings), &Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bAllowPackageSaving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bAllowPackageSaving_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bAllowPackageSaving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bSkipResultNodeConnection_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/**\n\x09* When importing/downloading the asset type Material, a error may occur\n\x09* | Material expression called Compiler->TextureParameter() without implementing UMaterialExpression::GetReferencedTexture properly\n\x09*\n\x09* To counter that error, we skip connecting the inputs to the main result\n\x09* node in the material. If you do use this, import a material, save everything,\n\x09* restart, and re-import the material without any problems with this turned off/on.\n\x09*\x09\x09\x09  (or you could just connect them yourself)\n\x09*/" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "When importing/downloading the asset type Material, a error may occur\n| Material expression called Compiler->TextureParameter() without implementing UMaterialExpression::GetReferencedTexture properly\n\nTo counter that error, we skip connecting the inputs to the main result\nnode in the material. If you do use this, import a material, save everything,\nrestart, and re-import the material without any problems with this turned off/on.\n                        (or you could just connect them yourself)" },
	};
#endif
	void Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bSkipResultNodeConnection_SetBit(void* Obj)
	{
		((UJsonAsAssetSettings*)Obj)->bSkipResultNodeConnection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bSkipResultNodeConnection = { "bSkipResultNodeConnection", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJsonAsAssetSettings), &Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bSkipResultNodeConnection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bSkipResultNodeConnection_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bSkipResultNodeConnection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bEnableLocalFetch_MetaData[] = {
		{ "Category", "Local Fetch" },
		{ "Comment", "/**\n\x09* Fetches assets from a local service and automatically imports\n\x09* them into your project, without having them locally\n\x09* \n\x09* NOTE: Please set all the settings correctly to properly start\n\x09*\x09\x09Local Fetch, read more at the README.md file.\n\x09*/" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Fetches assets from a local service and automatically imports\nthem into your project, without having them locally\n\nNOTE: Please set all the settings correctly to properly start\n              Local Fetch, read more at the README.md file." },
	};
#endif
	void Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bEnableLocalFetch_SetBit(void* Obj)
	{
		((UJsonAsAssetSettings*)Obj)->bEnableLocalFetch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bEnableLocalFetch = { "bEnableLocalFetch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJsonAsAssetSettings), &Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bEnableLocalFetch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bEnableLocalFetch_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bEnableLocalFetch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveDirectory_MetaData[] = {
		{ "Category", "Local Fetch - Configuration" },
		{ "Comment", "/**\n\x09* Paks folder location where all the assets are\n\x09* (Content/Paks)\n\x09*\n\x09* NOTE: Please use the file selector, do not manually paste it\n\x09*\x09\x09or replace \"\\\" with \"/\"\n\x09*/" },
		{ "EditCondition", "bEnableLocalFetch" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Paks folder location where all the assets are\n(Content/Paks)\n\nNOTE: Please use the file selector, do not manually paste it\n              or replace \"\\\" with \"/\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveDirectory = { "ArchiveDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJsonAsAssetSettings, ArchiveDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveDirectory_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_UnrealVersion_MetaData[] = {
		{ "Category", "Local Fetch - Configuration" },
		{ "Comment", "// UE Version for the Unreal Engine Game (same as FModel's UE Verisons property)\n" },
		{ "EditCondition", "bEnableLocalFetch" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "UE Version for the Unreal Engine Game (same as FModel's UE Verisons property)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_UnrealVersion = { "UnrealVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJsonAsAssetSettings, UnrealVersion), Z_Construct_UEnum_JsonAsAsset_EParseVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_UnrealVersion_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_UnrealVersion_MetaData) }; // 3929930342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_MappingFilePath_MetaData[] = {
		{ "Category", "Local Fetch - Configuration" },
		{ "Comment", "// Mappings file\n// NOTE: Please use the file selector, do not manually paste it \n" },
		{ "EditCondition", "bEnableLocalFetch" },
		{ "FilePathFilter", "usmap" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "RelativeToGameDir", "" },
		{ "ToolTip", "Mappings file\nNOTE: Please use the file selector, do not manually paste it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_MappingFilePath = { "MappingFilePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJsonAsAssetSettings, MappingFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_MappingFilePath_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_MappingFilePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bDownloadExistingTextures_MetaData[] = {
		{ "Category", "Local Fetch - Encryption" },
		{ "EditCondition", "bEnableLocalFetch" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
	};
#endif
	void Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bDownloadExistingTextures_SetBit(void* Obj)
	{
		((UJsonAsAssetSettings*)Obj)->bDownloadExistingTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bDownloadExistingTextures = { "bDownloadExistingTextures", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJsonAsAssetSettings), &Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bDownloadExistingTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bDownloadExistingTextures_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bDownloadExistingTextures_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveKey_MetaData[] = {
		{ "Category", "Local Fetch - Encryption" },
		{ "Comment", "// Main key for archives\n" },
		{ "DisplayName", "Archive Key" },
		{ "EditCondition", "bEnableLocalFetch" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Main key for archives" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveKey = { "ArchiveKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJsonAsAssetSettings, ArchiveKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveKey_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveKey_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_DynamicKeys_Inner = { "DynamicKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParseKey, METADATA_PARAMS(0, nullptr) }; // 4109203082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_DynamicKeys_MetaData[] = {
		{ "Category", "Local Fetch - Encryption" },
		{ "Comment", "// AES Keys\n" },
		{ "DisplayName", "Dynamic Keys" },
		{ "EditCondition", "bEnableLocalFetch" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "AES Keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_DynamicKeys = { "DynamicKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJsonAsAssetSettings, DynamicKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_DynamicKeys_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_DynamicKeys_MetaData) }; // 4109203082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bChangeURL_MetaData[] = {
		{ "Category", "Local Fetch" },
		{ "Comment", "// Enables the option to change the api's URL\n" },
		{ "EditCondition", "bEnableLocalFetch" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Enables the option to change the api's URL" },
	};
#endif
	void Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bChangeURL_SetBit(void* Obj)
	{
		((UJsonAsAssetSettings*)Obj)->bChangeURL = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bChangeURL = { "bChangeURL", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJsonAsAssetSettings), &Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bChangeURL_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bChangeURL_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bChangeURL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Local Fetch" },
		{ "Comment", "// \"http://localhost:1500\" is default\n" },
		{ "DisplayName", "Local URL" },
		{ "EditCondition", "bChangeURL && bEnableLocalFetch" },
		{ "ModuleRelativePath", "Private/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "\"http:localhost:1500\" is default" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJsonAsAssetSettings, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Url_MetaData), Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJsonAsAssetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ExportDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bAllowPackageSaving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bSkipResultNodeConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bEnableLocalFetch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_UnrealVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_MappingFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bDownloadExistingTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_ArchiveKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_DynamicKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_DynamicKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_bChangeURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Url,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonAsAssetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonAsAssetSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::ClassParams = {
		&UJsonAsAssetSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJsonAsAssetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UJsonAsAssetSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UJsonAsAssetSettings()
	{
		if (!Z_Registration_Info_UClass_UJsonAsAssetSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJsonAsAssetSettings.OuterSingleton, Z_Construct_UClass_UJsonAsAssetSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJsonAsAssetSettings.OuterSingleton;
	}
	template<> JSONASASSET_API UClass* StaticClass<UJsonAsAssetSettings>()
	{
		return UJsonAsAssetSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonAsAssetSettings);
	UJsonAsAssetSettings::~UJsonAsAssetSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics::EnumInfo[] = {
		{ EParseVersion_StaticEnum, TEXT("EParseVersion"), &Z_Registration_Info_UEnum_EParseVersion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3929930342U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics::ScriptStructInfo[] = {
		{ FParseKey::StaticStruct, Z_Construct_UScriptStruct_FParseKey_Statics::NewStructOps, TEXT("ParseKey"), &Z_Registration_Info_UScriptStruct_ParseKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParseKey), 4109203082U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJsonAsAssetSettings, UJsonAsAssetSettings::StaticClass, TEXT("UJsonAsAssetSettings"), &Z_Registration_Info_UClass_UJsonAsAssetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJsonAsAssetSettings), 326816086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_3760485739(TEXT("/Script/JsonAsAsset"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Private_Settings_JsonAsAssetSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
