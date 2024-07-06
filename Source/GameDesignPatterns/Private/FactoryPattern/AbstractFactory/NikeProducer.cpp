// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/AbstractFactory/NikeProducer.h"

#include "FactoryPattern/Product/NikeCloth.h"
#include "FactoryPattern/Product/NikeShoe.h"

void UNikeProducer::CreateShoe()
{
	if(UWorld* World = GetWorld())
	{
		World->SpawnActor(ANikeShoe::StaticClass());
	}
}

void UNikeProducer::CreateCloth()
{
	if(UWorld* World = GetWorld())
	{
		World->SpawnActor(ANikeCloth::StaticClass());
	}
}
