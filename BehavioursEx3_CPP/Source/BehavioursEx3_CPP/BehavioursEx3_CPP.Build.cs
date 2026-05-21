// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BehavioursEx3_CPP : ModuleRules
{
	public BehavioursEx3_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"BehavioursEx3_CPP",
			"BehavioursEx3_CPP/Variant_Strategy",
			"BehavioursEx3_CPP/Variant_Strategy/UI",
			"BehavioursEx3_CPP/Variant_TwinStick",
			"BehavioursEx3_CPP/Variant_TwinStick/AI",
			"BehavioursEx3_CPP/Variant_TwinStick/Gameplay",
			"BehavioursEx3_CPP/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
