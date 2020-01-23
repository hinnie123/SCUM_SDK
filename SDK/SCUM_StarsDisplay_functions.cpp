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

// Function StarsDisplay.StarsDisplay_C.ShowSkillLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillLevel                    skillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStarsDisplay_C::ShowSkillLevel(ESkillLevel skillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function StarsDisplay.StarsDisplay_C.ShowSkillLevel");

	UStarsDisplay_C_ShowSkillLevel_Params fn_params;
	fn_params.skillLevel = skillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
