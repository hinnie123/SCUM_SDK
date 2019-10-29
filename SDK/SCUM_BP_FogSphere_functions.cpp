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

// Function BP_FogSphere.BP_FogSphere_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FogSphere_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogSphere.BP_FogSphere_C.UserConstructionScript");

	ABP_FogSphere_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_FogSphere.BP_FogSphere_C.SetFogDensity
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Density                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogSphere_C::SetFogDensity(float* Density)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogSphere.BP_FogSphere_C.SetFogDensity");

	ABP_FogSphere_C_SetFogDensity_Params fn_params;
	fn_params.Density = Density;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_FogSphere.BP_FogSphere_C.ExecuteUbergraph_BP_FogSphere
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogSphere_C::ExecuteUbergraph_BP_FogSphere(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogSphere.BP_FogSphere_C.ExecuteUbergraph_BP_FogSphere");

	ABP_FogSphere_C_ExecuteUbergraph_BP_FogSphere_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
