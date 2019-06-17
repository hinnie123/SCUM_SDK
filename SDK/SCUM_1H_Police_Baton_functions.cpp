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

// Function 1H_Police_Baton.1H_Police_Baton_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void A1H_Police_Baton_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 1H_Police_Baton.1H_Police_Baton_C.UserConstructionScript");

	A1H_Police_Baton_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
