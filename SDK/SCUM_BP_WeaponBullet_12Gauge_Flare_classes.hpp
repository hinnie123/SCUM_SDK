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

// BlueprintGeneratedClass BP_WeaponBullet_12Gauge_Flare.BP_WeaponBullet_12Gauge_Flare_C
// 0x0010 (0x0540 - 0x0530)
class ABP_WeaponBullet_12Gauge_Flare_C : public AProjectileFlare
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Ak_Flare;                                                 // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_12Gauge_Flare.BP_WeaponBullet_12Gauge_Flare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_12Gauge_Flare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
