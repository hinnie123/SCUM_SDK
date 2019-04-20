#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_TeamInfo.UI_TeamInfo_C.ClearTeammateNames
struct UUI_TeamInfo_C_ClearTeammateNames_Params
{
};

// Function UI_TeamInfo.UI_TeamInfo_C.GetVisibility_1
struct UUI_TeamInfo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_TeamInfo.UI_TeamInfo_C.RemoveTeammateName
struct UUI_TeamInfo_C_RemoveTeammateName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_TeamInfo.UI_TeamInfo_C.AddTeammateName
struct UUI_TeamInfo_C_AddTeammateName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_TeamInfo.UI_TeamInfo_C.Construct
struct UUI_TeamInfo_C_Construct_Params
{
};

// Function UI_TeamInfo.UI_TeamInfo_C.ExecuteUbergraph_UI_TeamInfo
struct UUI_TeamInfo_C_ExecuteUbergraph_UI_TeamInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
