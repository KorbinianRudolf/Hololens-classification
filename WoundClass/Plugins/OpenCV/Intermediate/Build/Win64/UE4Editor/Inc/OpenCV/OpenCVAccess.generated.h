// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENCV_OpenCVAccess_generated_h
#error "OpenCVAccess.generated.h already included, missing '#pragma once' in OpenCVAccess.h"
#endif
#define OPENCV_OpenCVAccess_generated_h

#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_SPARSE_DATA
#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execloadModel); \
	DECLARE_FUNCTION(execclassify); \
	DECLARE_FUNCTION(execgetOpenCvVersion);


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execloadModel); \
	DECLARE_FUNCTION(execclassify); \
	DECLARE_FUNCTION(execgetOpenCvVersion);


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenCVAccess(); \
	friend struct Z_Construct_UClass_UOpenCVAccess_Statics; \
public: \
	DECLARE_CLASS(UOpenCVAccess, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenCV"), NO_API) \
	DECLARE_SERIALIZER(UOpenCVAccess)


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOpenCVAccess(); \
	friend struct Z_Construct_UClass_UOpenCVAccess_Statics; \
public: \
	DECLARE_CLASS(UOpenCVAccess, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenCV"), NO_API) \
	DECLARE_SERIALIZER(UOpenCVAccess)


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenCVAccess(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenCVAccess) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenCVAccess); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVAccess); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenCVAccess(UOpenCVAccess&&); \
	NO_API UOpenCVAccess(const UOpenCVAccess&); \
public:


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenCVAccess(UOpenCVAccess&&); \
	NO_API UOpenCVAccess(const UOpenCVAccess&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenCVAccess); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVAccess); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenCVAccess)


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_PRIVATE_PROPERTY_OFFSET
#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_12_PROLOG
#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_PRIVATE_PROPERTY_OFFSET \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_SPARSE_DATA \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_RPC_WRAPPERS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_INCLASS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_PRIVATE_PROPERTY_OFFSET \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_SPARSE_DATA \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_INCLASS_NO_PURE_DECLS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENCV_API UClass* StaticClass<class UOpenCVAccess>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WoundClass_Plugins_OpenCV_Source_OpenCV_Public_OpenCVAccess_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
