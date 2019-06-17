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

// Function BP_Ocean.BP_Ocean_C.Set Global Parameters
struct ABP_Ocean_C_Set_Global_Parameters_Params
{
};

// Function BP_Ocean.BP_Ocean_C.Set Display Parameters
struct ABP_Ocean_C_Set_Display_Parameters_Params
{
};

// Function BP_Ocean.BP_Ocean_C.Create Wave Set
struct ABP_Ocean_C_Create_Wave_Set_Params
{
};

// Function BP_Ocean.BP_Ocean_C.UserConstructionScript
struct ABP_Ocean_C_UserConstructionScript_Params
{
};

// Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay
struct ABP_Ocean_C_ReceiveBeginPlay_Params
{
};

// Function BP_Ocean.BP_Ocean_C.SetNetworkOffset
struct ABP_Ocean_C_SetNetworkOffset_Params
{
	float                                              Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ocean.BP_Ocean_C.MySetNetworkOffset
struct ABP_Ocean_C_MySetNetworkOffset_Params
{
	float*                                             Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean
struct ABP_Ocean_C_ExecuteUbergraph_BP_Ocean_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
