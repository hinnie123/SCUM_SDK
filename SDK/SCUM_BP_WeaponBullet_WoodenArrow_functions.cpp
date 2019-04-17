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

// Function BP_WeaponBullet_WoodenArrow.BP_WeaponBullet_WoodenArrow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponBullet_WoodenArrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrow.BP_WeaponBullet_WoodenArrow_C.UserConstructionScript");

	ABP_WeaponBullet_WoodenArrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_WoodenArrow.BP_WeaponBullet_WoodenArrow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponBullet_WoodenArrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrow.BP_WeaponBullet_WoodenArrow_C.ReceiveBeginPlay");

	ABP_WeaponBullet_WoodenArrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_WoodenArrow.BP_WeaponBullet_WoodenArrow_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_WoodenArrow_C::ExecuteUbergraph_BP_WeaponBullet_WoodenArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrow.BP_WeaponBullet_WoodenArrow_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrow");

	ABP_WeaponBullet_WoodenArrow_C_ExecuteUbergraph_BP_WeaponBullet_WoodenArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
