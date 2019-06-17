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

// Function UI_SortByButton.UI_SortByButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SortByButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.Construct");

	UUI_SortByButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SortByButton.UI_SortByButton_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_SortByButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.OnSynchronizeProperties");

	UUI_SortByButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SortByButton.UI_SortByButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SortByButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UUI_SortByButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SortByButton.UI_SortByButton_C.SetType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESortByTypes>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SortByButton_C::SetType(TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.SetType");

	UUI_SortByButton_C_SetType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SortByButton.UI_SortByButton_C.ExecuteUbergraph_UI_SortByButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SortByButton_C::ExecuteUbergraph_UI_SortByButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.ExecuteUbergraph_UI_SortByButton");

	UUI_SortByButton_C_ExecuteUbergraph_UI_SortByButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SortByButton.UI_SortByButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SortByButton_C::OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.OnClicked__DelegateSignature");

	UUI_SortByButton_C_OnClicked__DelegateSignature_Params params;
	params.Button = Button;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
