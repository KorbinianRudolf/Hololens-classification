// Fill out your copyright notice in the Description page of Project Settings.


#include "HTTPSubsystem.h"

UHTTPSubsystem::UHTTPSubsystem() {
	plattformHttp = new FPlatformHttp();
	result = -1;
	resStatus = false;
	plattformHttp->Init();
}

void UHTTPSubsystem::MyHttpCall(cv::Mat img) {
	UE_LOG(LogTemp, Warning, TEXT("Start HTTP"));
	resStatus = false;
	std::vector<uint8> buf;
	bool encoded = cv::imencode(".jpg", img, buf);

	TArray<uint8> arr;
	arr.SetNumUninitialized(buf.size());

	for (int i = 0; i < buf.size(); i++) {
		arr[i] = buf[i];
	}
	UE_LOG(LogTemp, Warning, TEXT("Start JSON Stuff"));
	//json stuff
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	FString dataString = FBase64::Encode(arr);
	JsonObject->SetStringField("image", dataString);
	JsonObject->SetStringField("msg", FString("Hello, Server"));
	FString OutputString;
	TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	UE_LOG(LogTemp, Warning, TEXT("create HTTP Request"));
	TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> Request = TSharedPtr<IHttpRequest, ESPMode::ThreadSafe>(plattformHttp->ConstructRequest());
	//This is the url on which to process the request
	Request->SetURL("http://ess-xyro.fzi.de:8008");
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->SetContentAsString(OutputString);
	//Request->OnProcessRequestComplete().BindUObject(this, &USender::OnResponseReceived);
	//Request->OnProcessRequestComplete().BindUFunction(this, "OnResponseReceived");
	Request->OnProcessRequestComplete().BindLambda([&](FHttpRequestPtr rqptr, FHttpResponsePtr rsptr, bool status) {
		OnResponseReceived(rqptr, rsptr, status);
		});
	UE_LOG(LogTemp, Warning, TEXT("Process Request"));
	Request->ProcessRequest();
	UE_LOG(LogTemp, Warning, TEXT("Processed Request"));
}


void UHTTPSubsystem::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) {
	UE_LOG(LogTemp, Warning, TEXT("Received Response"));
	if (bWasSuccessful) {
		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());


		//Deserialize the json data given Reader and the actual object to deserialize
		if (FJsonSerializer::Deserialize(Reader, JsonObject))
		{
			//Get the value of the json object by field name
			FString recieved = JsonObject->GetStringField("received");
			int classific = JsonObject->GetIntegerField("class");
			result = classific;
			resStatus = true;
			FString time = JsonObject->GetStringField("time");
			UE_LOG(LogTemp, Warning, TEXT("Time: %s"), &recieved);
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Request not successfull"));
		}

	}

}

int UHTTPSubsystem::getResult() {
	return result;
}

bool UHTTPSubsystem::getResStatus() {
	return resStatus;
}