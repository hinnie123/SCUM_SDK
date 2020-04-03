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

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.adjustPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               adjustment                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_YesNoMenuConfirmation_C::adjustPosition(const struct FVector2D& adjustment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.adjustPosition");

	UUI_YesNoMenuConfirmation_C_adjustPosition_Params fn_params;
	fn_params.adjustment = adjustment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            CanvasPanel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_YesNoMenuConfirmation_C::Init(class UCanvasPanel* CanvasPanel, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init");

	UUI_YesNoMenuConfirmation_C_Init_Params fn_params;
	fn_params.CanvasPanel = CanvasPanel;
	fn_params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_YesNoMenuConfirmation_C::BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_YesNoMenuConfirmation_C::BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes
// (BlueprintCallable, BlueprintEvent)

void UUI_YesNoMenuConfirmation_C::OnYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes");

	UUI_YesNoMenuConfirmation_C_OnYes_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_YesNoMenuConfirmation_C::ExecuteUbergraph_UI_YesNoMenuConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation");

	UUI_YesNoMenuConfirmation_C_ExecuteUbergraph_UI_YesNoMenuConfirmation_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_YesNoMenuConfirmation_C::YesClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature");

	UUI_YesNoMenuConfirmation_C_YesClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
