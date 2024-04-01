// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteGame/Public/FortPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortPawn();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortniteGame();
// End Cross Module References
	void AFortPawn::StaticRegisterNativesAFortPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFortPawn);
	UClass* Z_Construct_UClass_AFortPawn_NoRegister()
	{
		return AFortPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFortPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FortPawn.h" },
		{ "ModuleRelativePath", "Public/FortPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFortPawn_Statics::ClassParams = {
		&AFortPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFortPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFortPawn()
	{
		if (!Z_Registration_Info_UClass_AFortPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFortPawn.OuterSingleton, Z_Construct_UClass_AFortPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFortPawn.OuterSingleton;
	}
	template<> FORTNITEGAME_API UClass* StaticClass<AFortPawn>()
	{
		return AFortPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortPawn);
	AFortPawn::~AFortPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFortPawn, AFortPawn::StaticClass, TEXT("AFortPawn"), &Z_Registration_Info_UClass_AFortPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFortPawn), 3613441780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPawn_h_1268015412(TEXT("/Script/FortniteGame"),
		Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
