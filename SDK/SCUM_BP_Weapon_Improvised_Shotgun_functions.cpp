// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_Improvised_Shotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.UserConstructionScript");

	ABP_Weapon_Improvised_Shotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Improvised_Shotgun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ReceiveTick");

	ABP_Weapon_Improvised_Shotgun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Shotgun
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Improvised_Shotgun_C::ExecuteUbergraph_BP_Weapon_Improvised_Shotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Shotgun");

	ABP_Weapon_Improvised_Shotgun_C_ExecuteUbergraph_BP_Weapon_Improvised_Shotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
