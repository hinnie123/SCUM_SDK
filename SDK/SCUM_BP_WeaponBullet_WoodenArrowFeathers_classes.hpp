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

// BlueprintGeneratedClass BP_WeaponBullet_WoodenArrowFeathers.BP_WeaponBullet_WoodenArrowFeathers_C
// 0x0010 (0x0560 - 0x0550)
class ABP_WeaponBullet_WoodenArrowFeathers_C : public AProjectileArrow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_WoodenArrowFeathers.BP_WeaponBullet_WoodenArrowFeathers_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_WoodenArrowFeathers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
