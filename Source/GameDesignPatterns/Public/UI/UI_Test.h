// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI_Test.generated.h"

class UComboBoxString;
class UComboBoxKey;
class UComboBox;
class UTextBlock;
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

	UFUNCTION()
	void SimpleFactoryPatternTest();

	UFUNCTION()
	void FactoryMethodPatternTest();

	UFUNCTION()
	void AbstractFactoryPatternTest();

	UFUNCTION()
	void BuilderPatternTest();

	UFUNCTION()
	void CommandPatternTest();

	UFUNCTION()
	void StatePatternTest();

	UFUNCTION()
	void StrategyPatternTest();
public:
	
private:
	//单例模式 
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> SingletonTestButton;

	//简单工厂模式
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> SimpleFactoryTestButton;

	//工厂方法模式
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton>FactoryMethodTestButton;

	//抽象工厂模式 
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> AbstractFactoryTestButton;

	//建造者模式
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> BuilderTestButton;

	//命令模式
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> CommandTestButton;

	//状态模式
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> StateTestButton;

	//策略模式
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> StrategyTestButton;
};
