// Copyright 2018 Sean Chen. All Rights Reserved.

using UnrealBuildTool;

public class APSLiveLink : ModuleRules
{
    public APSLiveLink(ReadOnlyTargetRules Target) : base(Target)
    {
	    bUsePrecompiled = true;
	    
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

   //     PublicIncludePaths.AddRange(
   //         new string[] {
   //             "APSLiveLink/Public"
			//	// ... add public include paths required here ...
			//}
   //         );


   //     PrivateIncludePaths.AddRange(
   //         new string[] {
   //             "APSLiveLink/Private",
			//	// ... add other private include paths required here ...
			//}
   //         );


        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "Sockets", 
            "Networking", 
            "HTTP", 
            "Json", 
            "JsonUtilities",
            "CoreUObject",
            "Engine",
            "AnimGraph", 
            "AnimGraphRuntime", 
            "BlueprintGraph"
            /*"APSCore"*/
			// ... add other public dependencies that you statically link with here ...
		});


        PrivateDependencyModuleNames.AddRange(new string[]
        {
	        "AnimGraph", 
	        "AnimGraphRuntime", 
	        "BlueprintGraph"
        });


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );
    }
}
