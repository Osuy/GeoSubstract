// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GSBlueprintFunctionLibrary.h"

#ifdef GEOSUBSTRACT_GSBlueprintFunctionLibrary_generated_h
#error "GSBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in GSBlueprintFunctionLibrary.h"
#endif
#define GEOSUBSTRACT_GSBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AStaticMeshActor;
class UStaticMeshComponent;

// ********** Begin Class UGSBlueprintFunctionLibrary **********************************************
#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSubstract_UseCGAL); \
	DECLARE_FUNCTION(execSubstract);


GEOSUBSTRACT_API UClass* Z_Construct_UClass_UGSBlueprintFunctionLibrary_NoRegister();

#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGSBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOSUBSTRACT_API UClass* Z_Construct_UClass_UGSBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGSBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeoSubstract"), Z_Construct_UClass_UGSBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGSBlueprintFunctionLibrary)


#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGSBlueprintFunctionLibrary(UGSBlueprintFunctionLibrary&&) = delete; \
	UGSBlueprintFunctionLibrary(const UGSBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSBlueprintFunctionLibrary) \
	NO_API virtual ~UGSBlueprintFunctionLibrary();


#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h_41_PROLOG
#define FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h_44_INCLASS_NO_PURE_DECLS \
	FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGSBlueprintFunctionLibrary;

// ********** End Class UGSBlueprintFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
