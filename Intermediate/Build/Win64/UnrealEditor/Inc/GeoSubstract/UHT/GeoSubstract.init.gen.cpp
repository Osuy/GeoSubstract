// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoSubstract_init() {}
	GEOSUBSTRACT_API UFunction* Z_Construct_UDelegateFunction_GeoSubstract_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GeoSubstract;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GeoSubstract()
	{
		if (!Z_Registration_Info_UPackage__Script_GeoSubstract.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GeoSubstract_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GeoSubstract",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x27B9CF56,
				0x9377A31B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GeoSubstract.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GeoSubstract.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GeoSubstract(Z_Construct_UPackage__Script_GeoSubstract, TEXT("/Script/GeoSubstract"), Z_Registration_Info_UPackage__Script_GeoSubstract, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x27B9CF56, 0x9377A31B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
