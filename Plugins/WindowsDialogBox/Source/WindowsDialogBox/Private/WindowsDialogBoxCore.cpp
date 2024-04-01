// Copyright Isara Tech., Inc. All Rights Reserved.

#include "WindowsDialogBoxCore.h"

#include "shlobj.h" 
#include <Runtime\Core\Public\Windows\COMPointer.h>

EDialogButtonClicked WindowsDialogBoxCore::OpenDialog(const FString& DialogTitle, const FString& DialogMessage,
	EDialogButtons Buttons, EDialogIcon Icon)
{
	return static_cast<EDialogButtonClicked>(OpenDialogInner(NULL, DialogTitle, DialogMessage, static_cast<uint8>(Buttons) | static_cast<uint8>(Icon)));
}

int WindowsDialogBoxCore::OpenDialogInner(const void* ParentWindowHandle, const FString& DialogTitle, const FString& DialogMessage, const unsigned int DialogType)
{
	// documentation : https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox
#pragma region Windows
	//FScopedSystemModalMode SystemModalScope;
#if PLATFORM_WINDOWS
	return MessageBox(
		(HWND)ParentWindowHandle,
		*DialogMessage,
		*DialogTitle,
		DialogType
	);
#endif
#pragma endregion

#pragma region LINUX
#if PLATFORM_LINUX
	return -1;
#endif
#pragma endregion
	return -1;	
}