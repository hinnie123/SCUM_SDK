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

// Function UI_ItemInventory2.UI_ItemInventory2_C.Blink
// (Event, Public, BlueprintEvent)

void UUI_ItemInventory2_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.Blink");

	UUI_ItemInventory2_C_Blink_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventory2.UI_ItemInventory2_C.ExecuteUbergraph_UI_ItemInventory2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemInventory2_C::ExecuteUbergraph_UI_ItemInventory2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.ExecuteUbergraph_UI_ItemInventory2");

	UUI_ItemInventory2_C_ExecuteUbergraph_UI_ItemInventory2_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
