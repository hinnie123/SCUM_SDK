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

// Function UI_SquadTooltip.UI_SquadTooltip_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Infromation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FConZSquadEmblem        EmblemData                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_SquadTooltip_C::SetData(const struct FString& Name, const struct FString& Infromation, const struct FConZSquadEmblem& EmblemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadTooltip.UI_SquadTooltip_C.SetData");

	UUI_SquadTooltip_C_SetData_Params fn_params;
	fn_params.Name = Name;
	fn_params.Infromation = Infromation;
	fn_params.EmblemData = EmblemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
