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

// Function LevelUpNotification.LevelUpNotification_C.DisplaySkillLevelUpNotification
struct ULevelUpNotification_C_DisplaySkillLevelUpNotification_Params
{
	class USkill*                                      Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        skillLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelUpNotification.LevelUpNotification_C.Tick
struct ULevelUpNotification_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelUpNotification.LevelUpNotification_C.ExecuteUbergraph_LevelUpNotification
struct ULevelUpNotification_C_ExecuteUbergraph_LevelUpNotification_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
