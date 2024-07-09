// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MVP_View.generated.h"

class UTextBlock;
class UButton;
class UMVP_Controller;
/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UMVP_View : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

	
public:
	void SetController(UMVP_Controller* InController);

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> TestButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> HealthText;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> ManaText;

	UFUNCTION()
	void OnTestButtonClicked();

private:
	UPROPERTY()
	TObjectPtr<UMVP_Controller> Controller;

};
