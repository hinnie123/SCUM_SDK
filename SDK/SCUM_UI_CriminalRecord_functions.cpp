// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterTemplate      Template                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CriminalRecord_C::InitFromCharacterTemplate(const struct FCharacterTemplate& Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate");

	UUI_CriminalRecord_C_InitFromCharacterTemplate_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CriminalRecord_C::ClearSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills");

	UUI_CriminalRecord_C_ClearSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillAttribute                Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CriminalRecord_C::ChangeAttribute(ESkillAttribute Attribute, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute");

	UUI_CriminalRecord_C_ChangeAttribute_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillTemplate          SkillTemplate                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CriminalRecord_C::AddSkill(const struct FSkillTemplate& SkillTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill");

	UUI_CriminalRecord_C_AddSkill_Params params;
	params.SkillTemplate = SkillTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CriminalRecord_C::BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UUI_CriminalRecord_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CriminalRecord_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");

	UUI_CriminalRecord_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CriminalRecord_C::ExecuteUbergraph_UI_CriminalRecord(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord");

	UUI_CriminalRecord_C_ExecuteUbergraph_UI_CriminalRecord_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CriminalRecord_C::OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature");

	UUI_CriminalRecord_C_OnCancelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CriminalRecord_C::OnOkClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature");

	UUI_CriminalRecord_C_OnOkClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
