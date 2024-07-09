// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVP_Model.h"
#include "UObject/Object.h"
#include "MVP_Controller.generated.h"

class UMVP_Model;
/**
 * 
 */



UCLASS()
class GAMEDESIGNPATTERNS_API UMVP_Controller : public UObject
{
	GENERATED_BODY()

public:
	//声明多播委托
	AttributeChangedDelegate OnModelHealthChanged;
	AttributeChangedDelegate OnModelManaChanged;
	
	void UpdateHealth(int32 NewHealth);
	void UpdateMana(int32 NewMana);
	
	void SetModel(UMVP_Model* InModel);
private:
	UPROPERTY()
	TObjectPtr<UMVP_Model> Model;
};
