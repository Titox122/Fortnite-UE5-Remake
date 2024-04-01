// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteGame/Public/FortItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FORTNITEGAME_API UClass* Z_Construct_UClass_UFortItem();
	FORTNITEGAME_API UClass* Z_Construct_UClass_UFortItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortniteGame();
// End Cross Module References
	void UFortItem::StaticRegisterNativesUFortItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFortItem);
	UClass* Z_Construct_UClass_UFortItem_NoRegister()
	{
		return UFortItem::StaticClass();
	}
	struct Z_Construct_UClass_UFortItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFortItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFortItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFortItem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FortItem.h" },
		{ "ModuleRelativePath", "Public/FortItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFortItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFortItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFortItem_Statics::ClassParams = {
		&UFortItem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFortItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFortItem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFortItem()
	{
		if (!Z_Registration_Info_UClass_UFortItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFortItem.OuterSingleton, Z_Construct_UClass_UFortItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFortItem.OuterSingleton;
	}
	template<> FORTNITEGAME_API UClass* StaticClass<UFortItem>()
	{
		return UFortItem::StaticClass();
	}
	UFortItem::UFortItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFortItem);
	UFortItem::~UFortItem() {}
	struct Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFortItem, UFortItem::StaticClass, TEXT("UFortItem"), &Z_Registration_Info_UClass_UFortItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFortItem), 3082111451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItem_h_4142437642(TEXT("/Script/FortniteGame"),
		Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_FortItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
