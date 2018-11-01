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

// Function Prisoner_Left_Arm.Prisoner_Left_Arm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrisoner_Left_Arm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prisoner_Left_Arm.Prisoner_Left_Arm_C.UserConstructionScript");

	APrisoner_Left_Arm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
