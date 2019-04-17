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

// BlueprintGeneratedClass BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C
// 0x0048 (0x10F8 - 0x10B0)
class ABP_Weapon_98k_Karabiner_C : public AWeapon
{
public:
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x10B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponReloadData                           FinalReloadData;                                          // 0x10B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWeaponReloadData                           NewVar_1;                                                 // 0x10D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C");
		return ptr;
	}


	int GetAmmoReloadCapacity(class AAmmunitionItem** ammo);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
