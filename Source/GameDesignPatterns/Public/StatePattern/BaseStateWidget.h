// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateInterface.h"
#include "Blueprint/UserWidget.h"
#include "BaseStateWidget.generated.h"

/**
 *  状态具体类
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UBaseStateWidget : public UUserWidget, public IStateInterface
{
	GENERATED_BODY()

public:
	virtual void EnterState() override;
	virtual void ExitState() override;
};
