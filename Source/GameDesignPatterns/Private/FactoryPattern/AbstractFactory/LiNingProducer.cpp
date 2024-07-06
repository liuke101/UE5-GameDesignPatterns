// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/AbstractFactory/LiNingProducer.h"

#include "FactoryPattern/Product/LiNingCloth.h"
#include "FactoryPattern/Product/LiNingShoe.h"

void ULiNingProducer::CreateShoe()
{
	if(UWorld* World = GetWorld())
	{
		World->SpawnActor(ALiNingShoe::StaticClass());
	}
}

void ULiNingProducer::CreateCloth()
{
	if(UWorld* World = GetWorld())
	{
		World->SpawnActor(ALiNingCloth::StaticClass());
	}
}
