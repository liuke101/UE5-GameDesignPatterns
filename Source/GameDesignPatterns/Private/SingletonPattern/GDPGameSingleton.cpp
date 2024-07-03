// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDesignPatterns/Public/SingletonPattern/GDPGameSingleton.h"

UGDPGameSingleton* UGDPGameSingleton::GetGDPGameSingletonInstance()
{
	if (GEngine)
	{
		if(UGDPGameSingleton* Instance = Cast<UGDPGameSingleton>(GEngine->GameSingleton))
		{
			return Instance;
		}
	}
	
	return nullptr;
}

void UGDPGameSingleton::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UGDPGameSingleton 测试调用"));
}
