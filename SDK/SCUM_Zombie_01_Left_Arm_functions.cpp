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

// Function Zombie_01_Left_Arm.Zombie_01_Left_Arm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AZombie_01_Left_Arm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zombie_01_Left_Arm.Zombie_01_Left_Arm_C.UserConstructionScript");

	AZombie_01_Left_Arm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
