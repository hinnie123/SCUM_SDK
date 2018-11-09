#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prisoner.BP_Prisoner_C.FindOtherPlayersInRange
struct ABP_Prisoner_C_FindOtherPlayersInRange_Params
{
	float                                              SearchDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_Prisoner_C*>                      OtherPlayers;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Prisoner.BP_Prisoner_C.DebugPrint
struct ABP_Prisoner_C_DebugPrint_Params
{
	struct FString                                     MessageString;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ValueString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prisoner.BP_Prisoner_C.IKFootTraceToRemove
struct ABP_Prisoner_C_IKFootTraceToRemove_Params
{
	float                                              TraceDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IKOffset;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prisoner.BP_Prisoner_C.UserConstructionScript
struct ABP_Prisoner_C_UserConstructionScript_Params
{
};

// Function BP_Prisoner.BP_Prisoner_C.DrawFootstep
struct ABP_Prisoner_C_DrawFootstep_Params
{
	bool                                               flip;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prisoner.BP_Prisoner_C.InitTextMeshFromName
struct ABP_Prisoner_C_InitTextMeshFromName_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Prisoner.BP_Prisoner_C.ServerProcessVoiceChatData
struct ABP_Prisoner_C_ServerProcessVoiceChatData_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Prisoner.BP_Prisoner_C.ClientReceiveVoiceData
struct ABP_Prisoner_C_ClientReceiveVoiceData_Params
{
	class ABP_Prisoner_C*                              FromPlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              CompressedVoiceData;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Prisoner.BP_Prisoner_C.PlayVoiceChat
struct ABP_Prisoner_C_PlayVoiceChat_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature
struct ABP_Prisoner_C_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature_Params
{
};

// Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature
struct ABP_Prisoner_C_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature_Params
{
};

// Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature
struct ABP_Prisoner_C_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature_Params
{
};

// Function BP_Prisoner.BP_Prisoner_C.ReceiveTick
struct ABP_Prisoner_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prisoner.BP_Prisoner_C.ReceiveBeginPlay
struct ABP_Prisoner_C_ReceiveBeginPlay_Params
{
};

// Function BP_Prisoner.BP_Prisoner_C.ExecuteUbergraph_BP_Prisoner
struct ABP_Prisoner_C_ExecuteUbergraph_BP_Prisoner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
