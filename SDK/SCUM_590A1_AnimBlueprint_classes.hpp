#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass 590A1_AnimBlueprint.590A1_AnimBlueprint_C
// 0x07D4 (0x0B54 - 0x0380)
class U590A1_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0732F514E41CDA70A189DB2A8587585;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_20D921744FF7B8D5AE28BBB0697A9B4F;      // 0x03D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_585B30A942EDA8D801F80393698207FD;      // 0x0440(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_44AF5F3B41C866CB84DAD5A10B4B4418;      // 0x04B0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_89A79703467B580947D221946A82A8AF;// 0x0520(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_38487FC244B36D342092A68E2ED7E88E;      // 0x0600(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_50E692354EBA154388B849A682E906BB;// 0x0670(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_532CC22A404D8A510E58188E48BDEAF3;// 0x0750(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E5DA40B948B50684FFC35296AB743A9F;// 0x07A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B20A9D24ACB672001FA4EA6F62D8E67;// 0x07F0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00D30FED4EB482B7C3EBE3A2EB48E44C;// 0x0840(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6051BB2F409D40687D1863BEE15AF182;      // 0x08F0(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_561A74914456A1C12221C48F1B74D990;// 0x0960(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_122D40834A8B1A8276E558A18F9CB098;// 0x0AC0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_679F031C4DC345D9CD9615BC145E6EE9;// 0x0B08(0x0048)
	float                                              IronSightsHideAlpha;                                      // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass 590A1_AnimBlueprint.590A1_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_ModifyBone_561A74914456A1C12221C48F1B74D990();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_BlendListByEnum_89A79703467B580947D221946A82A8AF();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_590A1_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
