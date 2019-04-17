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

// Function SkillLine2.SkillLine2_C.UpdateSkill2
struct USkillLine2_C_UpdateSkill2_Params
{
	ESkillLevel                                        skillLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              skillPoints;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     skillCaption;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       maxValueText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkillLine2.SkillLine2_C.SetMaxSkillValueText
struct USkillLine2_C_SetMaxSkillValueText_Params
{
	struct FText                                       maxValueText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkillLine2.SkillLine2_C.SkilLevelToMaxSkillValueText
struct USkillLine2_C_SkilLevelToMaxSkillValueText_Params
{
	ESkillLevel                                        Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       MaxValue;                                                 // (Parm, OutParm)
};

// Function SkillLine2.SkillLine2_C.SetSkillValueText
struct USkillLine2_C_SetSkillValueText_Params
{
	struct FText                                       ValueText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkillLine2.SkillLine2_C.UpdateSkill
struct USkillLine2_C_UpdateSkill_Params
{
	ESkillLevel                                        skillLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              skillPoints;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     skillCaption;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SkillLine2.SkillLine2_C.SetAlarmColor
struct USkillLine2_C_SetAlarmColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SkillLine2.SkillLine2_C.GetValueTextBlock
struct USkillLine2_C_GetValueTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SkillLine2.SkillLine2_C.SetColorOfMaxValue
struct USkillLine2_C_SetColorOfMaxValue_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkillLine2.SkillLine2_C.SetColorOfValue
struct USkillLine2_C_SetColorOfValue_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkillLine2.SkillLine2_C.SetColorOfParameterName
struct USkillLine2_C_SetColorOfParameterName_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkillLine2.SkillLine2_C.SetColor
struct USkillLine2_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SkillLine2.SkillLine2_C.GetMaxSkillValueTextBlock
struct USkillLine2_C_GetMaxSkillValueTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SkillLine2.SkillLine2_C.GetSkillNameTextBlock
struct USkillLine2_C_GetSkillNameTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SkillLine2.SkillLine2_C.GetSkillNameText
struct USkillLine2_C_GetSkillNameText_Params
{
	struct FText                                       skillNameText;                                            // (Parm, OutParm)
};

// Function SkillLine2.SkillLine2_C.SetSkillName
struct USkillLine2_C_SetSkillName_Params
{
	struct FText                                       skillName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkillLine2.SkillLine2_C.GetTitleText
struct USkillLine2_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkillLine2.SkillLine2_C.OnMouseButtonDownOnMinimizeParameterLine
struct USkillLine2_C_OnMouseButtonDownOnMinimizeParameterLine_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkillLine2.SkillLine2_C.GetDefaultTitle
struct USkillLine2_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function SkillLine2.SkillLine2_C.SelectCustomColor
struct USkillLine2_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function SkillLine2.SkillLine2_C.OnMinimize
struct USkillLine2_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillLine2.SkillLine2_C.Construct
struct USkillLine2_C_Construct_Params
{
};

// Function SkillLine2.SkillLine2_C.OnSynchronizeProperties
struct USkillLine2_C_OnSynchronizeProperties_Params
{
};

// Function SkillLine2.SkillLine2_C.OnPercentageChanged
struct USkillLine2_C_OnPercentageChanged_Params
{
};

// Function SkillLine2.SkillLine2_C.ExecuteUbergraph_SkillLine2
struct USkillLine2_C_ExecuteUbergraph_SkillLine2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
