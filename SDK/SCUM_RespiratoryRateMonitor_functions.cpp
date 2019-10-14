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

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.AlarmControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::AlarmControl(int alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.AlarmControl");

	URespiratoryRateMonitor_C_AlarmControl_Params fn_params;
	fn_params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.DeactivateAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void URespiratoryRateMonitor_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.DeactivateAlarm");

	URespiratoryRateMonitor_C_DeactivateAlarm_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ActivateAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void URespiratoryRateMonitor_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ActivateAlarm");

	URespiratoryRateMonitor_C_ActivateAlarm_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.CheckRespiratoryRateAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            respiratoryRate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::CheckRespiratoryRateAlarm(int respiratoryRate, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.CheckRespiratoryRateAlarm");

	URespiratoryRateMonitor_C_CheckRespiratoryRateAlarm_Params fn_params;
	fn_params.respiratoryRate = respiratoryRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = fn_params.alarmCode;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               prisonerToSet                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner* prisonerToSet, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	URespiratoryRateMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params fn_params;
	fn_params.prisonerToSet = prisonerToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = fn_params.Success;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ProvideRespiratoryRateExtremes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   respiratoryRateExtremes        (Parm, OutParm)

void URespiratoryRateMonitor_C::ProvideRespiratoryRateExtremes(struct FText* respiratoryRateExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ProvideRespiratoryRateExtremes");

	URespiratoryRateMonitor_C_ProvideRespiratoryRateExtremes_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (respiratoryRateExtremes != nullptr)
		*respiratoryRateExtremes = fn_params.respiratoryRateExtremes;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URespiratoryRateMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Construct");

	URespiratoryRateMonitor_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Tick");

	URespiratoryRateMonitor_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ExecuteUbergraph_RespiratoryRateMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::ExecuteUbergraph_RespiratoryRateMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ExecuteUbergraph_RespiratoryRateMonitor");

	URespiratoryRateMonitor_C_ExecuteUbergraph_RespiratoryRateMonitor_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
