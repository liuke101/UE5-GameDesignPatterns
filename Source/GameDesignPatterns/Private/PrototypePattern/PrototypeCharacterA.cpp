// Fill out your copyright notice in the Description page of Project Settings.


#include "PrototypePattern/PrototypeCharacterA.h"


// Sets default values
APrototypeCharacterA::APrototypeCharacterA() 
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Health = 666;
	Attack = 66;
}

// Called when the game starts or when spawned
void APrototypeCharacterA::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APrototypeCharacterA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

APrototype* APrototypeCharacterA::Clone()
{
	if(UWorld* World = GetWorld())
	{
		APrototypeCharacterA* NewCharacter = World->SpawnActor<APrototypeCharacterA>(APrototypeCharacterA::StaticClass());
		NewCharacter->Health = Health;
		NewCharacter->Attack = Attack;
		return NewCharacter;
	}
	return nullptr;
}

