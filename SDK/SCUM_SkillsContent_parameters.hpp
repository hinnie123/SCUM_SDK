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

// Function SkillsContent.SkillsContent_C.FilterSkillsBySkillType
struct USkillsContent_C_FilterSkillsBySkillType_Params
{
	TArray<class USkill*>                              allSkills;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class USkill*>                              skillsOfType;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function SkillsContent.SkillsContent_C.SkillToText
struct USkillsContent_C_SkillToText_Params
{
	class USkill*                                      skillRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       skillNameText;                                            // (Parm, OutParm)
	struct FText                                       skillPointsText;                                          // (Parm, OutParm)
	struct FText                                       maxValueText;                                             // (Parm, OutParm)
	float                                              percentage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              skillLevelPercentage;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.IsSkillTypeMatching
struct USkillsContent_C_IsSkillTypeMatching_Params
{
	class USkill*                                      Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               matchingSkill;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.CountSkills
struct USkillsContent_C_CountSkills_Params
{
	TArray<class USkill*>                              skillArray;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                skillCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.ClearSkillLinesContent
struct USkillsContent_C_ClearSkillLinesContent_Params
{
};

// Function SkillsContent.SkillsContent_C.UpdateSkillsCount
struct USkillsContent_C_UpdateSkillsCount_Params
{
	TArray<class USkill*>                              skillArray;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SkillsContent.SkillsContent_C.HasSkillCountChanged
struct USkillsContent_C_HasSkillCountChanged_Params
{
	TArray<class USkill*>                              skillArray;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.SkillToSkillText
struct USkillsContent_C_SkillToSkillText_Params
{
	struct FString                                     skillName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              ExperiencePoints;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        skillLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       skillNameText;                                            // (Parm, OutParm)
	struct FText                                       skillPointsText;                                          // (Parm, OutParm)
	struct FText                                       maxValueText;                                             // (Parm, OutParm)
	float                                              percentage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              skillLevelPercentage;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.GetSkillsCount
struct USkillsContent_C_GetSkillsCount_Params
{
	int                                                count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.GetAllSkills
struct USkillsContent_C_GetAllSkills_Params
{
	TArray<class USkill*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SkillsContent.SkillsContent_C.FillSkillLine
struct USkillsContent_C_FillSkillLine_Params
{
	class USkillLine2_C*                               skillLine2Ref;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkill*                                      Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.CreateSkillLine
struct USkillsContent_C_CreateSkillLine_Params
{
	struct FText                                       skillName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       skillValueText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       maxSkillValueText;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              skillLevelPercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkillLine2_C*                               skillLineRef;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.AddSkillLine
struct USkillsContent_C_AddSkillLine_Params
{
	class USkillLine2_C*                               skillLineRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.SetSkillsCount
struct USkillsContent_C_SetSkillsCount_Params
{
	int                                                count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.InitSkillsContentCountAndType
struct USkillsContent_C_InitSkillsContentCountAndType_Params
{
	ESkillAttribute                                    skillType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.GetSkillType
struct USkillsContent_C_GetSkillType_Params
{
	ESkillAttribute                                    skillType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.SetSkillType
struct USkillsContent_C_SetSkillType_Params
{
	ESkillAttribute                                    skillType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.UpdateSkills
struct USkillsContent_C_UpdateSkills_Params
{
};

// Function SkillsContent.SkillsContent_C.GetTitleText
struct USkillsContent_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkillsContent.SkillsContent_C.SetSkillsContentVisibility
struct USkillsContent_C_SetSkillsContentVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.GetDefaultTitle
struct USkillsContent_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function SkillsContent.SkillsContent_C.SelectCustomColor
struct USkillsContent_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.OnMinimize
struct USkillsContent_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.Construct
struct USkillsContent_C_Construct_Params
{
};

// Function SkillsContent.SkillsContent_C.Tick
struct USkillsContent_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillsContent.SkillsContent_C.UpdateContent
struct USkillsContent_C_UpdateContent_Params
{
};

// Function SkillsContent.SkillsContent_C.OnPrisonerSet
struct USkillsContent_C_OnPrisonerSet_Params
{
};

// Function SkillsContent.SkillsContent_C.ExecuteUbergraph_SkillsContent
struct USkillsContent_C_ExecuteUbergraph_SkillsContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
