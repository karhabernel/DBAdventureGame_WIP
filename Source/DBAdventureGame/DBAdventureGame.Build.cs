// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DBAdventureGame : ModuleRules
{
	public DBAdventureGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore" 
		});

        PublicIncludePaths.Add(ModuleDirectory);

        PrivateDependencyModuleNames.AddRange(new string[] {  });

	}
}
