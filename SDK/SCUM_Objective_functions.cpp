// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Objective.Objective_C.GetObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObjective_C::GetObjective(class ABP_MissionObjective_C** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.GetObjective");

	UObjective_C_GetObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Objective != nullptr)
		*Objective = params.Objective;
}


// Function Objective.Objective_C.SetObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UObjective_C::SetObjective(class ABP_MissionObjective_C* Objective, bool PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.SetObjective");

	UObjective_C_SetObjective_Params params;
	params.Objective = Objective;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Objective.Objective_C.UpdateWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UObjective_C::UpdateWidget(class ABP_MissionObjective_C* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.UpdateWidget");

	UObjective_C_UpdateWidget_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Objective.Objective_C.ObjectiveCompleted
// (BlueprintCallable, BlueprintEvent)

void UObjective_C::ObjectiveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.ObjectiveCompleted");

	UObjective_C_ObjectiveCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Objective.Objective_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UObjective_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.Tick");

	UObjective_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Objective.Objective_C.ExecuteUbergraph_Objective
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UObjective_C::ExecuteUbergraph_Objective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.ExecuteUbergraph_Objective");

	UObjective_C_ExecuteUbergraph_Objective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Objective.Objective_C.OnFaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UObjective_C::OnFaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.OnFaded__DelegateSignature");

	UObjective_C_OnFaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
