// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UI_Test.h"

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
