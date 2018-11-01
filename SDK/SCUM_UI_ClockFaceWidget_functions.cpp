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

// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClockFaceWidget_C::SetBrightness(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetBrightness");

	UUI_ClockFaceWidget_C_SetBrightness_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.AppendZero
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ClockFaceWidget_C::AppendZero(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.AppendZero");

	UUI_ClockFaceWidget_C_AppendZero_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetHours
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Hours                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClockFaceWidget_C::SetHours(int* Hours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetHours");

	UUI_ClockFaceWidget_C_SetHours_Params params;
	params.Hours = Hours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetMinutes
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClockFaceWidget_C::SetMinutes(int* Minutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetMinutes");

	UUI_ClockFaceWidget_C_SetMinutes_Params params;
	params.Minutes = Minutes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.ExecuteUbergraph_UI_ClockFaceWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClockFaceWidget_C::ExecuteUbergraph_UI_ClockFaceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.ExecuteUbergraph_UI_ClockFaceWidget");

	UUI_ClockFaceWidget_C_ExecuteUbergraph_UI_ClockFaceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
