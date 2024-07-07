// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatePattern/BaseStateWidget.h"
#include "UI_LevelLoading.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UUI_LevelLoading : public UBaseStateWidget
{
	GENERATED_BODY()

public:
	virtual void EnterState() override;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> LoadingText;
};
