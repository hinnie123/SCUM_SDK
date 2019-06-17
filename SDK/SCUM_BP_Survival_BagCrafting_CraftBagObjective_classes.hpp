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

// BlueprintGeneratedClass BP_Survival_BagCrafting_CraftBagObjective.BP_Survival_BagCrafting_CraftBagObjective_C
// 0x0008 (0x0458 - 0x0450)
class ABP_Survival_BagCrafting_CraftBagObjective_C : public ACraftingObjective
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_BagCrafting_CraftBagObjective.BP_Survival_BagCrafting_CraftBagObjective_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
