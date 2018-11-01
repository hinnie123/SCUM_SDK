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

// Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue
struct UUI_CriminalRecordText_C_SetValue_Params
{
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties
struct UUI_CriminalRecordText_C_OnSynchronizeProperties_Params
{
};

// Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText
struct UUI_CriminalRecordText_C_ExecuteUbergraph_UI_CriminalRecordText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
