// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/Product/AdidasCloth.h"


// Sets default values
AAdidasCloth::AAdidasCloth()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAdidasCloth::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAdidasCloth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAdidasCloth::Show()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("阿迪达斯衣服"));
}

