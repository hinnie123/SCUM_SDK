#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BloodTrailMarker.BP_BloodTrailMarker_C
// 0x0010 (0x0388 - 0x0378)
class ABP_BloodTrailMarker_C : public ATrackingMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             TrailDecal;                                               // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BloodTrailMarker.BP_BloodTrailMarker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BloodTrailMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
