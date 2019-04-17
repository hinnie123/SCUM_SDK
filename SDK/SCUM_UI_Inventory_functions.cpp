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

// Function UI_Inventory.UI_Inventory_C.RefreshMaxMassAndSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_C::RefreshMaxMassAndSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.RefreshMaxMassAndSlots");

	UUI_Inventory_C_RefreshMaxMassAndSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.ToggleMinimizePartial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_C::ToggleMinimizePartial(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.ToggleMinimizePartial");

	UUI_Inventory_C_ToggleMinimizePartial_Params params;
	params.adjustPosition = adjustPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.GetMinimizedPartial
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_Inventory_C::GetMinimizedPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.GetMinimizedPartial");

	UUI_Inventory_C_GetMinimizedPartial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Inventory.UI_Inventory_C.GetMinimizedFull
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_Inventory_C::GetMinimizedFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.GetMinimizedFull");

	UUI_Inventory_C_GetMinimizedFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Inventory.UI_Inventory_C.ToggleMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_C::ToggleMinimize(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.ToggleMinimize");

	UUI_Inventory_C_ToggleMinimize_Params params;
	params.adjustPosition = adjustPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.SetSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_C::SetSize(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.SetSize");

	UUI_Inventory_C_SetSize_Params params;
	params.adjustPosition = adjustPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.OnMinimizePartialClicked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Inventory_C::OnMinimizePartialClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnMinimizePartialClicked");

	UUI_Inventory_C_OnMinimizePartialClicked_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Inventory.UI_Inventory_C.OnMinimizeAllClicked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Inventory_C::OnMinimizeAllClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnMinimizeAllClicked");

	UUI_Inventory_C_OnMinimizeAllClicked_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Inventory.UI_Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Inventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Construct");

	UUI_Inventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_Inventory_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnSynchronizeProperties");

	UUI_Inventory_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.UpdateDisplayValues
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char*                 occupiedSlots                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         occupiedMass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_C::UpdateDisplayValues(unsigned char* occupiedSlots, float* occupiedMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.UpdateDisplayValues");

	UUI_Inventory_C_UpdateDisplayValues_Params params;
	params.occupiedSlots = occupiedSlots;
	params.occupiedMass = occupiedMass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.UpdateImage
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_C::UpdateImage(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.UpdateImage");

	UUI_Inventory_C_UpdateImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.SetMinimizeAndAdjustSize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isMinimizedFull                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isMinimizedPartial             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          adjustPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_C::SetMinimizeAndAdjustSize(bool* isMinimizedFull, bool* isMinimizedPartial, bool* adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.SetMinimizeAndAdjustSize");

	UUI_Inventory_C_SetMinimizeAndAdjustSize_Params params;
	params.isMinimizedFull = isMinimizedFull;
	params.isMinimizedPartial = isMinimizedPartial;
	params.adjustPosition = adjustPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.SetTitle
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Inventory_C::SetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.SetTitle");

	UUI_Inventory_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.OnHeaderDoubleClickEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Inventory_C::OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnHeaderDoubleClickEvent");

	UUI_Inventory_C_OnHeaderDoubleClickEvent_Params params;
	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.RefreshSize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_C::RefreshSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.RefreshSize");

	UUI_Inventory_C_RefreshSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_C::ExecuteUbergraph_UI_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory");

	UUI_Inventory_C_ExecuteUbergraph_UI_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
