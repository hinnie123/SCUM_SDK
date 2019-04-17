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

// Function Lock_Medium.Lock_Medium_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALock_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lock_Medium.Lock_Medium_C.UserConstructionScript");

	ALock_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
