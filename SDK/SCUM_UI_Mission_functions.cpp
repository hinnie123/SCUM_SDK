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

// Function UI_Mission.UI_Mission_C.StartObjectiveAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// class AObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Mission_C::StartObjectiveAnimation(class AObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Mission.UI_Mission_C.StartObjectiveAnimation");

	UUI_Mission_C_StartObjectiveAnimation_Params fn_params;
	fn_params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Mission.UI_Mission_C.CompleteObjectiveAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// class AObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Mission_C::CompleteObjectiveAnimation(class AObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Mission.UI_Mission_C.CompleteObjectiveAnimation");

	UUI_Mission_C_CompleteObjectiveAnimation_Params fn_params;
	fn_params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Mission.UI_Mission_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Mission_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Mission.UI_Mission_C.OnAnimationFinished");

	UUI_Mission_C_OnAnimationFinished_Params fn_params;
	fn_params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Mission.UI_Mission_C.ExecuteUbergraph_UI_Mission
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Mission_C::ExecuteUbergraph_UI_Mission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Mission.UI_Mission_C.ExecuteUbergraph_UI_Mission");

	UUI_Mission_C_ExecuteUbergraph_UI_Mission_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
