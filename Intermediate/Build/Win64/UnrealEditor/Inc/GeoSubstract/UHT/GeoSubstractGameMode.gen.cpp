// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoSubstractGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGeoSubstractGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GEOSUBSTRACT_API UClass* Z_Construct_UClass_AGeoSubstractGameMode();
GEOSUBSTRACT_API UClass* Z_Construct_UClass_AGeoSubstractGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeoSubstract();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGeoSubstractGameMode ****************************************************
void AGeoSubstractGameMode::StaticRegisterNativesAGeoSubstractGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGeoSubstractGameMode;
UClass* AGeoSubstractGameMode::GetPrivateStaticClass()
{
	using TClass = AGeoSubstractGameMode;
	if (!Z_Registration_Info_UClass_AGeoSubstractGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GeoSubstractGameMode"),
			Z_Registration_Info_UClass_AGeoSubstractGameMode.InnerSingleton,
			StaticRegisterNativesAGeoSubstractGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AGeoSubstractGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGeoSubstractGameMode_NoRegister()
{
	return AGeoSubstractGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGeoSubstractGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GeoSubstractGameMode.h" },
		{ "ModuleRelativePath", "GeoSubstractGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoSubstractGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGeoSubstractGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GeoSubstract,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoSubstractGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoSubstractGameMode_Statics::ClassParams = {
	&AGeoSubstractGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoSubstractGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoSubstractGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeoSubstractGameMode()
{
	if (!Z_Registration_Info_UClass_AGeoSubstractGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoSubstractGameMode.OuterSingleton, Z_Construct_UClass_AGeoSubstractGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeoSubstractGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoSubstractGameMode);
AGeoSubstractGameMode::~AGeoSubstractGameMode() {}
// ********** End Class AGeoSubstractGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractGameMode_h__Script_GeoSubstract_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeoSubstractGameMode, AGeoSubstractGameMode::StaticClass, TEXT("AGeoSubstractGameMode"), &Z_Registration_Info_UClass_AGeoSubstractGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoSubstractGameMode), 450438031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractGameMode_h__Script_GeoSubstract_3265865004(TEXT("/Script/GeoSubstract"),
	Z_CompiledInDeferFile_FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractGameMode_h__Script_GeoSubstract_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_GeoSubstractGameMode_h__Script_GeoSubstract_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
