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

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_DialogueContainerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct");

	UUI_DialogueContainerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DialogueContainerWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick");

	UUI_DialogueContainerWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_DialogueContainerWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.OnAnimationFinished");

	UUI_DialogueContainerWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.HideAvatarAnimation
// (Event, Public, BlueprintEvent)

void UUI_DialogueContainerWidget_C::HideAvatarAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.HideAvatarAnimation");

	UUI_DialogueContainerWidget_C_HideAvatarAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ShowAvatarAnimation
// (Event, Public, BlueprintEvent)

void UUI_DialogueContainerWidget_C::ShowAvatarAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ShowAvatarAnimation");

	UUI_DialogueContainerWidget_C_ShowAvatarAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DialogueContainerWidget_C::ExecuteUbergraph_UI_DialogueContainerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget");

	UUI_DialogueContainerWidget_C_ExecuteUbergraph_UI_DialogueContainerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
