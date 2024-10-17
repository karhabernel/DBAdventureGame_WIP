#include "CMainMenu.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/WidgetSwitcher.h"
#include "Components/TextBlock.h"
#include "CMainMenu.h"

UCMainMenu::UCMainMenu(const FObjectInitializer& ObjectInitializer)
{

}

bool UCMainMenu::Initialize()
{
	bool bSuccess = Super::Initialize();
	if (bSuccess == false) return false;

	if (NewGameButton == nullptr) return false;
	NewGameButton->OnClicked.AddDynamic(this, &UCMainMenu::StartNewGame);

	if (LoadGameButton == nullptr) return false;
	LoadGameButton->OnClicked.AddDynamic(this, &UCMainMenu::LoadGame);

	if (OptionButton == nullptr) return false;
	OptionButton->OnClicked.AddDynamic(this, &UCMainMenu::Option);

	if (OptionButton == nullptr) return false;
	OptionButton->OnClicked.AddDynamic(this, &UCMainMenu::QuitGame);

	return true;
}

void UCMainMenu::StartNewGame()
{
}

void UCMainMenu::LoadGame()
{
}

void UCMainMenu::Option()
{
}

void UCMainMenu::QuitGame()
{
}
