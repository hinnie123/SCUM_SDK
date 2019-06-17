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

// BlueprintGeneratedClass BP_Survival_Tutorial_SearchGroundObjective.BP_Survival_Tutorial_SearchGroundObjective_C
// 0x0008 (0x0438 - 0x0430)
class ABP_Survival_Tutorial_SearchGroundObjective_C : public ASearchGroundObjective
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Tutorial_SearchGroundObjective.BP_Survival_Tutorial_SearchGroundObjective_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
