// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/OpenCVAcess.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVAcess() {}
// Cross Module References
	OPENCV_API UClass* Z_Construct_UClass_UOpenCVAcess_NoRegister();
	OPENCV_API UClass* Z_Construct_UClass_UOpenCVAcess();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OpenCV();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOpenCVAcess::execdecodeClass)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_classNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->decodeClass(Z_Param_classNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVAcess::execclassify)
	{
		P_GET_OBJECT(UTexture,Z_Param_texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->classify(Z_Param_texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVAcess::execloadModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->loadModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVAcess::execgetOpenCvVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getOpenCvVersion();
		P_NATIVE_END;
	}
	void UOpenCVAcess::StaticRegisterNativesUOpenCVAcess()
	{
		UClass* Class = UOpenCVAcess::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "classify", &UOpenCVAcess::execclassify },
			{ "decodeClass", &UOpenCVAcess::execdecodeClass },
			{ "getOpenCvVersion", &UOpenCVAcess::execgetOpenCvVersion },
			{ "loadModel", &UOpenCVAcess::execloadModel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenCVAcess_classify_Statics
	{
		struct OpenCVAcess_eventclassify_Parms
		{
			UTexture* texture;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVAcess_classify_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenCVAcess_eventclassify_Parms, texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOpenCVAcess_classify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenCVAcess_eventclassify_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVAcess_classify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVAcess_classify_Statics::NewProp_texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVAcess_classify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVAcess_classify_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/OpenCVAcess.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVAcess_classify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVAcess, nullptr, "classify", nullptr, nullptr, sizeof(OpenCVAcess_eventclassify_Parms), Z_Construct_UFunction_UOpenCVAcess_classify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAcess_classify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVAcess_classify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAcess_classify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVAcess_classify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenCVAcess_classify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics
	{
		struct OpenCVAcess_eventdecodeClass_Parms
		{
			int32 classNum;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_classNum;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::NewProp_classNum = { "classNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenCVAcess_eventdecodeClass_Parms, classNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenCVAcess_eventdecodeClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::NewProp_classNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/OpenCVAcess.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVAcess, nullptr, "decodeClass", nullptr, nullptr, sizeof(OpenCVAcess_eventdecodeClass_Parms), Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVAcess_decodeClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenCVAcess_decodeClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics
	{
		struct OpenCVAcess_eventgetOpenCvVersion_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenCVAcess_eventgetOpenCvVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/OpenCVAcess.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVAcess, nullptr, "getOpenCvVersion", nullptr, nullptr, sizeof(OpenCVAcess_eventgetOpenCvVersion_Parms), Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics
	{
		struct OpenCVAcess_eventloadModel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenCVAcess_eventloadModel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/OpenCVAcess.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVAcess, nullptr, "loadModel", nullptr, nullptr, sizeof(OpenCVAcess_eventloadModel_Parms), Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVAcess_loadModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenCVAcess_loadModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenCVAcess_NoRegister()
	{
		return UOpenCVAcess::StaticClass();
	}
	struct Z_Construct_UClass_UOpenCVAcess_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenCVAcess_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenCVAcess_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenCVAcess_classify, "classify" }, // 1829593646
		{ &Z_Construct_UFunction_UOpenCVAcess_decodeClass, "decodeClass" }, // 1724794429
		{ &Z_Construct_UFunction_UOpenCVAcess_getOpenCvVersion, "getOpenCvVersion" }, // 4273952552
		{ &Z_Construct_UFunction_UOpenCVAcess_loadModel, "loadModel" }, // 762163439
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenCVAcess_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OpenCVAcess.h" },
		{ "ModuleRelativePath", "Public/OpenCVAcess.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenCVAcess_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenCVAcess>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenCVAcess_Statics::ClassParams = {
		&UOpenCVAcess::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenCVAcess_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCVAcess_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenCVAcess()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenCVAcess_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenCVAcess, 4101320926);
	template<> OPENCV_API UClass* StaticClass<UOpenCVAcess>()
	{
		return UOpenCVAcess::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenCVAcess(Z_Construct_UClass_UOpenCVAcess, &UOpenCVAcess::StaticClass, TEXT("/Script/OpenCV"), TEXT("UOpenCVAcess"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenCVAcess);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
