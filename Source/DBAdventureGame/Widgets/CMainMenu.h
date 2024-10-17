#pragma once

#include "CoreMinimal.h"
#include "CMenu.h"
#include "CMainMenu.generated.h"

UCLASS()
class DBADVENTUREGAME_API UCMainMenu : public UCMenu
{
	GENERATED_BODY()

public:
	UCMainMenu(const FObjectInitializer& ObjectInitializer);

protected:
	virtual bool Initialize() override;

private:
	UFUNCTION()
		void StartNewGame();

	UFUNCTION()
		void LoadGame();

	UFUNCTION()
		void Option();

	UFUNCTION()
		void QuitGame();

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* NewGameButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* LoadGameButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* OptionButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* QuitGameButton;
	

};
