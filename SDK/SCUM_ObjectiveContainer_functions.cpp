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

// Function ObjectiveContainer.ObjectiveContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObjectiveContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.Construct");

	UObjectiveContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectiveContainer.ObjectiveContainer_C.AddObjective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UObjectiveContainer_C::AddObjective(class ABP_MissionObjective_C* Objective, bool PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.AddObjective");

	UObjectiveContainer_C_AddObjective_Params params;
	params.Objective = Objective;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UObjectiveContainer_C::ExecuteUbergraph_ObjectiveContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer");

	UObjectiveContainer_C_ExecuteUbergraph_ObjectiveContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UObjectiveContainer_C::ObjectiveCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature");

	UObjectiveContainer_C_ObjectiveCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
