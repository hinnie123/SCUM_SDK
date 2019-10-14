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

// Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.GetCriticalLungsAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UBreathingBarLungsWidget_C::GetCriticalLungsAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.GetCriticalLungsAnimation");

	UBreathingBarLungsWidget_C_GetCriticalLungsAnimation_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBreathingBarLungsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.Construct");

	UBreathingBarLungsWidget_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.ExecuteUbergraph_BreathingBarLungsWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBreathingBarLungsWidget_C::ExecuteUbergraph_BreathingBarLungsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.ExecuteUbergraph_BreathingBarLungsWidget");

	UBreathingBarLungsWidget_C_ExecuteUbergraph_BreathingBarLungsWidget_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
