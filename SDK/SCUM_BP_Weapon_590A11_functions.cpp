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

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.GetWidgetDisplayInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FWidgetDisplayInfo      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWidgetDisplayInfo ABP_Weapon_590A11_C::GetWidgetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.GetWidgetDisplayInfo");

	ABP_Weapon_590A11_C_GetWidgetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_590A11_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.UserConstructionScript");

	ABP_Weapon_590A11_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.FillUpWithAmmo
// (Event, Public, BlueprintEvent)

void ABP_Weapon_590A11_C::FillUpWithAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.FillUpWithAmmo");

	ABP_Weapon_590A11_C_FillUpWithAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_590A11_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.ReceiveBeginPlay");

	ABP_Weapon_590A11_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_590A11_C::OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentAdded");

	ABP_Weapon_590A11_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_590A11_C::OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentRemoved");

	ABP_Weapon_590A11_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ExecuteUbergraph_BP_Weapon_590A11
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_590A11_C::ExecuteUbergraph_BP_Weapon_590A11(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.ExecuteUbergraph_BP_Weapon_590A11");

	ABP_Weapon_590A11_C_ExecuteUbergraph_BP_Weapon_590A11_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
