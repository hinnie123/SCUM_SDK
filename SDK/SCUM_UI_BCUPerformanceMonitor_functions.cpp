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

// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.UpdateValues
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BCUPerformanceMonitor_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.UpdateValues");

	UUI_BCUPerformanceMonitor_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.SetPrisoner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUPerformanceMonitor_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.SetPrisoner");

	UUI_BCUPerformanceMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUPerformanceMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Tick");

	UUI_BCUPerformanceMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BCUPerformanceMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Construct");

	UUI_BCUPerformanceMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.ExecuteUbergraph_UI_BCUPerformanceMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUPerformanceMonitor_C::ExecuteUbergraph_UI_BCUPerformanceMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.ExecuteUbergraph_UI_BCUPerformanceMonitor");

	UUI_BCUPerformanceMonitor_C_ExecuteUbergraph_UI_BCUPerformanceMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
