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

// BlueprintGeneratedClass BP_ImprovisedFlashlight.BP_ImprovisedFlashlight_C
// 0x0008 (0x08D8 - 0x08D0)
class ABP_ImprovisedFlashlight_C : public AWeaponAttachmentUniversalFlashlight
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ImprovisedFlashlight.BP_ImprovisedFlashlight_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
