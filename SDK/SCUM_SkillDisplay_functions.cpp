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

// Function SkillDisplay.SkillDisplay_C.SetSkillIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkill*                  Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillDisplay_C::SetSkillIcon(class USkill* Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDisplay.SkillDisplay_C.SetSkillIcon");

	USkillDisplay_C_SetSkillIcon_Params fn_params;
	fn_params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
