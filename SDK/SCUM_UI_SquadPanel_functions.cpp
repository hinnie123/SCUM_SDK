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

// Function UI_SquadPanel.UI_SquadPanel_C.UpdateRanking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SquadPanel_C::UpdateRanking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateRanking");

	UUI_SquadPanel_C_UpdateRanking_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SquadPanel_C::UpdateSquadLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadLimit");

	UUI_SquadPanel_C_UpdateSquadLimit_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.AskForConfirmation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DialogText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         OnConfirmEvent                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         OnCancelEvent                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_SquadPanel_C::AskForConfirmation(const struct FText& DialogText, const struct FScriptDelegate& OnConfirmEvent, const struct FScriptDelegate& OnCancelEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.AskForConfirmation");

	UUI_SquadPanel_C_AskForConfirmation_Params fn_params;
	fn_params.DialogText = DialogText;
	fn_params.OnConfirmEvent = OnConfirmEvent;
	fn_params.OnCancelEvent = OnCancelEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateMemberList
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SquadPanel_C::UpdateMemberList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateMemberList");

	UUI_SquadPanel_C_UpdateMemberList_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateElementVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SquadPanel_C::UpdateElementVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateElementVisibility");

	UUI_SquadPanel_C_UpdateElementVisibility_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateCurrentSquadData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SquadPanel_C::UpdateCurrentSquadData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateCurrentSquadData");

	UUI_SquadPanel_C_UpdateCurrentSquadData_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.Update
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_SquadPanel_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.Update");

	UUI_SquadPanel_C_Update_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadPanel_C::BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadPanel_C_BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadMemberInfo
// (Event, Public, BlueprintEvent)

void UUI_SquadPanel_C::UpdateSquadMemberInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadMemberInfo");

	UUI_SquadPanel_C_UpdateSquadMemberInfo_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadPanel_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadPanel_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadPanel_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadPanel_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveConfirm
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadPanel_C::OnLeaveConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveConfirm");

	UUI_SquadPanel_C_OnLeaveConfirm_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveCanceled
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadPanel_C::OnLeaveCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveCanceled");

	UUI_SquadPanel_C_OnLeaveCanceled_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadRankingData
// (Event, Public, BlueprintEvent)

void UUI_SquadPanel_C::UpdateSquadRankingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadRankingData");

	UUI_SquadPanel_C_UpdateSquadRankingData_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadTopData
// (Event, Public, BlueprintEvent)

void UUI_SquadPanel_C::UpdateSquadTopData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadTopData");

	UUI_SquadPanel_C_UpdateSquadTopData_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SquadPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.Construct");

	UUI_SquadPanel_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.ExecuteUbergraph_UI_SquadPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadPanel_C::ExecuteUbergraph_UI_SquadPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.ExecuteUbergraph_UI_SquadPanel");

	UUI_SquadPanel_C_ExecuteUbergraph_UI_SquadPanel_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
