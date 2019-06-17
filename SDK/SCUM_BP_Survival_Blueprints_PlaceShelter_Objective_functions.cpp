// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::GetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_GetPrisoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogEvent                   DialogueEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::AddToDialogueQueue(EDialogEvent DialogueEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_AddToDialogueQueue_Params params;
	params.DialogueEvent = DialogueEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.UserConstructionScript");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted
// (Event, Public, BlueprintEvent)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::OnObjectiveStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnObjectiveStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ETabMode                       tabMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::OnTabModeOpened(ETabMode tabMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnTabModeOpened_Params params;
	params.tabMode = tabMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
