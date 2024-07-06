// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPattern/FemaleCharacterBuilder.h"

#include "BuilderPattern/ProductCharacter.h"

void UFemaleCharacterBuilder::BuildBody()
{
	if(ProductCharacter)
	{
		ProductCharacter->Body = TEXT("女性身体");
	}
}

void UFemaleCharacterBuilder::BuildWeapon()
{
	if(ProductCharacter)
	{
		ProductCharacter->Weapon = TEXT("剑");
	}
}

void UFemaleCharacterBuilder::BuildCloth()
{
	if(ProductCharacter)
	{
		ProductCharacter->Cloth = TEXT("长裙");
	}
}
