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

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ApplyPenisAttributeModifiers
struct UUI_CharacterCreationPanel1_C_ApplyPenisAttributeModifiers_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetPenisSize
struct UUI_CharacterCreationPanel1_C_GetPenisSize_Params
{
	float                                              Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsProfileNameInUse
struct UUI_CharacterCreationPanel1_C_IsProfileNameInUse_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetDefaultName
struct UUI_CharacterCreationPanel1_C_SetDefaultName_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetInUseMsgVisibility
struct UUI_CharacterCreationPanel1_C_GetInUseMsgVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsNameValid
struct UUI_CharacterCreationPanel1_C_IsNameValid_Params
{
	struct FString                                     characterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Get_ButtonSwitchToCriminalRecord_bIsEnabled_1
struct UUI_CharacterCreationPanel1_C_Get_ButtonSwitchToCriminalRecord_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsByAttribute
struct UUI_CharacterCreationPanel1_C_RandomizeSkillsByAttribute_Params
{
	ESkillAttribute                                    Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.PlayPrisonerEnteringSequence
struct UUI_CharacterCreationPanel1_C_PlayPrisonerEnteringSequence_Params
{
	bool                                               backwards;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsPanel
struct UUI_CharacterCreationPanel1_C_RandomizeSkillsPanel_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeAttributesPanel
struct UUI_CharacterCreationPanel1_C_RandomizeAttributesPanel_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderDeselected
struct UUI_CharacterCreationPanel1_C_OnSkillSliderDeselected_Params
{
	class UUI_CC_SkillSlider_C*                        Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderSelected
struct UUI_CharacterCreationPanel1_C_OnSkillSliderSelected_Params
{
	class UUI_CC_SkillSlider_C*                        Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplates
struct UUI_CharacterCreationPanel1_C_GetSkillTemplates_Params
{
	TArray<struct FSkillTemplate>                      allSkills;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplatesByAttribute
struct UUI_CharacterCreationPanel1_C_GetSkillTemplatesByAttribute_Params
{
	ESkillAttribute                                    Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSkillTemplate>                      outSkills;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillValueChanged
struct UUI_CharacterCreationPanel1_C_OnSkillValueChanged_Params
{
	ESkillAttribute                                    Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_CC_SkillSlider_C*                        Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsForAttribute
struct UUI_CharacterCreationPanel1_C_UpdateSkillsForAttribute_Params
{
	ESkillAttribute                                    Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsPanel
struct UUI_CharacterCreationPanel1_C_UpdateSkillsPanel_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.InitSkills
struct UUI_CharacterCreationPanel1_C_InitSkills_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateTriangle
struct UUI_CharacterCreationPanel1_C_UpdateTriangle_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifyAttributeModifier
struct UUI_CharacterCreationPanel1_C_ModifyAttributeModifier_Params
{
	class UUI_CC_AttributeModifier_C*                  attributeModifier;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              modifier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifySetAttributesByAge
struct UUI_CharacterCreationPanel1_C_ModifySetAttributesByAge_Params
{
	struct FVector4                                    lastAgeModifiers;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetAgeBonusForAttribute
struct UUI_CharacterCreationPanel1_C_GetAgeBonusForAttribute_Params
{
	ESkillAttribute                                    Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              modifier;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateAvailablePoints
struct UUI_CharacterCreationPanel1_C_UpdateAvailablePoints_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.DecreaseAttributeModifier
struct UUI_CharacterCreationPanel1_C_DecreaseAttributeModifier_Params
{
	class UUI_CC_AttributeModifier_C*                  attributeModifier;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              adjustmentStep;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IncreaseAttributeModifier
struct UUI_CharacterCreationPanel1_C_IncreaseAttributeModifier_Params
{
	class UUI_CC_AttributeModifier_C*                  attributeModifier;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              adjustmentStep;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ApplyTemplateToPrisoners
struct UUI_CharacterCreationPanel1_C_ApplyTemplateToPrisoners_Params
{
	bool                                               applySkills;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCharacterTemplate                          CharacterTemplate;                                        // (Parm, OutParm)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetNumberTextWithSign
struct UUI_CharacterCreationPanel1_C_GetNumberTextWithSign_Params
{
	float                                              Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       numberWithSignText;                                       // (Parm, OutParm)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetAge
struct UUI_CharacterCreationPanel1_C_SetAge_Params
{
	int                                                Age;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnMouseButtonDown_1
struct UUI_CharacterCreationPanel1_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Construct
struct UUI_CharacterCreationPanel1_C_Construct_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_50_OnIndexChanged__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_50_OnIndexChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftoverPercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_LeanFatMuscleTriangle_K2Node_ComponentBoundEvent_5_AttributesChanged__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__UI_LeanFatMuscleTriangle_K2Node_ComponentBoundEvent_5_AttributesChanged__DelegateSignature_Params
{
	struct FVector4                                    Attributes;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__TattooSlider_K2Node_ComponentBoundEvent_152_OnIndexChanged__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__TattooSlider_K2Node_ComponentBoundEvent_152_OnIndexChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftoverPercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__HeadSlider_K2Node_ComponentBoundEvent_153_OnIndexChanged__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__HeadSlider_K2Node_ComponentBoundEvent_153_OnIndexChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftoverPercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_C_0_K2Node_ComponentBoundEvent_242_OnIndexChanged__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__UI_CC_ProgressBar_C_0_K2Node_ComponentBoundEvent_242_OnIndexChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftoverPercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_36_OnIncrease__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_36_OnIncrease__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_40_OnDecrease__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_40_OnDecrease__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_47_OnIncrease__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_47_OnIncrease__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_59_OnDecrease__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_59_OnDecrease__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_68_OnIncrease__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_68_OnIncrease__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_81_OnDecrease__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_81_OnDecrease__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_92_OnIncrease__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_92_OnIncrease__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_107_OnDecrease__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_107_OnDecrease__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Tick
struct UUI_CharacterCreationPanel1_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_1_K2Node_ComponentBoundEvent_170_OnClicked__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__UI_MenuButton_1_K2Node_ComponentBoundEvent_170_OnClicked__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_173_OnClicked__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_173_OnClicked__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonSwitchToCriminalRecord_K2Node_ComponentBoundEvent_209_OnClicked__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__ButtonSwitchToCriminalRecord_K2Node_ComponentBoundEvent_209_OnClicked__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1387_OnClicked__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1387_OnClicked__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeAttributes_K2Node_ComponentBoundEvent_132_OnClicked__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__ButtonRandomizeAttributes_K2Node_ComponentBoundEvent_132_OnClicked__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeSkills_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__ButtonRandomizeSkills_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_489_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_489_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_495_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__NameText_K2Node_ComponentBoundEvent_495_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_52_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__NameText_K2Node_ComponentBoundEvent_52_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_108_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_108_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ShowErrorDialog
struct UUI_CharacterCreationPanel1_C_ShowErrorDialog_Params
{
	struct FText*                                      Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnUserProfileCreated
struct UUI_CharacterCreationPanel1_C_OnUserProfileCreated_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BeginWaitingOnServerResponse
struct UUI_CharacterCreationPanel1_C_BeginWaitingOnServerResponse_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.EndWaitingOnServerResponse
struct UUI_CharacterCreationPanel1_C_EndWaitingOnServerResponse_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Keep Server Connection Alive
struct UUI_CharacterCreationPanel1_C_Keep_Server_Connection_Alive_Params
{
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__PenisSizeSlider_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__PenisSizeSlider_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftoverPercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ConcealedModeSlider_K2Node_ComponentBoundEvent_1_OnIndexChanged__DelegateSignature
struct UUI_CharacterCreationPanel1_C_BndEvt__ConcealedModeSlider_K2Node_ComponentBoundEvent_1_OnIndexChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftoverPercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ExecuteUbergraph_UI_CharacterCreationPanel1
struct UUI_CharacterCreationPanel1_C_ExecuteUbergraph_UI_CharacterCreationPanel1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
