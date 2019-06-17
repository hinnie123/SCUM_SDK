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

// Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerformanceMonitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn");

	UPerformanceMonitor_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               contentSize                    (Parm, OutParm, IsPlainOldData)

void UPerformanceMonitor_C::GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize");

	UPerformanceMonitor_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function PerformanceMonitor.PerformanceMonitor_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UPerformanceMonitor_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.OnPrisonerSet");

	UPerformanceMonitor_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerformanceMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.Construct");

	UPerformanceMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.WindowContentSizeChanged
// (BlueprintCallable, BlueprintEvent)

void UPerformanceMonitor_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.WindowContentSizeChanged");

	UPerformanceMonitor_C_WindowContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UPerformanceMonitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.AlarmOnWindowContent");

	UPerformanceMonitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UPerformanceMonitor_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.AlarmOffWindowContent");

	UPerformanceMonitor_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.ExecuteUbergraph_PerformanceMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceMonitor_C::ExecuteUbergraph_PerformanceMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.ExecuteUbergraph_PerformanceMonitor");

	UPerformanceMonitor_C_ExecuteUbergraph_PerformanceMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
