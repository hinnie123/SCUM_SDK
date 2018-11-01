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

// Function Wooden_Stick.Wooden_Stick_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWooden_Stick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wooden_Stick.Wooden_Stick_C.UserConstructionScript");

	AWooden_Stick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
