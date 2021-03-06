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

// Function BP_Weapon_MP5.BP_Weapon_MP5_C.CanAddAttachment
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AWeaponAttachment**      Attachment                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_MP5_C::CanAddAttachment(class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.CanAddAttachment");

	ABP_Weapon_MP5_C_CanAddAttachment_Params fn_params;
	fn_params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_Weapon_MP5.BP_Weapon_MP5_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_MP5_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.UserConstructionScript");

	ABP_Weapon_MP5_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MP5.BP_Weapon_MP5_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_MP5_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.ReceiveBeginPlay");

	ABP_Weapon_MP5_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MP5_C::OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentAdded");

	ABP_Weapon_MP5_C_OnAttachmentAdded_Params fn_params;
	fn_params.sender = sender;
	fn_params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MP5_C::OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentRemoved");

	ABP_Weapon_MP5_C_OnAttachmentRemoved_Params fn_params;
	fn_params.sender = sender;
	fn_params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MP5.BP_Weapon_MP5_C.ExecuteUbergraph_BP_Weapon_MP5
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MP5_C::ExecuteUbergraph_BP_Weapon_MP5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.ExecuteUbergraph_BP_Weapon_MP5");

	ABP_Weapon_MP5_C_ExecuteUbergraph_BP_Weapon_MP5_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
