// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortniteGame/Public/AthenaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAthenaGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AAthenaGameMode();
	FORTNITEGAME_API UClass* Z_Construct_UClass_AAthenaGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortniteGame();
// End Cross Module References
	DEFINE_FUNCTION(AAthenaGameMode::execAddShield)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayerShield);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddShield(Z_Param_PlayerShield);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAthenaGameMode::execAddHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayerHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHealth(Z_Param_PlayerHealth);
		P_NATIVE_END;
	}
	void AAthenaGameMode::StaticRegisterNativesAAthenaGameMode()
	{
		UClass* Class = AAthenaGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHealth", &AAthenaGameMode::execAddHealth },
			{ "AddShield", &AAthenaGameMode::execAddShield },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics
	{
		struct AthenaGameMode_eventAddHealth_Parms
		{
			float PlayerHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AthenaGameMode_eventAddHealth_Parms, PlayerHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::NewProp_PlayerHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Public/AthenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAthenaGameMode, nullptr, "AddHealth", nullptr, nullptr, Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::AthenaGameMode_eventAddHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::AthenaGameMode_eventAddHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAthenaGameMode_AddHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAthenaGameMode_AddHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics
	{
		struct AthenaGameMode_eventAddShield_Parms
		{
			float PlayerShield;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerShield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::NewProp_PlayerShield = { "PlayerShield", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AthenaGameMode_eventAddShield_Parms, PlayerShield), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::NewProp_PlayerShield,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Public/AthenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAthenaGameMode, nullptr, "AddShield", nullptr, nullptr, Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::AthenaGameMode_eventAddShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::AthenaGameMode_eventAddShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAthenaGameMode_AddShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAthenaGameMode_AddShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAthenaGameMode);
	UClass* Z_Construct_UClass_AAthenaGameMode_NoRegister()
	{
		return AAthenaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAthenaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HackDetected_MetaData[];
#endif
		static void NewProp_HackDetected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HackDetected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAthenaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FortniteGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAthenaGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAthenaGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAthenaGameMode_AddHealth, "AddHealth" }, // 750529827
		{ &Z_Construct_UFunction_AAthenaGameMode_AddShield, "AddShield" }, // 3763683660
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAthenaGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAthenaGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AthenaGameMode.h" },
		{ "ModuleRelativePath", "Public/AthenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAthenaGameMode_Statics::NewProp_HackDetected_MetaData[] = {
		{ "Category", "AthenaGameMode" },
		{ "ModuleRelativePath", "Public/AthenaGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AAthenaGameMode_Statics::NewProp_HackDetected_SetBit(void* Obj)
	{
		((AAthenaGameMode*)Obj)->HackDetected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAthenaGameMode_Statics::NewProp_HackDetected = { "HackDetected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAthenaGameMode), &Z_Construct_UClass_AAthenaGameMode_Statics::NewProp_HackDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAthenaGameMode_Statics::NewProp_HackDetected_MetaData), Z_Construct_UClass_AAthenaGameMode_Statics::NewProp_HackDetected_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAthenaGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAthenaGameMode_Statics::NewProp_HackDetected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAthenaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAthenaGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAthenaGameMode_Statics::ClassParams = {
		&AAthenaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAthenaGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAthenaGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAthenaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAthenaGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAthenaGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAthenaGameMode()
	{
		if (!Z_Registration_Info_UClass_AAthenaGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAthenaGameMode.OuterSingleton, Z_Construct_UClass_AAthenaGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAthenaGameMode.OuterSingleton;
	}
	template<> FORTNITEGAME_API UClass* StaticClass<AAthenaGameMode>()
	{
		return AAthenaGameMode::StaticClass();
	}
	AAthenaGameMode::AAthenaGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAthenaGameMode);
	AAthenaGameMode::~AAthenaGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_AthenaGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_AthenaGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAthenaGameMode, AAthenaGameMode::StaticClass, TEXT("AAthenaGameMode"), &Z_Registration_Info_UClass_AAthenaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAthenaGameMode), 3148329251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_AthenaGameMode_h_875340718(TEXT("/Script/FortniteGame"),
		Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_AthenaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sonic_Documents_Unreal_Projects_FortniteGame_Remake_UE5_Source_FortniteGame_Public_AthenaGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
