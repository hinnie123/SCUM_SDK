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

// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventTeamHeaderWidget_C::SetTeamIndex(int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex");

	UUI_GameEventTeamHeaderWidget_C_SetTeamIndex_Params params;
	params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventTeamHeaderWidget_C::SetTeamScore(float Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore");

	UUI_GameEventTeamHeaderWidget_C_SetTeamScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetRightSide
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventTeamHeaderWidget_C::SetRightSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetRightSide");

	UUI_GameEventTeamHeaderWidget_C_SetRightSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetLeftSide
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventTeamHeaderWidget_C::SetLeftSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetLeftSide");

	UUI_GameEventTeamHeaderWidget_C_SetLeftSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameEventTeamColours   colours                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GameEventTeamHeaderWidget_C::SetTeamColours(const struct FGameEventTeamColours& colours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours");

	UUI_GameEventTeamHeaderWidget_C_SetTeamColours_Params params;
	params.colours = colours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GameEventTeamHeaderWidget_C::SetTeamName(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName");

	UUI_GameEventTeamHeaderWidget_C_SetTeamName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
