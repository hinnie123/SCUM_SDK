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

// Function VitalStatsTemperature.VitalStatsTemperature_C.DisableAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void UVitalStatsTemperature_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.DisableAlarm");

	UVitalStatsTemperature_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.EnableAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void UVitalStatsTemperature_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.EnableAlarm");

	UVitalStatsTemperature_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.CheckAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void UVitalStatsTemperature_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.CheckAlarm");

	UVitalStatsTemperature_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperatureFloat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsTemperature_C::GetBodyTemperatureFloat(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperatureFloat");

	UVitalStatsTemperature_C_GetBodyTemperatureFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateNormalColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVitalStatsTemperature_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateNormalColor");

	UVitalStatsTemperature_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVitalStatsTemperature_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateAlarmColor");

	UVitalStatsTemperature_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviationText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   temperatureDeviationText       (BlueprintVisible, BlueprintReadOnly, Parm)

void UVitalStatsTemperature_C::SetTemperatureDeviationText(const struct FText& temperatureDeviationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviationText");

	UVitalStatsTemperature_C_SetTemperatureDeviationText_Params params;
	params.temperatureDeviationText = temperatureDeviationText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          temperatureDeviation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsTemperature_C::SetTemperatureDeviation(float temperatureDeviation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviation");

	UVitalStatsTemperature_C_SetTemperatureDeviation_Params params;
	params.temperatureDeviation = temperatureDeviation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureExtremes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   tempExtremes                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UVitalStatsTemperature_C::SetTemperatureExtremes(const struct FText& tempExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureExtremes");

	UVitalStatsTemperature_C_SetTemperatureExtremes_Params params;
	params.tempExtremes = tempExtremes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.GetTemperatureDeviation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsTemperature_C::GetTemperatureDeviation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.GetTemperatureDeviation");

	UVitalStatsTemperature_C_GetTemperatureDeviation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperature
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsTemperature_C::GetBodyTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperature");

	UVitalStatsTemperature_C_GetBodyTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVitalStatsTemperature_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTextColor");

	UVitalStatsTemperature_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVitalStatsTemperature_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.Construct");

	UVitalStatsTemperature_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsTemperature_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.Tick");

	UVitalStatsTemperature_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.ExecuteUbergraph_VitalStatsTemperature
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsTemperature_C::ExecuteUbergraph_VitalStatsTemperature(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.ExecuteUbergraph_VitalStatsTemperature");

	UVitalStatsTemperature_C_ExecuteUbergraph_VitalStatsTemperature_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
