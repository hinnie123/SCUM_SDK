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

// BlueprintGeneratedClass 2H_Wooden_Sword.2H_Wooden_Sword_C
// 0x0008 (0x0780 - 0x0778)
class A2H_Wooden_Sword_C : public AWeaponItem
{
public:
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 2H_Wooden_Sword.2H_Wooden_Sword_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
