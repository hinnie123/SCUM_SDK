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

// Function UI_CustomBorder.UI_CustomBorder_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomBorder_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomBorder.UI_CustomBorder_C.PreConstruct");

	UUI_CustomBorder_C_PreConstruct_Params fn_params;
	fn_params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomBorder.UI_CustomBorder_C.ExecuteUbergraph_UI_CustomBorder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomBorder_C::ExecuteUbergraph_UI_CustomBorder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomBorder.UI_CustomBorder_C.ExecuteUbergraph_UI_CustomBorder");

	UUI_CustomBorder_C_ExecuteUbergraph_UI_CustomBorder_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
