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

// BlueprintGeneratedClass BP_WeaponFlashlight_DesertEagle.BP_WeaponFlashlight_DesertEagle_C
// 0x0008 (0x0888 - 0x0880)
class ABP_WeaponFlashlight_DesertEagle_C : public AWeaponAttachmentFlashlight
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponFlashlight_DesertEagle.BP_WeaponFlashlight_DesertEagle_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
