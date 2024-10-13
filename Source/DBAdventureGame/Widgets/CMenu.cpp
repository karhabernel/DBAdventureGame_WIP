#include "CMenu.h"

void UCMenu::SetInputGameMode()
{
	RemoveFromParent();
	bIsFocusable = false;

	FInputModeGameOnly inputMode;

	UWorld* world = GetWorld();
	if (world == nullptr) return;

	APlayerController* controller = world->GetFirstPlayerController();
	if (controller == nullptr) return;

	controller->SetInputMode(inputMode);
	controller->bShowMouseCursor = false;
}

void UCMenu::SetInputUIMode()
{
	AddToViewport();
	bIsFocusable = true;

	FInputModeUIOnly inputMode;
	inputMode.SetWidgetToFocus(TakeWidget()); //스마트포인터 요구
	inputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	UWorld* world = GetWorld();
	if (world == nullptr) return;

	APlayerController* controller = world->GetFirstPlayerController();
	controller->bShowMouseCursor = true;
	controller->SetInputMode(inputMode);
}
