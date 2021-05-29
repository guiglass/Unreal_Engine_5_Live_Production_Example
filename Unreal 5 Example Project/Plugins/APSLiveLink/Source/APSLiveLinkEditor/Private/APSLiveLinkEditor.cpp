// Copyright 2018 Sean Chen. All Rights Reserved.

#include "APSLiveLinkEditor.h"

#define LOCTEXT_NAMESPACE "FAPSLiveLinkEditorModule"

void FAPSLiveLinkEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FAPSLiveLinkEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAPSLiveLinkEditorModule, APSLiveLinkEditor)