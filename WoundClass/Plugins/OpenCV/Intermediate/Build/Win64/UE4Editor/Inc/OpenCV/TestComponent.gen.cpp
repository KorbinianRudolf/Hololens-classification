// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/TestComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestComponent() {}
// Cross Module References
	OPENCV_API UClass* Z_Construct_UClass_UTestComponent_NoRegister();
	OPENCV_API UClass* Z_Construct_UClass_UTestComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OpenCV();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTestComponent::exectestCameraImage)
	{
		P_GET_OBJECT(UARTexture,Z_Param_img);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_DynamicMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->testCameraImage(Z_Param_img,Z_Param_DynamicMaterial);
		P_NATIVE_END;
	}
	void UTestComponent::StaticRegisterNativesUTestComponent()
	{
		UClass* Class = UTestComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "testCameraImage", &UTestComponent::exectestCameraImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestComponent_testCameraImage_Statics
	{
		struct TestComponent_eventtestCameraImage_Parms
		{
			UARTexture* img;
			UMaterialInstanceDynamic* DynamicMaterial;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_img;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::NewProp_img = { "img", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestComponent_eventtestCameraImage_Parms, img), Z_Construct_UClass_UARTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestComponent_eventtestCameraImage_Parms, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestComponent_eventtestCameraImage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::NewProp_img,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::NewProp_DynamicMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/TestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestComponent, nullptr, "testCameraImage", nullptr, nullptr, sizeof(TestComponent_eventtestCameraImage_Parms), Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestComponent_testCameraImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestComponent_testCameraImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTestComponent_NoRegister()
	{
		return UTestComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestComponent_testCameraImage, "testCameraImage" }, // 917274238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TestComponent.h" },
		{ "ModuleRelativePath", "Public/TestComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestComponent_Statics::ClassParams = {
		&UTestComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestComponent, 3425752092);
	template<> OPENCV_API UClass* StaticClass<UTestComponent>()
	{
		return UTestComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestComponent(Z_Construct_UClass_UTestComponent, &UTestComponent::StaticClass, TEXT("/Script/OpenCV"), TEXT("UTestComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
