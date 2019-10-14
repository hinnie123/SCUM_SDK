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

// Function UI_TeammateName.UI_TeammateName_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UUI_TeammateName_C::GetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeammateName.UI_TeammateName_C.GetName");

	UUI_TeammateName_C_GetName_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = fn_params.Name;
}


// Function UI_TeammateName.UI_TeammateName_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_TeammateName_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeammateName.UI_TeammateName_C.SetName");

	UUI_TeammateName_C_SetName_Params fn_params;
	fn_params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
