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

// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWaypointWidget**        Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_WaypointScreenWidget_C::AddWaypointWidgetToScreen(class UWaypointWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen");

	UUI_WaypointScreenWidget_C_AddWaypointWidgetToScreen_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWaypointWidget**        Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_WaypointScreenWidget_C::RemoveWaypointWidgetFromScreen(class UWaypointWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen");

	UUI_WaypointScreenWidget_C_RemoveWaypointWidgetFromScreen_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaypointScreenWidget_C::ExecuteUbergraph_UI_WaypointScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget");

	UUI_WaypointScreenWidget_C_ExecuteUbergraph_UI_WaypointScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
