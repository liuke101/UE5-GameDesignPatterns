// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/FactoryMethod/LiNingFactory.h"

#include "FactoryPattern/Product/LiNingShoe.h"


void ULiNingFactory::CreateShoe()
{
	if(UWorld* World = GetWorld())
	{
		World->SpawnActor(ALiNingShoe::StaticClass());
	}
}
