// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteGame/Public/FortStaticMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortStaticMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortStaticMeshActor();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AFortStaticMeshActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortniteGame();
// End Cross Module References
	void AFortStaticMeshActor::StaticRegisterNativesAFortStaticMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFortStaticMeshActor);
	UClass* Z_Construct_UClass_AFortStaticMeshActor_NoRegister()
	{
		return AFortStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AFortStaticMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFortStaticMeshActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortStaticMeshActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "FortStaticMeshActor.h" },
		{ "ModuleRelativePath", "Public/FortStaticMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortStaticMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFortStaticMeshActor_Statics::ClassParams = {
		&AFortStaticMeshActor::StaticClass,
		"Engine",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortStaticMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFortStaticMeshActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFortStaticMeshActor()
	{
		if (!Z_Registration_Info_UClass_AFortStaticMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFortStaticMeshActor.OuterSingleton, Z_Construct_UClass_AFortStaticMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFortStaticMeshActor.OuterSingleton;
	}
	template<> FORTNITEGAME_API UClass* StaticClass<AFortStaticMeshActor>()
	{
		return AFortStaticMeshActor::StaticClass();
	}
	AFortStaticMeshActor::AFortStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortStaticMeshActor);
	AFortStaticMeshActor::~AFortStaticMeshActor() {}
	struct Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortStaticMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortStaticMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFortStaticMeshActor, AFortStaticMeshActor::StaticClass, TEXT("AFortStaticMeshActor"), &Z_Registration_Info_UClass_AFortStaticMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFortStaticMeshActor), 316827789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortStaticMeshActor_h_1316225119(TEXT("/Script/FortniteGame"),
		Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortStaticMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortStaticMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
