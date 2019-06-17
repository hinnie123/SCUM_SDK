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

// BlueprintGeneratedClass BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C
// 0x0020 (0x0490 - 0x0470)
class ABP_Survival_Blueprints_PlaceShelter_Objective_C : public ABlueprintableItemObjective
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDialogueData*                               DialogueData;                                             // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMissionDialogueManager*                     DialogueManager;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C");
		return ptr;
	}


	void GetPrisoner(class APrisoner** Prisoner);
	void AddToDialogueQueue(EDialogEvent DialogueEvent);
	void UserConstructionScript();
	void OnObjectiveStarted();
	void OnTabModeOpened(ETabMode tabMode);
	void ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
