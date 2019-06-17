// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::SetPercentage(float percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetPercentage");

	UUI_CC_SkillSlider_C_SetPercentage_Params params;
	params.percentage = percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperienceFromPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::SetMaxLevelAndExperienceFromPoints(float Points, bool isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperienceFromPoints");

	UUI_CC_SkillSlider_C_SetMaxLevelAndExperienceFromPoints_Params params;
	params.Points = Points;
	params.isSelected = isSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperience
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillLevel                    Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          experiencePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::SetMaxLevelAndExperience(ESkillLevel Level, float experiencePercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperience");

	UUI_CC_SkillSlider_C_SetMaxLevelAndExperience_Params params;
	params.Level = Level;
	params.experiencePercentage = experiencePercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetSkillLevelAndExperience
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillLevel                    Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Experience                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::SetSkillLevelAndExperience(ESkillLevel Level, float Experience)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetSkillLevelAndExperience");

	UUI_CC_SkillSlider_C_SetSkillLevelAndExperience_Params params;
	params.Level = Level;
	params.Experience = Experience;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_CC_SkillSlider_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.OnSynchronizeProperties");

	UUI_CC_SkillSlider_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature(int Index, float LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature");

	UUI_CC_SkillSlider_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CC_SkillSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.Construct");

	UUI_CC_SkillSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature
// (BlueprintEvent)

void UUI_CC_SkillSlider_C::BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature");

	UUI_CC_SkillSlider_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature
// (BlueprintEvent)

void UUI_CC_SkillSlider_C::BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature");

	UUI_CC_SkillSlider_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.ExecuteUbergraph_UI_CC_SkillSlider
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::ExecuteUbergraph_UI_CC_SkillSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.ExecuteUbergraph_UI_CC_SkillSlider");

	UUI_CC_SkillSlider_C_ExecuteUbergraph_UI_CC_SkillSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderDeselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CC_SkillSlider_C*    Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CC_SkillSlider_C::SliderDeselected__DelegateSignature(class UUI_CC_SkillSlider_C* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderDeselected__DelegateSignature");

	UUI_CC_SkillSlider_C_SliderDeselected__DelegateSignature_Params params;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CC_SkillSlider_C*    Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CC_SkillSlider_C::SliderSelected__DelegateSignature(class UUI_CC_SkillSlider_C* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderSelected__DelegateSignature");

	UUI_CC_SkillSlider_C_SliderSelected__DelegateSignature_Params params;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillAttribute                Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_CC_SkillSlider_C*    Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CC_SkillSlider_C::SliderChanged__DelegateSignature(ESkillAttribute Attribute, class UUI_CC_SkillSlider_C* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderChanged__DelegateSignature");

	UUI_CC_SkillSlider_C_SliderChanged__DelegateSignature_Params params;
	params.Attribute = Attribute;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
