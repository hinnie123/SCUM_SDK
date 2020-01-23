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

// Function VitalsMonitor.VitalsMonitor_C.ShouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::ShouldAlarmBeOn(bool* ShouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.ShouldAlarmBeOn");

	UVitalsMonitor_C_ShouldAlarmBeOn_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (ShouldAlarmBeOn != nullptr)
		*ShouldAlarmBeOn = fn_params.ShouldAlarmBeOn;
}


// Function VitalsMonitor.VitalsMonitor_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UVitalsMonitor_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.Init");

	UVitalsMonitor_C_Init_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	UVitalsMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params fn_params;
	fn_params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = fn_params.Success;
}


// Function VitalsMonitor.VitalsMonitor_C.GetHeartRateBPM
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalsMonitor_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.GetHeartRateBPM");

	UVitalsMonitor_C_GetHeartRateBPM_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function VitalsMonitor.VitalsMonitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVitalsMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.Construct");

	UVitalsMonitor_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.Tick");

	UVitalsMonitor_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UVitalsMonitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.AlarmOnWindowContent");

	UVitalsMonitor_C_AlarmOnWindowContent_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UVitalsMonitor_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.AlarmOffWindowContent");

	UVitalsMonitor_C_AlarmOffWindowContent_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.ExecuteUbergraph_VitalsMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::ExecuteUbergraph_VitalsMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.ExecuteUbergraph_VitalsMonitor");

	UVitalsMonitor_C_ExecuteUbergraph_VitalsMonitor_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
