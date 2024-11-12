// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Sensei_CPP : ModuleRules
{
	public Sensei_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
