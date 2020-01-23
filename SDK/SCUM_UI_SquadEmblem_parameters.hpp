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

// Function UI_SquadEmblem.UI_SquadEmblem_C.GetEmblemData
struct UUI_SquadEmblem_C_GetEmblemData_Params
{
	struct FConZSquadEmblem                            Data;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function UI_SquadEmblem.UI_SquadEmblem_C.SetEmblemData
struct UUI_SquadEmblem_C_SetEmblemData_Params
{
	struct FConZSquadEmblem                            Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_SquadEmblem.UI_SquadEmblem_C.PreConstruct
struct UUI_SquadEmblem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SquadEmblem.UI_SquadEmblem_C.ExecuteUbergraph_UI_SquadEmblem
struct UUI_SquadEmblem_C_ExecuteUbergraph_UI_SquadEmblem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
