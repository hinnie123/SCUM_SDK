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

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               itemSize                       (Parm, OutParm, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::GetItemSize(struct FVector2D* itemSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize");

	UUI_QuickAccessItemWidget_C_GetItemSize_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (itemSize != nullptr)
		*itemSize = fn_params.itemSize;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             imageBrush                     (Parm, OutParm)

void UUI_QuickAccessItemWidget_C::GetImageBrush(struct FSlateBrush* imageBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush");

	UUI_QuickAccessItemWidget_C_GetImageBrush_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (imageBrush != nullptr)
		*imageBrush = fn_params.imageBrush;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_QuickAccessItemWidget_C::On__imageWidget_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1");

	UUI_QuickAccessItemWidget_C_On__imageWidget_MouseButtonDown_1_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragDetected");

	UUI_QuickAccessItemWidget_C_OnDragDetected_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = fn_params.Operation;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            itemSlotNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::SetItemSlotNumber(int itemSlotNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber");

	UUI_QuickAccessItemWidget_C_SetItemSlotNumber_Params fn_params;
	fn_params.itemSlotNumber = itemSlotNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_QuickAccessItemWidget_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor");

	UUI_QuickAccessItemWidget_C_ActivateNormalColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_QuickAccessItemWidget_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor");

	UUI_QuickAccessItemWidget_C_ActivateAlarmColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_QuickAccessItemWidget_C::GetItemSlotNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber");

	UUI_QuickAccessItemWidget_C_GetItemSlotNumber_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor");

	UUI_QuickAccessItemWidget_C_SetTextColor_Params fn_params;
	fn_params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_QuickAccessItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct");

	UUI_QuickAccessItemWidget_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave");

	UUI_QuickAccessItemWidget_C_OnDragLeave_Params fn_params;
	fn_params.PointerEvent = PointerEvent;
	fn_params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::ExecuteUbergraph_UI_QuickAccessItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget");

	UUI_QuickAccessItemWidget_C_ExecuteUbergraph_UI_QuickAccessItemWidget_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
