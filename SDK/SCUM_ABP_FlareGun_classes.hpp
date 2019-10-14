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

// AnimBlueprintGeneratedClass ABP_FlareGun.ABP_FlareGun_C
// 0x0AE0 (0x0E60 - 0x0380)
class UABP_FlareGun_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E2CD7DB145B2FFAC8C224FA1C685728D;      // 0x0388(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F7D34D48480BD8DC8FA08986DD316A3F;// 0x03D0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB8B771B40325C492482C6B23DE002D5;// 0x04B0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F56E5614643F4D7D5AAD2AA22167A48;// 0x0560(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_79F43B9E4698B8AF30D4AC9720468397;      // 0x0610(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7EDA254645D14F1DB6B55AA161606D34;      // 0x0680(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_96BCD62749B23AFB806C1DB11489A527;      // 0x06F0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7DE38D0A4B59EA671677A0A0A5014229;      // 0x0760(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_97AF8B964FBA7F814E47C3813019342C;// 0x07D0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CCC4FD1D42CC4BF774FFCDB5B13B00C8;// 0x08B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5C5A5C6843C6F1963A08939A349D91E3;// 0x0900(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_07191779482CEE2484701E8FBA355AB8;// 0x0950(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD740D0B43202D1314C686942E8CBA8C;// 0x09A0(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_158EBF7146449F799F06049203F3A0EF;// 0x0A70(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_28D38B25488AEA8F765955BDE66D6118;      // 0x0B50(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D598AF6C429EE3BD6AC61895000B0726;      // 0x0BC0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_17BCABF841031FDC316405A19C5A42D7;      // 0x0C30(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1741308A4E88EFD883DFB898AE9FF0B7;// 0x0CA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0F54C0ED48ED463F61535396455D4A1B;// 0x0CF0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0BEC0551422AF4ED6E6699A73BDF3A3B;// 0x0D40(0x0050)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_DD2BBA704D7773209FD6AB9E5651EAE3;// 0x0D90(0x00D0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FlareGun.ABP_FlareGun_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlareGun_AnimGraphNode_BlendListByInt_DD2BBA704D7773209FD6AB9E5651EAE3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlareGun_AnimGraphNode_BlendListByEnum_158EBF7146449F799F06049203F3A0EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlareGun_AnimGraphNode_BlendListByBool_FD740D0B43202D1314C686942E8CBA8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlareGun_AnimGraphNode_BlendListByEnum_97AF8B964FBA7F814E47C3813019342C();
	void ExecuteUbergraph_ABP_FlareGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
