// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ErrorMessage.UI_ErrorMessage_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_ErrorMessage_C::BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UUI_ErrorMessage_C_BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCanvasPanel*            Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 widgetToDisable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ErrorMessage_C::Init(const struct FText& Message, class UCanvasPanel* Canvas, class UWidget* widgetToDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.Init");

	UUI_ErrorMessage_C_Init_Params params;
	params.Message = Message;
	params.Canvas = Canvas;
	params.widgetToDisable = widgetToDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.OnDismissed
// (BlueprintCallable, BlueprintEvent)

void UUI_ErrorMessage_C::OnDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.OnDismissed");

	UUI_ErrorMessage_C_OnDismissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.ExecuteUbergraph_UI_ErrorMessage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ErrorMessage_C::ExecuteUbergraph_UI_ErrorMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.ExecuteUbergraph_UI_ErrorMessage");

	UUI_ErrorMessage_C_ExecuteUbergraph_UI_ErrorMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.Dismissed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ErrorMessage_C::Dismissed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.Dismissed__DelegateSignature");

	UUI_ErrorMessage_C_Dismissed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
