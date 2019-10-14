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

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlacesForValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            decimalPlacesToSet             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::SetDecimalPlacesForValue(int decimalPlacesToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlacesForValue");

	UFullParameterProgressBarLine_C_SetDecimalPlacesForValue_Params fn_params;
	fn_params.decimalPlacesToSet = decimalPlacesToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlaces
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            decimalPlacesToSet             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::SetDecimalPlaces(int decimalPlacesToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlaces");

	UFullParameterProgressBarLine_C_SetDecimalPlaces_Params fn_params;
	fn_params.decimalPlacesToSet = decimalPlacesToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AdjustHorizontalFillRules
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          fillColumn0                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          fillColumn1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          fillColumn2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::AdjustHorizontalFillRules(float fillColumn0, float fillColumn1, float fillColumn2)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AdjustHorizontalFillRules");

	UFullParameterProgressBarLine_C_AdjustHorizontalFillRules_Params fn_params;
	fn_params.fillColumn0 = fillColumn0;
	fn_params.fillColumn1 = fillColumn1;
	fn_params.fillColumn2 = fillColumn2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetPercentageText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   percentText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::SetPercentageText(const struct FText& percentText)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetPercentageText");

	UFullParameterProgressBarLine_C_SetPercentageText_Params fn_params;
	fn_params.percentText = percentText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdatePercentageText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdatePercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdatePercentageText");

	UFullParameterProgressBarLine_C_UpdatePercentageText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   valueStr                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::SetCurrentValueText(const struct FText& valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValueText");

	UFullParameterProgressBarLine_C_SetCurrentValueText_Params fn_params;
	fn_params.valueStr = valueStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateCurrentValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValueText");

	UFullParameterProgressBarLine_C_UpdateCurrentValueText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateDefaultCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateDefaultCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateDefaultCurrentValue");

	UFullParameterProgressBarLine_C_UpdateDefaultCurrentValue_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetMeasurementUnit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   measurementUnit                (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::SetMeasurementUnit(const struct FText& measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetMeasurementUnit");

	UFullParameterProgressBarLine_C_SetMeasurementUnit_Params fn_params;
	fn_params.measurementUnit = measurementUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetMeasurementUnit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   measurementUnit                (Parm, OutParm)

void UFullParameterProgressBarLine_C::GetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetMeasurementUnit");

	UFullParameterProgressBarLine_C_GetMeasurementUnit_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (measurementUnit != nullptr)
		*measurementUnit = fn_params.measurementUnit;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.IsMeasurementUnitDefault
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MUString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFullParameterProgressBarLine_C::IsMeasurementUnitDefault(const struct FString& MUString)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.IsMeasurementUnitDefault");

	UFullParameterProgressBarLine_C_IsMeasurementUnitDefault_Params fn_params;
	fn_params.MUString = MUString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::UpdateRDAValue(float MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAValue");

	UFullParameterProgressBarLine_C_UpdateRDAValue_Params fn_params;
	fn_params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   valueStr                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::SetRDAText(const struct FText& valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAText");

	UFullParameterProgressBarLine_C_SetRDAText_Params fn_params;
	fn_params.valueStr = valueStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateRDAText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAText");

	UFullParameterProgressBarLine_C_UpdateRDAText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::SetRDAValue(float MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAValue");

	UFullParameterProgressBarLine_C_SetRDAValue_Params fn_params;
	fn_params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValue");

	UFullParameterProgressBarLine_C_UpdateCurrentValue_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::SetCurrentValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValue");

	UFullParameterProgressBarLine_C_SetCurrentValue_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateNormalColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateNormalColor");

	UFullParameterProgressBarLine_C_ActivateNormalColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateAlarmColor");

	UFullParameterProgressBarLine_C_ActivateAlarmColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetPercentageToShowText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UFullParameterProgressBarLine_C::GetPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetPercentageToShowText");

	UFullParameterProgressBarLine_C_GetPercentageToShowText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateNutrientTextValues
// (Public, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateNutrientTextValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateNutrientTextValues");

	UFullParameterProgressBarLine_C_UpdateNutrientTextValues_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UFullParameterProgressBarLine_C::SetAlarmColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetAlarmColor");

	UFullParameterProgressBarLine_C_SetAlarmColor_Params fn_params;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetCurrentValueTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullParameterProgressBarLine_C::GetCurrentValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetCurrentValueTextBlock");

	UFullParameterProgressBarLine_C_GetCurrentValueTextBlock_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = fn_params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::SetColorOfMaxValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfMaxValue");

	UFullParameterProgressBarLine_C_SetColorOfMaxValue_Params fn_params;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::SetColorOfValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfValue");

	UFullParameterProgressBarLine_C_SetColorOfValue_Params fn_params;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfParameterName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::SetColorOfParameterName(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfParameterName");

	UFullParameterProgressBarLine_C_SetColorOfParameterName_Params fn_params;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UFullParameterProgressBarLine_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColor");

	UFullParameterProgressBarLine_C_SetColor_Params fn_params;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetRDAValueTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullParameterProgressBarLine_C::GetRDAValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetRDAValueTextBlock");

	UFullParameterProgressBarLine_C_GetRDAValueTextBlock_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = fn_params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterNameTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullParameterProgressBarLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterNameTextBlock");

	UFullParameterProgressBarLine_C_GetParameterNameTextBlock_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = fn_params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ParameterName                  (Parm, OutParm)

void UFullParameterProgressBarLine_C::GetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterName");

	UFullParameterProgressBarLine_C_GetParameterName_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (ParameterName != nullptr)
		*ParameterName = fn_params.ParameterName;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetParameterName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::SetParameterName(const struct FText& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetParameterName");

	UFullParameterProgressBarLine_C_SetParameterName_Params fn_params;
	fn_params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMouseButtonDownOnMinimizeParameterLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFullParameterProgressBarLine_C::OnMouseButtonDownOnMinimizeParameterLine(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMouseButtonDownOnMinimizeParameterLine");

	UFullParameterProgressBarLine_C_OnMouseButtonDownOnMinimizeParameterLine_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMinimize");

	UFullParameterProgressBarLine_C_OnMinimize_Params fn_params;
	fn_params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullParameterProgressBarLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Construct");

	UFullParameterProgressBarLine_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Tick");

	UFullParameterProgressBarLine_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UFullParameterProgressBarLine_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnSynchronizeProperties");

	UFullParameterProgressBarLine_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOn
// (Protected, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOn");

	UFullParameterProgressBarLine_C_AlarmSwitchOn_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOff
// (Protected, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOff");

	UFullParameterProgressBarLine_C_AlarmSwitchOff_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnPercentageChanged
// (Protected, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnPercentageChanged");

	UFullParameterProgressBarLine_C_OnPercentageChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ExecuteUbergraph_FullParameterProgressBarLine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::ExecuteUbergraph_FullParameterProgressBarLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ExecuteUbergraph_FullParameterProgressBarLine");

	UFullParameterProgressBarLine_C_ExecuteUbergraph_FullParameterProgressBarLine_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
