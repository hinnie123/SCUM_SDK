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

// Function BP_WeaponBullet_WoodenArrowMetalTip.BP_WeaponBullet_WoodenArrowMetalTip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponBullet_WoodenArrowMetalTip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowMetalTip.BP_WeaponBullet_WoodenArrowMetalTip_C.UserConstructionScript");

	ABP_WeaponBullet_WoodenArrowMetalTip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_WoodenArrowMetalTip.BP_WeaponBullet_WoodenArrowMetalTip_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponBullet_WoodenArrowMetalTip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowMetalTip.BP_WeaponBullet_WoodenArrowMetalTip_C.ReceiveBeginPlay");

	ABP_WeaponBullet_WoodenArrowMetalTip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_WoodenArrowMetalTip.BP_WeaponBullet_WoodenArrowMetalTip_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowMetalTip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_WoodenArrowMetalTip_C::ExecuteUbergraph_BP_WeaponBullet_WoodenArrowMetalTip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowMetalTip.BP_WeaponBullet_WoodenArrowMetalTip_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowMetalTip");

	ABP_WeaponBullet_WoodenArrowMetalTip_C_ExecuteUbergraph_BP_WeaponBullet_WoodenArrowMetalTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
