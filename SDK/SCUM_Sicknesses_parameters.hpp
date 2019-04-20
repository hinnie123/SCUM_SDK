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

// Function Sicknesses.Sicknesses_C.HasContentSizeChanged
struct USicknesses_C_HasContentSizeChanged_Params
{
	int                                                oldSicknessCount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                newSicknessCount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               contentSizeChanged;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.CheckForAlarms
struct USicknesses_C_CheckForAlarms_Params
{
	int                                                previousSicknessCount;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                sicknessCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.UpdateSicknessCount
struct USicknesses_C_UpdateSicknessCount_Params
{
};

// Function Sicknesses.Sicknesses_C.SicknessToText
struct USicknesses_C_SicknessToText_Params
{
	class USickness*                                   sicknessRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SicknessName;                                             // (Parm, OutParm)
	struct FText                                       sicknessState;                                            // (Parm, OutParm)
	struct FText                                       sicknessPhase;                                            // (Parm, OutParm)
};

// Function Sicknesses.Sicknesses_C.FillSicknessLine
struct USicknesses_C_FillSicknessLine_Params
{
	class UParameterLine_C*                            sicknessLineRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USickness*                                   Sickness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.UpdateSicknessLine
struct USicknesses_C_UpdateSicknessLine_Params
{
};

// Function Sicknesses.Sicknesses_C.CreateSicknessLine
struct USicknesses_C_CreateSicknessLine_Params
{
	class USickness*                                   sicknessRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParameterLine_C*                            sicknessParameterLine;                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.ShowSickness
struct USicknesses_C_ShowSickness_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.InitSicknesses
struct USicknesses_C_InitSicknesses_Params
{
};

// Function Sicknesses.Sicknesses_C.AddSicknessLine
struct USicknesses_C_AddSicknessLine_Params
{
	class UParameterLine_C*                            sicknessLineRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.CreateSicknessLineFromText
struct USicknesses_C_CreateSicknessLineFromText_Params
{
	struct FText                                       SicknessName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SicknessTextValue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SicknessMaxValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UParameterLine_C*                            sicknessLine;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.GetSicknesses
struct USicknesses_C_GetSicknesses_Params
{
	TArray<class USickness*>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Sicknesses.Sicknesses_C.SetSicknessCount
struct USicknesses_C_SetSicknessCount_Params
{
	int                                                sicknessCountToSet;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.ClearSicknessLines
struct USicknesses_C_ClearSicknessLines_Params
{
};

// Function Sicknesses.Sicknesses_C.CountSicknesses
struct USicknesses_C_CountSicknesses_Params
{
	int                                                numberOfSicknesses;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.HasSicknessCountChanged
struct USicknesses_C_HasSicknessCountChanged_Params
{
	bool                                               sicknessCountChanged;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.UpdateSicknesses
struct USicknesses_C_UpdateSicknesses_Params
{
};

// Function Sicknesses.Sicknesses_C.GetTitleText
struct USicknesses_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Sicknesses.Sicknesses_C.GetDefaultTitle
struct USicknesses_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function Sicknesses.Sicknesses_C.SelectCustomColor
struct USicknesses_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.Construct
struct USicknesses_C_Construct_Params
{
};

// Function Sicknesses.Sicknesses_C.OnMinimize
struct USicknesses_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.OnPrisonerSet
struct USicknesses_C_OnPrisonerSet_Params
{
};

// Function Sicknesses.Sicknesses_C.UpdateContent
struct USicknesses_C_UpdateContent_Params
{
};

// Function Sicknesses.Sicknesses_C.SicknessEmergedShouldActivateAlarm
struct USicknesses_C_SicknessEmergedShouldActivateAlarm_Params
{
};

// Function Sicknesses.Sicknesses_C.SicknessGoneShouldDeactivateAlarm
struct USicknesses_C_SicknessGoneShouldDeactivateAlarm_Params
{
};

// Function Sicknesses.Sicknesses_C.ExecuteUbergraph_Sicknesses
struct USicknesses_C_ExecuteUbergraph_Sicknesses_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sicknesses.Sicknesses_C.AlarmOffSicknessesEventDispatcher__DelegateSignature
struct USicknesses_C_AlarmOffSicknessesEventDispatcher__DelegateSignature_Params
{
};

// Function Sicknesses.Sicknesses_C.AlarmOnSicknessesEventDispatcher__DelegateSignature
struct USicknesses_C_AlarmOnSicknessesEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
