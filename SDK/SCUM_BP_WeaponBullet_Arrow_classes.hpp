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

// BlueprintGeneratedClass BP_WeaponBullet_Arrow.BP_WeaponBullet_Arrow_C
// 0x0008 (0x0538 - 0x0530)
class ABP_WeaponBullet_Arrow_C : public AProjectileArrow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_Arrow.BP_WeaponBullet_Arrow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_Arrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
