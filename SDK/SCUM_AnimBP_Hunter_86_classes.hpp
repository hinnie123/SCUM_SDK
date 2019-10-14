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

// AnimBlueprintGeneratedClass AnimBP_Hunter_86.AnimBP_Hunter_85_C
// 0x0960 (0x0CE0 - 0x0380)
class UAnimBP_Hunter_85_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_31F1701D46E0E3F3EE3D98933FB192E6;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A95CEACC47CD6D3C6CB3E597B76A7F4E;      // 0x03D0(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_91AB8849488134DD83BB2C9FD1EF07D4;// 0x0440(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC7BB48E4BF0507D600784A9234ACCF2;// 0x0520(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_040F231F4BF8E5E8138357B85F85B095;      // 0x05D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6422098D46CACA858568388AC0611EE8;      // 0x0640(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21AE88CC4FDD19B683373A9C8C500CA3;      // 0x06B0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_AE289265453B18CD7EAACC99513F65A1;// 0x0720(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9549960F46483C1EFF7E22AAFF4922CB;// 0x0800(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6816706448163841CB1F009AA84A99CC;// 0x0850(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FF7C045C4F38C122888DAC8385444F53;// 0x08A0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6B95305F4AC89071766ECC8F395DB36B;// 0x08F0(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4385E0354D48EE81EA3774970BD73608;// 0x09C0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_305D5F6D49637286B61D34A10712281A;      // 0x0AA0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8D4375384E47A0829679EB9D447B6EBC;      // 0x0B10(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DBDC0BE542597F8F5FAAD3B4AE097A4F;      // 0x0B80(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A34D31C8476F46EEFC599990B265CF77;// 0x0BF0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D0931CDA4750E7BB480F8DA51E70C0F2;// 0x0C40(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C716CD394DF1D93D8C62F0B1D42BFD8F;// 0x0C90(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Hunter_86.AnimBP_Hunter_85_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Hunter_85_AnimGraphNode_BlendListByEnum_4385E0354D48EE81EA3774970BD73608();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Hunter_85_AnimGraphNode_BlendListByBool_6B95305F4AC89071766ECC8F395DB36B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Hunter_85_AnimGraphNode_BlendListByEnum_AE289265453B18CD7EAACC99513F65A1();
	void ExecuteUbergraph_AnimBP_Hunter_86(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
