// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsDialogBox/Public/WindowsDialogBoxFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsDialogBoxFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WindowsDialogBox();
	WINDOWSDIALOGBOX_API UClass* Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary();
	WINDOWSDIALOGBOX_API UClass* Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_NoRegister();
	WINDOWSDIALOGBOX_API UEnum* Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked();
	WINDOWSDIALOGBOX_API UEnum* Z_Construct_UEnum_WindowsDialogBox_EDialogButtons();
	WINDOWSDIALOGBOX_API UEnum* Z_Construct_UEnum_WindowsDialogBox_EDialogIcon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogButtons;
	static UEnum* EDialogButtons_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogButtons.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogButtons.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDialogBox_EDialogButtons, (UObject*)Z_Construct_UPackage__Script_WindowsDialogBox(), TEXT("EDialogButtons"));
		}
		return Z_Registration_Info_UEnum_EDialogButtons.OuterSingleton;
	}
	template<> WINDOWSDIALOGBOX_API UEnum* StaticEnum<EDialogButtons>()
	{
		return EDialogButtons_StaticEnum();
	}
	struct Z_Construct_UEnum_WindowsDialogBox_EDialogButtons_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WindowsDialogBox_EDialogButtons_Statics::Enumerators[] = {
		{ "EDialogButtons::MB_OK", (int64)EDialogButtons::MB_OK },
		{ "EDialogButtons::MB_OKCANCEL", (int64)EDialogButtons::MB_OKCANCEL },
		{ "EDialogButtons::MB_ABORTRETRYIGNORE", (int64)EDialogButtons::MB_ABORTRETRYIGNORE },
		{ "EDialogButtons::MB_YESNOCANCEL", (int64)EDialogButtons::MB_YESNOCANCEL },
		{ "EDialogButtons::MB_YESNO", (int64)EDialogButtons::MB_YESNO },
		{ "EDialogButtons::MB_RETRYCANCEL", (int64)EDialogButtons::MB_RETRYCANCEL },
		{ "EDialogButtons::MB_CANCELTRYCONTINUE", (int64)EDialogButtons::MB_CANCELTRYCONTINUE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WindowsDialogBox_EDialogButtons_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MB_ABORTRETRYIGNORE.DisplayName", "Abort, Retry, and Ignore" },
		{ "MB_ABORTRETRYIGNORE.Name", "EDialogButtons::MB_ABORTRETRYIGNORE" },
		{ "MB_CANCELTRYCONTINUE.DisplayName", "Cancel, Try Again, Continue" },
		{ "MB_CANCELTRYCONTINUE.Name", "EDialogButtons::MB_CANCELTRYCONTINUE" },
		{ "MB_OK.DisplayName", "OK" },
		{ "MB_OK.Name", "EDialogButtons::MB_OK" },
		{ "MB_OKCANCEL.DisplayName", "OK, Cancel" },
		{ "MB_OKCANCEL.Name", "EDialogButtons::MB_OKCANCEL" },
		{ "MB_RETRYCANCEL.DisplayName", "Retry, Cancel" },
		{ "MB_RETRYCANCEL.Name", "EDialogButtons::MB_RETRYCANCEL" },
		{ "MB_YESNO.DisplayName", "Yes, No" },
		{ "MB_YESNO.Name", "EDialogButtons::MB_YESNO" },
		{ "MB_YESNOCANCEL.DisplayName", "Yes, No, Cancel" },
		{ "MB_YESNOCANCEL.Name", "EDialogButtons::MB_YESNOCANCEL" },
		{ "ModuleRelativePath", "Public/WindowsDialogBoxFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDialogBox_EDialogButtons_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WindowsDialogBox,
		nullptr,
		"EDialogButtons",
		"EDialogButtons",
		Z_Construct_UEnum_WindowsDialogBox_EDialogButtons_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDialogBox_EDialogButtons_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDialogBox_EDialogButtons_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDialogBox_EDialogButtons_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WindowsDialogBox_EDialogButtons()
	{
		if (!Z_Registration_Info_UEnum_EDialogButtons.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogButtons.InnerSingleton, Z_Construct_UEnum_WindowsDialogBox_EDialogButtons_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogButtons.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogIcon;
	static UEnum* EDialogIcon_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogIcon.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogIcon.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDialogBox_EDialogIcon, (UObject*)Z_Construct_UPackage__Script_WindowsDialogBox(), TEXT("EDialogIcon"));
		}
		return Z_Registration_Info_UEnum_EDialogIcon.OuterSingleton;
	}
	template<> WINDOWSDIALOGBOX_API UEnum* StaticEnum<EDialogIcon>()
	{
		return EDialogIcon_StaticEnum();
	}
	struct Z_Construct_UEnum_WindowsDialogBox_EDialogIcon_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WindowsDialogBox_EDialogIcon_Statics::Enumerators[] = {
		{ "EDialogIcon::MB_NONE", (int64)EDialogIcon::MB_NONE },
		{ "EDialogIcon::MB_ICONERROR", (int64)EDialogIcon::MB_ICONERROR },
		{ "EDialogIcon::MB_ICONWARNING", (int64)EDialogIcon::MB_ICONWARNING },
		{ "EDialogIcon::MB_ICONINFORMATION", (int64)EDialogIcon::MB_ICONINFORMATION },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WindowsDialogBox_EDialogIcon_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MB_ICONERROR.DisplayName", "Stop-sign icon" },
		{ "MB_ICONERROR.Name", "EDialogIcon::MB_ICONERROR" },
		{ "MB_ICONINFORMATION.DisplayName", "Information-point icon" },
		{ "MB_ICONINFORMATION.Name", "EDialogIcon::MB_ICONINFORMATION" },
		{ "MB_ICONWARNING.DisplayName", "Exclamation-point icon" },
		{ "MB_ICONWARNING.Name", "EDialogIcon::MB_ICONWARNING" },
		{ "MB_NONE.DisplayName", "No icon" },
		{ "MB_NONE.Name", "EDialogIcon::MB_NONE" },
		{ "ModuleRelativePath", "Public/WindowsDialogBoxFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDialogBox_EDialogIcon_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WindowsDialogBox,
		nullptr,
		"EDialogIcon",
		"EDialogIcon",
		Z_Construct_UEnum_WindowsDialogBox_EDialogIcon_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDialogBox_EDialogIcon_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDialogBox_EDialogIcon_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDialogBox_EDialogIcon_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WindowsDialogBox_EDialogIcon()
	{
		if (!Z_Registration_Info_UEnum_EDialogIcon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogIcon.InnerSingleton, Z_Construct_UEnum_WindowsDialogBox_EDialogIcon_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogIcon.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogButtonClicked;
	static UEnum* EDialogButtonClicked_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogButtonClicked.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogButtonClicked.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked, (UObject*)Z_Construct_UPackage__Script_WindowsDialogBox(), TEXT("EDialogButtonClicked"));
		}
		return Z_Registration_Info_UEnum_EDialogButtonClicked.OuterSingleton;
	}
	template<> WINDOWSDIALOGBOX_API UEnum* StaticEnum<EDialogButtonClicked>()
	{
		return EDialogButtonClicked_StaticEnum();
	}
	struct Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked_Statics::Enumerators[] = {
		{ "EDialogButtonClicked::IDNONE", (int64)EDialogButtonClicked::IDNONE },
		{ "EDialogButtonClicked::IDOK", (int64)EDialogButtonClicked::IDOK },
		{ "EDialogButtonClicked::IDCANCEL", (int64)EDialogButtonClicked::IDCANCEL },
		{ "EDialogButtonClicked::IDABORT", (int64)EDialogButtonClicked::IDABORT },
		{ "EDialogButtonClicked::IDRETRY", (int64)EDialogButtonClicked::IDRETRY },
		{ "EDialogButtonClicked::IDIGNORE", (int64)EDialogButtonClicked::IDIGNORE },
		{ "EDialogButtonClicked::IDYES", (int64)EDialogButtonClicked::IDYES },
		{ "EDialogButtonClicked::IDNO", (int64)EDialogButtonClicked::IDNO },
		{ "EDialogButtonClicked::IDTRYAGAIN", (int64)EDialogButtonClicked::IDTRYAGAIN },
		{ "EDialogButtonClicked::IDCONTINUE", (int64)EDialogButtonClicked::IDCONTINUE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IDABORT.DisplayName", "Abort" },
		{ "IDABORT.Name", "EDialogButtonClicked::IDABORT" },
		{ "IDCANCEL.DisplayName", "Cancel" },
		{ "IDCANCEL.Name", "EDialogButtonClicked::IDCANCEL" },
		{ "IDCONTINUE.DisplayName", "Continue" },
		{ "IDCONTINUE.Name", "EDialogButtonClicked::IDCONTINUE" },
		{ "IDIGNORE.DisplayName", "Ignore" },
		{ "IDIGNORE.Name", "EDialogButtonClicked::IDIGNORE" },
		{ "IDNO.DisplayName", "No" },
		{ "IDNO.Name", "EDialogButtonClicked::IDNO" },
		{ "IDNONE.DisplayName", "None" },
		{ "IDNONE.Name", "EDialogButtonClicked::IDNONE" },
		{ "IDOK.DisplayName", "OK" },
		{ "IDOK.Name", "EDialogButtonClicked::IDOK" },
		{ "IDRETRY.DisplayName", "Retry" },
		{ "IDRETRY.Name", "EDialogButtonClicked::IDRETRY" },
		{ "IDTRYAGAIN.DisplayName", "TryAgain" },
		{ "IDTRYAGAIN.Name", "EDialogButtonClicked::IDTRYAGAIN" },
		{ "IDYES.DisplayName", "Yes" },
		{ "IDYES.Name", "EDialogButtonClicked::IDYES" },
		{ "ModuleRelativePath", "Public/WindowsDialogBoxFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WindowsDialogBox,
		nullptr,
		"EDialogButtonClicked",
		"EDialogButtonClicked",
		Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked()
	{
		if (!Z_Registration_Info_UEnum_EDialogButtonClicked.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogButtonClicked.InnerSingleton, Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogButtonClicked.InnerSingleton;
	}
	DEFINE_FUNCTION(UWindowsDialogBoxFunctionLibrary::execOpenDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogMessage);
		P_GET_ENUM(EDialogButtons,Z_Param_Buttons);
		P_GET_ENUM(EDialogIcon,Z_Param_Icon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDialogButtonClicked*)Z_Param__Result=UWindowsDialogBoxFunctionLibrary::OpenDialog(Z_Param_DialogTitle,Z_Param_DialogMessage,EDialogButtons(Z_Param_Buttons),EDialogIcon(Z_Param_Icon));
		P_NATIVE_END;
	}
	void UWindowsDialogBoxFunctionLibrary::StaticRegisterNativesUWindowsDialogBoxFunctionLibrary()
	{
		UClass* Class = UWindowsDialogBoxFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenDialog", &UWindowsDialogBoxFunctionLibrary::execOpenDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics
	{
		struct WindowsDialogBoxFunctionLibrary_eventOpenDialog_Parms
		{
			FString DialogTitle;
			FString DialogMessage;
			EDialogButtons Buttons;
			EDialogIcon Icon;
			EDialogButtonClicked ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogMessage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buttons_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Buttons;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Icon_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsDialogBoxFunctionLibrary_eventOpenDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogTitle_MetaData), Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogTitle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogMessage = { "DialogMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsDialogBoxFunctionLibrary_eventOpenDialog_Parms, DialogMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogMessage_MetaData), Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogMessage_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_Buttons_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsDialogBoxFunctionLibrary_eventOpenDialog_Parms, Buttons), Z_Construct_UEnum_WindowsDialogBox_EDialogButtons, METADATA_PARAMS(0, nullptr) }; // 3110885826
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_Icon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsDialogBoxFunctionLibrary_eventOpenDialog_Parms, Icon), Z_Construct_UEnum_WindowsDialogBox_EDialogIcon, METADATA_PARAMS(0, nullptr) }; // 2722398183
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsDialogBoxFunctionLibrary_eventOpenDialog_Parms, ReturnValue), Z_Construct_UEnum_WindowsDialogBox_EDialogButtonClicked, METADATA_PARAMS(0, nullptr) }; // 2700267753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_DialogMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_Buttons_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_Buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_Icon_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsDialogBox" },
		{ "ModuleRelativePath", "Public/WindowsDialogBoxFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary, nullptr, "OpenDialog", nullptr, nullptr, Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::WindowsDialogBoxFunctionLibrary_eventOpenDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::WindowsDialogBoxFunctionLibrary_eventOpenDialog_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowsDialogBoxFunctionLibrary);
	UClass* Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_NoRegister()
	{
		return UWindowsDialogBoxFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsDialogBox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsDialogBoxFunctionLibrary_OpenDialog, "OpenDialog" }, // 1404577328
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WindowsDialogBoxFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WindowsDialogBoxFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsDialogBoxFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::ClassParams = {
		&UWindowsDialogBoxFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UWindowsDialogBoxFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowsDialogBoxFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWindowsDialogBoxFunctionLibrary.OuterSingleton;
	}
	template<> WINDOWSDIALOGBOX_API UClass* StaticClass<UWindowsDialogBoxFunctionLibrary>()
	{
		return UWindowsDialogBoxFunctionLibrary::StaticClass();
	}
	UWindowsDialogBoxFunctionLibrary::UWindowsDialogBoxFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsDialogBoxFunctionLibrary);
	UWindowsDialogBoxFunctionLibrary::~UWindowsDialogBoxFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EDialogButtons_StaticEnum, TEXT("EDialogButtons"), &Z_Registration_Info_UEnum_EDialogButtons, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3110885826U) },
		{ EDialogIcon_StaticEnum, TEXT("EDialogIcon"), &Z_Registration_Info_UEnum_EDialogIcon, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2722398183U) },
		{ EDialogButtonClicked_StaticEnum, TEXT("EDialogButtonClicked"), &Z_Registration_Info_UEnum_EDialogButtonClicked, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2700267753U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsDialogBoxFunctionLibrary, UWindowsDialogBoxFunctionLibrary::StaticClass, TEXT("UWindowsDialogBoxFunctionLibrary"), &Z_Registration_Info_UClass_UWindowsDialogBoxFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsDialogBoxFunctionLibrary), 895289652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_293320298(TEXT("/Script/WindowsDialogBox"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WindowsDialogBox_Source_WindowsDialogBox_Public_WindowsDialogBoxFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
