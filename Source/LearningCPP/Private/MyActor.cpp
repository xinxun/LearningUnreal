// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "MyGameInstanceSubsystem.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	/*UMyGameInstanceSubsystem* myGameInstanceSubSystem = this->GetWorld()->GetGameInstance()->GetSubsystem<UMyGameInstanceSubsystem>();
	if (myGameInstanceSubSystem != nullptr)
	{
		myGameInstanceSubSystem->Test();
	}*/
	
}

void AMyActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

