// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteGame/Public/FortItemDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortItemDefinition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	FORTNITEGAME_API UClass* Z_Construct_UClass_UFortItemDefinition();
	FORTNITEGAME_API UClass* Z_Construct_UClass_UFortItemDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortniteGame();
// End Cross Module References
	void UFortItemDefinition::StaticRegisterNativesUFortItemDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFortItemDefinition);
	UClass* Z_Construct_UClass_UFortItemDefinition_NoRegister()
	{
		return UFortItemDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UFortItemDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFortItemDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFortItemDefinition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFortItemDefinition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FortItemDefinition.h" },
		{ "ModuleRelativePath", "Public/FortItemDefinition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFortItemDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFortItemDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFortItemDefinition_Statics::ClassParams = {
		&UFortItemDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFortItemDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UFortItemDefinition_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFortItemDefinition()
	{
		if (!Z_Registration_Info_UClass_UFortItemDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFortItemDefinition.OuterSingleton, Z_Construct_UClass_UFortItemDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFortItemDefinition.OuterSingleton;
	}
	template<> FORTNITEGAME_API UClass* StaticClass<UFortItemDefinition>()
	{
		return UFortItemDefinition::StaticClass();
	}
	UFortItemDefinition::UFortItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFortItemDefinition);
	UFortItemDefinition::~UFortItemDefinition() {}
	struct Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItemDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItemDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFortItemDefinition, UFortItemDefinition::StaticClass, TEXT("UFortItemDefinition"), &Z_Registration_Info_UClass_UFortItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFortItemDefinition), 2111062195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItemDefinition_h_2097761743(TEXT("/Script/FortniteGame"),
		Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItemDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItemDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
