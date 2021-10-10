// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "opencv2/imgcodecs/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core/mat.hpp"
#include "ARTextures.h"
#include "Engine/Texture.h"

/**
 * 
 */

class ImageHelper : public UObject
{

public:
	ImageHelper();
	~ImageHelper();
	static cv::Mat convertToCV(UTexture* textImg);
	static cv::Mat convertArTexture(UARTexture* textImg, UMaterialInstanceDynamic* DynamicMaterial);
	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	static FString decodeClass(int classNum);
	static void GetTexturePixels(FRHITexture2D* Texture, TArray<FColor>& OutPixels);

private:
	static std::string classnames[];
	

};

