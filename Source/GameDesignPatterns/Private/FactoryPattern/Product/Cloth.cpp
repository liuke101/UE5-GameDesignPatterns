// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/Product/Cloth.h"


ACloth::ACloth()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACloth::BeginPlay()
{
	Super::BeginPlay();
	Show();
}

void ACloth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACloth::Show()
{
}

