// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DynamicMesh/DynamicMesh3.h"
#include "DynamicMesh/DynamicMeshAABBTree3.h"
#include "Spatial/FastWinding.h"
#include "GSBlueprintFunctionLibrary.generated.h"


using UE::Geometry::FDynamicMesh3;
using UE::Geometry::FDynamicMeshAABBTree3;
using UE::Geometry::TFastWindingTree;

class AStaticMeshActor;
class UStaticMesh;
class UMaterialInterface;
class UStaticMeshComponent;

struct FDynamicMeshSpec
{
	FDynamicMesh3 DynamicMesh;
	FDynamicMeshAABBTree3 AABBTree;
	TFastWindingTree<FDynamicMesh3> FastWinding;

	FDynamicMeshSpec()
		: DynamicMesh{ true, true, true, true }
		, AABBTree{}
		, FastWinding{ nullptr, false }
	{
	}

	// FDynamicMeshSpec(const FDynamicMeshSpec&) = default;
};

/**
 * 
 */
UCLASS()
class GEOSUBSTRACT_API UGSBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	static TMap<TObjectPtr<UStaticMesh>, FDynamicMeshSpec> CachedDynamicMeshSpecs;
	static TSet<TObjectPtr<UStaticMesh>> CachedRuntimeStaticMeshes;

	UFUNCTION(BlueprintCallable)
	static TArray<AStaticMeshActor*> Substract(AStaticMeshActor* Base, UStaticMeshComponent* Substractor);

	static void BuidDynamicMesh(FDynamicMesh3& DynamicMesh, UStaticMesh* StaticMesh);

	UFUNCTION(BlueprintCallable)
	static TArray<AStaticMeshActor*> Substract_UseCGAL(AStaticMeshActor* Base, UStaticMeshComponent* Substractor);
};
