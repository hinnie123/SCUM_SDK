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

// Function MainMenuWidget.MainMenuWidget_C.GetCharacterName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainMenuWidget_C::GetCharacterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.GetCharacterName");

	UMainMenuWidget_C_GetCharacterName_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function MainMenuWidget.MainMenuWidget_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainMenuWidget_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnPreviewKeyDown");

	UMainMenuWidget_C_OnPreviewKeyDown_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.OnQuitYesClicked
// (BlueprintCallable, BlueprintEvent)

void UMainMenuWidget_C::OnQuitYesClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnQuitYesClicked");

	UMainMenuWidget_C_OnQuitYesClicked_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.OnQuitNoClicked
// (BlueprintCallable, BlueprintEvent)

void UMainMenuWidget_C::OnQuitNoClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnQuitNoClicked");

	UMainMenuWidget_C_OnQuitNoClicked_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.Construct");

	UMainMenuWidget_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.OnESC
// (BlueprintCallable, BlueprintEvent)

void UMainMenuWidget_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnESC");

	UMainMenuWidget_C_OnESC_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.OnNetworkErrorDismissed
// (BlueprintCallable, BlueprintEvent)

void UMainMenuWidget_C::OnNetworkErrorDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnNetworkErrorDismissed");

	UMainMenuWidget_C_OnNetworkErrorDismissed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenuWidget_C::ExecuteUbergraph_MainMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget");

	UMainMenuWidget_C_ExecuteUbergraph_MainMenuWidget_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
