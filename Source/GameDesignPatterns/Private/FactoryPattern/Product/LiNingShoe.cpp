// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/Product/LiNingShoe.h"


ALiNingShoe::ALiNingShoe()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALiNingShoe::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALiNingShoe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALiNingShoe::Show()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("李宁鞋"));
}

