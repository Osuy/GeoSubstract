// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSBlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGSBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GEOSUBSTRACT_API UClass* Z_Construct_UClass_UGSBlueprintFunctionLibrary();
GEOSUBSTRACT_API UClass* Z_Construct_UClass_UGSBlueprintFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeoSubstract();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGSBlueprintFunctionLibrary Function Substract ***************************
struct Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics
{
	struct GSBlueprintFunctionLibrary_eventSubstract_Parms
	{
		AStaticMeshActor* Base;
		UStaticMeshComponent* Substractor;
		TArray<AStaticMeshActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GSBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Substractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Base;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Substractor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSBlueprintFunctionLibrary_eventSubstract_Parms, Base), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::NewProp_Substractor = { "Substractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSBlueprintFunctionLibrary_eventSubstract_Parms, Substractor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Substractor_MetaData), NewProp_Substractor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSBlueprintFunctionLibrary_eventSubstract_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::NewProp_Substractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGSBlueprintFunctionLibrary, nullptr, "Substract", Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::GSBlueprintFunctionLibrary_eventSubstract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::GSBlueprintFunctionLibrary_eventSubstract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSBlueprintFunctionLibrary::execSubstract)
{
	P_GET_OBJECT(AStaticMeshActor,Z_Param_Base);
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_Substractor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AStaticMeshActor*>*)Z_Param__Result=UGSBlueprintFunctionLibrary::Substract(Z_Param_Base,Z_Param_Substractor);
	P_NATIVE_END;
}
// ********** End Class UGSBlueprintFunctionLibrary Function Substract *****************************

// ********** Begin Class UGSBlueprintFunctionLibrary Function Substract_UseCGAL *******************
struct Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics
{
	struct GSBlueprintFunctionLibrary_eventSubstract_UseCGAL_Parms
	{
		AStaticMeshActor* Base;
		UStaticMeshComponent* Substractor;
		TArray<AStaticMeshActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GSBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Substractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Base;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Substractor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSBlueprintFunctionLibrary_eventSubstract_UseCGAL_Parms, Base), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::NewProp_Substractor = { "Substractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSBlueprintFunctionLibrary_eventSubstract_UseCGAL_Parms, Substractor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Substractor_MetaData), NewProp_Substractor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSBlueprintFunctionLibrary_eventSubstract_UseCGAL_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::NewProp_Substractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGSBlueprintFunctionLibrary, nullptr, "Substract_UseCGAL", Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::GSBlueprintFunctionLibrary_eventSubstract_UseCGAL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::GSBlueprintFunctionLibrary_eventSubstract_UseCGAL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSBlueprintFunctionLibrary::execSubstract_UseCGAL)
{
	P_GET_OBJECT(AStaticMeshActor,Z_Param_Base);
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_Substractor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AStaticMeshActor*>*)Z_Param__Result=UGSBlueprintFunctionLibrary::Substract_UseCGAL(Z_Param_Base,Z_Param_Substractor);
	P_NATIVE_END;
}
// ********** End Class UGSBlueprintFunctionLibrary Function Substract_UseCGAL *********************

// ********** Begin Class UGSBlueprintFunctionLibrary **********************************************
void UGSBlueprintFunctionLibrary::StaticRegisterNativesUGSBlueprintFunctionLibrary()
{
	UClass* Class = UGSBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Substract", &UGSBlueprintFunctionLibrary::execSubstract },
		{ "Substract_UseCGAL", &UGSBlueprintFunctionLibrary::execSubstract_UseCGAL },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGSBlueprintFunctionLibrary;
UClass* UGSBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UGSBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UGSBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GSBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UGSBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUGSBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UGSBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UGSBlueprintFunctionLibrary_NoRegister()
{
	return UGSBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGSBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GSBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GSBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract, "Substract" }, // 713973943
		{ &Z_Construct_UFunction_UGSBlueprintFunctionLibrary_Substract_UseCGAL, "Substract_UseCGAL" }, // 1570545218
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GeoSubstract,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSBlueprintFunctionLibrary_Statics::ClassParams = {
	&UGSBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UGSBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGSBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSBlueprintFunctionLibrary.OuterSingleton;
}
UGSBlueprintFunctionLibrary::UGSBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSBlueprintFunctionLibrary);
UGSBlueprintFunctionLibrary::~UGSBlueprintFunctionLibrary() {}
// ********** End Class UGSBlueprintFunctionLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h__Script_GeoSubstract_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSBlueprintFunctionLibrary, UGSBlueprintFunctionLibrary::StaticClass, TEXT("UGSBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UGSBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSBlueprintFunctionLibrary), 369768609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h__Script_GeoSubstract_3749238004(TEXT("/Script/GeoSubstract"),
	Z_CompiledInDeferFile_FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h__Script_GeoSubstract_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osuy_Data_Projects_GeoSubstract_Source_GeoSubstract_Public_GSBlueprintFunctionLibrary_h__Script_GeoSubstract_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
