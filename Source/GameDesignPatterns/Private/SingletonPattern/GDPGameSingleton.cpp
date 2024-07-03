// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDesignPatterns/Public/SingletonPattern/GDPGameSingleton.h"

UGDPGameSingleton* UGDPGameSingleton::GetGDPGameSingletonInstance()
{
	UGDPGameSingleton* Instance = nullptr;
	
	if (GEngine)
	{
		Instance = Cast<UGDPGameSingleton>(GEngine->GameSingleton);
	}
	
	return Instance;
}

void UGDPGameSingleton::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UGDPGameSingleton 测试调用"));
}
