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

// Function UI_VehicleHUD.UI_VehicleHUD_C.GetHealthBarCaption
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_VehicleHUD_C::GetHealthBarCaption()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetHealthBarCaption");

	UUI_VehicleHUD_C_GetHealthBarCaption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VehicleHUD.UI_VehicleHUD_C.GetMainVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_VehicleHUD_C::GetMainVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetMainVisibility");

	UUI_VehicleHUD_C_GetMainVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VehicleHUD.UI_VehicleHUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VehicleHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.Tick");

	UUI_VehicleHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VehicleHUD.UI_VehicleHUD_C.ExecuteUbergraph_UI_VehicleHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VehicleHUD_C::ExecuteUbergraph_UI_VehicleHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.ExecuteUbergraph_UI_VehicleHUD");

	UUI_VehicleHUD_C_ExecuteUbergraph_UI_VehicleHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
