// Fill out your copyright notice in the Description page of Project Settings.


#include "GSBlueprintFunctionLibrary.h"
#include <map>
#include "Components/StaticMeshComponent.h"
#include "DynamicMesh/DynamicMesh3.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/StaticMesh.h"
#include "DynamicMesh/DynamicMeshAttributeSet.h"
#include "DynamicMesh/MeshTransforms.h"
#include "Operations/MeshBoolean.h"
#include "DynamicMesh/MeshNormals.h"
#include "StaticMeshResources.h"
#include "StaticMeshAttributes.h"
#include "RawIndexBuffer.h"
#include "Rendering/StaticMeshVertexBuffer.h"
#include "Rendering/PositionVertexBuffer.h"
#include "DynamicMeshToMeshDescription.h"
#include "MeshDescriptionToDynamicMesh.h"
#include "StaticMeshOperations.h"
//#include "../CGAL/Exact_predicates_exact_constructions_kernel.h"
//#include "../CGAL/boost/graph/convert_nef_polyhedron_to_polygon_mesh.h"
//#include "../CGAL/Polygon_mesh_processing/corefinement.h"
//#include "../CGAL/Polygon_mesh_processing/remesh.h"
//#include "../CGAL/Surface_mesh/Surface_mesh.h"
//using Kernel = CGAL::Exact_predicates_exact_constructions_kernel;
//using Point = Kernel::Point_3;
//using Surface_mesh = CGAL::Surface_mesh<Point>;
//using vertex_descriptor = boost::graph_traits<surface_mesh>::vertex_descriptor;
//using face_descriptor = boost::graph_traits<surface_mesh>::face_descriptor;
#include "CGAL_Lib.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include <array>
#include "PhysicsEngine/BodySetup.h"

using UE::Geometry::FDynamicMeshAttributeSet;
using UE::Geometry::FDynamicMeshNormalOverlay;
using UE::Geometry::FDynamicMeshUVOverlay;
using UE::Geometry::FIndex3i;
using UE::Geometry::FMeshBoolean;
using UE::Geometry::FMeshNormals;

TMap<TObjectPtr<UStaticMesh>, FDynamicMeshSpec> UGSBlueprintFunctionLibrary::CachedDynamicMeshSpecs{};
TSet<TObjectPtr<UStaticMesh>> UGSBlueprintFunctionLibrary::CachedRuntimeStaticMeshes{};

