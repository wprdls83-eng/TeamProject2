// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectActor.h"

// Sets default values
AProjectActor::AProjectActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Log, TEXT("hi!!!!~~~~~~~~~~~~"))
}

// Called every frame
void AProjectActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

