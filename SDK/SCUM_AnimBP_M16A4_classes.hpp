#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_M16A4.AnimBP_M16A4_C
// 0x08E8 (0x0C68 - 0x0380)
class UAnimBP_M16A4_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_585E128042CC54D2B59B8EBB8CAB2954;      // 0x0388(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AB13C33E43CBE7B8483DAFBB59E3198C;// 0x03D0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9518CF554093DFC3BFC36D989CC2FEE3;// 0x04A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CBA3E76E4F0877B4FB74008BA735419B;// 0x0550(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5247C7244C5E7FE1B26FDEBDD0040EAA;      // 0x0600(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C661C80543D71D9B6A02EDBB4311AC0F;      // 0x0670(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7BBA389041DF834918727F96DCB475F3;      // 0x06E0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_EDD0686D4313B5AC5BBF528AA5D76CAD;// 0x0750(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8008D68E49A8634F685574A1AFEA275E;      // 0x0830(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FE3883E84C1743DC310BE9900257514F;// 0x08A0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72F990344504DC86CC0415BAAB41FA80;// 0x0980(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8043613141B96F18ACAB0DA38D35F3EB;// 0x09D0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4DC4C8404E281F61F5552D818D46EAA0;// 0x0A20(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F83147C74A86F8BC46BD3EA9878F1E3E;// 0x0A70(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_69504C634987EC89F859A4B221B20DED;// 0x0BD0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_17660E1E427CAC6BF6C203B6101E2F1A;// 0x0C18(0x0048)
	bool                                               HasMagazine;                                              // 0x0C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C61(0x0003) MISSED OFFSET
	float                                              IronSightsHideAlpha;                                      // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_M16A4.AnimBP_M16A4_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_M16A4_AnimGraphNode_ModifyBone_F83147C74A86F8BC46BD3EA9878F1E3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_M16A4_AnimGraphNode_BlendListByEnum_EDD0686D4313B5AC5BBF528AA5D76CAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_M16A4_AnimGraphNode_BlendListByBool_AB13C33E43CBE7B8483DAFBB59E3198C();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AnimBP_M16A4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
