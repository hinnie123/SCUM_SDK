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

// BlueprintGeneratedClass BP_Prisoner.BP_Prisoner_C
// 0x02F8 (0x2608 - 0x2310)
class ABP_Prisoner_C : public APrisoner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2310(0x0008) (Transient, DuplicateTransient)
	class UPrisonerFirstPersonSubviewComponent*        FPV_Lying;                                                // 0x2318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_Mounted;                                              // 0x2320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      FacialHairMesh;                                           // 0x2328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Swimming;                                             // 0x2330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      HairMesh;                                                 // 0x2338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RightBreastCensor;                                        // 0x2340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LeftBreastCensor;                                         // 0x2348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DangerDetectionSphere;                                    // 0x2350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PenisCensor;                                              // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GenitalsCensor;                                           // 0x2360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Neck;                                                     // 0x2368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Penis;                                                    // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVoiceAudioComponent*                        VoiceAudio;                                               // 0x2378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVoiceChatComponent*                         VoiceChat;                                                // 0x2380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleFoot_R;                        // 0x2388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleFoot_L;                        // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleHead;                          // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleLeg_R;                         // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleLeg_L;                         // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleHand_R;                        // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleHand_L;                        // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BulletFlyBySoundCollision;                                // 0x23C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVisionEffectsComponent*                     VisionEffectsComponent;                                   // 0x23C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LeavesComponent;                                          // 0x23D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Eyewear;                                                  // 0x23D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        UpperHead;                                                // 0x23E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LowerHead;                                                // 0x23E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Chip;                                                     // 0x23F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LowerMouth;                                               // 0x23F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        UpperMouth;                                               // 0x2400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        REye;                                                     // 0x2408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LEye;                                                     // 0x2410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      UpperHeadSkeletal;                                        // 0x2418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      BodyArmor;                                                // 0x2420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Backpack;                                                 // 0x2428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Feet;                                                     // 0x2430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Legs;                                                     // 0x2438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      head;                                                     // 0x2440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Hands;                                                    // 0x2448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Arms;                                                     // 0x2450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Torso;                                                    // 0x2458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Defecating;                                           // 0x2460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_ClimbingWindow;                                       // 0x2468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_ClimbingWindow;                                       // 0x2470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Diving;                                               // 0x2478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TPViews;                                                  // 0x2480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_NarrowLadder;                                         // 0x2488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Ragdoll;                                              // 0x2490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            NameWidget;                                               // 0x2498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_StandingMelee;                                        // 0x24A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_StandingMelee;                                        // 0x24A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_ProneAimingDownTheSights;                             // 0x24B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_CrouchingAimingDownTheSights;                         // 0x24B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_StandingAimingDownTheSights;                          // 0x24C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_ProneAiming;                                          // 0x24C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_CrouchingAiming;                                      // 0x24D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_StandingAiming;                                       // 0x24D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FPViewsAiming;                                            // 0x24E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_ProneAiming;                                          // 0x24E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_CrouchingAiming;                                      // 0x24F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_StandingAiming;                                       // 0x24F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_Prone;                                                // 0x2500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_Crouching;                                            // 0x2508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_Standing;                                             // 0x2510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FPViews;                                                  // 0x2518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Standing;                                             // 0x2520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Prone;                                                // 0x2528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Crouching;                                            // 0x2530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonViewComponent*           FirstPersonView;                                          // 0x2538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonViewComponent*           ThirdPersonView;                                          // 0x2540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 ShortHairCurve;                                           // 0x2548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IKoffsetLeftFootToRemove;                                 // 0x2550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IKoffsetRightFootToRemove;                                // 0x2554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IKInterpSpeedToRemove;                                    // 0x2558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x255C(0x0004) MISSED OFFSET
	struct FName                                       LeftFootSocket;                                           // 0x2560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootSocket;                                          // 0x2568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_FootstepTracker_C*                       FootstepTracker;                                          // 0x2570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsHoldingObject;                                          // 0x2578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2579(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         BodyToMove;                                               // 0x2580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TargetDistance;                                           // 0x2588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDistanceStep;                                       // 0x258C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVoiceDistance;                                         // 0x2590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsVoiceActive;                                            // 0x2594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnorePenisPhysics;                                       // 0x2595(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x2596(0x0002) MISSED OFFSET
	class UCurveFloat*                                 MediumHairCurve;                                          // 0x2598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MediumHairCurvePDO;                                       // 0x25A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MediumHairCurveTopOpacity;                                // 0x25A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LongHairCurve;                                            // 0x25B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LongHairCurvePDO;                                         // 0x25B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LongHairCurveTopOpacity;                                  // 0x25C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ShortFacialHairCurve;                                     // 0x25C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MediumFacialHairCurve;                                    // 0x25D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MediumFacialHairCurvePDO;                                 // 0x25D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MediumFacialHairCurveTopOpacity;                          // 0x25E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LongFacialHairCurve;                                      // 0x25E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LongFacialHairCurvePDO;                                   // 0x25F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LongFacialHairCurveTopOpacity;                            // 0x25F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AfroMediumHairCurve;                                      // 0x2600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prisoner.BP_Prisoner_C");
		return ptr;
	}


	void UpdateHair();
	void FindOtherPlayersInRange(float SearchDistance, TArray<class ABP_Prisoner_C*>* OtherPlayers);
	void DebugPrint(const struct FString& MessageString, const struct FString& ValueString, float Duration);
	void IKFootTraceToRemove(float TraceDistance, const struct FName& Socket, float* IKOffset);
	void UserConstructionScript();
	void DrawFootstep(bool flip);
	void InitTextMeshFromName(struct FString* Name);
	void ServerProcessVoiceChatData(TArray<unsigned char> CompressedVoiceData);
	void ClientReceiveVoiceData(class ABP_Prisoner_C* FromPlayer, TArray<unsigned char> CompressedVoiceData);
	void PlayVoiceChat(TArray<unsigned char> CompressedVoiceData);
	void BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature();
	void BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature();
	void BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature();
	void UpdateHairVisuals();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Prisoner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
