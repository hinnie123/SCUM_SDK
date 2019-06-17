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

// Function UI_CharacterSlot.UI_CharacterSlot_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_CharacterSlot_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.OnSynchronizeProperties");

	UUI_CharacterSlot_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterSlot_C::BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UUI_CharacterSlot_C_BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	UUI_CharacterSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.ExecuteUbergraph_UI_CharacterSlot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSlot_C::ExecuteUbergraph_UI_CharacterSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.ExecuteUbergraph_UI_CharacterSlot");

	UUI_CharacterSlot_C_ExecuteUbergraph_UI_CharacterSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.OnDestroyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CharacterSlot_C*     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CharacterSlot_C::OnDestroyClicked__DelegateSignature(class UUI_CharacterSlot_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.OnDestroyClicked__DelegateSignature");

	UUI_CharacterSlot_C_OnDestroyClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDbUserProfile*          userProfile                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSlot_C::OnClicked__DelegateSignature(class UDbUserProfile* userProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.OnClicked__DelegateSignature");

	UUI_CharacterSlot_C_OnClicked__DelegateSignature_Params params;
	params.userProfile = userProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
