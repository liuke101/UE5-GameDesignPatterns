// Fill out your copyright notice in the Description page of Project Settings.


#include "SingletonPattern/GDPHungrySingleton.h"

//饿汉，直接实例化
UGDPHungrySingleton* UGDPHungrySingleton::Instance = NewObject<UGDPHungrySingleton>();

void UGDPHungrySingleton::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UGDPHungrySingleton 测试调用"));
}
