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

// Function UI_InspectedItem.UI_InspectedItem_C.SetIsToolForSomething
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsTool                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InspectedItem_C::SetIsToolForSomething(bool* IsTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InspectedItem.UI_InspectedItem_C.SetIsToolForSomething");

	UUI_InspectedItem_C_SetIsToolForSomething_Params params;
	params.IsTool = IsTool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InspectedItem.UI_InspectedItem_C.ExecuteUbergraph_UI_InspectedItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InspectedItem_C::ExecuteUbergraph_UI_InspectedItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InspectedItem.UI_InspectedItem_C.ExecuteUbergraph_UI_InspectedItem");

	UUI_InspectedItem_C_ExecuteUbergraph_UI_InspectedItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
