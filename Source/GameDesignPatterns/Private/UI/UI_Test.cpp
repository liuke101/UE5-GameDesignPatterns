// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UI_Test.h"

#include "BuilderPattern/CharacterBuildDirector.h"
#include "BuilderPattern/FemaleCharacterBuilder.h"
#include "BuilderPattern/MaleCharacterBuilder.h"
#include "BuilderPattern/ProductCharacter.h"
#include "CommandPattern/CommandInvoker.h"
#include "Components/Button.h"
#include "Components/ComboBoxString.h"
#include "FactoryPattern/AbstractFactory/AdidasProducer.h"
#include "FactoryPattern/AbstractFactory/LiNingProducer.h"
#include "FactoryPattern/AbstractFactory/NikeProducer.h"
#include "FactoryPattern/FactoryMethod/AdidasFactory.h"
#include "FactoryPattern/FactoryMethod/LiNingFactory.h"
#include "FactoryPattern/FactoryMethod/NikeFactory.h"
#include "FactoryPattern/Product/Shoe.h"
#include "FactoryPattern/SimpleFactory/SimpleFactory.h"
#include "SingletonPattern/GDPGameInstance.h"
#include "SingletonPattern/GDPGameInstanceSubsystem.h"
#include "SingletonPattern/GDPGameSingleton.h"
#include "SingletonPattern/GDPHungrySingleton.h"
#include "SingletonPattern/GDPLazySingleton.h"
#include "SingletonPattern/GDPMeyersLazySingleton.h"

void UUI_Test::NativeConstruct()
{
	//绑定回调
	SingletonTestButton->OnClicked.AddDynamic(this, &UUI_Test::SingletonTest);
	SimpleFactoryTestButton->OnClicked.AddDynamic(this, &UUI_Test::SimpleFactoryPatternTest);
	FactoryMethodTestButton->OnClicked.AddDynamic(this, &UUI_Test::FactoryMethodPatternTest);
	AbstractFactoryTestButton->OnClicked.AddDynamic(this, &UUI_Test::AbstractFactoryPatternTest);
	BuilderTestButton->OnClicked.AddDynamic(this, &UUI_Test::BuilderPatternTest);
	CommandTestButton->OnClicked.AddDynamic(this, &UUI_Test::CommandPatternTest);
}

void UUI_Test::SingletonTest()
{
	// 全部测试
	UGDPGameInstance::GetGDPGameInstance()->Test();
	UGDPGameSingleton::GetGDPGameSingletonInstance()->Test();
	UGDPLazySingleton::GetGDPLazySingletonInstance()->Test();
	UGDPMeyersLazySingleton::GetGDPMeyersLazySingletonInstance()->Test();
	UGDPHungrySingleton::GetGDPHungrySingletonInstance()->Test();
	UGDPGameInstanceSubsystem::GetGDPGameInstanceSubsystem()->Test();
}

void UUI_Test::SimpleFactoryPatternTest() 
{
	//实例化工厂
	USimpleFactory* Factory = NewObject<USimpleFactory>(this); //一定要传outer，否则UObject无法获取World
	
	Factory->CreateShoe(EShoeType::ST_Nike);
	Factory->CreateShoe(EShoeType::ST_Adidas);
	Factory->CreateShoe(EShoeType::ST_LiNing);
}

void UUI_Test::FactoryMethodPatternTest()
{
	UNikeFactory* Factory = NewObject<UNikeFactory>(this);
	Factory->CreateShoe();

	UAdidasFactory* Factory2 = NewObject<UAdidasFactory>(this);
	Factory2->CreateShoe();

	ULiNingFactory* Factory3 = NewObject<ULiNingFactory>(this);
	Factory3->CreateShoe();
}

void UUI_Test::AbstractFactoryPatternTest()
{
	UNikeProducer* NikeProducer = NewObject<UNikeProducer>(this);
	NikeProducer->CreateShoe();
	NikeProducer->CreateCloth();

	UAdidasProducer* AdidasProducer = NewObject<UAdidasProducer>(this);
	AdidasProducer->CreateShoe();
	AdidasProducer->CreateCloth();

	ULiNingProducer* LiNingProducer = NewObject<ULiNingProducer>(this);
	LiNingProducer->CreateShoe();
	LiNingProducer->CreateCloth();
}

void UUI_Test::BuilderPatternTest()
{
	//BUG: 第二次点击按钮崩溃
	//创建指挥者
	UCharacterBuildDirector* Director = NewObject<UCharacterBuildDirector>(this);

	//指定创建女性角色
	Director->SetCharacterBuilder(NewObject<UFemaleCharacterBuilder>(this));
	AProductCharacter* FemaleCharacter = Director->Construct();
	FemaleCharacter->Show();

	//指定创建男性角色
	Director->SetCharacterBuilder(NewObject<UMaleCharacterBuilder>(this));
	AProductCharacter* MaleCharacter = Director->Construct();
	MaleCharacter->Show();
}

void UUI_Test::CommandPatternTest()
{
	UCommandInvoker* Invoker = NewObject<UCommandInvoker>(this);
	Invoker->Invoke();
}
