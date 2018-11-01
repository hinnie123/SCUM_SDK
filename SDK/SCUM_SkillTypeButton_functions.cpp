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

// Function SkillTypeButton.SkillTypeButton_C.DeactivateAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillTypeButton_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.DeactivateAlarm");

	USkillTypeButton_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.ActivateAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillTypeButton_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ActivateAlarm");

	USkillTypeButton_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.OnSelectionAdjustSizePositionAndPadding
// (Public, BlueprintCallable, BlueprintEvent)

void USkillTypeButton_C::OnSelectionAdjustSizePositionAndPadding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.OnSelectionAdjustSizePositionAndPadding");

	USkillTypeButton_C_OnSelectionAdjustSizePositionAndPadding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.SetTextPadding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillTypeButton_C::SetTextPadding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetTextPadding");

	USkillTypeButton_C_SetTextPadding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.ResetTextPadding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillTypeButton_C::ResetTextPadding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ResetTextPadding");

	USkillTypeButton_C_ResetTextPadding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.SetButtonOverlaySizeAndPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InPosition                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void USkillTypeButton_C::SetButtonOverlaySizeAndPosition(const struct FVector2D& InPosition, const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetButtonOverlaySizeAndPosition");

	USkillTypeButton_C_SetButtonOverlaySizeAndPosition_Params params;
	params.InPosition = InPosition;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.ResetButtonOverlaySizeAndPosition
// (Public, BlueprintCallable, BlueprintEvent)

void USkillTypeButton_C::ResetButtonOverlaySizeAndPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ResetButtonOverlaySizeAndPosition");

	USkillTypeButton_C_ResetButtonOverlaySizeAndPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.SetSizeX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SizeX                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillTypeButton_C::SetSizeX(float SizeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetSizeX");

	USkillTypeButton_C_SetSizeX_Params params;
	params.SizeX = SizeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.GetBorderSizeX
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          borderSizeX                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillTypeButton_C::GetBorderSizeX(float* borderSizeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.GetBorderSizeX");

	USkillTypeButton_C_GetBorderSizeX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (borderSizeX != nullptr)
		*borderSizeX = params.borderSizeX;
}


// Function SkillTypeButton.SkillTypeButton_C.IncreaseSizeX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          sizeChangeX                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillTypeButton_C::IncreaseSizeX(float sizeChangeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.IncreaseSizeX");

	USkillTypeButton_C_IncreaseSizeX_Params params;
	params.sizeChangeX = sizeChangeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.SetOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          offsetX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillTypeButton_C::SetOffset(float offsetX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetOffset");

	USkillTypeButton_C_SetOffset_Params params;
	params.offsetX = offsetX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.SetSkillTypeLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SkillTypeLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillTypeButton_C::SetSkillTypeLevel(float SkillTypeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetSkillTypeLevel");

	USkillTypeButton_C_SetSkillTypeLevel_Params params;
	params.SkillTypeLevel = SkillTypeLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.ShowBorder
// (Public, BlueprintCallable, BlueprintEvent)

void USkillTypeButton_C::ShowBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ShowBorder");

	USkillTypeButton_C_ShowBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.HideBorder
// (Public, BlueprintCallable, BlueprintEvent)

void USkillTypeButton_C::HideBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.HideBorder");

	USkillTypeButton_C_HideBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void USkillTypeButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature");

	USkillTypeButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.BndEvt__SkillButton_K2Node_ComponentBoundEvent_392_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkillTypeButton_C::BndEvt__SkillButton_K2Node_ComponentBoundEvent_392_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.BndEvt__SkillButton_K2Node_ComponentBoundEvent_392_OnButtonClickedEvent__DelegateSignature");

	USkillTypeButton_C_BndEvt__SkillButton_K2Node_ComponentBoundEvent_392_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.BndEvt__SkillButton_K2Node_ComponentBoundEvent_75_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void USkillTypeButton_C::BndEvt__SkillButton_K2Node_ComponentBoundEvent_75_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.BndEvt__SkillButton_K2Node_ComponentBoundEvent_75_OnButtonPressedEvent__DelegateSignature");

	USkillTypeButton_C_BndEvt__SkillButton_K2Node_ComponentBoundEvent_75_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.ExecuteUbergraph_SkillTypeButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillTypeButton_C::ExecuteUbergraph_SkillTypeButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ExecuteUbergraph_SkillTypeButton");

	USkillTypeButton_C_ExecuteUbergraph_SkillTypeButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTypeButton.SkillTypeButton_C.OnClickedSkillTypeButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillTypeButton_C::OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.OnClickedSkillTypeButton__DelegateSignature");

	USkillTypeButton_C_OnClickedSkillTypeButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
