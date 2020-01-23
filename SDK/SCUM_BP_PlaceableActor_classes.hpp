#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlaceableActor.BP_PlaceableActor_C
// 0x0010 (0x0508 - 0x04F8)
class ABP_PlaceableActor_C : public APlaceableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        _direction;                                               // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlaceableActor.BP_PlaceableActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_PlaceableActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
