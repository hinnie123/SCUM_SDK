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

// BlueprintGeneratedClass BP_M1_Clip.BP_M1_Clip_C
// 0x0000 (0x0820 - 0x0820)
class ABP_M1_Clip_C : public AWeaponAttachmentMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_Clip.BP_M1_Clip_C");
		return ptr;
	}


	EInteractionState GetStateForInteractionWithItem(class AItem** Item);
	struct FInteractionStruct GetDefaultInteractionForPrisoner(class APrisoner** Prisoner, struct FInteractionQueryParameters* Params);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
