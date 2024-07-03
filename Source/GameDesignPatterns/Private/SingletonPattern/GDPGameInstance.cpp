// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDesignPatterns/Public/SingletonPattern/GDPGameInstance.h"


UGDPGameInstance* UGDPGameInstance::GetGDPGameInstance()
{
	if(GEngine)
	{
		if(UWorld* World = GEngine->GetWorld())
		{
			if(UGDPGameInstance* Instance = Cast<UGDPGameInstance>(World->GetGameInstance()))
			{
				return Instance;
			}
		}
	}
	
	return nullptr;
}

void UGDPGameInstance::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UGDPGameInstance 测试调用"));
}
