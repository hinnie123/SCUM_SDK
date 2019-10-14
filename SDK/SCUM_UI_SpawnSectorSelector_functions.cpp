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

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SetSelectedSector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InRow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InColumn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSectorSelector_C::SetSelectedSector(int InRow, int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SetSelectedSector");

	UUI_SpawnSectorSelector_C_SetSelectedSector_Params fn_params;
	fn_params.InRow = InRow;
	fn_params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.UpdateCurrentSector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnRow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnColumn                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSectorSelector_C::UpdateCurrentSector(int* ReturnRow, int* ReturnColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.UpdateCurrentSector");

	UUI_SpawnSectorSelector_C_UpdateCurrentSector_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (ReturnRow != nullptr)
		*ReturnRow = fn_params.ReturnRow;
	if (ReturnColumn != nullptr)
		*ReturnColumn = fn_params.ReturnColumn;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.GetSelectedSector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSectorSelector_C::GetSelectedSector(int* X, int* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.GetSelectedSector");

	UUI_SpawnSectorSelector_C_GetSelectedSector_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = fn_params.X;
	if (Y != nullptr)
		*Y = fn_params.Y;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SelectSector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnSectorSelector_C::SelectSector(class UButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SelectSector");

	UUI_SpawnSectorSelector_C_SelectSector_Params fn_params;
	fn_params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SpawnSectorSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.Construct");

	UUI_SpawnSectorSelector_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.ExecuteUbergraph_UI_SpawnSectorSelector
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSectorSelector_C::ExecuteUbergraph_UI_SpawnSectorSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.ExecuteUbergraph_UI_SpawnSectorSelector");

	UUI_SpawnSectorSelector_C_ExecuteUbergraph_UI_SpawnSectorSelector_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
