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

// Function OptionsWidget.OptionsWidget_C.AnyValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ChangeToCustom                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::AnyValueChanged(bool ChangeToCustom)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.AnyValueChanged");

	UOptionsWidget_C_AnyValueChanged_Params params;
	params.ChangeToCustom = ChangeToCustom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.IsApplyButtonEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOptionsWidget_C::IsApplyButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.IsApplyButtonEnabled");

	UOptionsWidget_C_IsApplyButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnMouseButtonDoubleClick");

	UOptionsWidget_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnMouseButtonDown");

	UOptionsWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnMouseWheel");

	UOptionsWidget_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnPreviewKeyDown");

	UOptionsWidget_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnPreviewMouseButtonDown");

	UOptionsWidget_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.SetDynamicShadowsQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::SetDynamicShadowsQuality(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.SetDynamicShadowsQuality");

	UOptionsWidget_C_SetDynamicShadowsQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.UpdateSupportedResolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fullscreen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::UpdateSupportedResolutions(bool Fullscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.UpdateSupportedResolutions");

	UOptionsWidget_C_UpdateSupportedResolutions_Params params;
	params.Fullscreen = Fullscreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.ToggleCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUI_MenuButton_C*        Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsWidget_C::ToggleCategory(class UWidget* Widget, class UUI_MenuButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.ToggleCategory");

	UOptionsWidget_C_ToggleCategory_Params params;
	params.Widget = Widget;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.SnapSlider
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider*                 Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Steps                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::SnapSlider(class USlider* Slider, int Steps, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.SnapSlider");

	UOptionsWidget_C_SnapSlider_Params params;
	params.Slider = Slider;
	params.Steps = Steps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function OptionsWidget.OptionsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.Construct");

	UOptionsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature");

	UOptionsWidget_C_BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnKeyRebound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    actionKey                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::OnKeyRebound(const struct FName& ActionName, const struct FKey& actionKey, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnKeyRebound");

	UOptionsWidget_C_OnKeyRebound_Params params;
	params.ActionName = ActionName;
	params.actionKey = actionKey;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnKeyRebindInitiated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_KeyBinding_C*        keyBindingWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsWidget_C::OnKeyRebindInitiated(class UUI_KeyBinding_C* keyBindingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnKeyRebindInitiated");

	UOptionsWidget_C_OnKeyRebindInitiated_Params params;
	params.keyBindingWidget = keyBindingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnAxisRebound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    actionKey                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::OnAxisRebound(const struct FName& ActionName, const struct FKey& actionKey, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnAxisRebound");

	UOptionsWidget_C_OnAxisRebound_Params params;
	params.ActionName = ActionName;
	params.actionKey = actionKey;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnApplyYes
// (BlueprintCallable, BlueprintEvent)

void UOptionsWidget_C::OnApplyYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnApplyYes");

	UOptionsWidget_C_OnApplyYes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnApplyNo
// (BlueprintCallable, BlueprintEvent)

void UOptionsWidget_C::OnApplyNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnApplyNo");

	UOptionsWidget_C_OnApplyNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnCancelYes
// (BlueprintCallable, BlueprintEvent)

void UOptionsWidget_C::OnCancelYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnCancelYes");

	UOptionsWidget_C_OnCancelYes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnCancelNo
// (BlueprintCallable, BlueprintEvent)

void UOptionsWidget_C::OnCancelNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnCancelNo");

	UOptionsWidget_C_OnCancelNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnESC
// (BlueprintCallable, BlueprintEvent)

void UOptionsWidget_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnESC");

	UOptionsWidget_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnResetControlsNo
// (BlueprintCallable, BlueprintEvent)

void UOptionsWidget_C::OnResetControlsNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnResetControlsNo");

	UOptionsWidget_C_OnResetControlsNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnResetControlsYes
// (BlueprintCallable, BlueprintEvent)

void UOptionsWidget_C::OnResetControlsYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnResetControlsYes");

	UOptionsWidget_C_OnResetControlsYes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.InitKeyBindings
// (BlueprintCallable, BlueprintEvent)

void UOptionsWidget_C::InitKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.InitKeyBindings");

	UOptionsWidget_C_InitKeyBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature
// (BlueprintEvent)

void UOptionsWidget_C::BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.RefreshAllOptionSliders
// (BlueprintCallable, BlueprintEvent)

void UOptionsWidget_C::RefreshAllOptionSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.RefreshAllOptionSliders");

	UOptionsWidget_C_RefreshAllOptionSliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.ExecuteUbergraph_OptionsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::ExecuteUbergraph_OptionsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.ExecuteUbergraph_OptionsWidget");

	UOptionsWidget_C_ExecuteUbergraph_OptionsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
