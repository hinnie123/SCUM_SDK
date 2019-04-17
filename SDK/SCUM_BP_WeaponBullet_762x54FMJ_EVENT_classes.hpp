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

// BlueprintGeneratedClass BP_WeaponBullet_762x54FMJ_EVENT.BP_WeaponBullet_762x54FMJ_EVENT_C
// 0x0008 (0x04E8 - 0x04E0)
class ABP_WeaponBullet_762x54FMJ_EVENT_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_762x54FMJ_EVENT.BP_WeaponBullet_762x54FMJ_EVENT_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_762x54FMJ_EVENT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
