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

// Function SkillsContent.SkillsContent_C.FilterSkillsBySkillType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkill*>          allSkills                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class USkill*>          skillsOfType                   (Parm, OutParm, ZeroConstructor)

void USkillsContent_C::FilterSkillsBySkillType(TArray<class USkill*>* allSkills, TArray<class USkill*>* skillsOfType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.FilterSkillsBySkillType");

	USkillsContent_C_FilterSkillsBySkillType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (allSkills != nullptr)
		*allSkills = params.allSkills;
	if (skillsOfType != nullptr)
		*skillsOfType = params.skillsOfType;
}


// Function SkillsContent.SkillsContent_C.SkillToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkill*                  skillRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   skillNameText                  (Parm, OutParm)
// struct FText                   skillPointsText                (Parm, OutParm)
// struct FText                   maxValueText                   (Parm, OutParm)
// float                          percentage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          skillLevelPercentage           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::SkillToText(class USkill* skillRef, struct FText* skillNameText, struct FText* skillPointsText, struct FText* maxValueText, float* percentage, float* skillLevelPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SkillToText");

	USkillsContent_C_SkillToText_Params params;
	params.skillRef = skillRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (skillNameText != nullptr)
		*skillNameText = params.skillNameText;
	if (skillPointsText != nullptr)
		*skillPointsText = params.skillPointsText;
	if (maxValueText != nullptr)
		*maxValueText = params.maxValueText;
	if (percentage != nullptr)
		*percentage = params.percentage;
	if (skillLevelPercentage != nullptr)
		*skillLevelPercentage = params.skillLevelPercentage;
}


// Function SkillsContent.SkillsContent_C.IsSkillTypeMatching
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkill*                  Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           matchingSkill                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::IsSkillTypeMatching(class USkill* Skill, bool* matchingSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.IsSkillTypeMatching");

	USkillsContent_C_IsSkillTypeMatching_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (matchingSkill != nullptr)
		*matchingSkill = params.matchingSkill;
}


// Function SkillsContent.SkillsContent_C.CountSkills
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkill*>          skillArray                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            skillCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::CountSkills(TArray<class USkill*>* skillArray, int* skillCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.CountSkills");

	USkillsContent_C_CountSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (skillArray != nullptr)
		*skillArray = params.skillArray;
	if (skillCount != nullptr)
		*skillCount = params.skillCount;
}


// Function SkillsContent.SkillsContent_C.ClearSkillLinesContent
// (Public, BlueprintCallable, BlueprintEvent)

void USkillsContent_C::ClearSkillLinesContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.ClearSkillLinesContent");

	USkillsContent_C_ClearSkillLinesContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.UpdateSkillsCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkill*>          skillArray                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USkillsContent_C::UpdateSkillsCount(TArray<class USkill*>* skillArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.UpdateSkillsCount");

	USkillsContent_C_UpdateSkillsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (skillArray != nullptr)
		*skillArray = params.skillArray;
}


// Function SkillsContent.SkillsContent_C.HasSkillCountChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkill*>          skillArray                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USkillsContent_C::HasSkillCountChanged(TArray<class USkill*>* skillArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.HasSkillCountChanged");

	USkillsContent_C_HasSkillCountChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (skillArray != nullptr)
		*skillArray = params.skillArray;

	return params.ReturnValue;
}


// Function SkillsContent.SkillsContent_C.SkillToSkillText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 skillName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          ExperiencePoints               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESkillLevel                    skillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   skillNameText                  (Parm, OutParm)
// struct FText                   skillPointsText                (Parm, OutParm)
// struct FText                   maxValueText                   (Parm, OutParm)
// float                          percentage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          skillLevelPercentage           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::SkillToSkillText(const struct FString& skillName, float ExperiencePoints, ESkillLevel skillLevel, struct FText* skillNameText, struct FText* skillPointsText, struct FText* maxValueText, float* percentage, float* skillLevelPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SkillToSkillText");

	USkillsContent_C_SkillToSkillText_Params params;
	params.skillName = skillName;
	params.ExperiencePoints = ExperiencePoints;
	params.skillLevel = skillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (skillNameText != nullptr)
		*skillNameText = params.skillNameText;
	if (skillPointsText != nullptr)
		*skillPointsText = params.skillPointsText;
	if (maxValueText != nullptr)
		*maxValueText = params.maxValueText;
	if (percentage != nullptr)
		*percentage = params.percentage;
	if (skillLevelPercentage != nullptr)
		*skillLevelPercentage = params.skillLevelPercentage;
}


