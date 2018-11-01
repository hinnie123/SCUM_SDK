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

// Function UI_CriminalRecordSkill.UI_CriminalRecordSkill_C.InitFromSkillTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillTemplate          SkillTemplate                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CriminalRecordSkill_C::InitFromSkillTemplate(const struct FSkillTemplate& SkillTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordSkill.UI_CriminalRecordSkill_C.InitFromSkillTemplate");

	UUI_CriminalRecordSkill_C_InitFromSkillTemplate_Params params;
	params.SkillTemplate = SkillTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
