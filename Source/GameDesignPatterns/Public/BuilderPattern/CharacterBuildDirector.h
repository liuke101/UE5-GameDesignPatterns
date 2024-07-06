// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterBuildDirector.generated.h"

class AProductCharacter;
class UCharacterBuilder;
/**
 * 指挥者
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UCharacterBuildDirector : public UObject
{
	GENERATED_BODY()

public:
	UCharacterBuildDirector();

	FORCEINLINE void SetCharacterBuilder(UCharacterBuilder* InCharacterBuilder) {CharacterBuilder = InCharacterBuilder;}

	AProductCharacter* Construct() const;
private:
	UPROPERTY()
	UCharacterBuilder* CharacterBuilder;
};
