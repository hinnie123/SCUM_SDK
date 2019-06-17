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

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.AlarmControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::AlarmControl(int alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.AlarmControl");

	UVitalStatsBloodPressure_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.DeactivateAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVitalStatsBloodPressure_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.DeactivateAlarm");

	UVitalStatsBloodPressure_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ActivateAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVitalStatsBloodPressure_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ActivateAlarm");

	UVitalStatsBloodPressure_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.CheckBloodPressureAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            systolicPressure               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            diastolicPressure              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::CheckBloodPressureAlarm(int systolicPressure, int diastolicPressure, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.CheckBloodPressureAlarm");

	UVitalStatsBloodPressure_C_CheckBloodPressureAlarm_Params params;
	params.systolicPressure = systolicPressure;
	params.diastolicPressure = diastolicPressure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.GetBloodPressure
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsBloodPressure_C::GetBloodPressure()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.GetBloodPressure");

	UVitalStatsBloodPressure_C_GetBloodPressure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVitalStatsBloodPressure_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Construct");

	UVitalStatsBloodPressure_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.UpdateContent
// (BlueprintCallable, BlueprintEvent)

void UVitalStatsBloodPressure_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.UpdateContent");

	UVitalStatsBloodPressure_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Tick");

	UVitalStatsBloodPressure_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ExecuteUbergraph_VitalStatsBloodPressure
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::ExecuteUbergraph_VitalStatsBloodPressure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ExecuteUbergraph_VitalStatsBloodPressure");

	UVitalStatsBloodPressure_C_ExecuteUbergraph_VitalStatsBloodPressure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
