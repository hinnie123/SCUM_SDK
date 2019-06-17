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

// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_CTFMiniStatsWidget_C::GetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor");

	UUI_CTFMiniStatsWidget_C_GetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_CTFMiniStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats");

	UUI_CTFMiniStatsWidget_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_CTFMiniStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels");

	UUI_CTFMiniStatsWidget_C_FillLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CTFMiniStatsWidget_C::ExecuteUbergraph_UI_CTFMiniStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget");

	UUI_CTFMiniStatsWidget_C_ExecuteUbergraph_UI_CTFMiniStatsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
