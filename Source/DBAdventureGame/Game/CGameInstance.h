#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CGameInstance.generated.h"

UCLASS()
class DBADVENTUREGAME_API UCGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Exec)
	void LoadMenu();

	//UFUNCTION(BlueprintCallable, Exec)
	//void LoadGameMenu();

private:
	TSubclassOf<class UUserWidget> MenuWidgetClass;
	class UCMainMenu* MenuWidget;

	TSubclassOf<class UUserWidget> GameWidgetClass;
	class UCGameMenu* GameWidget;
};
