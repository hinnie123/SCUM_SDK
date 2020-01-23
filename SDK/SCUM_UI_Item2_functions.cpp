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

// Function UI_Item2.UI_Item2_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Item2_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.OnPreviewKeyDown");

	UUI_Item2_C_OnPreviewKeyDown_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_Item2.UI_Item2_C.UpdateVisualszzz
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Item2_C::UpdateVisualszzz()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.UpdateVisualszzz");

	UUI_Item2_C_UpdateVisualszzz_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Item2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.Construct");

	UUI_Item2_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.UpdateVisuals
// (Event, Protected, BlueprintEvent)

void UUI_Item2_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.UpdateVisuals");

	UUI_Item2_C_UpdateVisuals_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.Init
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UInventoryNode>* Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TScriptInterface<class UInventoryContainer>* container                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_Item2_C::Init(TScriptInterface<class UInventoryNode>* Item, TScriptInterface<class UInventoryContainer>* container)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.Init");

	UUI_Item2_C_Init_Params fn_params;
	fn_params.Item = Item;
	fn_params.container = container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Item2_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.OnMouseEnter");

	UUI_Item2_C_OnMouseEnter_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Item2_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.OnMouseLeave");

	UUI_Item2_C_OnMouseLeave_Params fn_params;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Item2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.Tick");

	UUI_Item2_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.ExecuteUbergraph_UI_Item2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Item2_C::ExecuteUbergraph_UI_Item2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.ExecuteUbergraph_UI_Item2");

	UUI_Item2_C_ExecuteUbergraph_UI_Item2_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
