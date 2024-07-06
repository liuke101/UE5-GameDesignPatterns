// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/FactoryMethod/NikeFactory.h"

#include "FactoryPattern/Product/NikeShoe.h"

void UNikeFactory::CreateShoe()
{
	if(UWorld* World = GetWorld())
	{
		World->SpawnActor(ANikeShoe::StaticClass());
	}
}
