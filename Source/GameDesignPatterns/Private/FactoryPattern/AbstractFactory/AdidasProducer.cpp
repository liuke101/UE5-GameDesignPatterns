// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/AbstractFactory/AdidasProducer.h"

#include "FactoryPattern/Product/AdidasCloth.h"
#include "FactoryPattern/Product/AdidasShoe.h"

void UAdidasProducer::CreateShoe()
{
	if(UWorld* World = GetWorld())
	{
		World->SpawnActor(AAdidasShoe::StaticClass());
	}
}

void UAdidasProducer::CreateCloth()
{
	if(UWorld* World = GetWorld())
	{
		World->SpawnActor(AAdidasCloth::StaticClass());
	}
}
