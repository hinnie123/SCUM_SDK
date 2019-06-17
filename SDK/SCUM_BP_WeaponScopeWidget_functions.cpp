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

// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WeaponScopeWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick");

	UBP_WeaponScopeWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements
// (Event, Public, BlueprintEvent)

void UBP_WeaponScopeWidget_C::OnShowElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements");

	UBP_WeaponScopeWidget_C_OnShowElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements
// (Event, Public, BlueprintEvent)

void UBP_WeaponScopeWidget_C::OnHideElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements");

	UBP_WeaponScopeWidget_C_OnHideElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished
// (Event, Public, BlueprintEvent)

void UBP_WeaponScopeWidget_C::OnConstructFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished");

	UBP_WeaponScopeWidget_C_OnConstructFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBP_WeaponScopeWidget_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBP_WeaponScopeWidget_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WeaponScopeWidget_C::ExecuteUbergraph_BP_WeaponScopeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget");

	UBP_WeaponScopeWidget_C_ExecuteUbergraph_BP_WeaponScopeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
