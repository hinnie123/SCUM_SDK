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

// Function UI_SkillParameterLine.UI_SkillParameterLine_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SkillParameterLine_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillParameterLine.UI_SkillParameterLine_C.Update");

	UUI_SkillParameterLine_C_Update_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
