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

// BlueprintGeneratedClass BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C
// 0x0050 (0x12E0 - 0x1290)
class ABP_Weapon_MosinNagant_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1290(0x0008) (Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponReloadData                           FinalReloadData;                                          // 0x12A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWeaponReloadData                           NewVar_1;                                                 // 0x12C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	int GetAmmoReloadCapacity(class AAmmunitionItem** ammo);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Weapon_MosinNagant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