TArray<AStaticMeshActor*> UGSBlueprintFunctionLibrary::Substract(AStaticMeshActor* Base, UStaticMeshComponent* Substractor)
{
	if (!IsValid(Base) || !IsValid(Substractor))
	{
		return {};
	}

	auto BaseMesh = Base->GetStaticMeshComponent()->GetStaticMesh();
	auto SubstractorMesh = Substractor->GetStaticMesh();
	if (!IsValid(BaseMesh) || !IsValid(SubstractorMesh))
	{
		return{};
	}

	if (!CachedDynamicMeshSpecs.Contains(BaseMesh))
	{
		auto& DynamicMeshSpec = CachedDynamicMeshSpecs.Emplace(BaseMesh);
		BuidDynamicMesh(DynamicMeshSpec.DynamicMesh, BaseMesh);

		DynamicMeshSpec.AABBTree.SetMesh(&DynamicMeshSpec.DynamicMesh, true);
		DynamicMeshSpec.FastWinding.SetTree(&DynamicMeshSpec.AABBTree, true);
	}

	if (!CachedDynamicMeshSpecs.Contains(SubstractorMesh))
	{
		auto& DynamicMeshSpec = CachedDynamicMeshSpecs.Emplace(SubstractorMesh);
		BuidDynamicMesh(DynamicMeshSpec.DynamicMesh, SubstractorMesh);
		DynamicMeshSpec.AABBTree.SetMesh(&DynamicMeshSpec.DynamicMesh, true);
		DynamicMeshSpec.FastWinding.SetTree(&DynamicMeshSpec.AABBTree, true);
	}

	auto NewStaticMesh = NewObject<UStaticMesh>();
	NewStaticMesh->AddMaterial(BaseMesh->GetMaterial(0));
	auto& NewDynamicMeshSpec = CachedDynamicMeshSpecs.Emplace(NewStaticMesh);
	auto& ResultMesh = NewDynamicMeshSpec.DynamicMesh;

	ensure(CachedDynamicMeshSpecs.Contains(BaseMesh) && CachedDynamicMeshSpecs.Contains(SubstractorMesh));
	const auto& BaseDynamicMesh = CachedDynamicMeshSpecs[BaseMesh].DynamicMesh;
	const auto& SubstractorDynamicMesh = CachedDynamicMeshSpecs[SubstractorMesh].DynamicMesh;
	FMeshBoolean Boolean(&BaseDynamicMesh
		, FTransform::Identity
		, &SubstractorDynamicMesh
		, Substractor->GetComponentTransform().GetRelativeTransform(Base->GetActorTransform())
		, &ResultMesh
		, FMeshBoolean::EBooleanOp::Difference);

	Boolean.bPutResultInInputSpace = true;
	/*Boolean.bSimplifyAlongNewEdges = true;
	Boolean.WindingThreshold = 0.5;
	Boolean.bCollapseDegenerateEdgesOnCut = true;*/
	if (!Boolean.Compute())
	{
		// fill holes
	}
	ResultMesh.EnableAttributes();
	//ResultMesh.DiscardVertexNormals();
	//ResultMesh.CompactInPlace();
	//FMeshNormals MN{ &ResultMesh };
	//FMeshNormals::InitializeOverlayToPerVertexNormals(ResultMesh.Attributes()->PrimaryNormals(), false);
	FMeshNormals::InitializeOverlayToPerTriangleNormals(ResultMesh.Attributes()->PrimaryNormals());
	//MN.ComputeTriangleNormals();

	/*ResultMesh.Attributes()->EnableTangents();
	FMeshTangents::ComputeOverlayTangents(
		*DynamicMesh,
		DynamicMesh->Attributes()->PrimaryNormals(),
		DynamicMesh->Attributes()->PrimaryTangents()
	);*/

	NewDynamicMeshSpec.AABBTree.SetMesh(&NewDynamicMeshSpec.DynamicMesh, true);
	NewDynamicMeshSpec.FastWinding.SetTree(&NewDynamicMeshSpec.AABBTree, true);

	FMeshDescription MeshDescription;
	FStaticMeshAttributes StaticMeshAttributes(MeshDescription);
	StaticMeshAttributes.Register();

	FDynamicMeshToMeshDescription Converter;
	Converter.Convert(&ResultMesh, MeshDescription);
	MeshTransforms::ApplyTransform(ResultMesh, Base->GetActorTransform());

	TArray<const FMeshDescription*> MeshDescriptionPtrs;
	MeshDescriptionPtrs.Emplace(&MeshDescription);
	NewStaticMesh->BuildFromMeshDescriptions(MeshDescriptionPtrs);

	TArray<AStaticMeshActor*> Results;
	if (!NewStaticMesh->IsMeshDescriptionValid(0))
	{
		return Results;
	}

	//NewStaticMesh->CreateBodySetup();
	if (UBodySetup* BodySetup = NewStaticMesh->GetBodySetup())
	{
		BodySetup->InvalidatePhysicsData();
		BodySetup->CreatePhysicsMeshes(); // 重新生成
	}

	NewStaticMesh->Build();

	auto Material = BaseMesh->GetMaterial(0);
	NewStaticMesh->AddMaterial(Material);
	
	if (auto NewBase = Base->GetWorld()->SpawnActor<AStaticMeshActor>(AStaticMeshActor::StaticClass(), Base->GetActorTransform()))
	{
		NewBase->SetMobility(EComponentMobility::Movable);
		NewBase->GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
		NewBase->GetStaticMeshComponent()->SetStaticMesh(NewStaticMesh);
		Results.Add(NewBase);
	}

	return Results;
}

void UGSBlueprintFunctionLibrary::BuidDynamicMesh(FDynamicMesh3& DynamicMesh, UStaticMesh* StaticMesh)
{
	if (!StaticMesh || !StaticMesh->GetRenderData() || !StaticMesh->GetRenderData()->LODResources.IsValidIndex(0))
	{
		return;
	}

	auto MeshDescription = StaticMesh->GetMeshDescription(0);
	FStaticMeshAttributes Attributes(*MeshDescription);
	Attributes.Register();
	FMeshDescriptionToDynamicMesh Converter;
	Converter.Convert(MeshDescription, DynamicMesh);
}

struct const_mesh_data : public i_mesh
{
	FMeshDescription* MD = nullptr;
	FTransform tf;
	const_mesh_data(FMeshDescription* MD_, const FTransform& tf_)
		: MD{ MD_ }
		, tf{ tf_ }
	{
	}

