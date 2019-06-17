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

// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.SetPrisoner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CaloriesMonitor_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.SetPrisoner");

	UUI_CaloriesMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CaloriesMonitor_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Update");

	UUI_CaloriesMonitor_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CaloriesMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Tick");

	UUI_CaloriesMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.ExecuteUbergraph_UI_CaloriesMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CaloriesMonitor_C::ExecuteUbergraph_UI_CaloriesMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.ExecuteUbergraph_UI_CaloriesMonitor");

	UUI_CaloriesMonitor_C_ExecuteUbergraph_UI_CaloriesMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
