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

// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TooltipOverviewElement_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.PreConstruct");

	UUI_TooltipOverviewElement_C_PreConstruct_Params fn_params;
	fn_params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnNumberDataChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TooltipOverviewElement_C::OnNumberDataChanged(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnNumberDataChanged");

	UUI_TooltipOverviewElement_C_OnNumberDataChanged_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnTextDataChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_TooltipOverviewElement_C::OnTextDataChanged(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnTextDataChanged");

	UUI_TooltipOverviewElement_C_OnTextDataChanged_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.ExecuteUbergraph_UI_TooltipOverviewElement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TooltipOverviewElement_C::ExecuteUbergraph_UI_TooltipOverviewElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.ExecuteUbergraph_UI_TooltipOverviewElement");

	UUI_TooltipOverviewElement_C_ExecuteUbergraph_UI_TooltipOverviewElement_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
