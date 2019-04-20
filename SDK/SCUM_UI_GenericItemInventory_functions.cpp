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

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExpandToMaximizedHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::ExpandToMaximizedHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExpandToMaximizedHeight");

	UUI_GenericItemInventory_C_ExpandToMaximizedHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.CollapseToMinimizedHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::CollapseToMinimizedHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.CollapseToMinimizedHeight");

	UUI_GenericItemInventory_C_CollapseToMinimizedHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GenericItemInventory_C::GetMinimizedHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedHeight");

	UUI_GenericItemInventory_C_GetMinimizedHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedPartial
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_GenericItemInventory_C::GetMinimizedPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedPartial");

	UUI_GenericItemInventory_C_GetMinimizedPartial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedFull
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_GenericItemInventory_C::GetMinimizedFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedFull");

	UUI_GenericItemInventory_C_GetMinimizedFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.adjustPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::adjustPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.adjustPosition");

	UUI_GenericItemInventory_C_adjustPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizeFull
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::ToggleMinimizeFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizeFull");

	UUI_GenericItemInventory_C_ToggleMinimizeFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizePartial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::ToggleMinimizePartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizePartial");

	UUI_GenericItemInventory_C_ToggleMinimizePartial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizeFullClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::OnMinimizeFullClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizeFullClicked");

	UUI_GenericItemInventory_C_OnMinimizeFullClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizePartialClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::OnMinimizePartialClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizePartialClicked");

	UUI_GenericItemInventory_C_OnMinimizePartialClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnCloseClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnCloseClicked");

	UUI_GenericItemInventory_C_OnCloseClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_GenericItemInventory_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnSynchronizeProperties");

	UUI_GenericItemInventory_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnHeaderDoubleClickEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GenericItemInventory_C::OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnHeaderDoubleClickEvent");

	UUI_GenericItemInventory_C_OnHeaderDoubleClickEvent_Params params;
	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GenericItemInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.Construct");

	UUI_GenericItemInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericItemInventory_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.Tick");

	UUI_GenericItemInventory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateVisualsFromItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericItemInventory_C::UpdateVisualsFromItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateVisualsFromItem");

	UUI_GenericItemInventory_C_UpdateVisualsFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshOccupiedSlotsAndMassVisuals
// (Event, Public, BlueprintEvent)

void UUI_GenericItemInventory_C::RefreshOccupiedSlotsAndMassVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshOccupiedSlotsAndMassVisuals");

	UUI_GenericItemInventory_C_RefreshOccupiedSlotsAndMassVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshSize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::RefreshSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshSize");

	UUI_GenericItemInventory_C_RefreshSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetResizableWindowParentSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot**       PanelSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_GenericItemInventory_C::SetResizableWindowParentSlot(class UCanvasPanelSlot** PanelSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetResizableWindowParentSlot");

	UUI_GenericItemInventory_C_SetResizableWindowParentSlot_Params params;
	params.PanelSlot = PanelSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ChangeTitle
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_GenericItemInventory_C::ChangeTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ChangeTitle");

	UUI_GenericItemInventory_C_ChangeTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GenericItemInventory_C::BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UUI_GenericItemInventory_C_BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizePartialButton_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GenericItemInventory_C::BndEvt__MinimizePartialButton_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizePartialButton_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature");

	UUI_GenericItemInventory_C_BndEvt__MinimizePartialButton_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GenericItemInventory_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	UUI_GenericItemInventory_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateImageFromBodySlot
// (Event, Public, BlueprintEvent)
// Parameters:
// EBodySlot*                     bodySlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericItemInventory_C::UpdateImageFromBodySlot(EBodySlot* bodySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateImageFromBodySlot");

	UUI_GenericItemInventory_C_UpdateImageFromBodySlot_Params params;
	params.bodySlot = bodySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetMinimizationState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          minimizePartial                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          minimizeFull                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericItemInventory_C::SetMinimizationState(bool* minimizePartial, bool* minimizeFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetMinimizationState");

	UUI_GenericItemInventory_C_SetMinimizationState_Params params;
	params.minimizePartial = minimizePartial;
	params.minimizeFull = minimizeFull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BlinkItemContainer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_GenericItemInventory_C::BlinkItemContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.BlinkItemContainer");

	UUI_GenericItemInventory_C_BlinkItemContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.SaveLayout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface>* Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_GenericItemInventory_C::SaveLayout(TScriptInterface<class UAttributeMapInterface>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.SaveLayout");

	UUI_GenericItemInventory_C_SaveLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.DeferredLoadLayout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           minimizedPartial               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           minimizedFully                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericItemInventory_C::DeferredLoadLayout(bool minimizedPartial, bool minimizedFully)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.DeferredLoadLayout");

	UUI_GenericItemInventory_C_DeferredLoadLayout_Params params;
	params.minimizedPartial = minimizedPartial;
	params.minimizedFully = minimizedFully;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExecuteUbergraph_UI_GenericItemInventory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericItemInventory_C::ExecuteUbergraph_UI_GenericItemInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExecuteUbergraph_UI_GenericItemInventory");

	UUI_GenericItemInventory_C_ExecuteUbergraph_UI_GenericItemInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
