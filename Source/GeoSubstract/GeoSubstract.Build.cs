// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GeoSubstract : ModuleRules
{
	public GeoSubstract(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
            "Slate" 
			, "GeometryCore"
            , "MeshConversion"
            , "MeshDescription"
            , "StaticMeshDescription"
            , "CGAL_Lib"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"GeoSubstract",
			"GeoSubstract/Variant_Platforming",
			"GeoSubstract/Variant_Platforming/Animation",
			"GeoSubstract/Variant_Combat",
			"GeoSubstract/Variant_Combat/AI",
			"GeoSubstract/Variant_Combat/Animation",
			"GeoSubstract/Variant_Combat/Gameplay",
			"GeoSubstract/Variant_Combat/Interfaces",
			"GeoSubstract/Variant_Combat/UI",
			"GeoSubstract/Variant_SideScrolling",
			"GeoSubstract/Variant_SideScrolling/AI",
			"GeoSubstract/Variant_SideScrolling/Gameplay",
			"GeoSubstract/Variant_SideScrolling/Interfaces",
			"GeoSubstract/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
