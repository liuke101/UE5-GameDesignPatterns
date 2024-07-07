// Fill out your copyright notice in the Description page of Project Settings.


#include "PrototypePattern/Prototype.h"


APrototype::APrototype(): Health(0), Attack(0)
{
	PrimaryActorTick.bCanEverTick = true;
}

void APrototype::BeginPlay()
{
	Super::BeginPlay();
	
}

void APrototype::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

APrototype* APrototype::Clone()
{
	return nullptr;
}

void APrototype::Show() const
{
	//打印属性
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Health:") + FString::FromInt(Health) + TEXT(" Attack: ") + FString::FromInt(Attack));
}

