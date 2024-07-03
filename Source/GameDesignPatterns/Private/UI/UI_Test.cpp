// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UI_Test.h"

#include "Components/Button.h"
#include "SingletonPattern/GDPGameInstance.h"
#include "SingletonPattern/GDPGameSingleton.h"
#include "SingletonPattern/GDPHungrySingleton.h"
#include "SingletonPattern/GDPLazyGameSingleton.h"
#include "SingletonPattern/GDPMeyersLazySingleton.h"


void UUI_Test::BeginPlay()
{
	//绑定回调
	SingletonTestButton->OnClicked.AddDynamic(this, &UUI_Test::SingletonTest);
}

void UUI_Test::SingletonTest()
{
	// 全部测试
	UGDPGameInstance::GetGDPGameInstance()->Test();
	UGDPGameSingleton::GetGDPGameSingletonInstance()->Test();
	UGDPLazyGameSingleton::GetGDPNativeGameSingletonInstance()->Test();
	UGDPMeyersLazySingleton::GetGDPMeyersLazySingletonInstance()->Test();
	UGDPHungrySingleton::GetGDPHungrySingletonInstance()->Test();
}
