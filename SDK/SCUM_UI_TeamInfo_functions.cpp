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

// Function UI_TeamInfo.UI_TeamInfo_C.ClearTeammateNames
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TeamInfo_C::ClearTeammateNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.ClearTeammateNames");

	UUI_TeamInfo_C_ClearTeammateNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamInfo.UI_TeamInfo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_TeamInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.GetVisibility_1");

	UUI_TeamInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamInfo.UI_TeamInfo_C.RemoveTeammateName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_TeamInfo_C::RemoveTeammateName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.RemoveTeammateName");

	UUI_TeamInfo_C_RemoveTeammateName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamInfo.UI_TeamInfo_C.AddTeammateName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_TeamInfo_C::AddTeammateName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.AddTeammateName");

	UUI_TeamInfo_C_AddTeammateName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamInfo.UI_TeamInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TeamInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.Construct");

	UUI_TeamInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamInfo.UI_TeamInfo_C.ExecuteUbergraph_UI_TeamInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamInfo_C::ExecuteUbergraph_UI_TeamInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.ExecuteUbergraph_UI_TeamInfo");

	UUI_TeamInfo_C_ExecuteUbergraph_UI_TeamInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
