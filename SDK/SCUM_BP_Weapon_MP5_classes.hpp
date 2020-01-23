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

// BlueprintGeneratedClass BP_Weapon_MP5.BP_Weapon_MP5_C
// 0x0014 (0x1364 - 0x1350)
class ABP_Weapon_MP5_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1350(0x0008) (Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IronSightsHideAlpha;                                      // 0x1360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_MP5.BP_Weapon_MP5_C");
		return ptr;
	}


	bool CanAddAttachment(class AWeaponAttachment** Attachment);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void ExecuteUbergraph_BP_Weapon_MP5(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
