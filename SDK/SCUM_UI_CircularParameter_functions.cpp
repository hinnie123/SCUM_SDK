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

// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentageSecond
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          percentageSecond               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::GetPercentageSecond(float* percentageSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetPercentageSecond");

	UUI_CircularParameter_C_GetPercentageSecond_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (percentageSecond != nullptr)
		*percentageSecond = fn_params.percentageSecond;
}


// Function UI_CircularParameter.UI_CircularParameter_C.DisableAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CircularParameter_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.DisableAlarm");

	UUI_CircularParameter_C_DisableAlarm_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.EnableAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           above                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::EnableAlarm(bool above)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.EnableAlarm");

	UUI_CircularParameter_C_EnableAlarm_Params fn_params;
	fn_params.above = above;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.CheckAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CircularParameter_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.CheckAlarm");

	UUI_CircularParameter_C_CheckAlarm_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CircularParameter_C::SetDescriptionText(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetDescriptionText");

	UUI_CircularParameter_C_SetDescriptionText_Params fn_params;
	fn_params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetMeasurementUnit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   unit                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CircularParameter_C::SetMeasurementUnit(const struct FText& unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetMeasurementUnit");

	UUI_CircularParameter_C_SetMeasurementUnit_Params fn_params;
	fn_params.unit = unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetMaxValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CircularParameter_C::GetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetMaxValue");

	UUI_CircularParameter_C_GetMaxValue_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetCurrentValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CircularParameter_C::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetCurrentValue");

	UUI_CircularParameter_C_GetCurrentValue_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CircularParameter_C::GetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetPercentage");

	UUI_CircularParameter_C_GetPercentage_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.Tick");

	UUI_CircularParameter_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CircularParameter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.Construct");

	UUI_CircularParameter_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetMaxValue
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::SetMaxValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetMaxValue");

	UUI_CircularParameter_C_SetMaxValue_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValue
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::SetCurrentValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValue");

	UUI_CircularParameter_C_SetCurrentValue_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CircularParameter_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnMouseEnter");

	UUI_CircularParameter_C_OnMouseEnter_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_CircularParameter_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnSynchronizeProperties");

	UUI_CircularParameter_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CircularParameter_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnMouseLeave");

	UUI_CircularParameter_C_OnMouseLeave_Params fn_params;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValueSecond
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::SetCurrentValueSecond(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValueSecond");

	UUI_CircularParameter_C_SetCurrentValueSecond_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.ExecuteUbergraph_UI_CircularParameter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::ExecuteUbergraph_UI_CircularParameter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.ExecuteUbergraph_UI_CircularParameter");

	UUI_CircularParameter_C_ExecuteUbergraph_UI_CircularParameter_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
