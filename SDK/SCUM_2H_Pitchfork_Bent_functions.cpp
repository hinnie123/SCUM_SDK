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

// Function 2H_Pitchfork_Bent.2H_Pitchfork_Bent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void A2H_Pitchfork_Bent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 2H_Pitchfork_Bent.2H_Pitchfork_Bent_C.UserConstructionScript");

	A2H_Pitchfork_Bent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
