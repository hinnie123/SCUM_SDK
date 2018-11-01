// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_QuickAccessItemSwitcher_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.Construct");

	UUI_QuickAccessItemSwitcher_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_QuickAccessItemSwitcher_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.OnSynchronizeProperties");

	UUI_QuickAccessItemSwitcher_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.ExecuteUbergraph_UI_QuickAccessItemSwitcher
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemSwitcher_C::ExecuteUbergraph_UI_QuickAccessItemSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.ExecuteUbergraph_UI_QuickAccessItemSwitcher");

	UUI_QuickAccessItemSwitcher_C_ExecuteUbergraph_UI_QuickAccessItemSwitcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
