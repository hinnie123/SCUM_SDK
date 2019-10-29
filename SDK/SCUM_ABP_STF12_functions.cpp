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

// Function ABP_STF12.ABP_STF12_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_ModifyBone_4A68127C47EEBEDA55D28BBE33CE15A0
// (BlueprintEvent)

void UABP_STF12_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_ModifyBone_4A68127C47EEBEDA55D28BBE33CE15A0()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_ModifyBone_4A68127C47EEBEDA55D28BBE33CE15A0");

	UABP_STF12_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_ModifyBone_4A68127C47EEBEDA55D28BBE33CE15A0_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ABP_STF12.ABP_STF12_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_BlendListByEnum_336E19274DD24E2165E9AF90537958AA
// (BlueprintEvent)

void UABP_STF12_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_BlendListByEnum_336E19274DD24E2165E9AF90537958AA()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_BlendListByEnum_336E19274DD24E2165E9AF90537958AA");

	UABP_STF12_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_BlendListByEnum_336E19274DD24E2165E9AF90537958AA_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ABP_STF12.ABP_STF12_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_STF12_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.BlueprintUpdateAnimation");

	UABP_STF12_C_BlueprintUpdateAnimation_Params fn_params;
	fn_params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ABP_STF12.ABP_STF12_C.ExecuteUbergraph_ABP_STF12
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_STF12_C::ExecuteUbergraph_ABP_STF12(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.ExecuteUbergraph_ABP_STF12");

	UABP_STF12_C_ExecuteUbergraph_ABP_STF12_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
