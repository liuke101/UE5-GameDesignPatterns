// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPattern/MaleCharacterBuilder.h"

#include "BuilderPattern/ProductCharacter.h"

void UMaleCharacterBuilder::BuildBody()
{
	if(ProductCharacter)
	{
		ProductCharacter->Body = TEXT("男性身体");
	}
}

void UMaleCharacterBuilder::BuildWeapon()
{
	if(ProductCharacter)
	{
		ProductCharacter->Weapon = TEXT("刀");
	}
}

void UMaleCharacterBuilder::BuildCloth()
{
	if(ProductCharacter)
	{
		ProductCharacter->Cloth = TEXT("盔甲");
	}
}
