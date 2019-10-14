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

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Get_LeavingSquadWarning_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_LogoutConfirmation_C::Get_LeavingSquadWarning_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Get_LeavingSquadWarning_Visibility");

	UUI_LogoutConfirmation_C_Get_LeavingSquadWarning_Visibility_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.GetCountdownText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_LogoutConfirmation_C::GetCountdownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.GetCountdownText");

	UUI_LogoutConfirmation_C_GetCountdownText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LogoutConfirmation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Construct");

	UUI_LogoutConfirmation_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_LogoutConfirmation_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_LogoutConfirmation_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnCountdownFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_LogoutConfirmation_C::OnCountdownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnCountdownFinished");

	UUI_LogoutConfirmation_C_OnCountdownFinished_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnNo
// (BlueprintCallable, BlueprintEvent)

void UUI_LogoutConfirmation_C::OnNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnNo");

	UUI_LogoutConfirmation_C_OnNo_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_LogoutConfirmation_C::BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UUI_LogoutConfirmation_C_BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.ExecuteUbergraph_UI_LogoutConfirmation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LogoutConfirmation_C::ExecuteUbergraph_UI_LogoutConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.ExecuteUbergraph_UI_LogoutConfirmation");

	UUI_LogoutConfirmation_C_ExecuteUbergraph_UI_LogoutConfirmation_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.CountdownFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_LogoutConfirmation_C::CountdownFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.CountdownFinished__DelegateSignature");

	UUI_LogoutConfirmation_C_CountdownFinished__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
