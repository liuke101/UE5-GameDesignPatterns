// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDesignPatterns/Public/SingletonPattern/GDPLazySingleton.h"

UGDPLazySingleton* UGDPLazySingleton::GetGDPLazySingletonInstance()
{
	if (!Instance)
	{
		Instance = NewObject<UGDPLazySingleton>();
	}
	return Instance;	
}

void UGDPLazySingleton::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UGDPNativeGameSingleton 测试调用"));
}
