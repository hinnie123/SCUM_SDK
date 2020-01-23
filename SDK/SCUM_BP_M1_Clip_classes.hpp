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
// 0x0088 (0x0900 - 0x0878)
class ABP_M1_Clip_C : public AWeaponAttachmentMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (Transient, DuplicateTransient)
	class UTexture2D*                                  EmptyIcon;                                                // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FInteractionStruct                          EquipInteraction;                                         // 0x0888(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInteractionStruct>                  ReturnInteraction;                                        // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_Clip.BP_M1_Clip_C");
		return ptr;
	}


	TArray<struct FInteractionStruct> GetInteractionsWithItem(class UObject** User, class AItem** Item);
	EInteractionState GetStateForInteractionWithItem(class AItem** Item);
	struct FInteractionStruct GetDefaultInteractionForPrisoner(class APrisoner** Prisoner, struct FInteractionQueryParameters* Params);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAmmoChangedEvent();
	void ExecuteUbergraph_BP_M1_Clip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
