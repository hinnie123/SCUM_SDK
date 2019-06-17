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

// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.UpdateDigestions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_BCUDigestionMonitor_C::UpdateDigestions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.UpdateDigestions");

	UUI_BCUDigestionMonitor_C_UpdateDigestions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BCUDigestionMonitor_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Update");

	UUI_BCUDigestionMonitor_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.SetPrisoner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUDigestionMonitor_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.SetPrisoner");

	UUI_BCUDigestionMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUDigestionMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Tick");

	UUI_BCUDigestionMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.ExecuteUbergraph_UI_BCUDigestionMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUDigestionMonitor_C::ExecuteUbergraph_UI_BCUDigestionMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.ExecuteUbergraph_UI_BCUDigestionMonitor");

	UUI_BCUDigestionMonitor_C_ExecuteUbergraph_UI_BCUDigestionMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
