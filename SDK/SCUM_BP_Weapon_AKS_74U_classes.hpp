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

// BlueprintGeneratedClass BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C
// 0x0014 (0x10C4 - 0x10B0)
class ABP_Weapon_AKS_74U_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10B0(0x0008) (Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x10B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IronSightsHideAlpha;                                      // 0x10C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void ExecuteUbergraph_BP_Weapon_AKS_74U(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
