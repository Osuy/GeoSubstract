// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeoSubstractPlayerController.h"

#ifdef GEOSUBSTRACT_GeoSubstractPlayerController_generated_h
#error "GeoSubstractPlayerController.generated.h already included, missing '#pragma once' in GeoSubstractPlayerController.h"
#endif
#define GEOSUBSTRACT_GeoSubstractPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGeoSubstractPlayerController ********************************************
GEOSUBSTRACT_API UClass* Z_Construct_UClass_AGeoSubstractPlayerController_NoRegister();

#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeoSubstractPlayerController(); \
	friend struct Z_Construct_UClass_AGeoSubstractPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOSUBSTRACT_API UClass* Z_Construct_UClass_AGeoSubstractPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AGeoSubstractPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeoSubstract"), Z_Construct_UClass_AGeoSubstractPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AGeoSubstractPlayerController)


#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeoSubstractPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGeoSubstractPlayerController(AGeoSubstractPlayerController&&) = delete; \
	AGeoSubstractPlayerController(const AGeoSubstractPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeoSubstractPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeoSubstractPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeoSubstractPlayerController) \
	NO_API virtual ~AGeoSubstractPlayerController();


#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractPlayerController_h_16_PROLOG
#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGeoSubstractPlayerController;

// ********** End Class AGeoSubstractPlayerController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
