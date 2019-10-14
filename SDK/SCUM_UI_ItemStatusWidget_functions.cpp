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

// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.UpdateVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ItemStatusWidget_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.UpdateVisibility");

	UUI_ItemStatusWidget_C_UpdateVisibility_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ItemStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.Construct");

	UUI_ItemStatusWidget_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.SetNameText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ItemStatusWidget_C::SetNameText(struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.SetNameText");

	UUI_ItemStatusWidget_C_SetNameText_Params fn_params;
	fn_params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.ExecuteUbergraph_UI_ItemStatusWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemStatusWidget_C::ExecuteUbergraph_UI_ItemStatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.ExecuteUbergraph_UI_ItemStatusWidget");

	UUI_ItemStatusWidget_C_ExecuteUbergraph_UI_ItemStatusWidget_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
