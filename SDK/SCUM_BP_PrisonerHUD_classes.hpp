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

// BlueprintGeneratedClass BP_PrisonerHUD.BP_PrisonerHUD_C
// 0x0008 (0x0500 - 0x04F8)
class ABP_PrisonerHUD_C : public APrisonerHUD
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PrisonerHUD.BP_PrisonerHUD_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
