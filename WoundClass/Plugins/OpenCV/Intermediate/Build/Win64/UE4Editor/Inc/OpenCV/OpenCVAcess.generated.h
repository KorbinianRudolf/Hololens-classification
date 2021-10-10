// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
#ifdef OPENCV_OpenCVAcess_generated_h
#error "OpenCVAcess.generated.h already included, missing '#pragma once' in OpenCVAcess.h"
#endif
#define OPENCV_OpenCVAcess_generated_h

#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_SPARSE_DATA
#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeClass); \
	DECLARE_FUNCTION(execclassify); \
	DECLARE_FUNCTION(execloadModel); \
	DECLARE_FUNCTION(execgetOpenCvVersion);


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeClass); \
	DECLARE_FUNCTION(execclassify); \
	DECLARE_FUNCTION(execloadModel); \
	DECLARE_FUNCTION(execgetOpenCvVersion);


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenCVAcess(); \
	friend struct Z_Construct_UClass_UOpenCVAcess_Statics; \
public: \
	DECLARE_CLASS(UOpenCVAcess, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenCV"), NO_API) \
	DECLARE_SERIALIZER(UOpenCVAcess)


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOpenCVAcess(); \
	friend struct Z_Construct_UClass_UOpenCVAcess_Statics; \
public: \
	DECLARE_CLASS(UOpenCVAcess, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenCV"), NO_API) \
	DECLARE_SERIALIZER(UOpenCVAcess)


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenCVAcess(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenCVAcess) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenCVAcess); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVAcess); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenCVAcess(UOpenCVAcess&&); \
	NO_API UOpenCVAcess(const UOpenCVAcess&); \
public:


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenCVAcess(UOpenCVAcess&&); \
	NO_API UOpenCVAcess(const UOpenCVAcess&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenCVAcess); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVAcess); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenCVAcess)


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_PRIVATE_PROPERTY_OFFSET
#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_13_PROLOG
#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_PRIVATE_PROPERTY_OFFSET \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_SPARSE_DATA \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_RPC_WRAPPERS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_INCLASS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_PRIVATE_PROPERTY_OFFSET \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_SPARSE_DATA \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_INCLASS_NO_PURE_DECLS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENCV_API UClass* StaticClass<class UOpenCVAcess>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAcess_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
