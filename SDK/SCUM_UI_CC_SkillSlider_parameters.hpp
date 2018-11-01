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

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetPercentage
struct UUI_CC_SkillSlider_C_SetPercentage_Params
{
	float                                              percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperienceFromPoints
struct UUI_CC_SkillSlider_C_SetMaxLevelAndExperienceFromPoints_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperience
struct UUI_CC_SkillSlider_C_SetMaxLevelAndExperience_Params
{
	ESkillLevel                                        Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              experiencePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetSkillLevelAndExperience
struct UUI_CC_SkillSlider_C_SetSkillLevelAndExperience_Params
{
	ESkillLevel                                        Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Experience;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.OnSynchronizeProperties
struct UUI_CC_SkillSlider_C_OnSynchronizeProperties_Params
{
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature
struct UUI_CC_SkillSlider_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftoverPercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.Construct
struct UUI_CC_SkillSlider_C_Construct_Params
{
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature
struct UUI_CC_SkillSlider_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature_Params
{
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature
struct UUI_CC_SkillSlider_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature_Params
{
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.ExecuteUbergraph_UI_CC_SkillSlider
struct UUI_CC_SkillSlider_C_ExecuteUbergraph_UI_CC_SkillSlider_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderDeselected__DelegateSignature
struct UUI_CC_SkillSlider_C_SliderDeselected__DelegateSignature_Params
{
	class UUI_CC_SkillSlider_C*                        Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderSelected__DelegateSignature
struct UUI_CC_SkillSlider_C_SliderSelected__DelegateSignature_Params
{
	class UUI_CC_SkillSlider_C*                        Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderChanged__DelegateSignature
struct UUI_CC_SkillSlider_C_SliderChanged__DelegateSignature_Params
{
	ESkillAttribute                                    Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_CC_SkillSlider_C*                        Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
