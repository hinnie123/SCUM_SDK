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

// Function Event_1H_Improvised_metal_knife.Event_1H_Improvised_metal_knife_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEvent_1H_Improvised_metal_knife_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_1H_Improvised_metal_knife.Event_1H_Improvised_metal_knife_C.UserConstructionScript");

	AEvent_1H_Improvised_metal_knife_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
