// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UI_Test.h"

#include "BuilderPattern/CharacterBuildDirector.h"
#include "BuilderPattern/FemaleCharacterBuilder.h"
#include "BuilderPattern/MaleCharacterBuilder.h"
#include "BuilderPattern/ProductCharacter.h"
#include "CommandPattern/CommandInvoker.h"
#include "Components/Button.h"
#include "FactoryPattern/AbstractFactory/AdidasProducer.h"
#include "FactoryPattern/AbstractFactory/LiNingProducer.h"
#include "FactoryPattern/AbstractFactory/NikeProducer.h"
#include "FactoryPattern/FactoryMethod/AdidasFactory.h"
#include "FactoryPattern/FactoryMethod/LiNingFactory.h"
#include "FactoryPattern/FactoryMethod/NikeFactory.h"
#include "FactoryPattern/Product/Shoe.h"
#include "FactoryPattern/SimpleFactory/SimpleFactory.h"
#include "FlyweightPattern/FlyweightFactory.h"
#include "Kismet/GameplayStatics.h"
#include "MVP/MVP_Controller.h"
#include "MVP/MVP_View.h"
#include "PrototypePattern/PrototypeCharacterA.h"
#include "PrototypePattern/prototypeCharacterB.h"
#include "SingletonPattern/GDPGameInstance.h"
#include "SingletonPattern/GDPGameInstanceSubsystem.h"
#include "SingletonPattern/GDPGameSingleton.h"
#include "SingletonPattern/GDPHungrySingleton.h"
#include "SingletonPattern/GDPLazySingleton.h"
#include "SingletonPattern/GDPMeyersLazySingleton.h"
#include "StatePattern/StateContextHUD.h"
#include "StrategyPattern/CalcStrategyA.h"
#include "StrategyPattern/CalcStrategyB.h"
#include "StrategyPattern/StrategyContext.h"


void UUI_Test::NativeConstruct()
{
	//绑定回调
	SingletonTestButton->OnClicked.AddDynamic(this, &UUI_Test::SingletonTest);
	SimpleFactoryTestButton->OnClicked.AddDynamic(this, &UUI_Test::SimpleFactoryPatternTest);
	FactoryMethodTestButton->OnClicked.AddDynamic(this, &UUI_Test::FactoryMethodPatternTest);
	AbstractFactoryTestButton->OnClicked.AddDynamic(this, &UUI_Test::AbstractFactoryPatternTest);
	BuilderTestButton->OnClicked.AddDynamic(this, &UUI_Test::BuilderPatternTest);
	PrototypeTestButton->OnClicked.AddDynamic(this, &UUI_Test::PrototypePatternTest);
	CommandTestButton->OnClicked.AddDynamic(this, &UUI_Test::CommandPatternTest);
	StateTestButton->OnClicked.AddDynamic(this, &UUI_Test::StatePatternTest);
	StrategyTestButton->OnClicked.AddDynamic(this, &UUI_Test::StrategyPatternTest);
	FlyweightTestButton->OnClicked.AddDynamic(this, &UUI_Test::FlyweightPatternTest);
	MVPTestButton->OnClicked.AddDynamic(this, &UUI_Test::MVPTest);
	MVP_View->RemoveFromParent(); //初始隐藏
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

void UUI_Test::PrototypePatternTest()
{
	if(UWorld* World = GetWorld())
	{
		APrototypeCharacterA* PrototypeCharacterA = World->SpawnActor<APrototypeCharacterA>(APrototypeCharacterA::StaticClass());
		APrototypeCharacterA* CloneCharacterA = Cast<APrototypeCharacterA>(PrototypeCharacterA->Clone());
		CloneCharacterA->Show();

		AprototypeCharacterB* PrototypeCharacterB = World->SpawnActor<AprototypeCharacterB>(AprototypeCharacterB::StaticClass());
		AprototypeCharacterB* CloneCharacterB = Cast<AprototypeCharacterB>(PrototypeCharacterB->Clone());
		CloneCharacterB->Show();
	}
}

void UUI_Test::CommandPatternTest()
{
	UCommandInvoker* Invoker = NewObject<UCommandInvoker>(this);
	Invoker->Invoke();
}

void UUI_Test::StatePatternTest()
{
	if(AStateContextHUD* StateContext = Cast<AStateContextHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD()))
	{
		StateContext->ChangeState(StateContext->StartMenu);
	}
	
}

void UUI_Test::StrategyPatternTest()
{
	UStrategyContext* StrategyContext = NewObject<UStrategyContext>(this);

	//策略A
	UCalcStrategyA* StrategyA = NewObject<UCalcStrategyA>(this);
	StrategyContext->SetStatregy(StrategyA);
	StrategyContext->Calc(10, 5);
	
	//策略B
	UCalcStrategyB* StrategyB = NewObject<UCalcStrategyB>(this);
	StrategyContext->SetStatregy(StrategyB);
	StrategyContext->Calc(10, 5);
}

void UUI_Test::FlyweightPatternTest()
{
	UFlyweightFactory* Factory = NewObject<UFlyweightFactory>(this);
	Factory->CreateNewTree(1, 1, "TreeA", FLinearColor::Red);
	Factory->CreateNewTree(2, 2, "TreeA", FLinearColor::Red);
	Factory->CreateNewTree(3, 3, "TreeA", FLinearColor::Red);
	Factory->CreateNewTree(3, 3, "TreeB", FLinearColor::Blue);

	//查看享元池的元素数量，因为上述代码中创建了三个相同TreeType的树和一个不同的树，所以享元池中应该只有两个元素
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("TreeTypes Num: %d"), Factory->TreeTypes.Num()));
}

void UUI_Test::MVPTest()
{
	//初始化
	UMVP_Controller* Controller = NewObject<UMVP_Controller>(this);
	UMVP_Model* Model = NewObject<UMVP_Model>(this);

	Controller->SetModel(Model);

	MVP_View->AddToViewport();
	MVP_View->SetController(Controller);
}

