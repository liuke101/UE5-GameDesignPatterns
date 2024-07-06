// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/FactoryMethod/AdidasFactory.h"

#include "FactoryPattern/Product/AdidasShoe.h"

void UAdidasFactory::CreateShoe()
{
	if(UWorld* World = GetWorld())
	{
		World->SpawnActor(AAdidasShoe::StaticClass());
	}
}

