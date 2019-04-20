// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillLine2.SkillLine2_C.UpdateSkill2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillLevel                    skillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          skillPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 skillCaption                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   maxValueText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillLine2_C::UpdateSkill2(ESkillLevel skillLevel, float skillPoints, const struct FString& skillCaption, const struct FText& maxValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.UpdateSkill2");

	USkillLine2_C_UpdateSkill2_Params params;
	params.skillLevel = skillLevel;
	params.skillPoints = skillPoints;
	params.skillCaption = skillCaption;
	params.maxValueText = maxValueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.SetMaxSkillValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   maxValueText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillLine2_C::SetMaxSkillValueText(const struct FText& maxValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetMaxSkillValueText");

	USkillLine2_C_SetMaxSkillValueText_Params params;
	params.maxValueText = maxValueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.SkilLevelToMaxSkillValueText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESkillLevel                    Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   MaxValue                       (Parm, OutParm)

void USkillLine2_C::SkilLevelToMaxSkillValueText(ESkillLevel Selection, struct FText* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SkilLevelToMaxSkillValueText");

	USkillLine2_C_SkilLevelToMaxSkillValueText_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function SkillLine2.SkillLine2_C.SetSkillValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ValueText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillLine2_C::SetSkillValueText(const struct FText& ValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetSkillValueText");

	USkillLine2_C_SetSkillValueText_Params params;
	params.ValueText = ValueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.UpdateSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillLevel                    skillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          skillPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 skillCaption                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USkillLine2_C::UpdateSkill(ESkillLevel skillLevel, float skillPoints, const struct FString& skillCaption)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.UpdateSkill");

	USkillLine2_C_UpdateSkill_Params params;
	params.skillLevel = skillLevel;
	params.skillPoints = skillPoints;
	params.skillCaption = skillCaption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.SetAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void USkillLine2_C::SetAlarmColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetAlarmColor");

	USkillLine2_C_SetAlarmColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.GetValueTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkillLine2_C::GetValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetValueTextBlock");

	USkillLine2_C_GetValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function SkillLine2.SkillLine2_C.SetColorOfMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillLine2_C::SetColorOfMaxValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetColorOfMaxValue");

	USkillLine2_C_SetColorOfMaxValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.SetColorOfValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillLine2_C::SetColorOfValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetColorOfValue");

	USkillLine2_C_SetColorOfValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.SetColorOfParameterName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillLine2_C::SetColorOfParameterName(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetColorOfParameterName");

	USkillLine2_C_SetColorOfParameterName_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void USkillLine2_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetColor");

	USkillLine2_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.GetMaxSkillValueTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkillLine2_C::GetMaxSkillValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetMaxSkillValueTextBlock");

	USkillLine2_C_GetMaxSkillValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function SkillLine2.SkillLine2_C.GetSkillNameTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkillLine2_C::GetSkillNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetSkillNameTextBlock");

	USkillLine2_C_GetSkillNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function SkillLine2.SkillLine2_C.GetSkillNameText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   skillNameText                  (Parm, OutParm)

void USkillLine2_C::GetSkillNameText(struct FText* skillNameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetSkillNameText");

	USkillLine2_C_GetSkillNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (skillNameText != nullptr)
		*skillNameText = params.skillNameText;
}


// Function SkillLine2.SkillLine2_C.SetSkillName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   skillName                      (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillLine2_C::SetSkillName(const struct FText& skillName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetSkillName");

	USkillLine2_C_SetSkillName_Params params;
	params.skillName = skillName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USkillLine2_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetTitleText");

	USkillLine2_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillLine2.SkillLine2_C.OnMouseButtonDownOnMinimizeParameterLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USkillLine2_C::OnMouseButtonDownOnMinimizeParameterLine(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.OnMouseButtonDownOnMinimizeParameterLine");

	USkillLine2_C_OnMouseButtonDownOnMinimizeParameterLine_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillLine2.SkillLine2_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void USkillLine2_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetDefaultTitle");

	USkillLine2_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function SkillLine2.SkillLine2_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void USkillLine2_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SelectCustomColor");

	USkillLine2_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function SkillLine2.SkillLine2_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillLine2_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.OnMinimize");

	USkillLine2_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillLine2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.Construct");

	USkillLine2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void USkillLine2_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.OnSynchronizeProperties");

	USkillLine2_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.OnPercentageChanged
// (Protected, BlueprintCallable, BlueprintEvent)

void USkillLine2_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.OnPercentageChanged");

	USkillLine2_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillLine2.SkillLine2_C.ExecuteUbergraph_SkillLine2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillLine2_C::ExecuteUbergraph_SkillLine2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.ExecuteUbergraph_SkillLine2");

	USkillLine2_C_ExecuteUbergraph_SkillLine2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
