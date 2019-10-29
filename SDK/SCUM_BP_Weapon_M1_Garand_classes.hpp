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

// BlueprintGeneratedClass BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C
// 0x0020 (0x12B0 - 0x1290)
class ABP_Weapon_M1_Garand_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1290(0x0008) (Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IronSightsHideAlpha;                                      // 0x12A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x12A4(0x0004) MISSED OFFSET
	class UAnimMontage*                                LastShotNoPingMontage;                                    // 0x12A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C");
		return ptr;
	}


	class UAnimMontage* GetFiringMontage(bool* isLastShot);
	bool CanAddAttachment(class AWeaponAttachment** Attachment);
	void UpdateReloadData(struct FWeaponReloadData* reloadDataIn, struct FWeaponReloadData* reloadDataOut);
	int GetAmmoReloadCapacity(class AAmmunitionItem** ammo);
	bool CanSwitchFiringMode();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void ExecuteUbergraph_BP_Weapon_M1_Garand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
