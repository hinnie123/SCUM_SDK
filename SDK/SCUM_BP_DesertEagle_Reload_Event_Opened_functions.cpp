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

// Function BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C.OnActionAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DesertEagle_Reload_Event_Opened_C::OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C.OnActionAnimNotify");

	UBP_DesertEagle_Reload_Event_Opened_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C.ExecuteUbergraph_BP_DesertEagle_Reload_Event_Opened
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DesertEagle_Reload_Event_Opened_C::ExecuteUbergraph_BP_DesertEagle_Reload_Event_Opened(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C.ExecuteUbergraph_BP_DesertEagle_Reload_Event_Opened");

	UBP_DesertEagle_Reload_Event_Opened_C_ExecuteUbergraph_BP_DesertEagle_Reload_Event_Opened_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
