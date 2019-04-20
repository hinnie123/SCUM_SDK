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

// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_AKS_74U_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.UserConstructionScript");

	ABP_Weapon_AKS_74U_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_AKS_74U_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.ReceiveBeginPlay");

	ABP_Weapon_AKS_74U_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.OnAttachmentAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_AKS_74U_C::OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.OnAttachmentAdded");

	ABP_Weapon_AKS_74U_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.OnAttachmentRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_AKS_74U_C::OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.OnAttachmentRemoved");

	ABP_Weapon_AKS_74U_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.ExecuteUbergraph_BP_Weapon_AKS_74U
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_AKS_74U_C::ExecuteUbergraph_BP_Weapon_AKS_74U(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.ExecuteUbergraph_BP_Weapon_AKS_74U");

	ABP_Weapon_AKS_74U_C_ExecuteUbergraph_BP_Weapon_AKS_74U_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
