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

// BlueprintGeneratedClass BP_WeaponBullet_31.BP_WeaponBullet_30_C
// 0x0008 (0x0520 - 0x0518)
class ABP_WeaponBullet_30_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_31.BP_WeaponBullet_30_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_31(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
