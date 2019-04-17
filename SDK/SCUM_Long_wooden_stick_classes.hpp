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

// BlueprintGeneratedClass Long_wooden_stick.Long_wooden_stick_C
// 0x0008 (0x0750 - 0x0748)
class ALong_wooden_stick_C : public AEquipmentItem
{
public:
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Long_wooden_stick.Long_wooden_stick_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
