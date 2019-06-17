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

// Function VitalStatsRespiration.VitalStatsRespiration_C.DisableAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void UVitalStatsRespiration_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.DisableAlarm");

	UVitalStatsRespiration_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.EnableAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void UVitalStatsRespiration_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.EnableAlarm");

	UVitalStatsRespiration_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.CheckAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void UVitalStatsRespiration_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.CheckAlarm");

	UVitalStatsRespiration_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.GetRespiratoryRateInt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            respiratoryRate                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::GetRespiratoryRateInt(int* respiratoryRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.GetRespiratoryRateInt");

	UVitalStatsRespiration_C_GetRespiratoryRateInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (respiratoryRate != nullptr)
		*respiratoryRate = params.respiratoryRate;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateNormalColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVitalStatsRespiration_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateNormalColor");

	UVitalStatsRespiration_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVitalStatsRespiration_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateAlarmColor");

	UVitalStatsRespiration_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.GetBreathRate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsRespiration_C::GetBreathRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.GetBreathRate");

	UVitalStatsRespiration_C_GetBreathRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVitalStatsRespiration_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.SetTextColor");

	UVitalStatsRespiration_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVitalStatsRespiration_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.Construct");

	UVitalStatsRespiration_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.Tick");

	UVitalStatsRespiration_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ExecuteUbergraph_VitalStatsRespiration
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::ExecuteUbergraph_VitalStatsRespiration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ExecuteUbergraph_VitalStatsRespiration");

	UVitalStatsRespiration_C_ExecuteUbergraph_VitalStatsRespiration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
