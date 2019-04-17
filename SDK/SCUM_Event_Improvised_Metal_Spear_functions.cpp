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

// Function Event_Improvised_Metal_Spear.Event_Improvised_Metal_Spear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEvent_Improvised_Metal_Spear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Improvised_Metal_Spear.Event_Improvised_Metal_Spear_C.UserConstructionScript");

	AEvent_Improvised_Metal_Spear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
