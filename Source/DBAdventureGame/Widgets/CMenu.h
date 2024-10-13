#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CMenu.generated.h"

UCLASS()
class DBADVENTUREGAME_API UCMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetInputGameMode();
	void SetInputUIMode();

};
