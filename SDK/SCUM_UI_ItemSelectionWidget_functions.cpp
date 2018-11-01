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

// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.Get_ItemName_ColorAndOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_ItemSelectionWidget_C::Get_ItemName_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.Get_ItemName_ColorAndOpacity");

	UUI_ItemSelectionWidget_C_Get_ItemName_ColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionWidget_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetSelected");

	UUI_ItemSelectionWidget_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.On_Selection_MouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_ItemSelectionWidget_C::On_Selection_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.On_Selection_MouseButtonDown");

	UUI_ItemSelectionWidget_C_On_Selection_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.UpdateButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ItemSelectionWidget_C::UpdateButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.UpdateButton");

	UUI_ItemSelectionWidget_C_UpdateButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.GetData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItemSelection*          Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionWidget_C::GetData(class UItemSelection** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.GetData");

	UUI_ItemSelectionWidget_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSelection*          Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionWidget_C::SetData(class UItemSelection* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetData");

	UUI_ItemSelectionWidget_C_SetData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ItemSelectionWidget_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.OnClicked__DelegateSignature");

	UUI_ItemSelectionWidget_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
