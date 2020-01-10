// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCube.h"

// Sets default values
ATestCube::ATestCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	xValue = 0.f;
}

// Called when the game starts or when spawned
void ATestCube::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ATestCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	mMove(GetActorLocation());
}

void ATestCube::mMove(FVector Pos)
{
	xValue += mStep;
	float value = sinf(xValue);
	FVector N{Pos.X += (max * value), Pos.Y, Pos.Z};
	SetActorLocation(N);
}