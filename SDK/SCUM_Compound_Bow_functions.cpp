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

// Function Compound_Bow.Compound_Bow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACompound_Bow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.UserConstructionScript");

	ACompound_Bow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compound_Bow.Compound_Bow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACompound_Bow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.ReceiveBeginPlay");

	ACompound_Bow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compound_Bow.Compound_Bow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACompound_Bow_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.ReceiveTick");

	ACompound_Bow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compound_Bow.Compound_Bow_C.OnAttachmentAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACompound_Bow_C::OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.OnAttachmentAdded");

	ACompound_Bow_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compound_Bow.Compound_Bow_C.OnAttachmentRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACompound_Bow_C::OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.OnAttachmentRemoved");

	ACompound_Bow_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compound_Bow.Compound_Bow_C.ExecuteUbergraph_Compound_Bow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACompound_Bow_C::ExecuteUbergraph_Compound_Bow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.ExecuteUbergraph_Compound_Bow");

	ACompound_Bow_C_ExecuteUbergraph_Compound_Bow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
