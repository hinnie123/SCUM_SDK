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

// Function Long_wooden_stick.Long_wooden_stick_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALong_wooden_stick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Long_wooden_stick.Long_wooden_stick_C.UserConstructionScript");

	ALong_wooden_stick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif