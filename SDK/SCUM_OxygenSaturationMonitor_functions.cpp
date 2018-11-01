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

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::AlarmControl(int alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmControl");

	UOxygenSaturationMonitor_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.DeactivateAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void UOxygenSaturationMonitor_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.DeactivateAlarm");

	UOxygenSaturationMonitor_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ActivateAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void UOxygenSaturationMonitor_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ActivateAlarm");

	UOxygenSaturationMonitor_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.CheckBloodOxygenationAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          oxygenationLevel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::CheckBloodOxygenationAlarm(float oxygenationLevel, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.CheckBloodOxygenationAlarm");

	UOxygenSaturationMonitor_C_CheckBloodOxygenationAlarm_Params params;
	params.oxygenationLevel = oxygenationLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               prisonerToSet                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner* prisonerToSet, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	UOxygenSaturationMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params params;
	params.prisonerToSet = prisonerToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ProvideOxygenSaturationExtremes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   oxygenSaturationExtremes       (Parm, OutParm)

void UOxygenSaturationMonitor_C::ProvideOxygenSaturationExtremes(struct FText* oxygenSaturationExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ProvideOxygenSaturationExtremes");

	UOxygenSaturationMonitor_C_ProvideOxygenSaturationExtremes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oxygenSaturationExtremes != nullptr)
		*oxygenSaturationExtremes = params.oxygenSaturationExtremes;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.GetHeartRateBPM
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOxygenSaturationMonitor_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.GetHeartRateBPM");

	UOxygenSaturationMonitor_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOxygenSaturationMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Construct");

	UOxygenSaturationMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Tick");

	UOxygenSaturationMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UOxygenSaturationMonitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmOnWindowContent");

	UOxygenSaturationMonitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ExecuteUbergraph_OxygenSaturationMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::ExecuteUbergraph_OxygenSaturationMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ExecuteUbergraph_OxygenSaturationMonitor");

	UOxygenSaturationMonitor_C_ExecuteUbergraph_OxygenSaturationMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
