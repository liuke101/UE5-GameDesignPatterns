// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MVP_Model.generated.h"

/**
 * 
 */
DECLARE_MULTICAST_DELEGATE_OneParam(AttributeChangedDelegate, int32);

UCLASS()
class GAMEDESIGNPATTERNS_API UMVP_Model : public UObject
{
	GENERATED_BODY()

public:
	AttributeChangedDelegate OnHealthChanged;
	AttributeChangedDelegate OnManaChanged;
	
	int32 Health;
	int32 Mana;
};
