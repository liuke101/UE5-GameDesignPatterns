// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPattern/CharacterBuilder.h"

#include "BuilderPattern/ProductCharacter.h"

UCharacterBuilder::UCharacterBuilder()
{
	if(UWorld* World = UObject::GetWorld())
	{
		ProductCharacter = Cast<AProductCharacter>(World->SpawnActor(AProductCharacter::StaticClass()));
	}
}

void UCharacterBuilder::BuildBody()
{
}

void UCharacterBuilder::BuildWeapon()
{
}

void UCharacterBuilder::BuildCloth()
{
}
