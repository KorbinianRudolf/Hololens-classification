// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageHelper.h"
#include "ExternalTexture.h"
#include "RenderingThread.h"
#include "UnrealClient.h"
#include "RHICommandList.h"
#include "RenderingThread.h"

ImageHelper::ImageHelper()
{
}

ImageHelper::~ImageHelper()
{
}


cv::Mat  ImageHelper::convertToCV(UTexture* textImg) {
	UE_LOG(LogTemp, Warning, TEXT("converting"));

	TextureCompressionSettings OldCompressionSettings = textImg->CompressionSettings;
	//TextureMipGenSettings OldMipGenSettings = textImg->MipGenSettings;
	bool OldSRGB = textImg->SRGB;
	textImg->CompressionSettings = TextureCompressionSettings::TC_ReflectionCapture;
	//textImg->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
	textImg->SRGB = false;
	textImg->UpdateResource();

	UE_LOG(LogTemp, Warning, TEXT("reached1"));

	FTexturePlatformData* data = *(textImg->GetRunningPlatformData());
	UE_LOG(LogTemp, Warning, TEXT("reached1.5"));
	FTexture2DMipMap mip = data->Mips[0];
	UE_LOG(LogTemp, Warning, TEXT("reached1.6"));
	FByteBulkData RawImageData = mip.BulkData;
	UE_LOG(LogTemp, Warning, TEXT("reached1.7"));

	
	//const uint8* ImageData = reinterpret_cast<const uint8*>(RawImageData.Lock(LOCK_READ_ONLY));
	const FColor* FormatedImageData = reinterpret_cast<const FColor*>(RawImageData.Lock(LOCK_READ_ONLY));

	UE_LOG(LogTemp, Warning, TEXT("reached2"));

	uint32 width = mip.SizeX;
	uint32 height = mip.SizeY;


	cv::Mat img = cv::Mat(height, width, CV_8UC3);
	UE_LOG(LogTemp, Warning, TEXT("convert"));
	for (uint32 X = 0; X < width; X++) {
		for (uint32 Y = 0; Y < height; Y++) {
			FColor c = FormatedImageData[Y * width + X];
			//standard colorspace of OpenCV : BGR
			img.at<cv::Vec3b>(cv::Point(X, Y)) = cv::Vec3b(c.B, c.G, c.R);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("reached3"));

	RawImageData.Unlock();
	textImg->CompressionSettings = OldCompressionSettings;
	//textImg->MipGenSettings = OldMipGenSettings;
	textImg->SRGB = OldSRGB;
	textImg->UpdateResource();
	return img;
}


FString ImageHelper::decodeClass(int classNum) {
	if (classNum >= 0 && classNum < 5) {
		return FString(UTF8_TO_TCHAR(classnames[classNum].c_str()));
	}
	else {
		return FString("ups, something went wrong");
	}
}

cv::Mat  ImageHelper::convertArTexture(UARTexture* textImg, UMaterialInstanceDynamic* DynamicMaterial) {
	UE_LOG(LogTemp, Warning, TEXT("convert AR called"));
	FGuid id = textImg->GetExternalTextureGuid();
	//UMaterial* material = NewObject<UMaterial>();
	FMaterialRenderProxy* proxy = DynamicMaterial->GetRenderProxy();//material->GetRenderProxy();
	FTextureRHIRef OutTextureRHI;
	FSamplerStateRHIRef OutSamplerStateRHI;

	struct FTextureContext
	{
		FGuid id;
		FMaterialRenderProxy* proxy;
		FTextureRHIRef OutTextureRHI;
		FSamplerStateRHIRef OutSamplerStateRHI;
	};

	FTextureContext TextureContext =
	{
		id,
		proxy,
		OutTextureRHI,
		OutSamplerStateRHI
	};

	FTextureContext* Context = &TextureContext;
	UE_LOG(LogTemp, Warning, TEXT("next step, get external texture"));
	ENQUEUE_RENDER_COMMAND(this)(
		[Context](FRHICommandListImmediate& RHICmdList)
		{
			FExternalTextureRegistry* reg = &FExternalTextureRegistry::Get();
			if (reg->GetExternalTexture(Context->proxy, Context->id, Context->OutTextureRHI, Context->OutSamplerStateRHI)) {
				UE_LOG(LogTemp, Warning, TEXT("id found"));
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("id not found"));
			}

		});
	FlushRenderingCommands();

	// TODO: make sure the values in the context are Used
	if (Context->OutTextureRHI != nullptr && Context->OutTextureRHI->IsValid()) {
		UE_LOG(LogTemp, Warning, TEXT("Out Texture Valid"));
		FRHITexture2D* text2d = Context->OutTextureRHI->GetTexture2D();
		if (text2d != nullptr && text2d->IsValid()) {
			UE_LOG(LogTemp, Warning, TEXT("Got a texture"));
			TArray<FColor> OutPixels;
			GetTexturePixels(text2d, OutPixels);
			int len = OutPixels.Num();
			UE_LOG(LogTemp, Warning, TEXT("COLOR ARRAY LEN: %d"), len);
		} else {
			UE_LOG(LogTemp, Warning, TEXT("texture2d not loaded"));
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("out texture not valid"));
	}



	
	return cv::Mat(3, 4, CV_8UC3);
}



void ImageHelper::GetTexturePixels(FRHITexture2D* Texture, TArray<FColor>& OutPixels) {
	struct FReadSurfaceContext
	{
		FTexture2DRHIRef Texture;
		TArray<FColor>* OutData;
		FIntRect Rect;
		FReadSurfaceDataFlags Flags;
	};

	OutPixels.Reset();
	FReadSurfaceContext ReadSurfaceContext =
	{
		Texture,
		&OutPixels,
		FIntRect(0, 0, Texture->GetSizeXY().X, Texture->GetSizeXY().Y),
		FReadSurfaceDataFlags(RCM_UNorm, CubeFace_MAX)
	};

	FReadSurfaceContext *Context = &ReadSurfaceContext;
	FRHICommandListImmediate& RHICmdList = GetImmediateCommandList_ForRenderCommand();
	/*ENQUEUE_RENDER_COMMAND(ReadSurfaceCommand)(
		Context, ReadSurfaceContext,
		{
			RHICmdList.ReadSurfaceData(
				Context->Texture,
				Context->Rect,
				*Context->OutData,
				Context->Flags
			)
		}); */
	ENQUEUE_RENDER_COMMAND(ReadSurfaceCommand)(
		[Context](FRHICommandListImmediate& RHICmdList)
		{
			RHICmdList.ReadSurfaceData(
				Context->Texture,
				Context->Rect,
				*Context->OutData,
				Context->Flags
			);
		});
	FlushRenderingCommands();

}



std::string ImageHelper::classnames[] = { "eiternd", "entzuendet", "Gesunde Haut", "nekrotisch", "ohne Kategorie" };