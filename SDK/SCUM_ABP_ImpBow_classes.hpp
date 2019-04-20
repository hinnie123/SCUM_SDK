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

// AnimBlueprintGeneratedClass ABP_ImpBow.ABP_ImpBow_C
// 0x0EB0 (0x1250 - 0x03A0)
class UABP_ImpBow_C : public UWeaponBowAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E7AC62BB43027BFC9DA8B8A80E322BDF;      // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F66076D348ED8EA6C6E9C0BEBC55AE3E;      // 0x03F0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_78D1E9494663CA6A2E0C30A3F2143D9B;// 0x0460(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_610418F748E9F7C4B71EAC852D6025CA;      // 0x0540(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58C0132C42B2707ECA93DF9B11A623D8;// 0x05B0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_18FE19494C12EDF78CA07E8592D4E446;      // 0x0660(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53BB1AF0403D6092259B0BA4EE0305BB;// 0x06D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2165669A44107B2F3B4D1DACDD29F12C;      // 0x0780(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61CCCA61454907A51ADA8CB5776CD363;// 0x07F0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_86FCABB541201D7500F416A24B773D00;// 0x08A0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_109262E345B5E1C60A79B99545456250;      // 0x0980(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D30289D4F2DE89FA378C89AC5380883;// 0x09F0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_642794974E39FCB7E1AAC38D0FE860B1;      // 0x0AA0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0826564B4614A09D286EA290B4D3FC79;// 0x0B10(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7421863E45E8E236B9D101B2DBA556A4;      // 0x0BC0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46D14C0A4A52443D7695258979001F76;// 0x0C30(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_331AC3E6415A02194111D9B10FFC7552;// 0x0CE0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9011B8E54D371B8C9203BA83EBEB946A;// 0x0DB0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_96A89FA34139BC9B9CD45BA334E84FC5;// 0x0E60(0x0118)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0F78(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C86820F24E0A1B857B96989A0456E41A;    // 0x0F80(0x0240)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_26A1847C44DB036D3E37B6A6BF58049A;// 0x11C0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_515B1C5F492C0E4464EAA8B257CCE4C9;// 0x1208(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ImpBow.ABP_ImpBow_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ImpBow_AnimGraphNode_LookAt_C86820F24E0A1B857B96989A0456E41A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ImpBow_AnimGraphNode_BlendListByBool_331AC3E6415A02194111D9B10FFC7552();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ImpBow_AnimGraphNode_BlendListByEnum_86FCABB541201D7500F416A24B773D00();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ImpBow_AnimGraphNode_BlendListByEnum_78D1E9494663CA6A2E0C30A3F2143D9B();
	void ExecuteUbergraph_ABP_ImpBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
