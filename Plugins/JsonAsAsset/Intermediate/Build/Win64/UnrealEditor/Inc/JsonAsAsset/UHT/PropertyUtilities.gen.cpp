// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonAsAsset/Public/Utilities/PropertyUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyUtilities() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	JSONASASSET_API UClass* Z_Construct_UClass_UObjectSerializer_NoRegister();
	JSONASASSET_API UClass* Z_Construct_UClass_UPropertySerializer();
	JSONASASSET_API UClass* Z_Construct_UClass_UPropertySerializer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JsonAsAsset();
// End Cross Module References
	void UPropertySerializer::StaticRegisterNativesUPropertySerializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertySerializer);
	UClass* Z_Construct_UClass_UPropertySerializer_NoRegister()
	{
		return UPropertySerializer::StaticClass();
	}
	struct Z_Construct_UClass_UPropertySerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSerializer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectSerializer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PinnedStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinnedStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PinnedStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertySerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertySerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/PropertyUtilities.h" },
		{ "ModuleRelativePath", "Public/Utilities/PropertyUtilities.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectSerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utilities/PropertyUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectSerializer = { "ObjectSerializer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertySerializer, ObjectSerializer), Z_Construct_UClass_UObjectSerializer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectSerializer_MetaData), Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectSerializer_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_Inner = { "PinnedStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStruct, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utilities/PropertyUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs = { "PinnedStructs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertySerializer, PinnedStructs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_MetaData), Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertySerializer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectSerializer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertySerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertySerializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertySerializer_Statics::ClassParams = {
		&UPropertySerializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertySerializer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::Class_MetaDataParams), Z_Construct_UClass_UPropertySerializer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPropertySerializer()
	{
		if (!Z_Registration_Info_UClass_UPropertySerializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertySerializer.OuterSingleton, Z_Construct_UClass_UPropertySerializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertySerializer.OuterSingleton;
	}
	template<> JSONASASSET_API UClass* StaticClass<UPropertySerializer>()
	{
		return UPropertySerializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertySerializer);
	UPropertySerializer::~UPropertySerializer() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_PropertyUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_PropertyUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertySerializer, UPropertySerializer::StaticClass, TEXT("UPropertySerializer"), &Z_Registration_Info_UClass_UPropertySerializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertySerializer), 2714200086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_PropertyUtilities_h_3271445732(TEXT("/Script/JsonAsAsset"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_PropertyUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_PropertyUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
