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

// BlueprintGeneratedClass BP_Weapon_M1887.BP_Weapon_M1887_C
// 0x0030 (0x1290 - 0x1260)
class ABP_Weapon_M1887_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1260(0x0008) (Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponReloadData                           ModifiedReloadData;                                       // 0x1270(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_M1887.BP_Weapon_M1887_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	int GetAmmoReloadCapacity(class AAmmunitionItem** ammo);
	struct FWidgetDisplayInfo GetWidgetDisplayInfo();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FillUpWithAmmo();
	void ExecuteUbergraph_BP_Weapon_M1887(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
