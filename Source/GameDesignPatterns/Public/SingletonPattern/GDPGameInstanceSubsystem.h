// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GDPGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UGDPGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	static UGDPGameInstanceSubsystem* GetGDPGameInstanceSubsystem();
	void Test();
};
