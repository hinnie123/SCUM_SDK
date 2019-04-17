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

// Function BP_Weapon_AK47.BP_Weapon_AK47_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_AK47_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_AK47.BP_Weapon_AK47_C.UserConstructionScript");

	ABP_Weapon_AK47_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
