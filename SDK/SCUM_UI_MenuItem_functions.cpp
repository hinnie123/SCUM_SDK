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

// Function UI_MenuItem.UI_MenuItem_C.SetItemClassAndIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuItem_C::SetItemClassAndIcon(class UClass* Item, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.SetItemClassAndIcon");

	UUI_MenuItem_C_SetItemClassAndIcon_Params params;
	params.Item = Item;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuItem.UI_MenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MenuItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UUI_MenuItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuItem.UI_MenuItem_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_MenuItem_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.OnSynchronizeProperties");

	UUI_MenuItem_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuItem.UI_MenuItem_C.ExecuteUbergraph_UI_MenuItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuItem_C::ExecuteUbergraph_UI_MenuItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.ExecuteUbergraph_UI_MenuItem");

	UUI_MenuItem_C_ExecuteUbergraph_UI_MenuItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuItem.UI_MenuItem_C.OnClickedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MenuItem_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MenuItem_C::OnClickedDispatcher__DelegateSignature(class UUI_MenuItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.OnClickedDispatcher__DelegateSignature");

	UUI_MenuItem_C_OnClickedDispatcher__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
