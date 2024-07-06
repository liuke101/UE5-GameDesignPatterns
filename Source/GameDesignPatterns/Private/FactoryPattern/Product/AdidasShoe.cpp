// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/Product/AdidasShoe.h"


// Sets default values
AAdidasShoe::AAdidasShoe()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAdidasShoe::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAdidasShoe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAdidasShoe::Show()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("阿迪达斯鞋"));
}

