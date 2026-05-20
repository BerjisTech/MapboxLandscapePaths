using UnrealBuildTool;

public class MapboxLandscapePaths : ModuleRules
{
	public MapboxLandscapePaths(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"MapboxLandscape",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"DeveloperSettings",
			"Slate",
			"SlateCore",
			"UMG",
			"HTTP",
			"ImageWrapper",
			"Json",
			"JsonUtilities",
			"AssetTools",
			"AssetRegistry",
			"EditorFramework",
			"UnrealEd",
			"Projects",
			"RenderCore",
			"RHI",
		});
	}
}
