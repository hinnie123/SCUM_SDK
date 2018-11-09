#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prisoner.BP_Prisoner_C
// 0x026E (0x212E - 0x1EC0)
class ABP_Prisoner_C : public APrisoner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1EC0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Censor2;                                                  // 0x1EC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Censor;                                                   // 0x1ED0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Neck;                                                     // 0x1ED8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsConstraintComponent*                 PenisConstraint;                                          // 0x1EE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PenisHandle;                                              // 0x1EE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Penis;                                                    // 0x1EF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVoiceAudioComponent*                        VoiceAudio;                                               // 0x1EF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVoiceChatComponent*                         VoiceChat;                                                // 0x1F00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleFoot_R;                        // 0x1F08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleFoot_L;                        // 0x1F10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleHead;                          // 0x1F18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleLeg_R;                         // 0x1F20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleLeg_L;                         // 0x1F28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleHand_R;                        // 0x1F30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleHand_L;                        // 0x1F38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BulletFlyBySoundCollision;                                // 0x1F40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVisionEffectsComponent*                     VisionEffectsComponent;                                   // 0x1F48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LeavesComponent;                                          // 0x1F50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Eyewear;                                                  // 0x1F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        UpperHead;                                                // 0x1F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LowerHead;                                                // 0x1F68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Chip;                                                     // 0x1F70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FacialHair;                                               // 0x1F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Hair;                                                     // 0x1F80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LowerMouth;                                               // 0x1F88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        UpperMouth;                                               // 0x1F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        REye;                                                     // 0x1F98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LEye;                                                     // 0x1FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      UpperHeadSkeletal;                                        // 0x1FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      BodyArmor;                                                // 0x1FB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Backpack;                                                 // 0x1FB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Feet;                                                     // 0x1FC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Legs;                                                     // 0x1FC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      head;                                                     // 0x1FD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Hands;                                                    // 0x1FD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Arms;                                                     // 0x1FE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Torso;                                                    // 0x1FE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Defecating;                                           // 0x1FF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_ClimbingWindow;                                       // 0x1FF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_ClimbingWindow;                                       // 0x2000(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Diving;                                               // 0x2008(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TPViews;                                                  // 0x2010(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_NarrowLadder;                                         // 0x2018(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Ragdoll;                                              // 0x2020(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            NameWidget;                                               // 0x2028(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_StandingMelee;                                        // 0x2030(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_StandingMelee;                                        // 0x2038(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_ProneAimingDownTheSights;                             // 0x2040(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_CrouchingAimingDownTheSights;                         // 0x2048(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_StandingAimingDownTheSights;                          // 0x2050(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_ProneAiming;                                          // 0x2058(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_CrouchingAiming;                                      // 0x2060(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_StandingAiming;                                       // 0x2068(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FPViewsAiming;                                            // 0x2070(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PawnBlocker;                                              // 0x2078(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_ProneAiming;                                          // 0x2080(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_CrouchingAiming;                                      // 0x2088(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_StandingAiming;                                       // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_Prone;                                                // 0x2098(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_Crouching;                                            // 0x20A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonSubviewComponent*        FPV_Standing;                                             // 0x20A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FPViews;                                                  // 0x20B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Standing;                                             // 0x20B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Prone;                                                // 0x20C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonSubviewComponent*        TPV_Crouching;                                            // 0x20C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerFirstPersonViewComponent*           FirstPersonView;                                          // 0x20D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrisonerThirdPersonViewComponent*           ThirdPersonView;                                          // 0x20D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HairLength;                                               // 0x20E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FacialHairLength;                                         // 0x20E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IKoffsetLeftFootToRemove;                                 // 0x20E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IKoffsetRightFootToRemove;                                // 0x20EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IKInterpSpeedToRemove;                                    // 0x20F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x20F4(0x0004) MISSED OFFSET
	struct FName                                       LeftFootSocket;                                           // 0x20F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootSocket;                                          // 0x2100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_FootstepTracker_C*                       FootstepTracker;                                          // 0x2108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsHoldingObject;                                          // 0x2110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2111(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         BodyToMove;                                               // 0x2118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TargetDistance;                                           // 0x2120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDistanceStep;                                       // 0x2124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVoiceDistance;                                         // 0x2128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsVoiceActive;                                            // 0x212C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnorePenisPhysics;                                       // 0x212D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prisoner.BP_Prisoner_C");
		return ptr;
	}


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
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Prisoner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
