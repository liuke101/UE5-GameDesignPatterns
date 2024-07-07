// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UObject/Object.h"
#include "StateContextHUD.generated.h"

class UBaseStateWidget;
/**
 *  状态上下文类，用于管理状态，这里使用HUD进行管理
 */
UCLASS()
class GAMEDESIGNPATTERNS_API AStateContextHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
public:
	
	//改变状态
	void ChangeState(UBaseStateWidget* StateWidget);

	//退出所有状态
	//void ExitAllState();

protected:
	//当前状态
	UPROPERTY()
	UBaseStateWidget* CurrentState = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "State")
	TSubclassOf<UBaseStateWidget> StartMenuClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "State")
	TSubclassOf<UBaseStateWidget> OptionMenuClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "State")
	TSubclassOf<UBaseStateWidget> LevelLoadingClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "State")
	TSubclassOf<UBaseStateWidget> SaveMenuClass;

public:
	UPROPERTY()
	UBaseStateWidget* StartMenu = nullptr;

	UPROPERTY()
	UBaseStateWidget* OptionMenu = nullptr;

	UPROPERTY()
	UBaseStateWidget* LevelLoading = nullptr;

	UPROPERTY()
	UBaseStateWidget* SaveMenu = nullptr;
};
