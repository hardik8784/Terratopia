// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Terratopia : ModuleRules
{
	public Terratopia(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}