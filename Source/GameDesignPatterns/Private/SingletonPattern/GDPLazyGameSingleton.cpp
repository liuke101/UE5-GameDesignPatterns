// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDesignPatterns/Public/SingletonPattern/GDPLazyGameSingleton.h"

UGDPLazyGameSingleton* UGDPLazyGameSingleton::GetGDPNativeGameSingletonInstance()
{
	if (!Instance)
	{
		Instance = NewObject<UGDPLazyGameSingleton>();
	}
	return Instance;	
}

void UGDPLazyGameSingleton::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UGDPNativeGameSingleton 测试调用"));
}
