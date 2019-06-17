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

// BlueprintGeneratedClass BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C
// 0x0030 (0x0480 - 0x0450)
class ABP_Survival_Tutorial_CraftStoneKnifeObjective_C : public ACraftingObjective
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AMissionDialogueManager*                     DialogueManager;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               _firstTimeOpened;                                         // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class UCraftableItem*                              CraftableItem;                                            // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDialogueData*                               DialogueData;                                             // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C");
		return ptr;
	}


	void UnbindItemClicked(const struct FScriptDelegate& Delegate);
	void UnbindTabModeOpened(const struct FScriptDelegate& Delegate);
	void GetPrisoner(class APrisoner** AsPrisoner);
	void AddToDialogueQueue(EDialogEvent dialogEvent);
	void UserConstructionScript();
	void OnObjectiveStarted();
	void OnTabModeOpened(ETabMode tabMode);
	void CraftingTabOpened();
	void CraftingItemClicked(class UCraftableItem* CraftableItem);
	void OnObjectiveCompleted();
	void OnObjectiveFailed();
	void OnObjectiveBelated();
	void ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
