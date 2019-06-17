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

// Function VitalStats.VitalStats_C.isAlarmOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isHeartBPMAlarmOn              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::isAlarmOn(bool* isHeartBPMAlarmOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.isAlarmOn");

	UVitalStats_C_isAlarmOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isHeartBPMAlarmOn != nullptr)
		*isHeartBPMAlarmOn = params.isHeartBPMAlarmOn;
}


// Function VitalStats.VitalStats_C.AlarmControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::AlarmControl(int alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.AlarmControl");

	UVitalStats_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.DeactivateAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVitalStats_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.DeactivateAlarm");

	UVitalStats_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.ActivateAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVitalStats_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.ActivateAlarm");

	UVitalStats_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.CheckHeartBPMAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BeatsPerMinute                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::CheckHeartBPMAlarm(int BeatsPerMinute, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.CheckHeartBPMAlarm");

	UVitalStats_C_CheckHeartBPMAlarm_Params params;
	params.BeatsPerMinute = BeatsPerMinute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function VitalStats.VitalStats_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVitalStats_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.SetTextColor");

	UVitalStats_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.GetHeartRateBPM
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStats_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHeartRateBPM");

	UVitalStats_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetHealthPercentText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStats_C::GetHealthPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHealthPercentText");

	UVitalStats_C_GetHealthPercentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetHealthPercentBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStats_C::GetHealthPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHealthPercentBar");

	UVitalStats_C_GetHealthPercentBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetStaminaPercentText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStats_C::GetStaminaPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetStaminaPercentText");

	UVitalStats_C_GetStaminaPercentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetStaminaPercentBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStats_C::GetStaminaPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetStaminaPercentBar");

	UVitalStats_C_GetStaminaPercentBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVitalStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.Construct");

	UVitalStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.UpdateContent
// (BlueprintCallable, BlueprintEvent)

void UVitalStats_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.UpdateContent");

	UVitalStats_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UVitalStats_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.AlarmOnWindowContent");

	UVitalStats_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.Tick");

	UVitalStats_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.ExecuteUbergraph_VitalStats
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::ExecuteUbergraph_VitalStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.ExecuteUbergraph_VitalStats");

	UVitalStats_C_ExecuteUbergraph_VitalStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
