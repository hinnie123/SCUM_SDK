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

// Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CriminalRecordText_C::SetValue(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue");

	UUI_CriminalRecordText_C_SetValue_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_CriminalRecordText_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties");

	UUI_CriminalRecordText_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CriminalRecordText_C::ExecuteUbergraph_UI_CriminalRecordText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText");

	UUI_CriminalRecordText_C_ExecuteUbergraph_UI_CriminalRecordText_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
