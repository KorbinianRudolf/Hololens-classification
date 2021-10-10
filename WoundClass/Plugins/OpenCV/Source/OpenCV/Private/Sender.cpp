// Fill out your copyright notice in the Description page of Project Settings.


#include "Sender.h"
#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "Misc/Base64.h"
#include "ImageHelper.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
USender::USender()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USender::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


int USender::loadSubsys(UObject * WorldContextObject) {
	if (IsValid(GEngine)) {
		UWorld* world = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
		if (IsValid(world)) {
			APlayerController* contr = world->GetFirstPlayerController();
			if (IsValid(contr)) {
				LocalPlayer = contr->GetLocalPlayer();
				if (IsValid(LocalPlayer)) {
					subsys = LocalPlayer->GetSubsystem<UHTTPSubsystem>();
					return 0;
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("LocalPlayer is nullptr"));
					return -1;
				}
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("playerController is nullptr"));
				return -1;
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("world is nullptr"));
			return -1;
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("GEngine is nullptr"));
		return -1;

	}
}


// Called every frame
void USender::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



int USender::classify(UTexture* texture) {
	cv::Mat image = ImageHelper::convertToCV(texture);
	cv::Mat imgSmall; 
	cv::resize(image, imgSmall, cv::Size(224,224));
	subsys->MyHttpCall(imgSmall);
	return 0;

}

FString USender::decodeClass(int classNum) {
	return ImageHelper::decodeClass(classNum);
}

bool USender::resIsSet() {
	return subsys->getResStatus();
}

int USender::getClass() {
	UE_LOG(LogTemp, Warning, TEXT("trying to get class"));
	if (resIsSet()) {
		return subsys->getResult();
	}
	else {
		return -1;
	}
}


