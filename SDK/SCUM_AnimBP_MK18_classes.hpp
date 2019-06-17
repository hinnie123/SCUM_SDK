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

// AnimBlueprintGeneratedClass AnimBP_MK18.AnimBP_MK18_C
// 0x0CD5 (0x1055 - 0x0380)
class UAnimBP_MK18_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A809B4B5423B7737C65CD48CB3160DD1;      // 0x0388(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6593C4E34E523832B6F6769BB975B6AC;// 0x03D0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9910579448AC2484643F9AA76299C6E9;// 0x04A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3E676804DF70078154A029B6D0885B9;// 0x0550(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E5CA96BB435D9AEE737DC282292E4AC6;      // 0x0600(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6FE9C59B4347691B7F123694BFDBB3D4;// 0x0670(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27CFEEB940EF7999E9A43FB6754E5502;// 0x0750(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B6FC05EB4C4A3ACC320DC9921948BB06;// 0x08B0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A1B19B75444ADF08139B3EBCCFC2F4C4;// 0x08F8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_04152CE0499E568B4262D2BD082F629A;      // 0x0940(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D89F54794E6EB04CEF7DF8A78C2EB009;      // 0x09B0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BC494F9145AA6363F5C17B92DDC91CA4;      // 0x0A20(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_43650EFD4748C9CD82AFC0BB642A2735;// 0x0A90(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5B1687FD497E7E0EABF3A0BEA0711237;// 0x0B70(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AF080AFA450E29EAB1800FB4F37C6642;// 0x0BC0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0104328B4FBFF9BB3DD09AA24944B552;// 0x0C10(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5D47F15D4C6E1CB875C9DEBAEA336943;// 0x0C60(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_68EEE88748BFC7F656320383A89F6107;// 0x0D30(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D8579E764BFC7F578C2F1483889063E5;      // 0x0E10(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F9A8D7654674B991BEFDAD9150E08742;      // 0x0E80(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B439E1AB437A313462382998B3372062;      // 0x0EF0(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_903166434FB48E88283B98AF27468523;// 0x0F60(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41CCC5E04E0132A7645464ACBB90A5E4;// 0x0FB0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B5FC97034835B587BA57AF9566C744F0;// 0x1000(0x0050)
	float                                              IronSightsHideAlpha;                                      // 0x1050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasMagazine;                                              // 0x1054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_MK18.AnimBP_MK18_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MK18_AnimGraphNode_BlendListByEnum_68EEE88748BFC7F656320383A89F6107();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MK18_AnimGraphNode_BlendListByBool_5D47F15D4C6E1CB875C9DEBAEA336943();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MK18_AnimGraphNode_BlendListByEnum_43650EFD4748C9CD82AFC0BB642A2735();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MK18_AnimGraphNode_ModifyBone_27CFEEB940EF7999E9A43FB6754E5502();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MK18_AnimGraphNode_BlendListByBool_6593C4E34E523832B6F6769BB975B6AC();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AnimBP_MK18(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