// Function SkillsContent.SkillsContent_C.GetSkillsCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::GetSkillsCount(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetSkillsCount");

	USkillsContent_C_GetSkillsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (count != nullptr)
		*count = params.count;
}


// Function SkillsContent.SkillsContent_C.GetAllSkills
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USkill*>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USkill*> USkillsContent_C::GetAllSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetAllSkills");

	USkillsContent_C_GetAllSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillsContent.SkillsContent_C.FillSkillLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkillLine2_C*           skillLine2Ref                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkill*                  Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::FillSkillLine(class USkillLine2_C* skillLine2Ref, class USkill* Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.FillSkillLine");

	USkillsContent_C_FillSkillLine_Params params;
	params.skillLine2Ref = skillLine2Ref;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.CreateSkillLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   skillName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   skillValueText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   maxSkillValueText              (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          skillLevelPercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkillLine2_C*           skillLineRef                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkillsContent_C::CreateSkillLine(const struct FText& skillName, const struct FText& skillValueText, const struct FText& maxSkillValueText, float percentage, float skillLevelPercentage, class USkillLine2_C** skillLineRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.CreateSkillLine");

	USkillsContent_C_CreateSkillLine_Params params;
	params.skillName = skillName;
	params.skillValueText = skillValueText;
	params.maxSkillValueText = maxSkillValueText;
	params.percentage = percentage;
	params.skillLevelPercentage = skillLevelPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (skillLineRef != nullptr)
		*skillLineRef = params.skillLineRef;
}


// Function SkillsContent.SkillsContent_C.AddSkillLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkillLine2_C*           skillLineRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkillsContent_C::AddSkillLine(class USkillLine2_C* skillLineRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.AddSkillLine");

	USkillsContent_C_AddSkillLine_Params params;
	params.skillLineRef = skillLineRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.SetSkillsCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::SetSkillsCount(int count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SetSkillsCount");

	USkillsContent_C_SetSkillsCount_Params params;
	params.count = count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.InitSkillsContentCountAndType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillAttribute                skillType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::InitSkillsContentCountAndType(ESkillAttribute skillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.InitSkillsContentCountAndType");

	USkillsContent_C_InitSkillsContentCountAndType_Params params;
	params.skillType = skillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.GetSkillType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESkillAttribute                skillType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::GetSkillType(ESkillAttribute* skillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetSkillType");

	USkillsContent_C_GetSkillType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (skillType != nullptr)
		*skillType = params.skillType;
}


// Function SkillsContent.SkillsContent_C.SetSkillType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillAttribute                skillType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::SetSkillType(ESkillAttribute skillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SetSkillType");

	USkillsContent_C_SetSkillType_Params params;
	params.skillType = skillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.UpdateSkills
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillsContent_C::UpdateSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.UpdateSkills");

	USkillsContent_C_UpdateSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USkillsContent_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetTitleText");

	USkillsContent_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillsContent.SkillsContent_C.SetSkillsContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::SetSkillsContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SetSkillsContentVisibility");

	USkillsContent_C_SetSkillsContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void USkillsContent_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetDefaultTitle");

	USkillsContent_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function SkillsContent.SkillsContent_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void USkillsContent_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SelectCustomColor");

	USkillsContent_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function SkillsContent.SkillsContent_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.OnMinimize");

	USkillsContent_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillsContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.Construct");

	USkillsContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.Tick");

	USkillsContent_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.UpdateContent
// (BlueprintCallable, BlueprintEvent)

void USkillsContent_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.UpdateContent");

	USkillsContent_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void USkillsContent_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.OnPrisonerSet");

	USkillsContent_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillsContent.SkillsContent_C.ExecuteUbergraph_SkillsContent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillsContent_C::ExecuteUbergraph_SkillsContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.ExecuteUbergraph_SkillsContent");

	USkillsContent_C_ExecuteUbergraph_SkillsContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
