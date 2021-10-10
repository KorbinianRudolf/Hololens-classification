// Fill out your copyright notice in the Description page of Project Settings.


#include "TestComponent.h"
#include "ImageHelper.h"

// Sets default values for this component's properties
UTestComponent::UTestComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTestComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTestComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UTestComponent::testCameraImage(UARTexture* img, UMaterialInstanceDynamic* DynamicMaterial) {
	if (IsValid(img)) {
		UE_LOG(LogTemp, Warning, TEXT("width, %d"), img->GetSurfaceWidth());
		UE_LOG(LogTemp, Warning, TEXT("height, %d"), img->GetSurfaceHeight());
		UE_LOG(LogTemp, Warning, TEXT("called"));
		cv::Mat imgCv = ImageHelper::convertArTexture(img, DynamicMaterial);
		UE_LOG(LogTemp, Warning, TEXT("converted finished"));
		return imgCv.rows;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("not valid :("));
		return -1;
	}

}

