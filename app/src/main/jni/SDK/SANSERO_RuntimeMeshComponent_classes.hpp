#pragma once

// Pubg Mobile Battelgrounds (2.7.0-64BIT) SDK Generated By @hhamk2 
// 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @SANSERO_MOD_1
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RuntimeMeshComponent.RuntimeMeshComponent
// 0x0110 (0x08B0 - 0x07A0)
class URuntimeMeshComponent : public UMeshComponent
{
public:
	struct FScriptMulticastDelegate                    CollisionUpdated;                                         // 0x07A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUseComplexAsSimpleCollision;                             // 0x07B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAsyncCooking;                                         // 0x07B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSerializeMeshData;                                 // 0x07B2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERuntimeMeshCollisionCookingMode                   CollisionMode;                                            // 0x07B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x07B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x07C0(0x0030) MISSED OFFSET
	TArray<struct FRuntimeMeshCollisionSection>        MeshCollisionSections;                                    // 0x07F0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRuntimeConvexCollisionSection>      ConvexCollisionSections;                                  // 0x0800(0x0010) (ZeroConstructor, Transient)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0810(0x001C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x082C(0x0004) MISSED OFFSET
	struct FRuntimeMeshComponentPrePhysicsTickFunction PrePhysicsTick;                                           // 0x0830(0x0058) (Transient)
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x0888(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0898(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshComponent");
		return pStaticClass;
	}


	void UpdateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles);
	void SetSectionTessellationTriangles(int SectionIndex, TArray<int> TessellationTriangles, bool bShouldMoveArray);
	void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);
	void SetMeshSectionCollisionEnabled(int SectionIndex, bool bNewCollisionEnabled);
	void SetMeshSectionCastsShadow(int SectionIndex, bool bNewCastsShadow);
	void SetMeshCollisionSection(int CollisionSectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles);
	void RuntimeMeshCollisionUpdatedDelegate__DelegateSignature();
	bool IsMeshSectionVisible(int SectionIndex);
	bool IsMeshSectionCollisionEnabled(int SectionIndex);
	bool IsMeshSectionCastingShadows(int SectionIndex);
	int GetNumSections();
	int GetLastSectionIndex();
	int FirstAvailableMeshSectionIndex();
	void EndBatchUpdates();
	bool DoesSectionExist(int SectionIndex);
	void CreateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCreateCollision, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles, EUpdateFrequency UpdateFrequency);
	void CookCollisionNow();
	void ClearMeshSection(int SectionIndex);
	void ClearMeshCollisionSection(int CollisionSectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void ClearAllMeshCollisionSections();
	void BeginBatchUpdates();
	void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
};


// Class RuntimeMeshComponent.RuntimeMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class URuntimeMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshLibrary");
		return pStaticClass;
	}


	void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents);
	void GenerateTessellationIndexBuffer(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents, TArray<int>* OutTessTriangles);
	void CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles);
	void CreateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents);
	void CopyRuntimeMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComp, int LODIndex, class URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision);
	void ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles);
	void CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents);
};


}

