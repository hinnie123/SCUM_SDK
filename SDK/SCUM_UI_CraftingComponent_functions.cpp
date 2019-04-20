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

// Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CraftingComponent_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseButtonDown");

	UUI_CraftingComponent_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsTool
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsTool                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetIsTool(bool* IsTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsTool");

	UUI_CraftingComponent_C_SetIsTool_Params params;
	params.IsTool = IsTool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetRequiredCount
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetRequiredCount(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetRequiredCount");

	UUI_CraftingComponent_C_SetRequiredCount_Params params;
	params.count = count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetOrderNumber
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           orderNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetOrderNumber(int* orderNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetOrderNumber");

	UUI_CraftingComponent_C_SetOrderNumber_Params params;
	params.orderNumber = orderNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsOptional
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isOptional                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetIsOptional(bool* isOptional)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsOptional");

	UUI_CraftingComponent_C_SetIsOptional_Params params;
	params.isOptional = isOptional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.CreateTooltip
// (Event, Public, BlueprintEvent)

void UUI_CraftingComponent_C::CreateTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.CreateTooltip");

	UUI_CraftingComponent_C_CreateTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsAvailable
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsAvailable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetIsAvailable(bool* IsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsAvailable");

	UUI_CraftingComponent_C_SetIsAvailable_Params params;
	params.IsAvailable = IsAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CraftingComponent_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseEnter");

	UUI_CraftingComponent_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetSatisfiedAndRequiredCount
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Satisfied                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Required                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetSatisfiedAndRequiredCount(int* Satisfied, int* Required)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetSatisfiedAndRequiredCount");

	UUI_CraftingComponent_C_SetSatisfiedAndRequiredCount_Params params;
	params.Satisfied = Satisfied;
	params.Required = Required;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.ExecuteUbergraph_UI_CraftingComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::ExecuteUbergraph_UI_CraftingComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.ExecuteUbergraph_UI_CraftingComponent");

	UUI_CraftingComponent_C_ExecuteUbergraph_UI_CraftingComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
