// Fill out your copyright notice in the Description page of Project Settings.


#include "PrototypePattern/prototypeCharacterB.h"


// Sets default values
AprototypeCharacterB::AprototypeCharacterB()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Health = 888;
	Attack = 88;
}

// Called when the game starts or when spawned
void AprototypeCharacterB::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AprototypeCharacterB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

APrototype* AprototypeCharacterB::Clone()
{
	if(UWorld* World = GetWorld())
	{
		AprototypeCharacterB* NewCharacter = World->SpawnActor<AprototypeCharacterB>(AprototypeCharacterB::StaticClass());
		NewCharacter->Health = Health;
		NewCharacter->Attack = Attack;
		return NewCharacter;
	}
	return nullptr;
}

