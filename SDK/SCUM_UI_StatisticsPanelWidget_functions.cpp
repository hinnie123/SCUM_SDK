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

// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_StatisticsPanelWidget_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnPreviewKeyDown");

	UUI_StatisticsPanelWidget_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_StatisticsPanelWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.Construct");

	UUI_StatisticsPanelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnOpened
// (Event, Public, BlueprintEvent)

void UUI_StatisticsPanelWidget_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnOpened");

	UUI_StatisticsPanelWidget_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnESC
// (BlueprintCallable, BlueprintEvent)

void UUI_StatisticsPanelWidget_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnESC");

	UUI_StatisticsPanelWidget_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.ExecuteUbergraph_UI_StatisticsPanelWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_StatisticsPanelWidget_C::ExecuteUbergraph_UI_StatisticsPanelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.ExecuteUbergraph_UI_StatisticsPanelWidget");

	UUI_StatisticsPanelWidget_C_ExecuteUbergraph_UI_StatisticsPanelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
