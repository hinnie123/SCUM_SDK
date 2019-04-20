// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SelectionContainer.UI_SelectionContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SelectionContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.Construct");

	UUI_SelectionContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SelectionContainer.UI_SelectionContainer_C.OnHeaderDoubleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_SelectionContainer_C::OnHeaderDoubleClicked(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.OnHeaderDoubleClicked");

	UUI_SelectionContainer_C_OnHeaderDoubleClicked_Params params;
	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SelectionContainer_C::BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UUI_SelectionContainer_C_BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SelectionContainer_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");

	UUI_SelectionContainer_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SelectionContainer.UI_SelectionContainer_C.ExecuteUbergraph_UI_SelectionContainer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SelectionContainer_C::ExecuteUbergraph_UI_SelectionContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.ExecuteUbergraph_UI_SelectionContainer");

	UUI_SelectionContainer_C_ExecuteUbergraph_UI_SelectionContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