	virtual void get_vertices(std::function<void(int, const std::array<float, 3>&)> op)const override
	{
		std::array<float, 3> values;
		for (auto el : MD->Vertices().GetElementIDs())
		{
			auto p = MD->GetVertexPosition(el);
			auto v = tf.TransformPosition(FVector{ p });
			values[0] = v[0];
			values[1] = v[2];
			values[2] = v[1];
			op(el, values);
		}
	}

	virtual void get_triangles(std::function<void(const std::array<int, 3>&)> op)const override
	{
		std::array<int, 3> triangle;
		for (const auto& el : MD->Triangles().GetElementIDs())
		{
			auto tri = MD->GetTriangleVertices(el);
			triangle[0] = tri[0];
			triangle[1] = tri[1];
			triangle[2] = tri[2];
			op(triangle);
		}
	}
};

struct static_mesh_data : public const_mesh_data
{
	FStaticMeshAttributes Attributes;
	FPolygonGroupID group;
	static_mesh_data(UStaticMesh* SM, const FTransform& tf_)
		: const_mesh_data{ SM->GetMeshDescription(0), tf_ }
		, Attributes{ *MD }
	{
	}

	static_mesh_data(FMeshDescription* MD_, const FTransform& tf_)
		: const_mesh_data{ MD_, tf_ }
		, Attributes{ *MD }
	{
		Attributes.Register();
		group = MD->CreatePolygonGroup();
		auto Positions = Attributes.GetVertexPositions().GetRawArray();
		auto Normals = Attributes.GetVertexInstanceNormals().GetRawArray();
		auto UVs = Attributes.GetVertexInstanceUVs().GetRawArray(0); // UV Channel 0
		auto Tangents = Attributes.GetVertexInstanceTangents().GetRawArray();
		auto Binormals = Attributes.GetTriangleBinormals().GetRawArray();

		ensure(Attributes.GetVertexPositions().IsValid());
		ensure(Attributes.GetVertexInstanceNormals().IsValid());
		ensure(Attributes.GetVertexInstanceUVs().IsValid());
		ensure(Attributes.GetVertexInstanceTangents().IsValid());
	}

	virtual int add_vertex(const std::array<float, 3>& point) override
	{
		auto res = MD->CreateVertex();
		FVector position{ point[0], point[2], point[1] };
		position = tf.InverseTransformPosition(position);
		Attributes.GetVertexPositions()[res] = FVector3f(position);
		return res;
	}
	virtual int add_triangle(const std::array<int, 3>& tri, const std::array<float, 3>& normal) override
	{
		FVector3f Normal{ tf.InverseTransformVector(FVector{ normal[0], normal[2], normal[1] }).GetSafeNormal() };
		TArray<FVertexInstanceID> VertexInstanceIDs;

		auto vsid = MD->CreateVertexInstance(tri[0]);
		VertexInstanceIDs.Add(vsid);
		Attributes.GetVertexInstanceNormals()[vsid] = Normal;
		Attributes.GetVertexInstanceUVs()[vsid] = FVector2f(0.5f, 0.5f);
		Attributes.GetVertexInstanceTangents()[vsid] = FVector3f(1, 0, 0);

		vsid = MD->CreateVertexInstance(tri[1]);
		VertexInstanceIDs.Add(vsid);
		Attributes.GetVertexInstanceNormals()[vsid] = Normal;
		Attributes.GetVertexInstanceUVs()[vsid] = FVector2f(0.5f, 0.5f);
		Attributes.GetVertexInstanceTangents()[vsid] = FVector3f(1, 0, 0);

		vsid = MD->CreateVertexInstance(tri[2]);
		VertexInstanceIDs.Add(vsid);
		Attributes.GetVertexInstanceNormals()[vsid] = Normal;
		Attributes.GetVertexInstanceUVs()[vsid] = FVector2f(0.5f, 0.5f);
		Attributes.GetVertexInstanceTangents()[vsid] = FVector3f(1, 0, 0);

		return MD->CreateTriangle(group, VertexInstanceIDs);
	}

	virtual std::shared_ptr<i_mesh> create()const override
	{
		return std::make_shared<static_mesh_data>(new FMeshDescription{}, tf);
	}
};

