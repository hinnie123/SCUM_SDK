#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Compound_Bow.Compound_Bow_C.UserConstructionScript
struct ACompound_Bow_C_UserConstructionScript_Params
{
};

// Function Compound_Bow.Compound_Bow_C.ReceiveBeginPlay
struct ACompound_Bow_C_ReceiveBeginPlay_Params
{
};

// Function Compound_Bow.Compound_Bow_C.ReceiveTick
struct ACompound_Bow_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Compound_Bow.Compound_Bow_C.OnAttachmentAdded
struct ACompound_Bow_C_OnAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Compound_Bow.Compound_Bow_C.OnAttachmentRemoved
struct ACompound_Bow_C_OnAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Compound_Bow.Compound_Bow_C.ExecuteUbergraph_Compound_Bow
struct ACompound_Bow_C_ExecuteUbergraph_Compound_Bow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
