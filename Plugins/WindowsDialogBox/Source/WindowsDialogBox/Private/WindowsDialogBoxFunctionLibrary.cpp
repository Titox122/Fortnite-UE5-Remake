// Copyright Isara Tech., Inc. All Rights Reserved.

#include "WindowsDialogBoxFunctionLibrary.h"

#include "WindowsDialogBoxCore.h"

EDialogButtonClicked UWindowsDialogBoxFunctionLibrary::OpenDialog(const FString& DialogTitle,
                                                                  const FString& DialogMessage, EDialogButtons Buttons, EDialogIcon Icon)
{
    return WindowsDialogBoxCore::OpenDialog(DialogTitle, DialogMessage, Buttons, Icon);
}
