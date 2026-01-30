#include "Characters/MPBaseCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMPBaseCharacter::AMPBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AttackCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AttackCapsule"));
	AttackCapsule->InitCapsuleSize(10.0f, 30.0f);
	AttackCapsule->CanCharacterStepUpOn = ECB_No;
	AttackCapsule->SetGenerateOverlapEvents(true);
	AttackCapsule->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	AttackCapsule->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftHandSocket"));
	AttackCapsule->OnComponentBeginOverlap.AddDynamic(this, &AMPBaseCharacter::OnOverlapBegin_AttackCapsule);

	AttackCapsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
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

//void AMPBaseCharacter::Attack()
//{
//	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
//	if (AnimInstance && AttackMontage)
//	{
//		if (!AnimInstance->Montage_IsPlaying(AttackMontage))
//		{
//			AnimInstance->Montage_Play(AttackMontage);
//		}
//		else
//		{
//			if (GEngine)
//				GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("MPBaseCharacter: AttackMontage already playing"));
//		}
//	}
//	else
//	{
//		if (GEngine)
//			GEngine->AddOnScreenDebugMessage(1, 15.f, FColor::Red, TEXT("MPBaseCharacter: Cannot play AttackMontage"));
//	}
//
//}


void AMPBaseCharacter::Attack()
{
	if (AttackMontage)
	{
		if (GetCurrentMontage() == nullptr)
		{
			// Play Animation Montage on the character mesh
			PlayAnimMontage(AttackMontage);
		}
		else
		{
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("MPBaseCharacter: AttackMontage already playing"));
		}
	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(1, 15.f, FColor::Red, TEXT("MPBaseCharacter: Cannot play AttackMontage"));
	}

}


void AMPBaseCharacter::OnOverlapBegin_AttackCapsule(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != this && OtherActor->IsA(ACharacter::StaticClass()))
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT("Hit Other Character"));
	}

	UGameplayStatics::ApplyDamage(OtherActor, // Damaged Actor
		50, // Damage
		(Cast<APawn>(this))->GetController(), // Instigator (Controller)
		this, // Damage Causer (Actor)
		UDamageType::StaticClass()); // Default Damage Type
}

void AMPBaseCharacter::ActivateAttack(bool Activate)
{
	if (Activate)
	{
		AttackCapsule->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
	else
	{
		AttackCapsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}