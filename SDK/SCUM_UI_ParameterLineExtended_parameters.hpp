#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetExpandableContainer
struct UUI_ParameterLineExtended_C_SetExpandableContainer_Params
{
	class UUI_ExpandableContainer_C*                   container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.DisableAlarm
struct UUI_ParameterLineExtended_C_DisableAlarm_Params
{
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.EnableAlarm
struct UUI_ParameterLineExtended_C_EnableAlarm_Params
{
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetName
struct UUI_ParameterLineExtended_C_SetName_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.UpdatePercentage
struct UUI_ParameterLineExtended_C_UpdatePercentage_Params
{
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetMaxValueInt
struct UUI_ParameterLineExtended_C_SetMaxValueInt_Params
{
	int                                                MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetMaxValueFloat
struct UUI_ParameterLineExtended_C_SetMaxValueFloat_Params
{
	float                                              MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                minDecimals;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDecimals;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetMaxValueText
struct UUI_ParameterLineExtended_C_SetMaxValueText_Params
{
	struct FText                                       MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetValueInt
struct UUI_ParameterLineExtended_C_SetValueInt_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetValueFloat
struct UUI_ParameterLineExtended_C_SetValueFloat_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                minDecimals;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDecimals;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetValueText
struct UUI_ParameterLineExtended_C_SetValueText_Params
{
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.OnSynchronizeProperties
struct UUI_ParameterLineExtended_C_OnSynchronizeProperties_Params
{
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.Construct
struct UUI_ParameterLineExtended_C_Construct_Params
{
};

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.ExecuteUbergraph_UI_ParameterLineExtended
struct UUI_ParameterLineExtended_C_ExecuteUbergraph_UI_ParameterLineExtended_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
