#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FMapboxLandscapePathsModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void RegisterMenus();
	void OnBakeRoadGraphClicked();
	void OnOpenRoadGraphFolderClicked();
};
