// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HandInventory.UI_HandInventory_C.GetMinimizedHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::GetMinimizedHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.GetMinimizedHeight");

	UUI_HandInventory_C_GetMinimizedHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function UI_HandInventory.UI_HandInventory_C.RefreshMaxMassAndSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HandInventory_C::RefreshMaxMassAndSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.RefreshMaxMassAndSlots");

	UUI_HandInventory_C_RefreshMaxMassAndSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.ToggleMinimizePartial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::ToggleMinimizePartial(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.ToggleMinimizePartial");

	UUI_HandInventory_C_ToggleMinimizePartial_Params params;
	params.adjustPosition = adjustPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.GetMinimizedPartial
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_HandInventory_C::GetMinimizedPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.GetMinimizedPartial");

	UUI_HandInventory_C_GetMinimizedPartial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HandInventory.UI_HandInventory_C.GetMinimizedFull
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_HandInventory_C::GetMinimizedFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.GetMinimizedFull");

	UUI_HandInventory_C_GetMinimizedFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HandInventory.UI_HandInventory_C.ToggleMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::ToggleMinimize(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.ToggleMinimize");

	UUI_HandInventory_C_ToggleMinimize_Params params;
	params.adjustPosition = adjustPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.SetSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::SetSize(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SetSize");

	UUI_HandInventory_C_SetSize_Params params;
	params.adjustPosition = adjustPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.OnMinimizePartialClicked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_HandInventory_C::OnMinimizePartialClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.OnMinimizePartialClicked");

	UUI_HandInventory_C_OnMinimizePartialClicked_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HandInventory.UI_HandInventory_C.OnMinimizeAllClicked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_HandInventory_C::OnMinimizeAllClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.OnMinimizeAllClicked");

	UUI_HandInventory_C_OnMinimizeAllClicked_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HandInventory.UI_HandInventory_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_HandInventory_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.OnSynchronizeProperties");

	UUI_HandInventory_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.UpdateDisplayValues
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char*                 occupiedSlots                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         occupiedMass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::UpdateDisplayValues(unsigned char* occupiedSlots, float* occupiedMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.UpdateDisplayValues");

	UUI_HandInventory_C_UpdateDisplayValues_Params params;
	params.occupiedSlots = occupiedSlots;
	params.occupiedMass = occupiedMass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.UpdateImage
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::UpdateImage(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.UpdateImage");

	UUI_HandInventory_C_UpdateImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.SetMinimizeAndAdjustSize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isMinimizedFull                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isMinimizedPartial             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          adjustPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::SetMinimizeAndAdjustSize(bool* isMinimizedFull, bool* isMinimizedPartial, bool* adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SetMinimizeAndAdjustSize");

	UUI_HandInventory_C_SetMinimizeAndAdjustSize_Params params;
	params.isMinimizedFull = isMinimizedFull;
	params.isMinimizedPartial = isMinimizedPartial;
	params.adjustPosition = adjustPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.RequestUpdateSize
// (Event, Public, BlueprintEvent)

void UUI_HandInventory_C::RequestUpdateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.RequestUpdateSize");

	UUI_HandInventory_C_RequestUpdateSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.Tick");

	UUI_HandInventory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.SetTitle
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_HandInventory_C::SetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SetTitle");

	UUI_HandInventory_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.OnHeaderDoubleClickEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_HandInventory_C::OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.OnHeaderDoubleClickEvent");

	UUI_HandInventory_C_OnHeaderDoubleClickEvent_Params params;
	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.RefreshSize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HandInventory_C::RefreshSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.RefreshSize");

	UUI_HandInventory_C_RefreshSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.SetGridVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// ESlateVisibility*              gridVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::SetGridVisibility(ESlateVisibility* gridVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SetGridVisibility");

	UUI_HandInventory_C_SetGridVisibility_Params params;
	params.gridVisibility = gridVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.UpdateWithItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::UpdateWithItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.UpdateWithItem");

	UUI_HandInventory_C_UpdateWithItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.SaveLayout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface>* Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_HandInventory_C::SaveLayout(TScriptInterface<class UAttributeMapInterface>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SaveLayout");

	UUI_HandInventory_C_SaveLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.LoadLayout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface>* Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_HandInventory_C::LoadLayout(TScriptInterface<class UAttributeMapInterface>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.LoadLayout");

	UUI_HandInventory_C_LoadLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.ResetLayout
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HandInventory_C::ResetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.ResetLayout");

	UUI_HandInventory_C_ResetLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HandInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.Construct");

	UUI_HandInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventory.UI_HandInventory_C.ExecuteUbergraph_UI_HandInventory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventory_C::ExecuteUbergraph_UI_HandInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.ExecuteUbergraph_UI_HandInventory");

	UUI_HandInventory_C_ExecuteUbergraph_UI_HandInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
