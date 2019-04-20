// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.CheckIfNutritionPercentageIsSatisfying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          satisfying                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_BCUNutritionMonitor_C::CheckIfNutritionPercentageIsSatisfying(float percentage, float* satisfying)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.CheckIfNutritionPercentageIsSatisfying");

	UUI_BCUNutritionMonitor_C_CheckIfNutritionPercentageIsSatisfying_Params params;
	params.percentage = percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (satisfying != nullptr)
		*satisfying = params.satisfying;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritionLines
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateNutritionLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritionLines");

	UUI_BCUNutritionMonitor_C_UpdateNutritionLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateMinerals
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateMinerals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateMinerals");

	UUI_BCUNutritionMonitor_C_UpdateMinerals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateVitamins
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateVitamins()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateVitamins");

	UUI_BCUNutritionMonitor_C_UpdateVitamins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateNutritions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritions");

	UUI_BCUNutritionMonitor_C_UpdateNutritions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateValues
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateValues");

	UUI_BCUNutritionMonitor_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.SetPrisoner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUNutritionMonitor_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.SetPrisoner");

	UUI_BCUNutritionMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUNutritionMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Tick");

	UUI_BCUNutritionMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BCUNutritionMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Construct");

	UUI_BCUNutritionMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.ExecuteUbergraph_UI_BCUNutritionMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUNutritionMonitor_C::ExecuteUbergraph_UI_BCUNutritionMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.ExecuteUbergraph_UI_BCUNutritionMonitor");

	UUI_BCUNutritionMonitor_C_ExecuteUbergraph_UI_BCUNutritionMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
