// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MPMainAnimInstance.h"

void UMPMainAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	if (OwningPawn == nullptr)
	{
		OwningPawn = TryGetPawnOwner();
	}
}

void UMPMainAnimInstance::UpdateAnimationProperties()
{
	if (OwningPawn == nullptr)
	{
		OwningPawn = TryGetPawnOwner();
	}

	if (OwningPawn)
	{
		FVector Speed = OwningPawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0);

		MovementSpeed = LateralSpeed.Size();
	}
}