TArray<AStaticMeshActor*> UGSBlueprintFunctionLibrary::Substract_UseCGAL(AStaticMeshActor* Base, UStaticMeshComponent* Substractor)
{
	if (!IsValid(Base) || !IsValid(Substractor))
	{
		return {};
	}

	auto BaseMesh = Base->GetStaticMeshComponent()->GetStaticMesh();
	auto SubstractorMesh = Substractor->GetStaticMesh();
	if (!IsValid(BaseMesh) || !IsValid(SubstractorMesh))
	{
		return{};
	}

	auto Material = BaseMesh->GetMaterial(0);
	auto WholeMass = Base->GetStaticMeshComponent()->BodyInstance.GetMassOverride();
	static_mesh_data base{ BaseMesh, Base->GetActorTransform() };
	const_mesh_data substractor{ SubstractorMesh->GetMeshDescription(0), Substractor->GetComponentTransform() };
	std::vector<std::shared_ptr<i_mesh>> out_meshs;
	mesh_subtract(base, substractor, out_meshs);

	TArray<AStaticMeshActor*> outputs;
	for (auto& it : out_meshs)
	{
		if (!it)continue;
		auto result = (static_mesh_data*)(it.get());
		if (!result)continue;
		auto MeshDescription = result->MD;
		if (FMath::IsNearlyEqual(result->rate, 1.f))
		{
			delete MeshDescription;
			continue;
		}

		if (MeshDescription->IsEmpty() || 0 == MeshDescription->Polygons().Num())continue;

		auto NewStaticMeshActor = Base->GetWorld()->SpawnActor<AStaticMeshActor>(AStaticMeshActor::StaticClass(), Base->GetActorTransform());
		NewStaticMeshActor->SetMobility(EComponentMobility::Movable);
		auto NewStaticMeshComp = NewStaticMeshActor->GetStaticMeshComponent();

		auto NewStaticMesh = NewObject<UStaticMesh>(NewStaticMeshActor);
		FStaticMeshSourceModel& SourceModel = NewStaticMesh->AddSourceModel();
		SourceModel.BuildSettings.bRecomputeNormals = false;
		SourceModel.BuildSettings.bUseMikkTSpace = false;
		SourceModel.BuildSettings.bRecomputeTangents = false;

		TArray<const FMeshDescription*> MeshDescriptions;
		MeshDescriptions.Add(MeshDescription);
		UStaticMesh::FBuildMeshDescriptionsParams param;
		param.bAllowCpuAccess = true;
		param.bBuildSimpleCollision = true;
		param.bFastBuild = true;
		NewStaticMesh->BuildFromMeshDescriptions(MeshDescriptions, param);

		if (!NewStaticMesh->IsMeshDescriptionValid(0))
		{
			NewStaticMeshActor->Destroy();
			continue;
		}

		//NewStaticMesh->CreateBodySetup();
		if (UBodySetup* BodySetup = NewStaticMesh->GetBodySetup())
		{
			BodySetup->InvalidatePhysicsData();
			BodySetup->CreatePhysicsMeshes(); // 重新生成
		}
		//// 生成凸包碰撞（自动简化）
		//BodySetup->bDoubleSidedGeometry = false;
		//BodySetup->bGenerateMirroredCollision = false;

		//BodySetup->InvalidatePhysicsData();
		//BodySetup->bHasCookedCollisionData = false;
		//BodySetup->CreatePhysicsMeshes();
		//if (BodySetup->AggGeom.ConvexElems.Num() == 0) {
		//	UE_LOG(LogTemp, Error, TEXT("Convex failed"));
		//}
		//else {
		//	UE_LOG(LogTemp, Log, TEXT("Convex num: %d"), BodySetup->AggGeom.ConvexElems.Num());
		//}
		NewStaticMesh->Build();
		NewStaticMesh->AddMaterial(Material);

		NewStaticMeshComp->SetStaticMesh(NewStaticMesh);

		// 处理比例大于0.6的主体和其余碎片
		// 
		NewStaticMeshComp->SetGenerateOverlapEvents(true);
		
		if (result->rate > 0.7f)
		{
			NewStaticMeshActor->SetMobility(Base->GetRootComponent()->GetMobility());
		}
		else
		{
			NewStaticMeshComp->SetCollisionProfileName(TEXT("PhysicsActor"));
			NewStaticMeshComp->SetSimulatePhysics(true);
			NewStaticMeshComp->BodyInstance.SetMassOverride(WholeMass * result->rate);
			FVector MassCenter = NewStaticMeshComp->BodyInstance.COMNudge;
			MassCenter.X += FMath::RandRange(-100.0, 100.0);
			MassCenter.Y += FMath::RandRange(-100.0, 100.0);
			MassCenter.Z += FMath::RandRange(-100.0, 100.0);

			//NewStaticMeshComp->AddImpulse(MassCenter * NewStaticMeshComp->BodyInstance.GetMassOverride());
		}
		outputs.Add(NewStaticMeshActor);


		delete MeshDescription;
	}

	if (!!outputs.Num())
	{
		Base->Destroy();
	}

	return outputs;
}

