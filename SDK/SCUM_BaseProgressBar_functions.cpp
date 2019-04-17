// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseProgressBar.BaseProgressBar_C.PercentageToUITextWOPercSign
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   percentageString               (Parm, OutParm)

void UBaseProgressBar_C::PercentageToUITextWOPercSign(float Value, struct FText* percentageString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToUITextWOPercSign");

	UBaseProgressBar_C_PercentageToUITextWOPercSign_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (percentageString != nullptr)
		*percentageString = params.percentageString;
}


// Function BaseProgressBar.BaseProgressBar_C.GetAlarmThresholdHigh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          alarmThreshold                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::GetAlarmThresholdHigh(float* alarmThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetAlarmThresholdHigh");

	UBaseProgressBar_C_GetAlarmThresholdHigh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmThreshold != nullptr)
		*alarmThreshold = params.alarmThreshold;
}


// Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHigh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          alarmThreshold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::SetAlarmThresholdHigh(float alarmThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHigh");

	UBaseProgressBar_C_SetAlarmThresholdHigh_Params params;
	params.alarmThreshold = alarmThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThresholdHigh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::CheckAlarmThresholdHigh(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThresholdHigh");

	UBaseProgressBar_C_CheckAlarmThresholdHigh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHighActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldBeActive                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::SetAlarmThresholdHighActive(bool shouldBeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHighActive");

	UBaseProgressBar_C_SetAlarmThresholdHighActive_Params params;
	params.shouldBeActive = shouldBeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.GetIsAlarmOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isAlarmOn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::GetIsAlarmOn(bool* isAlarmOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetIsAlarmOn");

	UBaseProgressBar_C_GetIsAlarmOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAlarmOn != nullptr)
		*isAlarmOn = params.isAlarmOn;
}


// Function BaseProgressBar.BaseProgressBar_C.PercentageToUIText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   percentageString               (Parm, OutParm)

void UBaseProgressBar_C::PercentageToUIText(float Value, struct FText* percentageString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToUIText");

	UBaseProgressBar_C_PercentageToUIText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (percentageString != nullptr)
		*percentageString = params.percentageString;
}


// Function BaseProgressBar.BaseProgressBar_C.SetClamping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldEnableClamping           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::SetClamping(bool shouldEnableClamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetClamping");

	UBaseProgressBar_C_SetClamping_Params params;
	params.shouldEnableClamping = shouldEnableClamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.PercentageToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   PercentageText                 (Parm, OutParm)

void UBaseProgressBar_C::PercentageToText(float Value, struct FText* PercentageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToText");

	UBaseProgressBar_C_PercentageToText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PercentageText != nullptr)
		*PercentageText = params.PercentageText;
}


// Function BaseProgressBar.BaseProgressBar_C.GetPreviousPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          prevPercentage                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::GetPreviousPercentage(float* prevPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetPreviousPercentage");

	UBaseProgressBar_C_GetPreviousPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (prevPercentage != nullptr)
		*prevPercentage = params.prevPercentage;
}


// Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThreshold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::CheckAlarmThreshold(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThreshold");

	UBaseProgressBar_C_CheckAlarmThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOn
// (Protected, BlueprintCallable, BlueprintEvent)

void UBaseProgressBar_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOn");

	UBaseProgressBar_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOff
// (Protected, BlueprintCallable, BlueprintEvent)

void UBaseProgressBar_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOff");

	UBaseProgressBar_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.GetAlarmThreshold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          alarmThreshold                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::GetAlarmThreshold(float* alarmThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetAlarmThreshold");

	UBaseProgressBar_C_GetAlarmThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmThreshold != nullptr)
		*alarmThreshold = params.alarmThreshold;
}


// Function BaseProgressBar.BaseProgressBar_C.SetAlarmThreshold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          alarmThreshold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::SetAlarmThreshold(float alarmThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetAlarmThreshold");

	UBaseProgressBar_C_SetAlarmThreshold_Params params;
	params.alarmThreshold = alarmThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.PercentageToString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 percentageString               (Parm, OutParm, ZeroConstructor)

void UBaseProgressBar_C::PercentageToString(float Value, struct FString* percentageString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToString");

	UBaseProgressBar_C_PercentageToString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (percentageString != nullptr)
		*percentageString = params.percentageString;
}


// Function BaseProgressBar.BaseProgressBar_C.PercentageToInt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            percentageInt                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::PercentageToInt(float Value, int* percentageInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToInt");

	UBaseProgressBar_C_PercentageToInt_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (percentageInt != nullptr)
		*percentageInt = params.percentageInt;
}


// Function BaseProgressBar.BaseProgressBar_C.SetPreviousPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          previousPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::SetPreviousPercentage(float previousPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetPreviousPercentage");

	UBaseProgressBar_C_SetPreviousPercentage_Params params;
	params.previousPercentage = previousPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.SavePercentageAsPrevious
// (Public, BlueprintCallable, BlueprintEvent)

void UBaseProgressBar_C::SavePercentageAsPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SavePercentageAsPrevious");

	UBaseProgressBar_C_SavePercentageAsPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.OnPercentageChanged
// (Protected, BlueprintCallable, BlueprintEvent)

void UBaseProgressBar_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.OnPercentageChanged");

	UBaseProgressBar_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.SetTitleBase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBaseProgressBar_C::SetTitleBase(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetTitleBase");

	UBaseProgressBar_C_SetTitleBase_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.GetTitleBase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Title                          (Parm, OutParm)

void UBaseProgressBar_C::GetTitleBase(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetTitleBase");

	UBaseProgressBar_C_GetTitleBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;
}


// Function BaseProgressBar.BaseProgressBar_C.IncreasePercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IncreasePercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::IncreasePercentage(float IncreasePercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.IncreasePercentage");

	UBaseProgressBar_C_IncreasePercentage_Params params;
	params.IncreasePercentage = IncreasePercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.decreasePercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          decreasePercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::decreasePercentage(float decreasePercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.decreasePercentage");

	UBaseProgressBar_C_decreasePercentage_Params params;
	params.decreasePercentage = decreasePercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.SetPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percentInputToSet              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::SetPercentage(float percentInputToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetPercentage");

	UBaseProgressBar_C_SetPercentage_Params params;
	params.percentInputToSet = percentInputToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseProgressBar.BaseProgressBar_C.GetPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          percentage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseProgressBar_C::GetPercentage(float* percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetPercentage");

	UBaseProgressBar_C_GetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (percentage != nullptr)
		*percentage = params.percentage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
