// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestCube.generated.h"

UCLASS()
class TESTPROJECT_API ATestCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float mStep;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float max;
	float xValue;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void mMove(FVector Pos);
};