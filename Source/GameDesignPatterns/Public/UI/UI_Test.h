// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI_Test.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UUI_Test : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
	UFUNCTION()
	void SingletonTest();

private:
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> SingletonTestButton;

	
};
