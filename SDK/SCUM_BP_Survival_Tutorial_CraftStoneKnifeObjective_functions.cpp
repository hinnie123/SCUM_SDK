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

// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindItemClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::UnbindItemClicked(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindItemClicked");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_UnbindItemClicked_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindTabModeOpened
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::UnbindTabModeOpened(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindTabModeOpened");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_UnbindTabModeOpened_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.GetPrisoner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               AsPrisoner                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::GetPrisoner(class APrisoner** AsPrisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.GetPrisoner");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_GetPrisoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPrisoner != nullptr)
		*AsPrisoner = params.AsPrisoner;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.AddToDialogueQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogEvent                   dialogEvent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::AddToDialogueQueue(EDialogEvent dialogEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.AddToDialogueQueue");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_AddToDialogueQueue_Params params;
	params.dialogEvent = dialogEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UserConstructionScript");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveStarted
// (Event, Public, BlueprintEvent)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnObjectiveStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveStarted");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnTabModeOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ETabMode                       tabMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnTabModeOpened(ETabMode tabMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnTabModeOpened");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnTabModeOpened_Params params;
	params.tabMode = tabMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingTabOpened
// (BlueprintCallable, BlueprintEvent)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::CraftingTabOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingTabOpened");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_CraftingTabOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCraftableItem*          CraftableItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::CraftingItemClicked(class UCraftableItem* CraftableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingItemClicked");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_CraftingItemClicked_Params params;
	params.CraftableItem = CraftableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveCompleted
// (Event, Public, BlueprintEvent)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnObjectiveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveCompleted");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveFailed
// (Event, Public, BlueprintEvent)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnObjectiveFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveFailed");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveBelated
// (Event, Public, BlueprintEvent)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnObjectiveBelated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveBelated");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveBelated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
