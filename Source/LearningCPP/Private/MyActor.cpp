// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "MyGameInstanceSubsystem.h"
#include "MyActorComponent.h"
#include "MySceneComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("AMyActor::AMyActor()"));
	MyActorComponent = CreateDefaultSubobject<UMyActorComponent>(TEXT("UMyActorComponent"));
	//RootComponent = MyActorCompoent;
	MySceneComponent = CreateDefaultSubobject<UMySceneComponent>(TEXT("MySceneComponent"));
	MySceneComponent->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AMyActor::BeginPlay()"));

	
	/*UMyGameInstanceSubsystem* myGameInstanceSubSystem = this->GetWorld()->GetGameInstance()->GetSubsystem<UMyGameInstanceSubsystem>();
	if (myGameInstanceSubSystem != nullptr)
	{
		myGameInstanceSubSystem->Test();
	}*/
	UMyGameInstanceSubsystem::GetMyGame()->Test();

	//MyActorComponent = CreateDefaultSubobject<UMyActorComponent>(TEXT("UMyActorComponent"));

	
	
}

void AMyActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UE_LOG(LogTemp, Warning, TEXT("AMyActor::EndPlay()"));

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

