// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameMenu_C::Get_CommitSuicide_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility");

	UUI_GameMenu_C_Get_CommitSuicide_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::SaveHUDLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout");

	UUI_GameMenu_C_SaveHUDLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_GameMenu_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnPreviewKeyDown");

	UUI_GameMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_GameMenu_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDoubleClick");

	UUI_GameMenu_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_GameMenu_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDown");

	UUI_GameMenu_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_GameMenu_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonUp");

	UUI_GameMenu_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.Remove
// (BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Remove");

	UUI_GameMenu_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnESC
// (BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnESC");

	UUI_GameMenu_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Construct");

	UUI_GameMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnResume
// (BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnResume");

	UUI_GameMenu_C_OnResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_C::BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_C::BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnQuitCanceled
// (BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::OnQuitCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnQuitCanceled");

	UUI_GameMenu_C_OnQuitCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnQuit
// (BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::OnQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnQuit");

	UUI_GameMenu_C_OnQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::OnLeaveToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenu");

	UUI_GameMenu_C_OnLeaveToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenuCanceled
// (BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::OnLeaveToMainMenuCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenuCanceled");

	UUI_GameMenu_C_OnLeaveToMainMenuCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnSuicideCanceled
// (BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::OnSuicideCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnSuicideCanceled");

	UUI_GameMenu_C_OnSuicideCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnSuicideConfirmed
// (BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::OnSuicideConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnSuicideConfirmed");

	UUI_GameMenu_C_OnSuicideConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameMenu_C::ExecuteUbergraph_UI_GameMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu");

	UUI_GameMenu_C_ExecuteUbergraph_UI_GameMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
