// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/MovingActor.h"

// Sets default values
AMovingActor::AMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MovementSpeed = 10.f;

	GetActorMovement()->MaxSpeed = MovementSpeed;
}

void AMovingActor::SetMovementSpeed(float NewSpeed)
{
	if (GetActorMovement())
	{
		GetActorMovement()->MaxSpeed = NewSpeed;
	}
}

// Called when the game starts or when spawned
void AMovingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

