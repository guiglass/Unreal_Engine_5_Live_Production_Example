// Copyright 2018 Sean Chen. All Rights Reserved.

using UnrealBuildTool;

public class APSLiveLinkEditor : ModuleRules
{
    public APSLiveLinkEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

   //     PublicIncludePaths.AddRange(
   //         new string[] {
   //             "APSLiveLinkEditor/Public"
			//	// ... add public include paths required here ...
			//}
   //         );


   //     PrivateIncludePaths.AddRange(
   //         new string[] {
   //             "APSLiveLinkEditor/Private",
			//	// ... add other private include paths required here ...
			//}
   //         );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "APSLiveLink"

				// ... add other public dependencies that you statically link with here ...
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "AnimGraph",
                "BlueprintGraph"
				// ... add private dependencies that you statically link with here ...	
			}
            );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );
    }
}
