// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatePattern/BaseStateWidget.h"
#include "UI_SaveMenu.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UUI_SaveMenu : public UBaseStateWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnReturnStartMenu();
public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ReturnStartMenuButton;
};
