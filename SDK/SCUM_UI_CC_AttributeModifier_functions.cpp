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

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ModifyValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_AttributeModifier_C::ModifyValue(float modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ModifyValue");

	UUI_CC_AttributeModifier_C_ModifyValue_Params params;
	params.modifier = modifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_AttributeModifier_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValue");

	UUI_CC_AttributeModifier_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CC_AttributeModifier_C::SetValueText(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValueText");

	UUI_CC_AttributeModifier_C_SetValueText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CC_AttributeModifier_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.Construct");

	UUI_CC_AttributeModifier_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CC_AttributeModifier_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseEnter");

	UUI_CC_AttributeModifier_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CC_AttributeModifier_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseLeave");

	UUI_CC_AttributeModifier_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CC_AttributeModifier_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature");

	UUI_CC_AttributeModifier_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CC_AttributeModifier_C::BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature");

	UUI_CC_AttributeModifier_C_BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_CC_AttributeModifier_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnSynchronizeProperties");

	UUI_CC_AttributeModifier_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ExecuteUbergraph_UI_CC_AttributeModifier
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_AttributeModifier_C::ExecuteUbergraph_UI_CC_AttributeModifier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ExecuteUbergraph_UI_CC_AttributeModifier");

	UUI_CC_AttributeModifier_C_ExecuteUbergraph_UI_CC_AttributeModifier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnDecrease__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CC_AttributeModifier_C::OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnDecrease__DelegateSignature");

	UUI_CC_AttributeModifier_C_OnDecrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnIncrease__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CC_AttributeModifier_C::OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnIncrease__DelegateSignature");

	UUI_CC_AttributeModifier_C_OnIncrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
