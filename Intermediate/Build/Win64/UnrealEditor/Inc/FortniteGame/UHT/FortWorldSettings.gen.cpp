// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteGame/Public/FortWorldSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortWorldSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortWorldSettings();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortWorldSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortniteGame();
// End Cross Module References
	void AFortWorldSettings::StaticRegisterNativesAFortWorldSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFortWorldSettings);
	UClass* Z_Construct_UClass_AFortWorldSettings_NoRegister()
	{
		return AFortWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_AFortWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTimeOfDayManager_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WorldTimeOfDayManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWorldSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWorldSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWorldSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Transformation HLOD DataLayers" },
		{ "IncludePath", "FortWorldSettings.h" },
		{ "ModuleRelativePath", "Public/FortWorldSettings.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortWorldSettings_Statics::NewProp_WorldTimeOfDayManager_MetaData[] = {
		{ "Category", "FortWorldSettings" },
		{ "ModuleRelativePath", "Public/FortWorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFortWorldSettings_Statics::NewProp_WorldTimeOfDayManager = { "WorldTimeOfDayManager", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFortWorldSettings, WorldTimeOfDayManager), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWorldSettings_Statics::NewProp_WorldTimeOfDayManager_MetaData), Z_Construct_UClass_AFortWorldSettings_Statics::NewProp_WorldTimeOfDayManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFortWorldSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFortWorldSettings_Statics::NewProp_WorldTimeOfDayManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortWorldSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFortWorldSettings_Statics::ClassParams = {
		&AFortWorldSettings::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFortWorldSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFortWorldSettings_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWorldSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_AFortWorldSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFortWorldSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFortWorldSettings()
	{
		if (!Z_Registration_Info_UClass_AFortWorldSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFortWorldSettings.OuterSingleton, Z_Construct_UClass_AFortWorldSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFortWorldSettings.OuterSingleton;
	}
	template<> FORTNITEGAME_API UClass* StaticClass<AFortWorldSettings>()
	{
		return AFortWorldSettings::StaticClass();
	}
	AFortWorldSettings::AFortWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortWorldSettings);
	AFortWorldSettings::~AFortWorldSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWorldSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWorldSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFortWorldSettings, AFortWorldSettings::StaticClass, TEXT("AFortWorldSettings"), &Z_Registration_Info_UClass_AFortWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFortWorldSettings), 1373506226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWorldSettings_h_2580292277(TEXT("/Script/FortniteGame"),
		Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWorldSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortWorldSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
