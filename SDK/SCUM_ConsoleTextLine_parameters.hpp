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

// Function ConsoleTextLine.ConsoleTextLine_C.SetText
struct UConsoleTextLine_C_SetText_Params
{
	struct FText                                       textToSet;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                textColorToSet;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ConsoleTextLine.ConsoleTextLine_C.Construct
struct UConsoleTextLine_C_Construct_Params
{
};

// Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine
struct UConsoleTextLine_C_ExecuteUbergraph_ConsoleTextLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
