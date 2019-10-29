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

// BlueprintGeneratedClass BP_WeaponSightBase.BP_WeaponSightBase_C
// 0x0008 (0x0828 - 0x0820)
class ABP_WeaponSightBase_C : public AWeaponAttachmentSight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0820(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponSightBase.BP_WeaponSightBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnAttachedToItem(class AItem** Item);
	void OnDetachedFromItem(class AItem** Item);
	void ExecuteUbergraph_BP_WeaponSightBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
