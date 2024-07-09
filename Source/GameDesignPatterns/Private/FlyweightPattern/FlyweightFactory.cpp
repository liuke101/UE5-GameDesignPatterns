// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyweightPattern/FlyweightFactory.h"

#include "FlyweightPattern/Tree.h"
#include "FlyweightPattern/TreeTypeFlyweight.h"

UTree* UFlyweightFactory::CreateNewTree(float X, float Y, FString Name, FLinearColor Color)
{
	UTree* Tree = NewObject<UTree>(this);
	Tree->X = X;
	Tree->Y = Y;
	Tree->TreeType = GetTreeType(Name, Color);
	
	return Tree;
}

UTreeTypeFlyweight* UFlyweightFactory::GetTreeType(FString Name, FLinearColor Color)
{
	//根据name和color找到对应的树类型
	UTreeTypeFlyweight* TreeType = nullptr;
	for (UTreeTypeFlyweight* Type : TreeTypes)
	{
		if(Type->Name == Name && Type->Color == Color)
		{
			TreeType = Type;
			break;
		}
	}

	//如果找到则复用， 如果找不到则创建一个并加入享元池
	if(TreeType == nullptr)
	{
		TreeType = NewObject<UTreeTypeFlyweight>(this);
		TreeType->Name = Name;
		TreeType->Color = Color;

		TreeTypes.Add(TreeType);
	}

	return TreeType;
}
