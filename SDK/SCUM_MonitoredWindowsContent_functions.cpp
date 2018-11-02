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

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetUpdateContentTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimerHandle            updateContentTimer             (Parm, OutParm)

void UMonitoredWindowsContent_C::GetUpdateContentTimer(struct FTimerHandle* updateContentTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetUpdateContentTimer");

	UMonitoredWindowsContent_C_GetUpdateContentTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (updateContentTimer != nullptr)
		*updateContentTimer = params.updateContentTimer;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsBCUDataInitialized
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsBCUDataInitialized           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMonitoredWindowsContent_C::IsBCUDataInitialized(bool* IsBCUDataInitialized)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsBCUDataInitialized");

	UMonitoredWindowsContent_C_IsBCUDataInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBCUDataInitialized != nullptr)
		*IsBCUDataInitialized = params.IsBCUDataInitialized;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmSwitchedOff
// (Public, BlueprintCallable, BlueprintEvent)

void UMonitoredWindowsContent_C::NotifyParentOnAlarmSwitchedOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmSwitchedOff");

	UMonitoredWindowsContent_C_NotifyParentOnAlarmSwitchedOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmRaised
// (Public, BlueprintCallable, BlueprintEvent)

void UMonitoredWindowsContent_C::NotifyParentOnAlarmRaised()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmRaised");

	UMonitoredWindowsContent_C_NotifyParentOnAlarmRaised_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsPrisonerLifeComponentValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isLifeComponentValid           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMonitoredWindowsContent_C::IsPrisonerLifeComponentValid(bool* isLifeComponentValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsPrisonerLifeComponentValid");

	UMonitoredWindowsContent_C_IsPrisonerLifeComponentValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isLifeComponentValid != nullptr)
		*isLifeComponentValid = params.isLifeComponentValid;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetPrisoner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMonitoredWindowsContent_C::GetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetPrisoner");

	UMonitoredWindowsContent_C_GetPrisoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetDefaultPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMonitoredWindowsContent_C::SetDefaultPrisonerToMonitor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetDefaultPrisonerToMonitor");

	UMonitoredWindowsContent_C_SetDefaultPrisonerToMonitor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMonitoredWindowsContent_C::SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetPrisonerToMonitor");

	UMonitoredWindowsContent_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetDefaultPrisoner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMonitoredWindowsContent_C::GetDefaultPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetDefaultPrisoner");

	UMonitoredWindowsContent_C_GetDefaultPrisoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMonitoredWindowsContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.Construct");

	UMonitoredWindowsContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UMonitoredWindowsContent_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.OnPrisonerSet");

	UMonitoredWindowsContent_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.UpdateContent
// (BlueprintCallable, BlueprintEvent)

void UMonitoredWindowsContent_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.UpdateContent");

	UMonitoredWindowsContent_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.ExecuteUbergraph_MonitoredWindowsContent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMonitoredWindowsContent_C::ExecuteUbergraph_MonitoredWindowsContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.ExecuteUbergraph_MonitoredWindowsContent");

	UMonitoredWindowsContent_C_ExecuteUbergraph_MonitoredWindowsContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
