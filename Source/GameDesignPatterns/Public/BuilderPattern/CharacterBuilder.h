// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterBuilder.generated.h"

class AProductCharacter;
/**
 *  建造者抽象基类
 */
UCLASS(Abstract)
class GAMEDESIGNPATTERNS_API UCharacterBuilder : public UObject
{
	GENERATED_BODY()

	
public:
	UCharacterBuilder();

	virtual void BuildBody();
	virtual void BuildWeapon();
	virtual void BuildCloth();

	FORCEINLINE AProductCharacter* GetProductCharacter() const {return ProductCharacter;}

	UPROPERTY()
	AProductCharacter* ProductCharacter;
};
