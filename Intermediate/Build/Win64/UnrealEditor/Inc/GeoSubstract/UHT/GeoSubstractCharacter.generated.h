// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeoSubstractCharacter.h"

#ifdef GEOSUBSTRACT_GeoSubstractCharacter_generated_h
#error "GeoSubstractCharacter.generated.h already included, missing '#pragma once' in GeoSubstractCharacter.h"
#endif
#define GEOSUBSTRACT_GeoSubstractCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGeoSubstractCharacter ***************************************************
#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


GEOSUBSTRACT_API UClass* Z_Construct_UClass_AGeoSubstractCharacter_NoRegister();

#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeoSubstractCharacter(); \
	friend struct Z_Construct_UClass_AGeoSubstractCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOSUBSTRACT_API UClass* Z_Construct_UClass_AGeoSubstractCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGeoSubstractCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeoSubstract"), Z_Construct_UClass_AGeoSubstractCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGeoSubstractCharacter)


#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGeoSubstractCharacter(AGeoSubstractCharacter&&) = delete; \
	AGeoSubstractCharacter(const AGeoSubstractCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeoSubstractCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeoSubstractCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGeoSubstractCharacter) \
	NO_API virtual ~AGeoSubstractCharacter();


#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractCharacter_h_21_PROLOG
#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGeoSubstractCharacter;

// ********** End Class AGeoSubstractCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
