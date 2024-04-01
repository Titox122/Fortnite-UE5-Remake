// Copyright Isara Tech., Inc. All Rights Reserved.

#pragma once
#pragma warning(disable : 4668)

#include "CoreMinimal.h"

#include "WindowsDialogBoxFunctionLibrary.h"

/**
 * 
 */
class WINDOWSDIALOGBOX_API WindowsDialogBoxCore
{
public:

	static EDialogButtonClicked OpenDialog(const FString& DialogTitle, const FString& DialogMessage, EDialogButtons Buttons, EDialogIcon Icon);
	
private:
	static int OpenDialogInner(const void* ParentWindowHandle, const FString& DialogTitle, const FString& DialogMessage, const unsigned int DialogType);
};
