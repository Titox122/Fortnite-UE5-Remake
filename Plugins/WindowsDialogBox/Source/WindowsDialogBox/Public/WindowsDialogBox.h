// Copyright Isara Tech., Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FWindowsDialogBoxModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
