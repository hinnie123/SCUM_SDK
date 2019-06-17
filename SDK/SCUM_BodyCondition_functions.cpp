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

// Function BodyCondition.BodyCondition_C.CheckBloodVolumeAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          currentBlood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          initialBlood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinBlood                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::CheckBloodVolumeAlarm(float currentBlood, float initialBlood, float MinBlood, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckBloodVolumeAlarm");

	UBodyCondition_C_CheckBloodVolumeAlarm_Params params;
	params.currentBlood = currentBlood;
	params.initialBlood = initialBlood;
	params.MinBlood = MinBlood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.CheckTemperatureAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          temperatureDeviation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Temperature                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::CheckTemperatureAlarm(float temperatureDeviation, float Temperature, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckTemperatureAlarm");

	UBodyCondition_C_CheckTemperatureAlarm_Params params;
	params.temperatureDeviation = temperatureDeviation;
	params.Temperature = Temperature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.CheckTeethNumberAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Age                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TeethNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::CheckTeethNumberAlarm(float Age, float TeethNumber, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckTeethNumberAlarm");

	UBodyCondition_C_CheckTeethNumberAlarm_Params params;
	params.Age = Age;
	params.TeethNumber = TeethNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.CheckBFPAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          bodyFatPercentage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          bodyFatAlarmThreshold          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::CheckBFPAlarm(float bodyFatPercentage, float bodyFatAlarmThreshold, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckBFPAlarm");

	UBodyCondition_C_CheckBFPAlarm_Params params;
	params.bodyFatPercentage = bodyFatPercentage;
	params.bodyFatAlarmThreshold = bodyFatAlarmThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.Init");

	UBodyCondition_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.SetMeasurementUnits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::SetMeasurementUnits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.SetMeasurementUnits");

	UBodyCondition_C_SetMeasurementUnits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.UpdateParameterLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.UpdateParameterLines");

	UBodyCondition_C_UpdateParameterLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBodyCondition_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.GetTitleText");

	UBodyCondition_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BodyCondition.BodyCondition_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UBodyCondition_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.GetDefaultTitle");

	UBodyCondition_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function BodyCondition.BodyCondition_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UBodyCondition_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.SelectCustomColor");

	UBodyCondition_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BodyCondition.BodyCondition_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.OnMinimize");

	UBodyCondition_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBodyCondition_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.Construct");

	UBodyCondition_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.OnPrisonerSet");

	UBodyCondition_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.UpdateContent
// (BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.UpdateContent");

	UBodyCondition_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.ShouldActivateAlarm
// (BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::ShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ShouldActivateAlarm");

	UBodyCondition_C_ShouldActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.ShouldDeactivateAlarm
// (BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::ShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ShouldDeactivateAlarm");

	UBodyCondition_C_ShouldDeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.ShouldActivateBFPAlarm
// (BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::ShouldActivateBFPAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ShouldActivateBFPAlarm");

	UBodyCondition_C_ShouldActivateBFPAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.ExecuteUbergraph_BodyCondition
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::ExecuteUbergraph_BodyCondition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ExecuteUbergraph_BodyCondition");

	UBodyCondition_C_ExecuteUbergraph_BodyCondition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::AlarmOffBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature");

	UBodyCondition_C_AlarmOffBodyConditionEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::AlarmOnBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature");

	UBodyCondition_C_AlarmOnBodyConditionEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
