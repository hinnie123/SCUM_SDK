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

// Function UI_Skills.UI_Skills_C.ShouldSkillBeVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkill*                  Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::ShouldSkillBeVisible(class USkill* Skill, bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.ShouldSkillBeVisible");

	UUI_Skills_C_ShouldSkillBeVisible_Params fn_params;
	fn_params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (visible != nullptr)
		*visible = fn_params.visible;
}


// Function UI_Skills.UI_Skills_C.UpdateAttributeChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Skills_C::UpdateAttributeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.UpdateAttributeChange");

	UUI_Skills_C_UpdateAttributeChange_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.InitTimePeriodsBarForHorizontalBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBox*          HorizontalBox                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Skills_C::InitTimePeriodsBarForHorizontalBox(class UHorizontalBox* HorizontalBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.InitTimePeriodsBarForHorizontalBox");

	UUI_Skills_C_InitTimePeriodsBarForHorizontalBox_Params fn_params;
	fn_params.HorizontalBox = HorizontalBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.RefreshGraph
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Skills_C::RefreshGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.RefreshGraph");

	UUI_Skills_C_RefreshGraph_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Skills_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Maximize");

	UUI_Skills_C_Maximize_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Skills_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Minimize");

	UUI_Skills_C_Minimize_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.UpdateSkills
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Skills_C::UpdateSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.UpdateSkills");

	UUI_Skills_C_UpdateSkills_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.SetPrisoner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.SetPrisoner");

	UUI_Skills_C_SetPrisoner_Params fn_params;
	fn_params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.UpdateAttributeValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Skills_C::UpdateAttributeValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.UpdateAttributeValues");

	UUI_Skills_C_UpdateAttributeValues_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Skills_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Update");

	UUI_Skills_C_Update_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Tick");

	UUI_Skills_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature
// (BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature
// (BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature
// (BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Skills_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Construct");

	UUI_Skills_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature
// (BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Skills_C::BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	UUI_Skills_C_BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature
// (BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature
// (BlueprintEvent)

void UUI_Skills_C::BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.DisplayAttribute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillAttribute                Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::DisplayAttribute(ESkillAttribute Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.DisplayAttribute");

	UUI_Skills_C_DisplayAttribute_Params fn_params;
	fn_params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.ExecuteUbergraph_UI_Skills
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::ExecuteUbergraph_UI_Skills(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.ExecuteUbergraph_UI_Skills");

	UUI_Skills_C_ExecuteUbergraph_UI_Skills_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
