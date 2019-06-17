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

// Function BP_M9.BP_M9_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_M9_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M9.BP_M9_C.UserConstructionScript");

	ABP_M9_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
