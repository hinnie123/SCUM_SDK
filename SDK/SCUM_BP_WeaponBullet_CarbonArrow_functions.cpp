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

// Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponBullet_CarbonArrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.UserConstructionScript");

	ABP_WeaponBullet_CarbonArrow_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponBullet_CarbonArrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ReceiveBeginPlay");

	ABP_WeaponBullet_CarbonArrow_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ExecuteUbergraph_BP_WeaponBullet_CarbonArrow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_CarbonArrow_C::ExecuteUbergraph_BP_WeaponBullet_CarbonArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ExecuteUbergraph_BP_WeaponBullet_CarbonArrow");

	ABP_WeaponBullet_CarbonArrow_C_ExecuteUbergraph_BP_WeaponBullet_CarbonArrow_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
