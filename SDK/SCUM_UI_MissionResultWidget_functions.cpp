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

// Function UI_MissionResultWidget.UI_MissionResultWidget_C.PlayShowMissionResultAnimation
// (Event, Public, BlueprintEvent)

void UUI_MissionResultWidget_C::PlayShowMissionResultAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.PlayShowMissionResultAnimation");

	UUI_MissionResultWidget_C_PlayShowMissionResultAnimation_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MissionResultWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished");

	UUI_MissionResultWidget_C_OnAnimationFinished_Params fn_params;
	fn_params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionResultWidget_C::ExecuteUbergraph_UI_MissionResultWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget");

	UUI_MissionResultWidget_C_ExecuteUbergraph_UI_MissionResultWidget_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
