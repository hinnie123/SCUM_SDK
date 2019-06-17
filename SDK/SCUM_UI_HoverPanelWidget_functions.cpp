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

// Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.GetContentBox
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVerticalBox* UUI_HoverPanelWidget_C::GetContentBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.GetContentBox");

	UUI_HoverPanelWidget_C_GetContentBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.ClearPanel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HoverPanelWidget_C::ClearPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.ClearPanel");

	UUI_HoverPanelWidget_C_ClearPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.SetScreenPosition
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D*              Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_HoverPanelWidget_C::SetScreenPosition(struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.SetScreenPosition");

	UUI_HoverPanelWidget_C_SetScreenPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.ExecuteUbergraph_UI_HoverPanelWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HoverPanelWidget_C::ExecuteUbergraph_UI_HoverPanelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.ExecuteUbergraph_UI_HoverPanelWidget");

	UUI_HoverPanelWidget_C_ExecuteUbergraph_UI_HoverPanelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
