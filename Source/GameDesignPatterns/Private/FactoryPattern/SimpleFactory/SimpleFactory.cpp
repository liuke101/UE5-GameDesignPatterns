// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/SimpleFactory/SimpleFactory.h"

#include "FactoryPattern/Product/AdidasShoe.h"
#include "FactoryPattern/Product/LiNingShoe.h"
#include "FactoryPattern/Product/NikeShoe.h"

void USimpleFactory::CreateShoe(EShoeType InType)
{
	//实例化
	if(UWorld* World = GetWorld())
	{
		switch (InType)
		{
		case EShoeType::ST_Nike:
			World->SpawnActor(ANikeShoe::StaticClass());
			break;
		case EShoeType::ST_Adidas:
			World->SpawnActor(AAdidasShoe::StaticClass());
			break;
		case EShoeType::ST_LiNing:
			World->SpawnActor(ALiNingShoe::StaticClass());
			break;
		default:
			break;
		}
	}
}
