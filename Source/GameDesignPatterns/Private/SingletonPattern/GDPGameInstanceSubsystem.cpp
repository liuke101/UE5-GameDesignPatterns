// Fill out your copyright notice in the Description page of Project Settings.


#include "SingletonPattern/GDPGameInstanceSubsystem.h"

#include "SingletonPattern/GDPGameInstance.h"
#include "Subsystems/SubsystemBlueprintLibrary.h"

void UGDPGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UGDPGameInstanceSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

UGDPGameInstanceSubsystem* UGDPGameInstanceSubsystem::GetGDPGameInstanceSubsystem()
{
	if(GEngine)
	{
		if(UWorld* World = GEngine->GetWorld())
		{
			if(UGameInstance* Instance = Cast<UGameInstance>(World->GetGameInstance()))
			{
				return Instance->GetSubsystem<UGDPGameInstanceSubsystem>();
			}
		}
	}
	
	return nullptr;
}

void UGDPGameInstanceSubsystem::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UGDPGameInstanceSubsystem 测试调用"));
}
