// Fill out your copyright notice in the Description page of Project Settings.


#include "SingletonPattern/GDPMeyersLazySingleton.h"

UGDPMeyersLazySingleton* UGDPMeyersLazySingleton::GetGDPMeyersLazySingletonInstance()
{
	//C++11 标准保证了局部静态变量只会初始化一次
	static UGDPMeyersLazySingleton* Instance = NewObject<UGDPMeyersLazySingleton>();
	return Instance;
}

void UGDPMeyersLazySingleton::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UGDPMeyersLazySingleton 测试调用"));
}
