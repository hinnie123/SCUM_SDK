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

// Function OptionsWidget.OptionsWidget_C.AnyValueChanged
struct UOptionsWidget_C_AnyValueChanged_Params
{
	bool                                               ChangeToCustom;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.IsApplyButtonEnabled
struct UOptionsWidget_C_IsApplyButtonEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.OnMouseButtonDoubleClick
struct UOptionsWidget_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsWidget.OptionsWidget_C.OnMouseButtonDown
struct UOptionsWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsWidget.OptionsWidget_C.OnMouseWheel
struct UOptionsWidget_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsWidget.OptionsWidget_C.OnPreviewKeyDown
struct UOptionsWidget_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsWidget.OptionsWidget_C.OnPreviewMouseButtonDown
struct UOptionsWidget_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsWidget.OptionsWidget_C.SetDynamicShadowsQuality
struct UOptionsWidget_C_SetDynamicShadowsQuality_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.UpdateSupportedResolutions
struct UOptionsWidget_C_UpdateSupportedResolutions_Params
{
	bool                                               fullscreen;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.ToggleCategory
struct UOptionsWidget_C_ToggleCategory_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_MenuButton_C*                            Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.SnapSlider
struct UOptionsWidget_C_SnapSlider_Params
{
	class USlider*                                     Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Steps;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.Construct
struct UOptionsWidget_C_Construct_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature
struct UOptionsWidget_C_BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature
struct UOptionsWidget_C_BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature
struct UOptionsWidget_C_BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature
struct UOptionsWidget_C_BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature
struct UOptionsWidget_C_BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature
struct UOptionsWidget_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.OnKeyRebound
struct UOptionsWidget_C_OnKeyRebound_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        actionKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.OnKeyRebindInitiated
struct UOptionsWidget_C_OnKeyRebindInitiated_Params
{
	class UUI_KeyBinding_C*                            keyBindingWidget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.OnAxisRebound
struct UOptionsWidget_C_OnAxisRebound_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        actionKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsWidget.OptionsWidget_C.OnApplyYes
struct UOptionsWidget_C_OnApplyYes_Params
{
};

// Function OptionsWidget.OptionsWidget_C.OnApplyNo
struct UOptionsWidget_C_OnApplyNo_Params
{
};

// Function OptionsWidget.OptionsWidget_C.OnCancelYes
struct UOptionsWidget_C_OnCancelYes_Params
{
};

// Function OptionsWidget.OptionsWidget_C.OnCancelNo
struct UOptionsWidget_C_OnCancelNo_Params
{
};

// Function OptionsWidget.OptionsWidget_C.OnESC
struct UOptionsWidget_C_OnESC_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature
struct UOptionsWidget_C_BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.OnResetControlsNo
struct UOptionsWidget_C_OnResetControlsNo_Params
{
};

// Function OptionsWidget.OptionsWidget_C.OnResetControlsYes
struct UOptionsWidget_C_OnResetControlsYes_Params
{
};

// Function OptionsWidget.OptionsWidget_C.InitKeyBindings
struct UOptionsWidget_C_InitKeyBindings_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature
struct UOptionsWidget_C_BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature
struct UOptionsWidget_C_BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature
struct UOptionsWidget_C_BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature
struct UOptionsWidget_C_BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature_Params
{
};

// Function OptionsWidget.OptionsWidget_C.RefreshAllOptionSliders
struct UOptionsWidget_C_RefreshAllOptionSliders_Params
{
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
struct UOptionsWidget_C_BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsWidget.OptionsWidget_C.ExecuteUbergraph_OptionsWidget
struct UOptionsWidget_C_ExecuteUbergraph_OptionsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
