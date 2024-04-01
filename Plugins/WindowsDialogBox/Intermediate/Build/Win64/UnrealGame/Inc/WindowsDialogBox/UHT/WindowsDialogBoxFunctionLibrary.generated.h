// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WindowsDialogBoxFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDialogButtonClicked : uint8;
enum class EDialogButtons : uint8;
enum class EDialogIcon : uint8;
#ifdef WINDOWSDIALOGBOX_WindowsDialogBoxFunctionLibrary_generated_h
#error "WindowsDialogBoxFunctionLibrary.generated.h already included, missing '#pragma once' in WindowsDialogBoxFunctionLibrary.h"
#endif
#define WINDOWSDIALOGBOX_WindowsDialogBoxFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenDialog);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsDialogBoxFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsDialogBoxFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsDialogBox"), NO_API) \
	DECLARE_SERIALIZER(UWindowsDialogBoxFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsDialogBoxFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsDialogBoxFunctionLibrary(UWindowsDialogBoxFunctionLibrary&&); \
	NO_API UWindowsDialogBoxFunctionLibrary(const UWindowsDialogBoxFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsDialogBoxFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsDialogBoxFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsDialogBoxFunctionLibrary) \
	NO_API virtual ~UWindowsDialogBoxFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_48_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINDOWSDIALOGBOX_API UClass* StaticClass<class UWindowsDialogBoxFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h


#define FOREACH_ENUM_EDIALOGBUTTONS(op) \
	op(EDialogButtons::MB_OK) \
	op(EDialogButtons::MB_OKCANCEL) \
	op(EDialogButtons::MB_ABORTRETRYIGNORE) \
	op(EDialogButtons::MB_YESNOCANCEL) \
	op(EDialogButtons::MB_YESNO) \
	op(EDialogButtons::MB_RETRYCANCEL) \
	op(EDialogButtons::MB_CANCELTRYCONTINUE) 

enum class EDialogButtons : uint8;
template<> struct TIsUEnumClass<EDialogButtons> { enum { Value = true }; };
template<> WINDOWSDIALOGBOX_API UEnum* StaticEnum<EDialogButtons>();

#define FOREACH_ENUM_EDIALOGICON(op) \
	op(EDialogIcon::MB_NONE) \
	op(EDialogIcon::MB_ICONERROR) \
	op(EDialogIcon::MB_ICONWARNING) \
	op(EDialogIcon::MB_ICONINFORMATION) 

enum class EDialogIcon : uint8;
template<> struct TIsUEnumClass<EDialogIcon> { enum { Value = true }; };
template<> WINDOWSDIALOGBOX_API UEnum* StaticEnum<EDialogIcon>();

#define FOREACH_ENUM_EDIALOGBUTTONCLICKED(op) \
	op(EDialogButtonClicked::IDNONE) \
	op(EDialogButtonClicked::IDOK) \
	op(EDialogButtonClicked::IDCANCEL) \
	op(EDialogButtonClicked::IDABORT) \
	op(EDialogButtonClicked::IDRETRY) \
	op(EDialogButtonClicked::IDIGNORE) \
	op(EDialogButtonClicked::IDYES) \
	op(EDialogButtonClicked::IDNO) \
	op(EDialogButtonClicked::IDTRYAGAIN) \
	op(EDialogButtonClicked::IDCONTINUE) 

enum class EDialogButtonClicked : uint8;
template<> struct TIsUEnumClass<EDialogButtonClicked> { enum { Value = true }; };
template<> WINDOWSDIALOGBOX_API UEnum* StaticEnum<EDialogButtonClicked>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
