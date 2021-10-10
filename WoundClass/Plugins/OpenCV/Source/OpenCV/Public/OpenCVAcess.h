// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ARTextures.h"
#include "opencv2/dnn/dnn.hpp"
#include "OpenCVAcess.generated.h"

using namespace std;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OPENCV_API UOpenCVAcess : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenCVAcess();

	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	int getOpenCvVersion();

	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	int loadModel();

	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	int classify(UTexture *texture);

	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	FString decodeClass(int classNum);

	


private: 
	bool nnLoaded; // track if Neural Network is Loaded, because if not, it has to be loaded before classifying
	cv::dnn::Net net;
	//string pluginP;
	//string modelPath;
	//string imgPath;
	//string modelDir;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
