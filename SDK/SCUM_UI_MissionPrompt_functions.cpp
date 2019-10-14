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

// Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_MissionPrompt_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_MissionPrompt_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_MissionPrompt_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UUI_MissionPrompt_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionPrompt.UI_MissionPrompt_C.ExecuteUbergraph_UI_MissionPrompt
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionPrompt_C::ExecuteUbergraph_UI_MissionPrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionPrompt.UI_MissionPrompt_C.ExecuteUbergraph_UI_MissionPrompt");

	UUI_MissionPrompt_C_ExecuteUbergraph_UI_MissionPrompt_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
