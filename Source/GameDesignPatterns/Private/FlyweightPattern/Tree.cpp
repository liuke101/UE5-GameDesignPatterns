// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyweightPattern/Tree.h"

#include "FlyweightPattern/TreeTypeFlyweight.h"

void UTree::Show()
{
	if(TreeType)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Name: %s, Color: %s, X: %f, Y: %f"), *TreeType->Name, *TreeType->Color.ToString(), X, Y));
	}
}
