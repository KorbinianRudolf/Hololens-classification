// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/OpenCVAccess.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVAccess() {}
// Cross Module References
	OPENCV_API UClass* Z_Construct_UClass_UOpenCVAccess_NoRegister();
	OPENCV_API UClass* Z_Construct_UClass_UOpenCVAccess();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OpenCV();
// End Cross Module References
	DEFINE_FUNCTION(UOpenCVAccess::execloadModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->loadModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVAccess::execclassify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->classify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVAccess::execgetOpenCvVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getOpenCvVersion();
		P_NATIVE_END;
	}
	void UOpenCVAccess::StaticRegisterNativesUOpenCVAccess()
	{
		UClass* Class = UOpenCVAccess::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "classify", &UOpenCVAccess::execclassify },
			{ "getOpenCvVersion", &UOpenCVAccess::execgetOpenCvVersion },
			{ "loadModel", &UOpenCVAccess::execloadModel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenCVAccess_classify_Statics
	{
		struct OpenCVAccess_eventclassify_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOpenCVAccess_classify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenCVAccess_eventclassify_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVAccess_classify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVAccess_classify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVAccess_classify_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Functions" },
		{ "ModuleRelativePath", "Public/OpenCVAccess.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVAccess_classify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVAccess, nullptr, "classify", nullptr, nullptr, sizeof(OpenCVAccess_eventclassify_Parms), Z_Construct_UFunction_UOpenCVAccess_classify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAccess_classify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVAccess_classify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAccess_classify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVAccess_classify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenCVAccess_classify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics
	{
		struct OpenCVAccess_eventgetOpenCvVersion_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenCVAccess_eventgetOpenCvVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Functions" },
		{ "ModuleRelativePath", "Public/OpenCVAccess.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVAccess, nullptr, "getOpenCvVersion", nullptr, nullptr, sizeof(OpenCVAccess_eventgetOpenCvVersion_Parms), Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics
	{
		struct OpenCVAccess_eventloadModel_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenCVAccess_eventloadModel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Functions" },
		{ "ModuleRelativePath", "Public/OpenCVAccess.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVAccess, nullptr, "loadModel", nullptr, nullptr, sizeof(OpenCVAccess_eventloadModel_Parms), Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVAccess_loadModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenCVAccess_loadModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenCVAccess_NoRegister()
	{
		return UOpenCVAccess::StaticClass();
	}
	struct Z_Construct_UClass_UOpenCVAccess_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenCVAccess_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenCVAccess_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenCVAccess_classify, "classify" }, // 1906610017
		{ &Z_Construct_UFunction_UOpenCVAccess_getOpenCvVersion, "getOpenCvVersion" }, // 664741401
		{ &Z_Construct_UFunction_UOpenCVAccess_loadModel, "loadModel" }, // 3910168738
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenCVAccess_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OpenCVAccess.h" },
		{ "ModuleRelativePath", "Public/OpenCVAccess.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenCVAccess_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenCVAccess>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenCVAccess_Statics::ClassParams = {
		&UOpenCVAccess::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpenCVAccess_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCVAccess_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenCVAccess()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenCVAccess_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenCVAccess, 3291084077);
	template<> OPENCV_API UClass* StaticClass<UOpenCVAccess>()
	{
		return UOpenCVAccess::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenCVAccess(Z_Construct_UClass_UOpenCVAccess, &UOpenCVAccess::StaticClass, TEXT("/Script/OpenCV"), TEXT("UOpenCVAccess"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenCVAccess);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
