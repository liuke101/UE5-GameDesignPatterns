// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDesignPatterns/Public/SingletonPattern/GDPGameInstance.h"

void UGDPGameInstance::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UGDPGameInstance 测试调用"));
}
