// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MPBaseCharacter.generated.h"

UCLASS()
class MYPROJECT_API AMPBaseCharacter : public ACharacter
{
	GENERATED_BODY()

	// Collision component for the attack animation
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* AttackCapsule;

public:
	// Sets default values for this character's properties
	AMPBaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Animations)
	class UAnimMontage* AttackMontage;

	void Attack();

	void ActivateAttack(bool Activate);

	UFUNCTION()
	void OnOverlapBegin_AttackCapsule(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
