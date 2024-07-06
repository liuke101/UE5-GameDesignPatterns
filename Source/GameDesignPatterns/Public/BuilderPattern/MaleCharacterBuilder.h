// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBuilder.h"
#include "MaleCharacterBuilder.generated.h"

/**
 * 男性角色建造者
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UMaleCharacterBuilder : public UCharacterBuilder
{
	GENERATED_BODY()
public:
	virtual void BuildBody() override;
	virtual void BuildWeapon() override;
	virtual void BuildCloth() override;
};
