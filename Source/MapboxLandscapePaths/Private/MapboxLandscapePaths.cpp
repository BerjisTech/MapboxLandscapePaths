#include "MapboxLandscapePaths.h"

#include "MissionPathLibrary.h"

#include "ContentBrowserModule.h"
#include "Editor.h"
#include "IContentBrowserSingleton.h"
#include "ToolMenus.h"

#define LOCTEXT_NAMESPACE "FMapboxLandscapePathsModule"

void FMapboxLandscapePathsModule::StartupModule()
{
	UToolMenus::RegisterStartupCallback(
		FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FMapboxLandscapePathsModule::RegisterMenus));
}

void FMapboxLandscapePathsModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);
}

void FMapboxLandscapePathsModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);

	UToolMenu* ToolsMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Tools");
	if (!ToolsMenu) return;

	FToolMenuSection& Section = ToolsMenu->FindOrAddSection(
		"MapboxLandscape",
		LOCTEXT("MapboxLandscapeSection", "Mapbox Landscape"));

	Section.AddMenuEntry(
		"BakeRoadGraph",
		LOCTEXT("BakeRoadGraphLabel", "Bake Mapbox Road Graph"),
		LOCTEXT("BakeRoadGraphTooltip",
			"Fetches Mapbox vector tiles covering the active MapboxLandscape area and bakes a URoadGraphAsset to /Game/MapboxLandscapePaths/RG_Roads. "
			"Run this once per game world; it's the input for A* on Mission Path actors."),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateRaw(this, &FMapboxLandscapePathsModule::OnBakeRoadGraphClicked)));

	Section.AddMenuEntry(
		"OpenRoadGraphFolder",
		LOCTEXT("OpenRoadGraphFolderLabel", "Show Road Graph in Content Browser"),
		LOCTEXT("OpenRoadGraphFolderTooltip",
			"Reveals /Game/MapboxLandscapePaths/ in the Content Browser. Your baked RG_Roads asset (and any per-mission PathDefinition assets) live here."),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateRaw(this, &FMapboxLandscapePathsModule::OnOpenRoadGraphFolderClicked)));
}

void FMapboxLandscapePathsModule::OnBakeRoadGraphClicked()
{
	UWorld* World = GEditor ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (!World) return;
	// Existing function handles toast/dialog feedback for invalid setups.
	UMissionPathLibrary::BakeRoadGraphFromActiveContext(World,
		TEXT("/Game/MapboxLandscapePaths"), TEXT("RG_Roads"), -1);
}

void FMapboxLandscapePathsModule::OnOpenRoadGraphFolderClicked()
{
	FContentBrowserModule& CB = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FString> Folders = { TEXT("/Game/MapboxLandscapePaths") };
	CB.Get().SyncBrowserToFolders(Folders);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMapboxLandscapePathsModule, MapboxLandscapePaths)
