// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonAsAsset/Public/Utilities/ObjectUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectUtilities() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	JSONASASSET_API UClass* Z_Construct_UClass_UObjectSerializer();
	JSONASASSET_API UClass* Z_Construct_UClass_UObjectSerializer_NoRegister();
	JSONASASSET_API UClass* Z_Construct_UClass_UPropertySerializer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JsonAsAsset();
// End Cross Module References
	void UObjectSerializer::StaticRegisterNativesUObjectSerializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectSerializer);
	UClass* Z_Construct_UClass_UObjectSerializer_NoRegister()
	{
		return UObjectSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UObjectSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePackage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePackage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectIndices_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectIndices_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectIndices_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectIndices;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedObjects_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoadedObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertySerializer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySerializer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectMarks_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectMarks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectMarks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectMarks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/ObjectUtilities.h" },
		{ "ModuleRelativePath", "Public/Utilities/ObjectUtilities.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSerializer_Statics::NewProp_SourcePackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utilities/ObjectUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_SourcePackage = { "SourcePackage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, SourcePackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::NewProp_SourcePackage_MetaData), Z_Construct_UClass_UObjectSerializer_Statics::NewProp_SourcePackage_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectIndices_ValueProp = { "ObjectIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectIndices_Key_KeyProp = { "ObjectIndices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utilities/ObjectUtilities.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectIndices = { "ObjectIndices", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, ObjectIndices), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectIndices_MetaData), Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectIndices_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_LoadedObjects_ValueProp = { "LoadedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_LoadedObjects_Key_KeyProp = { "LoadedObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSerializer_Statics::NewProp_LoadedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utilities/ObjectUtilities.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_LoadedObjects = { "LoadedObjects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, LoadedObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::NewProp_LoadedObjects_MetaData), Z_Construct_UClass_UObjectSerializer_Statics::NewProp_LoadedObjects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSerializer_Statics::NewProp_PropertySerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utilities/ObjectUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_PropertySerializer = { "PropertySerializer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, PropertySerializer), Z_Construct_UClass_UPropertySerializer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::NewProp_PropertySerializer_MetaData), Z_Construct_UClass_UObjectSerializer_Statics::NewProp_PropertySerializer_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectMarks_ValueProp = { "ObjectMarks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectMarks_Key_KeyProp = { "ObjectMarks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectMarks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utilities/ObjectUtilities.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectMarks = { "ObjectMarks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSerializer, ObjectMarks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectMarks_MetaData), Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectMarks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectSerializer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_SourcePackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectIndices_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectIndices_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_LoadedObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_LoadedObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_LoadedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_PropertySerializer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectMarks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectMarks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSerializer_Statics::NewProp_ObjectMarks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectSerializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectSerializer_Statics::ClassParams = {
		&UObjectSerializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectSerializer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectSerializer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSerializer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UObjectSerializer()
	{
		if (!Z_Registration_Info_UClass_UObjectSerializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectSerializer.OuterSingleton, Z_Construct_UClass_UObjectSerializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectSerializer.OuterSingleton;
	}
	template<> JSONASASSET_API UClass* StaticClass<UObjectSerializer>()
	{
		return UObjectSerializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectSerializer);
	UObjectSerializer::~UObjectSerializer() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_ObjectUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_ObjectUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectSerializer, UObjectSerializer::StaticClass, TEXT("UObjectSerializer"), &Z_Registration_Info_UClass_UObjectSerializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectSerializer), 3019356865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_ObjectUtilities_h_1506339(TEXT("/Script/JsonAsAsset"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_ObjectUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_JsonAsAsset_Source_JsonAsAsset_Public_Utilities_ObjectUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
