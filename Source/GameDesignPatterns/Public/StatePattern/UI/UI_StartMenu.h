// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatePattern/BaseStateWidget.h"
#include "UI_StartMenu.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UUI_StartMenu : public UBaseStateWidget
{
	GENERATED_BODY()

	
	virtual void NativeConstruct() override;
	
public:
	//开始游戏
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> StartGameButton;

	//存档
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SaveGameButton;

	//选项
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OptionButton;

	//退出
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ExitButton;

	UFUNCTION()
	void OnStartGame();

	UFUNCTION()
	void OnSaveGame();

	UFUNCTION()
	void OnOption();

	UFUNCTION()
	void OnExitGame();
};
