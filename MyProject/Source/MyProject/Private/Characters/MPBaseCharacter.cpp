// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MPBaseCharacter.h"

// Sets default values
AMPBaseCharacter::AMPBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMPBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMPBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMPBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

