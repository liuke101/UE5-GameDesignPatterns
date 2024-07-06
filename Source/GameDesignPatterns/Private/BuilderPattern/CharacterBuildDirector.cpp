// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPattern/CharacterBuildDirector.h"

#include "BuilderPattern/CharacterBuilder.h"

UCharacterBuildDirector::UCharacterBuildDirector()
	: CharacterBuilder(nullptr)
{
}


AProductCharacter* UCharacterBuildDirector::Construct() const
{
	if(CharacterBuilder)
	{
		CharacterBuilder->BuildBody();
		CharacterBuilder->BuildWeapon();
		CharacterBuilder->BuildCloth();

		return CharacterBuilder->GetProductCharacter();
	}

	return nullptr;
}
