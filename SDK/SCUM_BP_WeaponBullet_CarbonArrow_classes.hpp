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

// BlueprintGeneratedClass BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C
// 0x0010 (0x0500 - 0x04F0)
class ABP_WeaponBullet_CarbonArrow_C : public AProjectileArrow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_CarbonArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
