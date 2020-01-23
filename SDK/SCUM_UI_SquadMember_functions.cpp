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

// Function UI_SquadMember.UI_SquadMember_C.UpdateOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SquadMember_C::UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.UpdateOptions");

	UUI_SquadMember_C_UpdateOptions_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDbIntegerId            UserProfileId                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EConZSquadMemberRank           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FamePoints                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           online                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadMember_C::SetInfo(const struct FDbIntegerId& UserProfileId, const struct FString& Name, EConZSquadMemberRank Rank, float FamePoints, bool online)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.SetInfo");

	UUI_SquadMember_C_SetInfo_Params fn_params;
	fn_params.UserProfileId = UserProfileId;
	fn_params.Name = Name;
	fn_params.Rank = Rank;
	fn_params.FamePoints = FamePoints;
	fn_params.online = online;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.PromoteConfirmed
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadMember_C::PromoteConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.PromoteConfirmed");

	UUI_SquadMember_C_PromoteConfirmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.PromoteCanceled
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadMember_C::PromoteCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.PromoteCanceled");

	UUI_SquadMember_C_PromoteCanceled_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.DemoteConfirmed
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadMember_C::DemoteConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.DemoteConfirmed");

	UUI_SquadMember_C_DemoteConfirmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.DemoteCanceled
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadMember_C::DemoteCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.DemoteCanceled");

	UUI_SquadMember_C_DemoteCanceled_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.KickConfirmed
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadMember_C::KickConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.KickConfirmed");

	UUI_SquadMember_C_KickConfirmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.KickCanceled
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadMember_C::KickCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.KickCanceled");

	UUI_SquadMember_C_KickCanceled_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.MakeLeaderConfirmed
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadMember_C::MakeLeaderConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.MakeLeaderConfirmed");

	UUI_SquadMember_C_MakeLeaderConfirmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.MakeLeaderCanceled
// (BlueprintCallable, BlueprintEvent)

void UUI_SquadMember_C::MakeLeaderCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.MakeLeaderCanceled");

	UUI_SquadMember_C_MakeLeaderCanceled_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadMember_C::BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UUI_SquadMember_C_BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadMember.UI_SquadMember_C.ExecuteUbergraph_UI_SquadMember
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadMember_C::ExecuteUbergraph_UI_SquadMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.ExecuteUbergraph_UI_SquadMember");

	UUI_SquadMember_C_ExecuteUbergraph_UI_SquadMember_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
