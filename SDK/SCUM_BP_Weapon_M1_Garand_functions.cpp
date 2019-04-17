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

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_M1_Garand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UserConstructionScript");

	ABP_Weapon_M1_Garand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_M1_Garand_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ReceiveBeginPlay");

	ABP_Weapon_M1_Garand_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentAdded");

	ABP_Weapon_M1_Garand_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentRemoved");

	ABP_Weapon_M1_Garand_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ExecuteUbergraph_BP_Weapon_M1_Garand
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::ExecuteUbergraph_BP_Weapon_M1_Garand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ExecuteUbergraph_BP_Weapon_M1_Garand");

	ABP_Weapon_M1_Garand_C_ExecuteUbergraph_BP_Weapon_M1_Garand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
