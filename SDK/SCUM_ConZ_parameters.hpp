#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConZ.DesignableUserWidget.SetDisplayLabelName
struct UDesignableUserWidget_SetDisplayLabelName_Params
{
	struct FString                                     displayLabelName;                                         // (Parm, ZeroConstructor)
};

// Function ConZ.DesignableUserWidget.SetDefaultPosition
struct UDesignableUserWidget_SetDefaultPosition_Params
{
	struct FVector2D                                   Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.DesignableUserWidget.OnSynchronizeProperties
struct UDesignableUserWidget_OnSynchronizeProperties_Params
{
};

// Function ConZ.DesignableUserWidget.GetDisplayLabelName
struct UDesignableUserWidget_GetDisplayLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DesignableUserWidget.GetDefaultPosition
struct UDesignableUserWidget_GetDefaultPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.ActionProgressWidget.SetProgress
struct UActionProgressWidget_SetProgress_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.ActionProgressWidget.OnActionProgressFinishedEvent__DelegateSignature
struct UActionProgressWidget_OnActionProgressFinishedEvent__DelegateSignature_Params
{
};

// DelegateFunction ConZ.ActionProgressWidget.OnActionProgressCancelledEvent__DelegateSignature
struct UActionProgressWidget_OnActionProgressCancelledEvent__DelegateSignature_Params
{
};

// Function ConZ.ActionProgressWidget.ExecuteAction
struct UActionProgressWidget_ExecuteAction_Params
{
};

// Function ConZ.ActionProgressWidget.CancelAction
struct UActionProgressWidget_CancelAction_Params
{
};

// Function ConZ.Sickness.SetShouldDisplayState
struct USickness_SetShouldDisplayState_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Sickness.GetState
struct USickness_GetState_Params
{
	ESicknessState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Sickness.GetShouldDisplayState
struct USickness_GetShouldDisplayState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Sickness.GetPhase
struct USickness_GetPhase_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Sickness.GetCaption
struct USickness_GetCaption_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.Item.Use
struct AItem_Use_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              usageWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Eat;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.StopBlinking
struct AItem_StopBlinking_Params
{
};

// DelegateFunction ConZ.Item.StaticMeshChangedDelegate__DelegateSignature
struct AItem_StaticMeshChangedDelegate__DelegateSignature_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.Item.SkeletalMeshChangedDelegate__DelegateSignature
struct AItem_SkeletalMeshChangedDelegate__DelegateSignature_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.SetWeight
struct AItem_SetWeight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.SetDamage
struct AItem_SetDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.Server_Throw
struct AItem_Server_Throw_Params
{
	struct FVector                                     ZeroBasedStartPosition;                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    StartRotation;                                            // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     StartVelocity;                                            // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction ConZ.Item.PickedUpStateDelegate__DelegateSignature
struct AItem_PickedUpStateDelegate__DelegateSignature_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pickedUp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.PhysicsSimulationTimerCallback
struct AItem_PhysicsSimulationTimerCallback_Params
{
};

// Function ConZ.Item.OnRep_WeightUsed
struct AItem_OnRep_WeightUsed_Params
{
};

// Function ConZ.Item.OnRep_WaterWeight
struct AItem_OnRep_WaterWeight_Params
{
};

// Function ConZ.Item.OnRep_Visibility
struct AItem_OnRep_Visibility_Params
{
};

// Function ConZ.Item.OnRep_MeshIsSimulatingPhysics
struct AItem_OnRep_MeshIsSimulatingPhysics_Params
{
};

// Function ConZ.Item.OnRep_Examined
struct AItem_OnRep_Examined_Params
{
};

// Function ConZ.Item.OnRep_Damage
struct AItem_OnRep_Damage_Params
{
};

// Function ConZ.Item.OnProjectileStop
struct AItem_OnProjectileStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Item.OnDestroyedEvent
struct AItem_OnDestroyedEvent_Params
{
	class AActor*                                      Self;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.OnContainedItemDestroyed
struct AItem_OnContainedItemDestroyed_Params
{
	class AActor*                                      containedItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.NetMulticast_SpawnDestroyedEffects
struct AItem_NetMulticast_SpawnDestroyedEffects_Params
{
};

// Function ConZ.Item.NetMulticast_SetActorDropLocationAndRotation
struct AItem_NetMulticast_SetActorDropLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function ConZ.Item.NeedServerDataUpdate
struct AItem_NeedServerDataUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.Multicast_Throw
struct AItem_Multicast_Throw_Params
{
	struct FVector                                     ZeroBasedStartPosition;                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    StartRotation;                                            // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     StartVelocity;                                            // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction ConZ.Item.ItemRemovedDelegate__DelegateSignature
struct AItem_ItemRemovedDelegate__DelegateSignature_Params
{
	class AItem*                                       container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.Item.ItemMovedDelegate__DelegateSignature
struct AItem_ItemMovedDelegate__DelegateSignature_Params
{
	class AItem*                                       container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.Item.ItemAddedDelegate__DelegateSignature
struct AItem_ItemAddedDelegate__DelegateSignature_Params
{
	class AItem*                                       container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.Interact
struct AItem_Interact_Params
{
	class APrisoner*                                   user;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractionType                                   InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractionData                            InteractionData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.Item.GetWidgetDisplayInfo
struct AItem_GetWidgetDisplayInfo_Params
{
	struct FWidgetDisplayInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.Item.GetWetness
struct AItem_GetWetness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWeightUsed
struct AItem_GetWeightUsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWeightRemained
struct AItem_GetWeightRemained_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWeightPerUse
struct AItem_GetWeightPerUse_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWeight
struct AItem_GetWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWaterWeight
struct AItem_GetWaterWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetUsedSlots
struct AItem_GetUsedSlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetUsedMass
struct AItem_GetUsedMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetTotalWeight
struct AItem_GetTotalWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetTotalUses
struct AItem_GetTotalUses_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetSlotsCount
struct AItem_GetSlotsCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetSizeY
struct AItem_GetSizeY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetSizeX
struct AItem_GetSizeX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetRemainingUses
struct AItem_GetRemainingUses_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetRemaining
struct AItem_GetRemaining_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetNoiseLoudnessWhenPickedUp
struct AItem_GetNoiseLoudnessWhenPickedUp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetNoiseLoudnessWhenDropped
struct AItem_GetNoiseLoudnessWhenDropped_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetNoiseLoudnessOnGroundImpact
struct AItem_GetNoiseLoudnessOnGroundImpact_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetMeshComponent
struct AItem_GetMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Item.GetInteractions
struct AItem_GetInteractions_Params
{
	class UObject*                                     user;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     creator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInteractionStruct>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Item.GetDamage
struct AItem_GetDamage_Params
{
	bool                                               recalculate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetAllContainedItems
struct AItem_GetAllContainedItems_Params
{
	TArray<class AItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Item.DetachFromAll
struct AItem_DetachFromAll_Params
{
};

// Function ConZ.Item.CanBeDroppedBy
struct AItem_CanBeDroppedBy_Params
{
	class AConZCharacter*                              Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.CanAutoAddItem
struct AItem_CanAutoAddItem_Params
{
	class AItem*                                       Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.CanAddItem
struct AItem_CanAddItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.Blink
struct AItem_Blink_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AmmunitionBoxItem.OnRep_AmmoCount
struct AAmmunitionBoxItem_OnRep_AmmoCount_Params
{
};

// Function ConZ.AmmunitionItem.SetAmmoCount
struct AAmmunitionItem_SetAmmoCount_Params
{
	int                                                count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AmmunitionItem.OnRep_AmmoCount
struct AAmmunitionItem_OnRep_AmmoCount_Params
{
};

// Function ConZ.AmmunitionItem.GetAmmoCount
struct AAmmunitionItem_GetAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.SetGender
struct AConZCharacter_SetGender_Params
{
	EGender                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZCharacter.SetEnvironmentClass
struct AConZCharacter_SetEnvironmentClass_Params
{
	EEnvironmentClass                                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZCharacter.Server_HandleMeleeAttackCapsuleHit
struct AConZCharacter_Server_HandleMeleeAttackCapsuleHit_Params
{
	class AConZCharacter*                              attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMeleeAttackCapsuleHitInfo                  HitInfo;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.ConZCharacter.NetMulticast_HandleMeleeAttackCapsuleHit
struct AConZCharacter_NetMulticast_HandleMeleeAttackCapsuleHit_Params
{
	class AConZCharacter*                              attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMeleeAttackCapsuleHitInfo                  HitInfo;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.ConZCharacter.LeaveCorpse
struct AConZCharacter_LeaveCorpse_Params
{
	class ACorpse*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.IsHeadBone
struct AConZCharacter_IsHeadBone_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.IsConscious
struct AConZCharacter_IsConscious_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.IsAlive
struct AConZCharacter_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.GetSoundComponent
struct AConZCharacter_GetSoundComponent_Params
{
	class UCharacterSoundComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.ConZCharacter.GetHitReactBodyPartFromHitResult
struct AConZCharacter_GetHitReactBodyPartFromHitResult_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EDetectHitCollisionType                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.GetHitReactBodyPartFromBodyPart
struct AConZCharacter_GetHitReactBodyPartFromBodyPart_Params
{
	EBodyPart                                          Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EDetectHitCollisionType                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.GetGender
struct AConZCharacter_GetGender_Params
{
	EGender                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.GetEnvironmentClass
struct AConZCharacter_GetEnvironmentClass_Params
{
	EEnvironmentClass                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.GetBodyPartFromBoneName
struct AConZCharacter_GetBodyPartFromBoneName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EBodyPart                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZCharacter.ActorHitCallback
struct AConZCharacter_ActorHitCallback_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Animal.TestTameAnimal
struct AAnimal_TestTameAnimal_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Animal.StopObservingMontageOnClients
struct AAnimal_StopObservingMontageOnClients_Params
{
};

// Function ConZ.Animal.StopEatingMontageOnClients
struct AAnimal_StopEatingMontageOnClients_Params
{
};

// Function ConZ.Animal.SilentKill
struct AAnimal_SilentKill_Params
{
};

// Function ConZ.Animal.SetRealNameOnClient
struct AAnimal_SetRealNameOnClient_Params
{
	struct FString                                     realName;                                                 // (Parm, ZeroConstructor)
};

// Function ConZ.Animal.SetPace
struct AAnimal_SetPace_Params
{
	EAnimalPace                                        pace;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Animal.PlayObservingMontageOnClients
struct AAnimal_PlayObservingMontageOnClients_Params
{
};

// Function ConZ.Animal.PlayEatingMontageOnClients
struct AAnimal_PlayEatingMontageOnClients_Params
{
};

// Function ConZ.Animal.OnShot
struct AAnimal_OnShot_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Animal.OnRep_RealName
struct AAnimal_OnRep_RealName_Params
{
};

// Function ConZ.Animal.OnRagdollShot
struct AAnimal_OnRagdollShot_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Animal.Kill
struct AAnimal_Kill_Params
{
};

// Function ConZ.Animal.GoToRagdoll
struct AAnimal_GoToRagdoll_Params
{
};

// Function ConZ.Animal.GetSpeed
struct AAnimal_GetSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Animal.GetPace
struct AAnimal_GetPace_Params
{
	EAnimalPace                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Animal.GetHandlingCommand
struct AAnimal_GetHandlingCommand_Params
{
	EAnimalCommand                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Animal.ApplyDamage
struct AAnimal_ApplyDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Animal2.UnpackUint8
struct AAnimal2_UnpackUint8_Params
{
	unsigned char                                      pack;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       B;                                                        // (Parm, OutParm, ZeroConstructor)
};

// Function ConZ.Animal2.PackBoolsIntoUint8
struct AAnimal2_PackBoolsIntoUint8_Params
{
	TArray<bool>                                       B;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Animal2.OnRep_WoundDamage
struct AAnimal2_OnRep_WoundDamage_Params
{
};

// Function ConZ.Animal2.OnRep_Health
struct AAnimal2_OnRep_Health_Params
{
};

// Function ConZ.Animal2.GenerateBloodMarkerRPC
struct AAnimal2_GenerateBloodMarkerRPC_Params
{
};

// Function ConZ.Animal2.ClosestPrisoner
struct AAnimal2_ClosestPrisoner_Params
{
	class APrisoner*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Animal2SoundComponent.OnRep_AnimalSound
struct UAnimal2SoundComponent_OnRep_AnimalSound_Params
{
};

// Function ConZ.SkillAction.OnActionFinished
struct USkillAction_OnActionFinished_Params
{
};

// Function ConZ.SkillAction.OnActionCanceled
struct USkillAction_OnActionCanceled_Params
{
};

// Function ConZ.AnimalAIController.SensingComponent_OnHearNoise
struct AAnimalAIController_SensingComponent_OnHearNoise_Params
{
	class APawn*                                       instigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AnimalAnimInstance.AnimNotify_RFootDownRear
struct UAnimalAnimInstance_AnimNotify_RFootDownRear_Params
{
};

// Function ConZ.AnimalAnimInstance.AnimNotify_RFootDown
struct UAnimalAnimInstance_AnimNotify_RFootDown_Params
{
};

// Function ConZ.AnimalAnimInstance.AnimNotify_LFootDownRear
struct UAnimalAnimInstance_AnimNotify_LFootDownRear_Params
{
};

// Function ConZ.AnimalAnimInstance.AnimNotify_LFootDown
struct UAnimalAnimInstance_AnimNotify_LFootDown_Params
{
};

// Function ConZ.AnimalAnimInstance.AnimNotify_ArmHit
struct UAnimalAnimInstance_AnimNotify_ArmHit_Params
{
};

// Function ConZ.Animal2AnimInstance.AnimNotify_RFootDownRear
struct UAnimal2AnimInstance_AnimNotify_RFootDownRear_Params
{
};

// Function ConZ.Animal2AnimInstance.AnimNotify_RFootDown
struct UAnimal2AnimInstance_AnimNotify_RFootDown_Params
{
};

// Function ConZ.Animal2AnimInstance.AnimNotify_LFootDownRear
struct UAnimal2AnimInstance_AnimNotify_LFootDownRear_Params
{
};

// Function ConZ.Animal2AnimInstance.AnimNotify_LFootDown
struct UAnimal2AnimInstance_AnimNotify_LFootDown_Params
{
};

// Function ConZ.Animal2AnimInstance.AnimNotify_IntroEnd
struct UAnimal2AnimInstance_AnimNotify_IntroEnd_Params
{
};

// Function ConZ.Animal2AnimInstance.AnimNotify_IdleEnd
struct UAnimal2AnimInstance_AnimNotify_IdleEnd_Params
{
};

// Function ConZ.ComplexAnimalAIController.UpdatePerception
struct AComplexAnimalAIController_UpdatePerception_Params
{
	TArray<class AActor*>                              actorsPercepted;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.ComplexAnimalAIController.StartFullAlert
struct AComplexAnimalAIController_StartFullAlert_Params
{
};

// Function ConZ.ComplexAnimalAIController.QuitObserve
struct AComplexAnimalAIController_QuitObserve_Params
{
};

// Function ConZ.ComplexAnimalAIController.OnTakeDamageHandler
struct AComplexAnimalAIController_OnTakeDamageHandler_Params
{
	class AActor*                                      damageActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class APawn*                                       eventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ComplexAnimalAIController.OnActionChangedHandler
struct AComplexAnimalAIController_OnActionChangedHandler_Params
{
	EAnimalAction                                      CurrentAction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EAnimalAction                                      PrevAction;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ComplexAnimalAIController.GetMode
struct AComplexAnimalAIController_GetMode_Params
{
	EAnimalMode                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ComplexAnimalAIController.ChangeMode
struct AComplexAnimalAIController_ChangeMode_Params
{
	EAnimalMode                                        NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Skill.SetLevel
struct USkill_SetLevel_Params
{
	ESkillLevel                                        Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Skill.SetExperiencePoints
struct USkill_SetExperiencePoints_Params
{
	float                                              Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Skill.IsWeakenedByAttribute
struct USkill_IsWeakenedByAttribute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Skill.GetSkillAttribute
struct USkill_GetSkillAttribute_Params
{
	ESkillAttribute                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Skill.GetLevel
struct USkill_GetLevel_Params
{
	ESkillLevel                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Skill.GetExperiencePoints
struct USkill_GetExperiencePoints_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Skill.GetCaption
struct USkill_GetCaption_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.AnimalSoundComponent.OnRep_AnimalSound
struct UAnimalSoundComponent_OnRep_AnimalSound_Params
{
};

// Function ConZ.AnimalSpawner2.SphereComponent_OnComponentEndOverlap
struct AAnimalSpawner2_SphereComponent_OnComponentEndOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AnimalSpawner2.SphereComponent_OnComponentBeginOverlap
struct AAnimalSpawner2_SphereComponent_OnComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.AnimalSpawner2.OnPlayerDespawned
struct AAnimalSpawner2_OnPlayerDespawned_Params
{
	class AActor*                                      despawnedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AnimalSpawner2.IsSpawnerActive
struct AAnimalSpawner2_IsSpawnerActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AnimalSpawner2.GetSpawnedAnimalsAmount
struct AAnimalSpawner2_GetSpawnedAnimalsAmount_Params
{
	class UClass*                                      AnimalClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AttributeMapInterface.SetStringAttribute
struct UAttributeMapInterface_SetStringAttribute_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ConZ.AttributeMapInterface.SetIntAttribute
struct UAttributeMapInterface_SetIntAttribute_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AttributeMapInterface.SetFloatAttribute
struct UAttributeMapInterface_SetFloatAttribute_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AttributeMapInterface.SetBoolAttribute
struct UAttributeMapInterface_SetBoolAttribute_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AttributeMapInterface.HasAttribute
struct UAttributeMapInterface_HasAttribute_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AttributeMapInterface.GetStringAttribute
struct UAttributeMapInterface_GetStringAttribute_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.AttributeMapInterface.GetIntAttribute
struct UAttributeMapInterface_GetIntAttribute_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AttributeMapInterface.GetFloatAttribute
struct UAttributeMapInterface_GetFloatAttribute_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AttributeMapInterface.GetBoolAttribute
struct UAttributeMapInterface_GetBoolAttribute_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AttributesGraph.UpdateNumOfPointsToTrack
struct UAttributesGraph_UpdateNumOfPointsToTrack_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AttributesGraph.UpdateGraph
struct UAttributesGraph_UpdateGraph_Params
{
};

// Function ConZ.AttributesGraph.SetPrisonerLifeComponent
struct UAttributesGraph_SetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      Value;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.AttributesGraph.GetPrisonerLifeComponent
struct UAttributesGraph_GetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetMovementPaceSwitchValue
struct UAudioStatics_GetMovementPaceSwitchValue_Params
{
	EPrisonerMovementPace                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetMovementPaceSwitchName
struct UAudioStatics_GetMovementPaceSwitchName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetMotionIntensitySwitchValue
struct UAudioStatics_GetMotionIntensitySwitchValue_Params
{
	EMotionIntensity                                   Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetMotionIntensitySwitchName
struct UAudioStatics_GetMotionIntensitySwitchName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetMaterialSwitchValue
struct UAudioStatics_GetMaterialSwitchValue_Params
{
	TEnumAsByte<EPhysicalSurface>                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetMaterialSwitchName
struct UAudioStatics_GetMaterialSwitchName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetImpactSeveritySwitchValue
struct UAudioStatics_GetImpactSeveritySwitchValue_Params
{
	EImpactSeverity                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetImpactSeveritySwitchName
struct UAudioStatics_GetImpactSeveritySwitchName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetGenderSwitchValue
struct UAudioStatics_GetGenderSwitchValue_Params
{
	EGender                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetGenderSwitchName
struct UAudioStatics_GetGenderSwitchName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetEnvironmentSwitchValue
struct UAudioStatics_GetEnvironmentSwitchValue_Params
{
	EEnvironmentClass                                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetEnvironmentSwitchName
struct UAudioStatics_GetEnvironmentSwitchName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetCharacterPainSeveritySwitchValue
struct UAudioStatics_GetCharacterPainSeveritySwitchValue_Params
{
	ECharacterPainSoundSeverity                        Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AudioStatics.GetCharacterPainSeveritySwitchName
struct UAudioStatics_GetCharacterPainSeveritySwitchName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AwarenessSkill.EnterFocusMode
struct UAwarenessSkill_EnterFocusMode_Params
{
};

// Function ConZ.BaseItemContainerWidget.RefreshSize
struct UBaseItemContainerWidget_RefreshSize_Params
{
};

// DelegateFunction ConZ.BaseItemContainerWidget.OnObjectAddedToContainerEvent__DelegateSignature
struct UBaseItemContainerWidget_OnObjectAddedToContainerEvent__DelegateSignature_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.BaseItemContainerWidget.OnDropEvent
struct UBaseItemContainerWidget_OnDropEvent_Params
{
	class UInventorySlotUserWidget*                    inventorySlot;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBaseItemWidget*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.BaseItemContainerWidget.OnDragStartEvent
struct UBaseItemContainerWidget_OnDragStartEvent_Params
{
	class UBaseItemWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.BaseItemContainerWidget.OnDragLeaveEvent
struct UBaseItemContainerWidget_OnDragLeaveEvent_Params
{
	class UInventorySlotUserWidget*                    inventorySlot;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBaseItemWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.BaseItemContainerWidget.OnDragEnterEvent
struct UBaseItemContainerWidget_OnDragEnterEvent_Params
{
	class UInventorySlotUserWidget*                    inventorySlot;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBaseItemWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.BaseItemContainerWidget.OnDragCancelledEvent
struct UBaseItemContainerWidget_OnDragCancelledEvent_Params
{
	class UBaseItemWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.BaseItemContainerWidget.InitGrid
struct UBaseItemContainerWidget_InitGrid_Params
{
	struct FMargin                                     gridPadding;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.BaseItemContainerWidget.GetSlotsForPanel
struct UBaseItemContainerWidget_GetSlotsForPanel_Params
{
	class UGridSlot*                                   GridSlot;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UInventorySlotUserWidget*>            Slots;                                                    // (Parm, OutParm, ZeroConstructor)
	class UGridPanel*                                  panel;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                numColumns;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numRows;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.BaseItemContainerWidget.GetSlots
struct UBaseItemContainerWidget_GetSlots_Params
{
	class UGridSlot*                                   GridSlot;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UInventorySlotUserWidget*>            Slots;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.BaseItemContainerWidget.GetItemWidgets
struct UBaseItemContainerWidget_GetItemWidgets_Params
{
	TArray<class UItemUserWidget*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.BaseItemWidget.SetStacksCount
struct UBaseItemWidget_SetStacksCount_Params
{
	int                                                count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.BaseItemWidget.GetStacksCount
struct UBaseItemWidget_GetStacksCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.BaseItemWidget.GetDragImage
struct UBaseItemWidget_GetDragImage_Params
{
	struct FGeometry                                   Geometry;                                                 // (Parm, IsPlainOldData)
	class UInventorySlotUserWidget*                    widgetImage;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.BaseItemWidget.DragCancelled
struct UBaseItemWidget_DragCancelled_Params
{
};

// Function ConZ.Bear.PlayAttackMontageOnClients
struct ABear_PlayAttackMontageOnClients_Params
{
};

// Function ConZ.Bear.OnRep_Scale
struct ABear_OnRep_Scale_Params
{
};

// Function ConZ.Bird.Kill
struct ABird_Kill_Params
{
};

// Function ConZ.Bird.GoToRagdoll
struct ABird_GoToRagdoll_Params
{
};

// Function ConZ.Bird2.OnRep_States
struct ABird2_OnRep_States_Params
{
};

// Function ConZ.Bird2.GetIsTakingOff
struct ABird2_GetIsTakingOff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Bird2.GetIsStaringPerched
struct ABird2_GetIsStaringPerched_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Bird2.GetIsPerched
struct ABird2_GetIsPerched_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Bird2.GetIsLanding
struct ABird2_GetIsLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Bird2.GetIsFlying
struct ABird2_GetIsFlying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Bird2.CapsuleComponent_OnComponentHit
struct ABird2_CapsuleComponent_OnComponentHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Bird2AIController.UpdatePerception
struct ABird2AIController_UpdatePerception_Params
{
	TArray<class AActor*>                              actorsPercepted;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.BloodOxygenationWidget.SetPrisonerLifeComponent
struct UBloodOxygenationWidget_SetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      Value;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.BloodOxygenationWidget.GetPrisonerLifeComponent
struct UBloodOxygenationWidget_GetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.BloodOxygenationWidget.GetMinOxygenSaturation
struct UBloodOxygenationWidget_GetMinOxygenSaturation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.BloodOxygenationWidget.GetMaxOxygenSaturation
struct UBloodOxygenationWidget_GetMaxOxygenSaturation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.BloodPressureWidget.SetPrisonerLifeComponent
struct UBloodPressureWidget_SetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      Value;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.BloodPressureWidget.GetPrisonerLifeComponent
struct UBloodPressureWidget_GetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.BodyTemperatureWidget.SetPrisonerLifeComponent
struct UBodyTemperatureWidget_SetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      Value;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.BodyTemperatureWidget.GetPrisonerLifeComponent
struct UBodyTemperatureWidget_GetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.BodyTemperatureWidget.GetMinTemperature
struct UBodyTemperatureWidget_GetMinTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.BodyTemperatureWidget.GetMaxTemperature
struct UBodyTemperatureWidget_GetMaxTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetWalkingIdleAnimationTP
struct UMeleeSkill_GetWalkingIdleAnimationTP_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetWalkingIdleAnimationFP
struct UMeleeSkill_GetWalkingIdleAnimationFP_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetTiredIdleAnimationTP
struct UMeleeSkill_GetTiredIdleAnimationTP_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetTiredIdleAnimationFP
struct UMeleeSkill_GetTiredIdleAnimationFP_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetStaminaMultiplier
struct UMeleeSkill_GetStaminaMultiplier_Params
{
	float                                              excessGearWeight;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetPrimaryIdleAnimationTP
struct UMeleeSkill_GetPrimaryIdleAnimationTP_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetPrimaryIdleAnimationFP
struct UMeleeSkill_GetPrimaryIdleAnimationFP_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetLeaveCombatModeMontage
struct UMeleeSkill_GetLeaveCombatModeMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetInactivityIdleAnimations
struct UMeleeSkill_GetInactivityIdleAnimations_Params
{
	TArray<class UAnimSequenceBase*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.MeleeSkill.GetIdleToBlockBlendDuration
struct UMeleeSkill_GetIdleToBlockBlendDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetEnterCombatModeMontage
struct UMeleeSkill_GetEnterCombatModeMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetBlockToIdleBlendDuration
struct UMeleeSkill_GetBlockToIdleBlendDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetBlockIdleAnimationTP
struct UMeleeSkill_GetBlockIdleAnimationTP_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetBlockIdleAnimationFP
struct UMeleeSkill_GetBlockIdleAnimationFP_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetAimOffsetBlendSpaceTP
struct UMeleeSkill_GetAimOffsetBlendSpaceTP_Params
{
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeSkill.GetAimOffsetBlendSpaceFP
struct UMeleeSkill_GetAimOffsetBlendSpaceFP_Params
{
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.BruisingComponent.MakeCompletelyBruised
struct UBruisingComponent_MakeCompletelyBruised_Params
{
};

// Function ConZ.BruisingComponent.GetBruiseLayerRenderTarget
struct UBruisingComponent_GetBruiseLayerRenderTarget_Params
{
	EBruiseLayer                                       Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.BruisingComponent.ClearBruises
struct UBruisingComponent_ClearBruises_Params
{
};

// Function ConZ.BruisingComponent.AddBruise
struct UBruisingComponent_AddBruise_Params
{
	EBruiseZone                                        zone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CamouflageSkill.GetHidePenaltyForCharacter
struct UCamouflageSkill_GetHidePenaltyForCharacter_Params
{
	class AConZCharacter*                              Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.OnRep_ItemOpened
struct AFoodItem_OnRep_ItemOpened_Params
{
};

// Function ConZ.FoodItem.GetVolume
struct AFoodItem_GetVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CookedFoodItem.UpdateCookingIndicatorOnClients
struct ACookedFoodItem_UpdateCookingIndicatorOnClients_Params
{
	float                                              cookedMinutes;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              cookingMinutes;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CargoDropContainer.OnWarning
struct ACargoDropContainer_OnWarning_Params
{
};

// Function ConZ.CargoDropContainer.OnTouchdown
struct ACargoDropContainer_OnTouchdown_Params
{
};

// Function ConZ.CargoDropContainer.OnRep_FlareParticlesEnabled
struct ACargoDropContainer_OnRep_FlareParticlesEnabled_Params
{
};

// Function ConZ.CargoDropContainer.OnDetonate
struct ACargoDropContainer_OnDetonate_Params
{
};

// Function ConZ.CargoDropContainer.Multicast_StartDetonation
struct ACargoDropContainer_Multicast_StartDetonation_Params
{
};

// Function ConZ.CargoDropContainer.Multicast_Detonate
struct ACargoDropContainer_Multicast_Detonate_Params
{
};

// Function ConZ.CargoDropContainer.DropToLocation
struct ACargoDropContainer_DropToLocation_Params
{
	struct FVector                                     EndLocation;                                              // (Parm, IsPlainOldData)
	float                                              fallingTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CargoDropContainer.DropDownward
struct ACargoDropContainer_DropDownward_Params
{
	float                                              fallingTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WorldEvent.WorldEventNotification
struct AWorldEvent_WorldEventNotification_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ConZ.WorldEvent.StartEvent
struct AWorldEvent_StartEvent_Params
{
};

// Function ConZ.WorldEvent.OnRep_LocationName
struct AWorldEvent_OnRep_LocationName_Params
{
};

// Function ConZ.Weapon.UpdateReloadData
struct AWeapon_UpdateReloadData_Params
{
	struct FWeaponReloadData                           reloadDataIn;                                             // (Parm, OutParm, ReferenceParm)
	struct FWeaponReloadData                           reloadDataOut;                                            // (Parm, OutParm)
};

// Function ConZ.Weapon.StopFiringEffects
struct AWeapon_StopFiringEffects_Params
{
};

// Function ConZ.Weapon.StopFireOnServer
struct AWeapon_StopFireOnServer_Params
{
};

// Function ConZ.Weapon.StopFire
struct AWeapon_StopFire_Params
{
};

// Function ConZ.Weapon.StartFireOnServer
struct AWeapon_StartFireOnServer_Params
{
};

// Function ConZ.Weapon.StartFire
struct AWeapon_StartFire_Params
{
};

// Function ConZ.Weapon.ShouldPlayChamberOpenedIdle
struct AWeapon_ShouldPlayChamberOpenedIdle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.SetZeroRangeOnServer
struct AWeapon_SetZeroRangeOnServer_Params
{
	int                                                zeroRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.SetUseMuzzleDirectionForShooting
struct AWeapon_SetUseMuzzleDirectionForShooting_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.SetShouldPlayChamberOpenedIdle
struct AWeapon_SetShouldPlayChamberOpenedIdle_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.SetIsChambering
struct AWeapon_SetIsChambering_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.SetFiringModeOnServer
struct AWeapon_SetFiringModeOnServer_Params
{
	EWeaponFiringMode                                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.SetFiringMode
struct AWeapon_SetFiringMode_Params
{
	EWeaponFiringMode                                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.Server_SwapAttachments
struct AWeapon_Server_SwapAttachments_Params
{
	class AWeaponAttachment*                           oldAttachment;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           newAttachment;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.Server_InsertCartridgeIntoWeapon
struct AWeapon_Server_InsertCartridgeIntoWeapon_Params
{
	class AAmmunitionItem*                             ammo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.RemoveAttachmentOnServer
struct AWeapon_RemoveAttachmentOnServer_Params
{
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.RemoveAttachmentLocal
struct AWeapon_RemoveAttachmentLocal_Params
{
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.RemoveAttachment
struct AWeapon_RemoveAttachment_Params
{
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.PlayFiringEffects
struct AWeapon_PlayFiringEffects_Params
{
	bool                                               isLastShot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.OnShotFired
struct AWeapon_OnShotFired_Params
{
	bool                                               isLastShot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.OnRep_WeaponAttachmentsReplicated
struct AWeapon_OnRep_WeaponAttachmentsReplicated_Params
{
};

// Function ConZ.Weapon.OnRep_FireShotCounterEffectsSync
struct AWeapon_OnRep_FireShotCounterEffectsSync_Params
{
};

// Function ConZ.Weapon.OnChamberOpened
struct AWeapon_OnChamberOpened_Params
{
};

// Function ConZ.Weapon.OnChamberClosed
struct AWeapon_OnChamberClosed_Params
{
};

// Function ConZ.Weapon.NotifyMissOnServer
struct AWeapon_NotifyMissOnServer_Params
{
	struct FVector_NetQuantizeNormal                   shootDirection;                                           // (Parm)
	int                                                randomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              reticleSpread;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.NotifyHitOnServer
struct AWeapon_NotifyHitOnServer_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   shootDirection;                                           // (Parm)
	int                                                randomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              reticleSpread;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.NetMulticast_StopFire
struct AWeapon_NetMulticast_StopFire_Params
{
};

// Function ConZ.Weapon.NetMulticast_StartFire
struct AWeapon_NetMulticast_StartFire_Params
{
};

// Function ConZ.Weapon.IsInGameEvent
struct AWeapon_IsInGameEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.IsFiring
struct AWeapon_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.IsChamberOpened
struct AWeapon_IsChamberOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.IsAmmoCompatible
struct AWeapon_IsAmmoCompatible_Params
{
	class UClass*                                      projectileClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.IncrementZeroRange
struct AWeapon_IncrementZeroRange_Params
{
};

// Function ConZ.Weapon.GetZeroRange
struct AWeapon_GetZeroRange_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetWeaponOwner
struct AWeapon_GetWeaponOwner_Params
{
	class APrisoner*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetUseMuzzleDirectionForShooting
struct AWeapon_GetUseMuzzleDirectionForShooting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetUsedAmmoCount
struct AWeapon_GetUsedAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetSpread
struct AWeapon_GetSpread_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetReloadActionSequenceForData
struct AWeapon_GetReloadActionSequenceForData_Params
{
	struct FWeaponReloadData                           reloadData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWeaponActionReloadSequence*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Weapon.GetMuzzleLocation
struct AWeapon_GetMuzzleLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetMuzzleDirection
struct AWeapon_GetMuzzleDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetMagazine
struct AWeapon_GetMagazine_Params
{
	class AWeaponAttachmentMagazine*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetLoadedAmmoCount
struct AWeapon_GetLoadedAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetIsChambering
struct AWeapon_GetIsChambering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetInternalMagazineSpace
struct AWeapon_GetInternalMagazineSpace_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetInternalMagazineAmmoCount
struct AWeapon_GetInternalMagazineAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetFiringMode
struct AWeapon_GetFiringMode_Params
{
	EWeaponFiringMode                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetAmmoReloadCapacity
struct AWeapon_GetAmmoReloadCapacity_Params
{
	class AAmmunitionItem*                             ammo;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.GetAmmoCount
struct AWeapon_GetAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.FireShotProjectileOnServer
struct AWeapon_FireShotProjectileOnServer_Params
{
	struct FVector                                     startLocation;                                            // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   shootDirection;                                           // (ConstParm, Parm, ReferenceParm)
	int                                                zeroRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              windage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                randomFactor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ConeHalfAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.FireShot
struct AWeapon_FireShot_Params
{
};

// Function ConZ.Weapon.FindReloadData
struct AWeapon_FindReloadData_Params
{
	TArray<class AItem*>                               Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FWeaponReloadData                           reloadData;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.FillUpWithAmmo
struct AWeapon_FillUpWithAmmo_Params
{
};

// Function ConZ.Weapon.DecrementZeroRange
struct AWeapon_DecrementZeroRange_Params
{
};

// Function ConZ.Weapon.Client_SetupForEvent
struct AWeapon_Client_SetupForEvent_Params
{
};

// Function ConZ.Weapon.Client_SetLoadedVariables
struct AWeapon_Client_SetLoadedVariables_Params
{
	int                                                zeroRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                loadedAmmoCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                internalMagazineAmmoCount;                                // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponFiringMode                                  firingMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.CanReloadUsingData
struct AWeapon_CanReloadUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Weapon.CancelFire
struct AWeapon_CancelFire_Params
{
};

// DelegateFunction ConZ.Weapon.AttachmentRemovedSignature__DelegateSignature
struct AWeapon_AttachmentRemovedSignature__DelegateSignature_Params
{
	class AWeapon*                                     sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.Weapon.AttachmentAddedSignature__DelegateSignature
struct AWeapon_AttachmentAddedSignature__DelegateSignature_Params
{
	class AWeapon*                                     sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.AddAttachmentOnServer
struct AWeapon_AddAttachmentOnServer_Params
{
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.AddAttachmentLocal
struct AWeapon_AddAttachmentLocal_Params
{
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.AddAttachment
struct AWeapon_AddAttachment_Params
{
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Weapon.AddAmmo
struct AWeapon_AddAmmo_Params
{
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAction.RemoveAttachmentFromWeapon
struct UWeaponAction_RemoveAttachmentFromWeapon_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAction.OnActionAnimNotify
struct UWeaponAction_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType                         notifyType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAction.InsertCartridgeIntoWeapon
struct UWeaponAction_InsertCartridgeIntoWeapon_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AAmmunitionItem*                             ammo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAction.GetWeapon
struct UWeaponAction_GetWeapon_Params
{
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAction.AddAttachmentToWeapon
struct UWeaponAction_AddAttachmentToWeapon_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.SetNextMontageSectionFromPrevious
struct UWeaponActionReloadSequence_SetNextMontageSectionFromPrevious_Params
{
	struct FName                                       previousSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextSection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.SetNextMontageSection
struct UWeaponActionReloadSequence_SetNextMontageSection_Params
{
	struct FName                                       NextSection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.OnMontageEnded
struct UWeaponActionReloadSequence_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.OnMontageBlendingOutStarted
struct UWeaponActionReloadSequence_OnMontageBlendingOutStarted_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.GetReloadData
struct UWeaponActionReloadSequence_GetReloadData_Params
{
	struct FWeaponReloadData                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.WeaponActionReloadSequence.GetActiveAnimationWeapon
struct UWeaponActionReloadSequence_GetActiveAnimationWeapon_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.GetActiveAnimationBody
struct UWeaponActionReloadSequence_GetActiveAnimationBody_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.ExecuteUsingData
struct UWeaponActionReloadSequence_ExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.End
struct UWeaponActionReloadSequence_End_Params
{
	bool                                               Regular;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.CanInterrupt
struct UWeaponActionReloadSequence_CanInterrupt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.CanExecuteUsingData
struct UWeaponActionReloadSequence_CanExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CharacterAction.PlayMontage
struct UCharacterAction_PlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       startSection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CharacterAction.OnProgressWidgetFinished
struct UCharacterAction_OnProgressWidgetFinished_Params
{
};

// Function ConZ.CharacterAction.OnProgressWidgetCanceled
struct UCharacterAction_OnProgressWidgetCanceled_Params
{
};

// Function ConZ.CharacterAction.OnPreActionEnd
struct UCharacterAction_OnPreActionEnd_Params
{
	class UCharacterAction*                            action;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.CharacterAction.OnMontageEnded
struct UCharacterAction_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CharacterAction.OnMontageBlendingOutStarted
struct UCharacterAction_OnMontageBlendingOutStarted_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CharacterCreationWidget.StartGame
struct UCharacterCreationWidget_StartGame_Params
{
};

// Function ConZ.CharacterCreationWidget.ShowErrorDialog
struct UCharacterCreationWidget_ShowErrorDialog_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.CharacterCreationWidget.SendKeepServerConnectionAliveRequest
struct UCharacterCreationWidget_SendKeepServerConnectionAliveRequest_Params
{
};

// Function ConZ.CharacterCreationWidget.OnUserProfileCreated
struct UCharacterCreationWidget_OnUserProfileCreated_Params
{
};

// Function ConZ.CharacterCreationWidget.GetRandomValuesInRangeAddingUpTo
struct UCharacterCreationWidget_GetRandomValuesInRangeAddingUpTo_Params
{
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sum;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.CharacterCreationWidget.GetRandomizedSkillValuesFloat
struct UCharacterCreationWidget_GetRandomizedSkillValuesFloat_Params
{
	float                                              Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              usedPoints;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.CharacterCreationWidget.GetRandomizedSkillValues
struct UCharacterCreationWidget_GetRandomizedSkillValues_Params
{
	int                                                Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.CharacterCreationWidget.GetRandomBirthdayForAge
struct UCharacterCreationWidget_GetRandomBirthdayForAge_Params
{
	int                                                Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.CharacterCreationWidget.GetAgeModifiersFromAge
struct UCharacterCreationWidget_GetAgeModifiersFromAge_Params
{
	int                                                Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.CharacterCreationWidget.EndWaitingOnServerResponse
struct UCharacterCreationWidget_EndWaitingOnServerResponse_Params
{
};

// Function ConZ.CharacterCreationWidget.CreateUserProfile
struct UCharacterCreationWidget_CreateUserProfile_Params
{
	struct FCharacterTemplate                          CharacterTemplate;                                        // (Parm, OutParm, ReferenceParm)
};

// Function ConZ.CharacterCreationWidget.CancelWaitingOnServerResponse
struct UCharacterCreationWidget_CancelWaitingOnServerResponse_Params
{
};

// Function ConZ.CharacterCreationWidget.BeginWaitingOnServerResponse
struct UCharacterCreationWidget_BeginWaitingOnServerResponse_Params
{
};

// Function ConZ.CharacterSelectionWidget.DeleteCharacter
struct UCharacterSelectionWidget_DeleteCharacter_Params
{
	class UDbUserProfile*                              userProfile;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CharacterStatsManager.SetStats
struct UCharacterStatsManager_SetStats_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	struct FCharacterStats                             stats;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.CharacterStatsManager.SetFame
struct UCharacterStatsManager_SetFame_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	float                                              FamePoints;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FameLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CharacterStatsManager.RecalculateFameLevel
struct UCharacterStatsManager_RecalculateFameLevel_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
};

// Function ConZ.CharacterStatsManager.HasStats
struct UCharacterStatsManager_HasStats_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CharacterStatsManager.GetStatsList
struct UCharacterStatsManager_GetStatsList_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	int                                                count;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterStatsSorting                             sort;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               descending;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterStatsItem>                 stats;                                                    // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CharacterStatsManager.GetStats
struct UCharacterStatsManager_GetStats_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	struct FCharacterStats                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.CharacterStatsManager.GetPlayerName
struct UCharacterStatsManager_GetPlayerName_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.CharacterStatsManager.GetFamePoints
struct UCharacterStatsManager_GetFamePoints_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CharacterStatsManager.GetFameLevel
struct UCharacterStatsManager_GetFameLevel_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CharacterStatsManager.AdjustFamePoints
struct UCharacterStatsManager_AdjustFamePoints_Params
{
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	float                                              amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ChatWidget.SetChatType
struct UChatWidget_SetChatType_Params
{
	EChatType                                          chatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ChatWidget.OnTextCommitted
struct UChatWidget_OnTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ChatWidget.OnTextChanged
struct UChatWidget_OnTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.ChatWidget.GetChatType
struct UChatWidget_GetChatType_Params
{
	EChatType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ChatWidget.AddText
struct UChatWidget_AddText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	EChatType                                          chatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionAction.OnActionFinished
struct UInteractionAction_OnActionFinished_Params
{
};

// Function ConZ.InteractionAction.OnActionCanceled
struct UInteractionAction_OnActionCanceled_Params
{
};

// Function ConZ.CircularMenuSegmentInteractionInfo.CreateSpecific
struct UCircularMenuSegmentInteractionInfo_CreateSpecific_Params
{
	class APrisoner*                                   initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractionStruct                          InteractionStruct;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class UCircularMenuSegmentInteractionInfo*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CircularMenuSegmentInteractionInfo.Create
struct UCircularMenuSegmentInteractionInfo_Create_Params
{
	EInteractionTargetType                             interactionTarget;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractionStruct                          InteractionStruct;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class UCircularMenuSegmentInteractionInfo*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CircularMenuSegmentWidget.UpdateVisualParameters
struct UCircularMenuSegmentWidget_UpdateVisualParameters_Params
{
	int                                                numberOfSegments;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              middleCutoffPercentage;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CircularMenuSegmentWidget.CreateFromInfo
struct UCircularMenuSegmentWidget_CreateFromInfo_Params
{
	class UCircularMenuSegmentInfo*                    Info;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UCircularMenuSegmentWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.CircularMenuWidget.InitializeLayer
struct UCircularMenuWidget_InitializeLayer_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UCircularMenuSegmentInfo*>            SegmentInfo;                                              // (Parm, ZeroConstructor)
	int                                                countParameterOverride;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CircularMenuWidget.GetSegmentIdForCoordinatesAndLayer
struct UCircularMenuWidget_GetSegmentIdForCoordinatesAndLayer_Params
{
	struct FVector2D                                   Coordinates;                                              // (Parm, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CircularMenuWidget.GetSegmentIdForCoordinates
struct UCircularMenuWidget_GetSegmentIdForCoordinates_Params
{
	struct FVector2D                                   Coordinates;                                              // (Parm, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CircularMenuWidget.Create
struct UCircularMenuWidget_Create_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UCircularMenuSegmentInfo*>            SegmentInfo;                                              // (Parm, ZeroConstructor)
	class UCircularMenuWidget*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.CircularParameterWidget.SetMaxValue
struct UCircularParameterWidget_SetMaxValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CircularParameterWidget.SetCurrentValue
struct UCircularParameterWidget_SetCurrentValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CircularParameterWidget.GetPercentage
struct UCircularParameterWidget_GetPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CircularParameterWidget.GetMaxValue
struct UCircularParameterWidget_GetMaxValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CircularParameterWidget.GetCurrentValue
struct UCircularParameterWidget_GetCurrentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ClockFaceWidget.SetTime
struct UClockFaceWidget_SetTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ClockFaceWidget.SetMinutes
struct UClockFaceWidget_SetMinutes_Params
{
	int                                                Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ClockFaceWidget.SetHours
struct UClockFaceWidget_SetHours_Params
{
	int                                                Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ClothesItem.UpdateMaterialParamsOnClients
struct AClothesItem_UpdateMaterialParamsOnClients_Params
{
};

// Function ConZ.ClothesItem.SetDirtiness
struct AClothesItem_SetDirtiness_Params
{
	float                                              dirtiness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ClothesItem.OnRep_Dirtiness
struct AClothesItem_OnRep_Dirtiness_Params
{
};

// Function ConZ.ClothesItem.GetWarmth
struct AClothesItem_GetWarmth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ClothesItem.GetCapacityY
struct AClothesItem_GetCapacityY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ClothesItem.GetCapacityX
struct AClothesItem_GetCapacityX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CombinedInventoryWidget.SetSavedLayoutMinimizedPartial
struct UCombinedInventoryWidget_SetSavedLayoutMinimizedPartial_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CombinedInventoryWidget.SetSavedLayoutMinimizedFull
struct UCombinedInventoryWidget_SetSavedLayoutMinimizedFull_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CombinedInventoryWidget.SetNeedLayoutLoading
struct UCombinedInventoryWidget_SetNeedLayoutLoading_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CombinedInventoryWidget.ResizeExtraSlots
struct UCombinedInventoryWidget_ResizeExtraSlots_Params
{
};

// Function ConZ.CombinedInventoryWidget.OnItemContainerClicked
struct UCombinedInventoryWidget_OnItemContainerClicked_Params
{
	class UItemUserWidget*                             ItemWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.CombinedInventoryWidget.GetChildWidgetByName
struct UCombinedInventoryWidget_GetChildWidgetByName_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.CombinedInventoryWidget.DeferredLoadLayout
struct UCombinedInventoryWidget_DeferredLoadLayout_Params
{
};

// Function ConZ.CombinedInventoryWidget.ChangeActiveInventory
struct UCombinedInventoryWidget_ChangeActiveInventory_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CombinedInventoryWidget.AddContainerWidgetFromItem
struct UCombinedInventoryWidget_AddContainerWidgetFromItem_Params
{
	class AClothesItem*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCondensedInventoryContainer                container;                                                // (Parm, OutParm)
};

// Function ConZ.CombinedInventoryWidget.AddContainerWidget
struct UCombinedInventoryWidget_AddContainerWidget_Params
{
	class UGenericItemContainerWidget*                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.Wait
struct AComplexAnimal2_Wait_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.TurnTowardLocation
struct AComplexAnimal2_TurnTowardLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.TurnTowardActor
struct AComplexAnimal2_TurnTowardActor_Params
{
	class AActor*                                      foe;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.TurnAwayFromActor
struct AComplexAnimal2_TurnAwayFromActor_Params
{
	class AActor*                                      foe;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.Turn
struct AComplexAnimal2_Turn_Params
{
	bool                                               directionLeft;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.StopAction_Multicast
struct AComplexAnimal2_StopAction_Multicast_Params
{
};

// Function ConZ.ComplexAnimal2.StartAction_Multicast
struct AComplexAnimal2_StartAction_Multicast_Params
{
	struct FRepActionData                              newAction;                                                // (Parm)
};

// Function ConZ.ComplexAnimal2.Sit
struct AComplexAnimal2_Sit_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.Rest
struct AComplexAnimal2_Rest_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.ResetRotationRate
struct AComplexAnimal2_ResetRotationRate_Params
{
};

// Function ConZ.ComplexAnimal2.PreformChargeAttack
struct AComplexAnimal2_PreformChargeAttack_Params
{
	int                                                attackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.OnRep_HungerAndEnergy
struct AComplexAnimal2_OnRep_HungerAndEnergy_Params
{
};

// Function ConZ.ComplexAnimal2.OnRep_ActionData
struct AComplexAnimal2_OnRep_ActionData_Params
{
};

// Function ConZ.ComplexAnimal2.Intimidate
struct AComplexAnimal2_Intimidate_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      foe;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.GetSpeed
struct AComplexAnimal2_GetSpeed_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.GetAngularVelocity
struct AComplexAnimal2_GetAngularVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.ForceRoattionRate
struct AComplexAnimal2_ForceRoattionRate_Params
{
	struct FRotator                                    RotationRate;                                             // (Parm, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.Eat
struct AComplexAnimal2_Eat_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.ChargeAttackFoe
struct AComplexAnimal2_ChargeAttackFoe_Params
{
	class AActor*                                      foe;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.ChangeSpeed
struct AComplexAnimal2_ChangeSpeed_Params
{
	float                                              pace;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.ChangePace
struct AComplexAnimal2_ChangePace_Params
{
	EAnimalMovementPace                                pace;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ComplexAnimal2.Alert
struct AComplexAnimal2_Alert_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.SetHasPendingChanges
struct UConsoleHelpers_SetHasPendingChanges_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.SetGraphicsPreset
struct UConsoleHelpers_SetGraphicsPreset_Params
{
	int                                                Preset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.SetConfigVar
struct UConsoleHelpers_SetConfigVar_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
};

// Function ConZ.ConsoleHelpers.RevertConfig
struct UConsoleHelpers_RevertConfig_Params
{
};

// Function ConZ.ConsoleHelpers.IsPushToTalkEnabled
struct UConsoleHelpers_IsPushToTalkEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.GetInvertMouseY
struct UConsoleHelpers_GetInvertMouseY_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.GetHasPendingChanges
struct UConsoleHelpers_GetHasPendingChanges_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.GetConfigVar
struct UConsoleHelpers_GetConfigVar_Params
{
	EConfigFile                                        file;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.ConsoleHelpers.GetConfigString
struct UConsoleHelpers_GetConfigString_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.ConsoleHelpers.GetConfigInt
struct UConsoleHelpers_GetConfigInt_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.GetConfigFloat
struct UConsoleHelpers_GetConfigFloat_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.GetConfigBool
struct UConsoleHelpers_GetConfigBool_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.ApplyDynamicShadowsQuality
struct UConsoleHelpers_ApplyDynamicShadowsQuality_Params
{
	class UWorld*                                      worldToApplyFor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConsoleHelpers.ApplyConfig
struct UConsoleHelpers_ApplyConfig_Params
{
};

// Function ConZ.ElectricalDevice.OnRep_IsWorking
struct AElectricalDevice_OnRep_IsWorking_Params
{
};

// Function ConZ.ElectricalDevice.OnRep_HasPower
struct AElectricalDevice_OnRep_HasPower_Params
{
};

// Function ConZ.ElectricalDevice.IsWorking
struct AElectricalDevice_IsWorking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ElectricalDevice.HasPower
struct AElectricalDevice_HasPower_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZBlueprintFunctionLibrary.ChangeLocalization
struct UConZBlueprintFunctionLibrary_ChangeLocalization_Params
{
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
};

// Function ConZ.ConZGameInstance.StartSingleplayerGame
struct UConZGameInstance_StartSingleplayerGame_Params
{
};

// Function ConZ.ConZGameInstance.StartMultiplayerGame
struct UConZGameInstance_StartMultiplayerGame_Params
{
	struct FString                                     Ip;                                                       // (Parm, ZeroConstructor)
	int                                                GameplayPort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     authToken;                                                // (Parm, ZeroConstructor)
};

// Function ConZ.ConZGameInstance.SetCurrentUserProfile
struct UConZGameInstance_SetCurrentUserProfile_Params
{
	class UDbUserProfile*                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZGameInstance.RemoveLoadingWidget
struct UConZGameInstance_RemoveLoadingWidget_Params
{
};

// Function ConZ.ConZGameInstance.OnPreLoadMap
struct UConZGameInstance_OnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function ConZ.ConZGameInstance.OnPostLoadMap
struct UConZGameInstance_OnPostLoadMap_Params
{
	class UWorld*                                      loadedWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZGameInstance.OnPlaySessionEnd
struct UConZGameInstance_OnPlaySessionEnd_Params
{
	bool                                               quit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZGameInstance.IsTransitioningMap
struct UConZGameInstance_IsTransitioningMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameInstance.HandleNetworkFailure
struct UConZGameInstance_HandleNetworkFailure_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetworkFailure>                       FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function ConZ.ConZGameInstance.GetServerRequest
struct UConZGameInstance_GetServerRequest_Params
{
	class UDedicatedServerRequest*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameInstance.GetPrimaryDatabaseConnection
struct UConZGameInstance_GetPrimaryDatabaseConnection_Params
{
	class UDbConnection*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameInstance.GetLastNetworkError
struct UConZGameInstance_GetLastNetworkError_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.ConZGameInstance.GetCurrentUserProfile
struct UConZGameInstance_GetCurrentUserProfile_Params
{
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameInstance.GetCurrentUser
struct UConZGameInstance_GetCurrentUser_Params
{
	class UDbUser*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameInstance.AddLoadingWidget
struct UConZGameInstance_AddLoadingWidget_Params
{
	class ULoadingScreen*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.ConZGameInstance.AddDefaultLoadingWidget
struct UConZGameInstance_AddDefaultLoadingWidget_Params
{
};

// Function ConZ.ConZGameMode.SendHUDMessageToAll
struct AConZGameMode_SendHUDMessageToAll_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               beep;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZGameMode.KickPlayer
struct AConZGameMode_KickPlayer_Params
{
	class APrisonerPlayerController*                   Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KickReason;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameMode.GetItemSpawningManager
struct AConZGameMode_GetItemSpawningManager_Params
{
	class AItemSpawningManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameMode.GetGlobalBirdSpawner
struct AConZGameMode_GetGlobalBirdSpawner_Params
{
	class AGlobalBirdSpawner2*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameMode.GetGlobalAnimalSpawner
struct AConZGameMode_GetGlobalAnimalSpawner_Params
{
	class AGlobalAnimalSpawner*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameMode.GetCharacterStatsManager
struct AConZGameMode_GetCharacterStatsManager_Params
{
	class UCharacterStatsManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameState.SendServerTime
struct AConZGameState_SendServerTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZGameState.RemoveMemberFromTeam
struct AConZGameState_RemoveMemberFromTeam_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AConZTeam*                                   Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZGameState.RemoveMemberFromAllTeams
struct AConZGameState_RemoveMemberFromAllTeams_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZGameState.OnRep_Teams
struct AConZGameState_OnRep_Teams_Params
{
};

// Function ConZ.ConZGameState.IsMemberOfTeam
struct AConZGameState_IsMemberOfTeam_Params
{
	class APrisoner*                                   Prisoner;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AConZTeam*                                   Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameState.GetTeams
struct AConZGameState_GetTeams_Params
{
	TArray<class AConZTeam*>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.ConZGameState.GetTeamForPrisoner
struct AConZGameState_GetTeamForPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AConZTeam*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameState.GetRegisteredPrisoners
struct AConZGameState_GetRegisteredPrisoners_Params
{
	TArray<class APrisoner*>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.ConZGameState.FindTeam
struct AConZGameState_FindTeam_Params
{
	struct FString                                     teamName;                                                 // (Parm, ZeroConstructor)
	class AConZTeam*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameState.CreateTeam
struct AConZGameState_CreateTeam_Params
{
	struct FString                                     teamName;                                                 // (Parm, ZeroConstructor)
	class AConZTeam*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZGameState.AddMemberToTeam
struct AConZGameState_AddMemberToTeam_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AConZTeam*                                   Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZTeam.RemoveMember
struct AConZTeam_RemoveMember_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ConZTeam.OnRep_Members
struct AConZTeam_OnRep_Members_Params
{
};

// Function ConZ.ConZTeam.HasMember
struct AConZTeam_HasMember_Params
{
	class APrisoner*                                   Prisoner;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ConZTeam.GetMembers
struct AConZTeam_GetMembers_Params
{
	TArray<class APrisoner*>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.ConZTeam.AddMember
struct AConZTeam_AddMember_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Corpse.OnRep_PoseData
struct ACorpse_OnRep_PoseData_Params
{
};

// Function ConZ.Corpse.OnRep_AtRest
struct ACorpse_OnRep_AtRest_Params
{
};

// Function ConZ.Corpse.CopyFromCharacter
struct ACorpse_CopyFromCharacter_Params
{
	class AConZCharacter*                              sourceCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Corpse.ApplyAttachements
struct ACorpse_ApplyAttachements_Params
{
};

// Function ConZ.CraftingAvailableItemWidget.SetOptionalState
struct UCraftingAvailableItemWidget_SetOptionalState_Params
{
	EOptionalState                                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingAvailableItemWidget.SetIsSelected
struct UCraftingAvailableItemWidget_SetIsSelected_Params
{
	bool                                               isSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingAvailableItemWidget.SetIsOptional
struct UCraftingAvailableItemWidget_SetIsOptional_Params
{
	bool                                               isOptional;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingAvailableItemWidget.IsAvailable
struct UCraftingAvailableItemWidget_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CraftingAvailableItemWidget.Init
struct UCraftingAvailableItemWidget_Init_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingAvailableItemWidget.GetOptionalState
struct UCraftingAvailableItemWidget_GetOptionalState_Params
{
	EOptionalState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CraftingAvailableItemWidget.GetIsSelected
struct UCraftingAvailableItemWidget_GetIsSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CraftingAvailableItemWidget.GetIsOptional
struct UCraftingAvailableItemWidget_GetIsOptional_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction ConZ.CraftingAvailableItemWidget.ClickedDelegate__DelegateSignature
struct UCraftingAvailableItemWidget_ClickedDelegate__DelegateSignature_Params
{
	class UCraftingAvailableItemWidget*                Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingComponentWidget.SetSatisfiedAndRequiredCount
struct UCraftingComponentWidget_SetSatisfiedAndRequiredCount_Params
{
	int                                                Satisfied;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Required;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingComponentWidget.SetRequiredCount
struct UCraftingComponentWidget_SetRequiredCount_Params
{
	int                                                count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingComponentWidget.SetOrderNumber
struct UCraftingComponentWidget_SetOrderNumber_Params
{
	int                                                orderNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingComponentWidget.SetIsTool
struct UCraftingComponentWidget_SetIsTool_Params
{
	bool                                               IsTool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingComponentWidget.SetIsOptional
struct UCraftingComponentWidget_SetIsOptional_Params
{
	bool                                               isOptional;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingComponentWidget.SetIsAvailable
struct UCraftingComponentWidget_SetIsAvailable_Params
{
	bool                                               IsAvailable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingComponentWidget.GetIsAvailable
struct UCraftingComponentWidget_GetIsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CraftingComponentWidget.CreateTooltip
struct UCraftingComponentWidget_CreateTooltip_Params
{
};

// Function ConZ.CraftingInfoWidget.SwapIngredient
struct UCraftingInfoWidget_SwapIngredient_Params
{
	int                                                widgetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                orderIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingInfoWidget.Init
struct UCraftingInfoWidget_Init_Params
{
	class AItem*                                       itemCDO;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingInfoWidget.Close
struct UCraftingInfoWidget_Close_Params
{
};

// Function ConZ.CraftingPanelWidget.UpdateAvailableComponents
struct UCraftingPanelWidget_UpdateAvailableComponents_Params
{
};

// Function ConZ.CraftingPanelWidget.ShowPlaceableCraftingConfirmationForCraftingIndex
struct UCraftingPanelWidget_ShowPlaceableCraftingConfirmationForCraftingIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingPanelWidget.OnRecipeClicked
struct UCraftingPanelWidget_OnRecipeClicked_Params
{
	class UCraftingRecipeWidget*                       Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.CraftingPanelWidget.OnPlaceableCraftingConfirmationConfirmed
struct UCraftingPanelWidget_OnPlaceableCraftingConfirmationConfirmed_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingPanelWidget.OnAdditionalIngredientSelected
struct UCraftingPanelWidget_OnAdditionalIngredientSelected_Params
{
	class UCraftingAvailableItemWidget*                Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingPanelWidget.HandlePrisonerChange
struct UCraftingPanelWidget_HandlePrisonerChange_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingPanelWidget.Craft
struct UCraftingPanelWidget_Craft_Params
{
};

// Function ConZ.CraftingPanelWidget.CanCraft
struct UCraftingPanelWidget_CanCraft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CraftingRecipeWidget.SetTooltipFromClass
struct UCraftingRecipeWidget_SetTooltipFromClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingRecipeWidget.SetIsSelected
struct UCraftingRecipeWidget_SetIsSelected_Params
{
	bool                                               isSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingRecipeWidget.SetIsGrayedOut
struct UCraftingRecipeWidget_SetIsGrayedOut_Params
{
	bool                                               isGrayedOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CraftingRecipeWidget.SetAvailabilityState
struct UCraftingRecipeWidget_SetAvailabilityState_Params
{
	ERecipeAvailabilityState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.CraftingRecipeWidget.RecipeSelectedDelegate__DelegateSignature
struct UCraftingRecipeWidget_RecipeSelectedDelegate__DelegateSignature_Params
{
	class UCraftingRecipeWidget*                       Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.CraftingRecipeWidget.GetAvailabilityState
struct UCraftingRecipeWidget_GetAvailabilityState_Params
{
	ERecipeAvailabilityState                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CTFBase.SphereOverlap
struct ACTFBase_SphereOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.CTFBase.OnRep_Team
struct ACTFBase_OnRep_Team_Params
{
};

// Function ConZ.CTFBase.OnRep_Radius
struct ACTFBase_OnRep_Radius_Params
{
};

// Function ConZ.CTFFlag.SphereOverlap
struct ACTFFlag_SphereOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.CTFFlag.OnRep_Team
struct ACTFFlag_OnRep_Team_Params
{
};

// Function ConZ.CTFFlag.OnRep_FlagTransform
struct ACTFFlag_OnRep_FlagTransform_Params
{
};

// Function ConZ.CTFFlagStand.OnRep_LightColor
struct ACTFFlagStand_OnRep_LightColor_Params
{
};

// Function ConZ.GameEventBase.UpdateTeamMemberCount
struct AGameEventBase_UpdateTeamMemberCount_Params
{
};

// Function ConZ.GameEventBase.UpdateRanking
struct AGameEventBase_UpdateRanking_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.SetTeamScore
struct AGameEventBase_SetTeamScore_Params
{
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.SetParticipantTeam
struct AGameEventBase_SetParticipantTeam_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.SetParameters
struct AGameEventBase_SetParameters_Params
{
	struct FGameEventParameters                        Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.GameEventBase.SetNumberOfTeams
struct AGameEventBase_SetNumberOfTeams_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.ScheduleEvent
struct AGameEventBase_ScheduleEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.SavePrisonerState
struct AGameEventBase_SavePrisonerState_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.SameTeam
struct AGameEventBase_SameTeam_Params
{
	class APrisoner*                                   prisonerA;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APrisoner*                                   prisonerB;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.RestorePrisonerState
struct AGameEventBase_RestorePrisonerState_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.ResetGameEventArea
struct AGameEventBase_ResetGameEventArea_Params
{
};

// Function ConZ.GameEventBase.RegisterParticipant
struct AGameEventBase_RegisterParticipant_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                preferredTeam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.PresentSpawnScreen
struct AGameEventBase_PresentSpawnScreen_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.ParticipantExit
struct AGameEventBase_ParticipantExit_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.ParticipantEnter
struct AGameEventBase_ParticipantEnter_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.OnRep_Rankings
struct AGameEventBase_OnRep_Rankings_Params
{
};

// Function ConZ.GameEventBase.OnRep_ParticipantInfo
struct AGameEventBase_OnRep_ParticipantInfo_Params
{
};

// Function ConZ.GameEventBase.Multicast_StopMusic
struct AGameEventBase_Multicast_StopMusic_Params
{
	class UAkAudioEvent*                               StopAudioEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.Multicast_StopCountdownAnnouncement
struct AGameEventBase_Multicast_StopCountdownAnnouncement_Params
{
};

// Function ConZ.GameEventBase.Multicast_ShowScoreboardForEveryone
struct AGameEventBase_Multicast_ShowScoreboardForEveryone_Params
{
};

// Function ConZ.GameEventBase.Multicast_ShowEventNotification
struct AGameEventBase_Multicast_ShowEventNotification_Params
{
	EGameEventNotificationType                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     auxString;                                                // (Parm, ZeroConstructor)
};

// Function ConZ.GameEventBase.Multicast_PlayMusic
struct AGameEventBase_Multicast_PlayMusic_Params
{
	class UAkAudioEvent*                               StartAudioEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.Multicast_PlayCountdownAnnouncement
struct AGameEventBase_Multicast_PlayCountdownAnnouncement_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.Multicast_PlayAnnouncementToTeam
struct AGameEventBase_Multicast_PlayAnnouncementToTeam_Params
{
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.Multicast_PlayAnnouncementToParticipant
struct AGameEventBase_Multicast_PlayAnnouncementToParticipant_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.Multicast_PlayAnnouncementToAllParticipants
struct AGameEventBase_Multicast_PlayAnnouncementToAllParticipants_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.Multicast_HideScoreboardForEveryone
struct AGameEventBase_Multicast_HideScoreboardForEveryone_Params
{
};

// Function ConZ.GameEventBase.KickParticipant
struct AGameEventBase_KickParticipant_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.IsTeamFull
struct AGameEventBase_IsTeamFull_Params
{
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.IsParticipating
struct AGameEventBase_IsParticipating_Params
{
	class APrisoner*                                   Prisoner;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.InitEvent
struct AGameEventBase_InitEvent_Params
{
	class AGameEventLocationMarker*                    marker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameEventManager*                           manager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetWinningTeamsPerRound
struct AGameEventBase_GetWinningTeamsPerRound_Params
{
	TArray<int>                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.GameEventBase.GetTeamScore
struct AGameEventBase_GetTeamScore_Params
{
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetTeamMemberCount
struct AGameEventBase_GetTeamMemberCount_Params
{
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetStatusTime
struct AGameEventBase_GetStatusTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetScoreboardWidget
struct AGameEventBase_GetScoreboardWidget_Params
{
	class UGameEventScoreboardWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetRoundTimeLeft
struct AGameEventBase_GetRoundTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetPossibleLoadout
struct AGameEventBase_GetPossibleLoadout_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItemSelection*>                      primaryWeapons;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<class UItemSelection*>                      secondaryWeapons;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<class UItemSelection*>                      tertiaryWeapons;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<class UItemSelection*>                      outfits;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<class UItemSelection*>                      support;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<class UItemSelection*>                      Gear;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function ConZ.GameEventBase.GetParticipantTeam
struct AGameEventBase_GetParticipantTeam_Params
{
	class APrisoner*                                   Prisoner;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetParticipantJoinLocation
struct AGameEventBase_GetParticipantJoinLocation_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetParticipantInfo
struct AGameEventBase_GetParticipantInfo_Params
{
	TArray<struct FGameEventParticipantInfo>           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.GameEventBase.GetParticipantAtRank
struct AGameEventBase_GetParticipantAtRank_Params
{
	int                                                rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetParameters
struct AGameEventBase_GetParameters_Params
{
	struct FGameEventParameters                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.GameEventBase.GetNumberOfTeams
struct AGameEventBase_GetNumberOfTeams_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetNumberOfParticipants
struct AGameEventBase_GetNumberOfParticipants_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetNumberOfActiveParticipants
struct AGameEventBase_GetNumberOfActiveParticipants_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetMiniScoreboardWidget
struct AGameEventBase_GetMiniScoreboardWidget_Params
{
	class UGameEventScoreboardWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetMaxDurationLeft
struct AGameEventBase_GetMaxDurationLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetMarker
struct AGameEventBase_GetMarker_Params
{
	class AGameEventLocationMarker*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetEventState
struct AGameEventBase_GetEventState_Params
{
	EGameEventState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetCurrentRound
struct AGameEventBase_GetCurrentRound_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetCardWidget
struct AGameEventBase_GetCardWidget_Params
{
	class UGameEventCardWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetCancelTimeLeft
struct AGameEventBase_GetCancelTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.GetBorder
struct AGameEventBase_GetBorder_Params
{
	class AGameEventBorder*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.ForceParticipantStatsRep
struct AGameEventBase_ForceParticipantStatsRep_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.FindParticipantIndex
struct AGameEventBase_FindParticipantIndex_Params
{
	class APrisoner*                                   Prisoner;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.EquipParticipantLoadout
struct AGameEventBase_EquipParticipantLoadout_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.DeclareWinningTeam
struct AGameEventBase_DeclareWinningTeam_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.ConvertScoreToFame
struct AGameEventBase_ConvertScoreToFame_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.ClearTeamScores
struct AGameEventBase_ClearTeamScores_Params
{
};

// Function ConZ.GameEventBase.ChooseSpawnLocation
struct AGameEventBase_ChooseSpawnLocation_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.CheckParticipatingPrisoners
struct AGameEventBase_CheckParticipatingPrisoners_Params
{
};

// Function ConZ.GameEventBase.CanStart
struct AGameEventBase_CanStart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.CanSchedule
struct AGameEventBase_CanSchedule_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.CanJoin
struct AGameEventBase_CanJoin_Params
{
	class APrisoner*                                   Prisoner;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                preferredTeam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBase.CancelEvent
struct AGameEventBase_CancelEvent_Params
{
};

// Function ConZ.GameEventBase.CallInParticipant
struct AGameEventBase_CallInParticipant_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBase.AwardParticipant
struct AGameEventBase_AwardParticipant_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameEventRewardPoints                      reward;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.GameEventBase.AssignParticipantTeam
struct AGameEventBase_AssignParticipantTeam_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CTFGameEvent.SetCTFParameters
struct ACTFGameEvent_SetCTFParameters_Params
{
	struct FCTFParameters                              Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.CTFGameEvent.OnParticipantDeath
struct ACTFGameEvent_OnParticipantDeath_Params
{
	class APrisoner*                                   victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 eventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CTFGameEvent.GetFlagB
struct ACTFGameEvent_GetFlagB_Params
{
	class ACTFFlag*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CTFGameEvent.GetFlagA
struct ACTFGameEvent_GetFlagA_Params
{
	class ACTFFlag*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.CTFGameEvent.GetCTFParameters
struct ACTFGameEvent_GetCTFParameters_Params
{
	struct FCTFParameters                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.GameEventLocationMarker.GetAreaCenter
struct AGameEventLocationMarker_GetAreaCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventLocationMarker.CreateGameEvent
struct AGameEventLocationMarker_CreateGameEvent_Params
{
	class AGameEventBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventLocationMarker.CreateBorder
struct AGameEventLocationMarker_CreateBorder_Params
{
	class AGameEventBorder*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbConnection.Open
struct UDbConnection_Open_Params
{
	EDbConnectionOpenMode                              Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbConnection.IsOpen
struct UDbConnection_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbConnection.GetOpenMode
struct UDbConnection_GetOpenMode_Params
{
	EDbConnectionOpenMode                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbConnection.FindOrInsertMap
struct UDbConnection_FindOrInsertMap_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FDbIntegerId                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.DbConnection.DeleteUsersHavingNullOrEmptyProvider
struct UDbConnection_DeleteUsersHavingNullOrEmptyProvider_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbConnection.Close
struct UDbConnection_Close_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbObject.GetConnection
struct UDbObject_GetConnection_Params
{
	class UDbConnection*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbTableRow.GetTable
struct UDbTableRow_GetTable_Params
{
	class UDbTable*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbTableRow.Equals
struct UDbTableRow_Equals_Params
{
	class UDbTableRow*                                 Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserTable.Insert
struct UDbUserTable_Insert_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	class UDbUser*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserTable.FindOrInsert
struct UDbUserTable_FindOrInsert_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	class UDbUser*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserTable.Find
struct UDbUserTable_Find_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	class UDbUser*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserTable.Exists
struct UDbUserTable_Exists_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserTable.Delete
struct UDbUserTable_Delete_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.Unbind
struct UDbUser_Unbind_Params
{
};

// Function ConZ.DbUser.SetRecentServers
struct UDbUser_SetRecentServers_Params
{
	TArray<struct FDbUserServerHistoryItem>            Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.DbUser.SetProvider
struct UDbUser_SetProvider_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ConZ.DbUser.SetName
struct UDbUser_SetName_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ConZ.DbUser.SetLastLoginTime
struct UDbUser_SetLastLoginTime_Params
{
	struct FDateTime                                   Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DbUser.SetLastDirectConnectionAddress
struct UDbUser_SetLastDirectConnectionAddress_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ConZ.DbUser.SetFavoriteServers
struct UDbUser_SetFavoriteServers_Params
{
	TArray<struct FDbUserServerHistoryItem>            Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.DbUser.RemoveRecentServerAt
struct UDbUser_RemoveRecentServerAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DbUser.RemoveRecentServer
struct UDbUser_RemoveRecentServer_Params
{
	struct FDbUserServerHistoryItem                    Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DbUser.RemoveFavoriteServerAt
struct UDbUser_RemoveFavoriteServerAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DbUser.RemoveFavoriteServer
struct UDbUser_RemoveFavoriteServer_Params
{
	struct FDbUserServerHistoryItem                    Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DbUser.Refresh
struct UDbUser_Refresh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.IsBound
struct UDbUser_IsBound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.HasProfileWithName
struct UDbUser_HasProfileWithName_Params
{
	EDbUserProfileType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.GetRecentServers
struct UDbUser_GetRecentServers_Params
{
	TArray<struct FDbUserServerHistoryItem>            ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.DbUser.GetProvider
struct UDbUser_GetProvider_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DbUser.GetProfileNames
struct UDbUser_GetProfileNames_Params
{
	EDbUserProfileType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DbUser.GetName
struct UDbUser_GetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DbUser.GetLastLoginTime
struct UDbUser_GetLastLoginTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.DbUser.GetLastDirectConnectionAddress
struct UDbUser_GetLastDirectConnectionAddress_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DbUser.GetId
struct UDbUser_GetId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DbUser.GetFavoriteServers
struct UDbUser_GetFavoriteServers_Params
{
	TArray<struct FDbUserServerHistoryItem>            ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.DbUser.FindProfiles
struct UDbUser_FindProfiles_Params
{
	EDbUserProfileType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDbUserProfile*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DbUser.FindProfile
struct UDbUser_FindProfile_Params
{
	struct FDbIntegerId                                ID;                                                       // (Parm)
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.FindMultiplayerCacheProfile
struct UDbUser_FindMultiplayerCacheProfile_Params
{
	struct FString                                     ServerIp;                                                 // (Parm, ZeroConstructor)
	int                                                ServerResponsePort;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.EndEdit
struct UDbUser_EndEdit_Params
{
	bool                                               Commit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.DeleteProfile
struct UDbUser_DeleteProfile_Params
{
	struct FDbIntegerId                                ID;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.CreateProfileFromTemplate
struct UDbUser_CreateProfileFromTemplate_Params
{
	EDbUserProfileType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCharacterTemplate                          Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.CreateEmptyProfile
struct UDbUser_CreateEmptyProfile_Params
{
	EDbUserProfileType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.CreateDefaultProfile
struct UDbUser_CreateDefaultProfile_Params
{
	EDbUserProfileType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.ClearRecentServers
struct UDbUser_ClearRecentServers_Params
{
};

// Function ConZ.DbUser.ClearFavoriteServers
struct UDbUser_ClearFavoriteServers_Params
{
};

// Function ConZ.DbUser.BindAndRefresh
struct UDbUser_BindAndRefresh_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUser.Bind
struct UDbUser_Bind_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function ConZ.DbUser.BeginEdit
struct UDbUser_BeginEdit_Params
{
};

// Function ConZ.DbUser.AddRecentServer
struct UDbUser_AddRecentServer_Params
{
	struct FDbUserServerHistoryItem                    Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DbUser.AddFavoriteServer
struct UDbUser_AddFavoriteServer_Params
{
	struct FDbUserServerHistoryItem                    Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DbUserProfileTable.InsertDefault
struct UDbUserProfileTable_InsertDefault_Params
{
	struct FString                                     UserId;                                                   // (Parm, ZeroConstructor)
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfileTable.Insert
struct UDbUserProfileTable_Insert_Params
{
	struct FDbIntegerId                                ID;                                                       // (Parm)
	struct FString                                     UserId;                                                   // (Parm, ZeroConstructor)
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfileTable.FindOrInsert
struct UDbUserProfileTable_FindOrInsert_Params
{
	struct FDbIntegerId                                ID;                                                       // (Parm)
	struct FString                                     UserId;                                                   // (Parm, ZeroConstructor)
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfileTable.Find
struct UDbUserProfileTable_Find_Params
{
	struct FDbIntegerId                                ID;                                                       // (Parm)
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfileTable.Exists
struct UDbUserProfileTable_Exists_Params
{
	struct FDbIntegerId                                ID;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfileTable.Delete
struct UDbUserProfileTable_Delete_Params
{
	struct FDbIntegerId                                ID;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfile.Unbind
struct UDbUserProfile_Unbind_Params
{
};

// Function ConZ.DbUserProfile.SetUserId
struct UDbUserProfile_SetUserId_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ConZ.DbUserProfile.SetType
struct UDbUserProfile_SetType_Params
{
	EDbUserProfileType                                 Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DbUserProfile.SetPrisonerId
struct UDbUserProfile_SetPrisonerId_Params
{
	struct FDbIntegerId                                Value;                                                    // (Parm)
};

// Function ConZ.DbUserProfile.SetName
struct UDbUserProfile_SetName_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ConZ.DbUserProfile.SetLastLoginTime
struct UDbUserProfile_SetLastLoginTime_Params
{
	struct FDateTime                                   Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DbUserProfile.SetCreationTemplateXml
struct UDbUserProfile_SetCreationTemplateXml_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ConZ.DbUserProfile.SetAuthorityInfo
struct UDbUserProfile_SetAuthorityInfo_Params
{
	struct FDbUserProfileAuthorityInfo                 Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DbUserProfile.Refresh
struct UDbUserProfile_Refresh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfile.MakeCharacterTemplate
struct UDbUserProfile_MakeCharacterTemplate_Params
{
	struct FCharacterTemplate                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.DbUserProfile.IsBound
struct UDbUserProfile_IsBound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfile.GetUserId
struct UDbUserProfile_GetUserId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DbUserProfile.GetUser
struct UDbUserProfile_GetUser_Params
{
	class UDbUser*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfile.GetType
struct UDbUserProfile_GetType_Params
{
	EDbUserProfileType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfile.GetPrisonerId
struct UDbUserProfile_GetPrisonerId_Params
{
	struct FDbIntegerId                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.DbUserProfile.GetName
struct UDbUserProfile_GetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DbUserProfile.GetLastLoginTime
struct UDbUserProfile_GetLastLoginTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.DbUserProfile.GetId
struct UDbUserProfile_GetId_Params
{
	struct FDbIntegerId                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.DbUserProfile.GetCreationTemplateXml
struct UDbUserProfile_GetCreationTemplateXml_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.DbUserProfile.GetCreationTemplate
struct UDbUserProfile_GetCreationTemplate_Params
{
	struct FCharacterTemplate                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.DbUserProfile.GetAuthorityInfo
struct UDbUserProfile_GetAuthorityInfo_Params
{
	struct FDbUserProfileAuthorityInfo                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.DbUserProfile.EndEdit
struct UDbUserProfile_EndEdit_Params
{
	bool                                               Commit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfile.BindAndRefresh
struct UDbUserProfile_BindAndRefresh_Params
{
	struct FDbIntegerId                                ID;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DbUserProfile.Bind
struct UDbUserProfile_Bind_Params
{
	struct FDbIntegerId                                ID;                                                       // (Parm)
};

// Function ConZ.DbUserProfile.BeginEdit
struct UDbUserProfile_BeginEdit_Params
{
};

// Function ConZ.DeathmatchGameEvent.SetDeathmatchParameters
struct ADeathmatchGameEvent_SetDeathmatchParameters_Params
{
	struct FDeathmatchParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DeathmatchGameEvent.RestrictGameEventArea
struct ADeathmatchGameEvent_RestrictGameEventArea_Params
{
};

// Function ConZ.DeathmatchGameEvent.GetDeathmatchParameters
struct ADeathmatchGameEvent_GetDeathmatchParameters_Params
{
	struct FDeathmatchParameters                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.Deer.OnRep_HartHind
struct ADeer_OnRep_HartHind_Params
{
};

// Function ConZ.Deer2.OnRep_HartHind
struct ADeer2_OnRep_HartHind_Params
{
};

// Function ConZ.DigestionItem.GetWeight
struct UDigestionItem_GetWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DigestionItem.GetVolume
struct UDigestionItem_GetVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DigestionItem.GetShouldProcess
struct UDigestionItem_GetShouldProcess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DigestionItem.GetRemainingWeight
struct UDigestionItem_GetRemainingWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DigestionItem.GetRemainingWater
struct UDigestionItem_GetRemainingWater_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DigestionItem.GetRemainingVolume
struct UDigestionItem_GetRemainingVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DigestionItem.GetId
struct UDigestionItem_GetId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DigestionItem.GetCaption
struct UDigestionItem_GetCaption_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Door.OnRep_StateFlags
struct ADoor_OnRep_StateFlags_Params
{
	EDoorStateFlags                                    Previous;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Door.OnRep_FractureLocation
struct ADoor_OnRep_FractureLocation_Params
{
};

// DelegateFunction ConZ.Door.OnOpened__DelegateSignature
struct ADoor_OnOpened__DelegateSignature_Params
{
};

// Function ConZ.Door.IsOpen
struct ADoor_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Door.IsLocked
struct ADoor_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Door.HasPower
struct ADoor_HasPower_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Door.ChangeOpenState
struct ADoor_ChangeOpenState_Params
{
	bool                                               shouldOpen;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DoubleDoor.OnRep_FractureLocation1
struct ADoubleDoor_OnRep_FractureLocation1_Params
{
};

// Function ConZ.Drone.Server_SetCurrentSpeedStep
struct ADrone_Server_SetCurrentSpeedStep_Params
{
	int                                                step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Drone.Server_SetActorLocation
struct ADrone_Server_SetActorLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function ConZ.Drone.SelfDestruct
struct ADrone_SelfDestruct_Params
{
};

// Function ConZ.Drone.OnRep_CurrentSpeedStep
struct ADrone_OnRep_CurrentSpeedStep_Params
{
};

// Function ConZ.Drone.OnHit
struct ADrone_OnHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Drone.AActor_OnDestroyed
struct ADrone_AActor_OnDestroyed_Params
{
	class AActor*                                      ActorDestroyed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DroneAIController.SensingComponent_OnHearNoise
struct ADroneAIController_SensingComponent_OnHearNoise_Params
{
	class APawn*                                       NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DroneAIController.NavigationResultHandler
struct ADroneAIController_NavigationResultHandler_Params
{
	struct FDoNNavigationQueryData                     QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DroneAIController.FollowCharacter
struct ADroneAIController_FollowCharacter_Params
{
	class ACharacter*                                  characterToFollow;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DroneAIController.FindWayTo
struct ADroneAIController_FindWayTo_Params
{
	struct FVector                                     Destination;                                              // (Parm, IsPlainOldData)
};

// Function ConZ.DroneAIController.DynamicCollisionListener
struct ADroneAIController_DynamicCollisionListener_Params
{
	struct FDonNavigationDynamicCollisionPayload       CollisionData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DroneSoundComponent.PlaySoundOnClients
struct UDroneSoundComponent_PlaySoundOnClients_Params
{
	EDroneSound                                        SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DropZoneDroppable.SetGameEvent
struct ADropZoneDroppable_SetGameEvent_Params
{
	class ADropZoneGameEvent*                          gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DropZoneDroppable.OnRep_FlareParticlesTeam
struct ADropZoneDroppable_OnRep_FlareParticlesTeam_Params
{
};

// Function ConZ.DropZoneDroppable.OnRep_FlareParticlesEnabled
struct ADropZoneDroppable_OnRep_FlareParticlesEnabled_Params
{
};

// Function ConZ.DropZoneDroppable.GetGameEvent
struct ADropZoneDroppable_GetGameEvent_Params
{
	class ADropZoneGameEvent*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneCrate.OnRep_HasKey
struct ADropZoneCrate_OnRep_HasKey_Params
{
};

// Function ConZ.DropZoneEquipmentTable.UntrackItem
struct ADropZoneEquipmentTable_UntrackItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DropZoneEquipmentTable.TrackItem
struct ADropZoneEquipmentTable_TrackItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DropZoneEquipmentTable.OnTrackedItemDestroyed
struct ADropZoneEquipmentTable_OnTrackedItemDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DropZoneEquipmentTable.EndCleaningItems
struct ADropZoneEquipmentTable_EndCleaningItems_Params
{
};

// Function ConZ.DropZoneEquipmentTable.BeginCleaningItems
struct ADropZoneEquipmentTable_BeginCleaningItems_Params
{
};

// Function ConZ.DropZoneGameEvent.SetDropZoneParameters
struct ADropZoneGameEvent_SetDropZoneParameters_Params
{
	struct FDropZoneParameters                         Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DropZoneGameEvent.OnRep_CapturingTeam
struct ADropZoneGameEvent_OnRep_CapturingTeam_Params
{
};

// Function ConZ.DropZoneGameEvent.GetSlot
struct ADropZoneGameEvent_GetSlot_Params
{
	class ADropZoneSlot*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneGameEvent.GetPhaseTimeLeft
struct ADropZoneGameEvent_GetPhaseTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneGameEvent.GetPhase
struct ADropZoneGameEvent_GetPhase_Params
{
	EDropZoneGameEventPhase                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneGameEvent.GetKeyCarrier
struct ADropZoneGameEvent_GetKeyCarrier_Params
{
	class APrisoner*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneGameEvent.GetKey
struct ADropZoneGameEvent_GetKey_Params
{
	class ADropZoneKey*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneGameEvent.GetDropZoneParameters
struct ADropZoneGameEvent_GetDropZoneParameters_Params
{
	struct FDropZoneParameters                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.DropZoneGameEvent.GetCrateB
struct ADropZoneGameEvent_GetCrateB_Params
{
	class ADropZoneCrate*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneGameEvent.GetCrateA
struct ADropZoneGameEvent_GetCrateA_Params
{
	class ADropZoneCrate*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneGameEvent.GetCargo
struct ADropZoneGameEvent_GetCargo_Params
{
	class ADropZoneCargo*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneGameEvent.GetCapturingTeam
struct ADropZoneGameEvent_GetCapturingTeam_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneGameEvent.GetCaptureProgress
struct ADropZoneGameEvent_GetCaptureProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneKey.SphereOverlap
struct ADropZoneKey_SphereOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.DropZoneKey.SetGameEvent
struct ADropZoneKey_SetGameEvent_Params
{
	class ADropZoneGameEvent*                          gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DropZoneKey.GetGameEvent
struct ADropZoneKey_GetGameEvent_Params
{
	class ADropZoneGameEvent*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneSlot.SetGameEvent
struct ADropZoneSlot_SetGameEvent_Params
{
	class ADropZoneGameEvent*                          gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DropZoneSlot.Server_Activate
struct ADropZoneSlot_Server_Activate_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DropZoneSlot.GetOpeningDuration
struct ADropZoneSlot_GetOpeningDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.DropZoneSlot.GetGameEvent
struct ADropZoneSlot_GetGameEvent_Params
{
	class ADropZoneGameEvent*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.EnvironmentStatics.IsEnvironmentClassOutdoor
struct UEnvironmentStatics_IsEnvironmentClassOutdoor_Params
{
	EEnvironmentClass                                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.EnvironmentStatics.IsEnvironmentClassIndoor
struct UEnvironmentStatics_IsEnvironmentClassIndoor_Params
{
	EEnvironmentClass                                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.EnvironmentStatics.GetExtraAirTemperatureFromHeatSourcesAtLocation
struct UEnvironmentStatics_GetExtraAirTemperatureFromHeatSourcesAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.EnvironmentStatics.GetEnvironmentClassAtLocation
struct UEnvironmentStatics_GetEnvironmentClassAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	EEnvironmentClass                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ExamineContainerWidget.SetWidgetTitle
struct UExamineContainerWidget_SetWidgetTitle_Params
{
	struct FText                                       Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction ConZ.ExamineContainerWidget.OnWidgetIsEmpty__DelegateSignature
struct UExamineContainerWidget_OnWidgetIsEmpty__DelegateSignature_Params
{
};

// DelegateFunction ConZ.ExamineContainerWidget.OnClose__DelegateSignature
struct UExamineContainerWidget_OnClose__DelegateSignature_Params
{
};

// Function ConZ.FireItem.SetBurning
struct AFireItem_SetBurning_Params
{
	bool                                               burning;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.FireItem.OnRep_IsBurning
struct AFireItem_OnRep_IsBurning_Params
{
};

// Function ConZ.FireItem.GetBurning
struct AFireItem_GetBurning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FishAIController.UpdatePerception
struct AFishAIController_UpdatePerception_Params
{
	TArray<class AActor*>                              actorsPercepted;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.FishSpawner.UpdateWaterVolumeAssignment
struct AFishSpawner_UpdateWaterVolumeAssignment_Params
{
};

// Function ConZ.FlashbangItem.Multicast_PlayEffects
struct AFlashbangItem_Multicast_PlayEffects_Params
{
	struct FVector                                     zeroBasedFlashbangLocation;                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.FlockAnimInstance.GetWalkAnimationSpeed
struct UFlockAnimInstance_GetWalkAnimationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FlockAnimInstance.GetRunAnimationSpeed
struct UFlockAnimInstance_GetRunAnimationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FragGrenadeItem.Multicast_PlayEffects
struct AFragGrenadeItem_Multicast_PlayEffects_Params
{
	struct FVector                                     ZeroBasedLocation;                                        // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.GameEventBorder.SetEnablePawnCollision
struct AGameEventBorder_SetEnablePawnCollision_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBorder.OnRep_Radius
struct AGameEventBorder_OnRep_Radius_Params
{
};

// Function ConZ.GameEventBorder.OnRep_Offset
struct AGameEventBorder_OnRep_Offset_Params
{
};

// Function ConZ.GameEventBorder.OnRep_Heat
struct AGameEventBorder_OnRep_Heat_Params
{
};

// Function ConZ.GameEventBorder.OnRep_Collision
struct AGameEventBorder_OnRep_Collision_Params
{
};

// Function ConZ.GameEventBorder.Multicast_SetRadius
struct AGameEventBorder_Multicast_SetRadius_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBorder.Multicast_SetOffset
struct AGameEventBorder_Multicast_SetOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, IsPlainOldData)
};

// Function ConZ.GameEventBorder.IsActive
struct AGameEventBorder_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBorder.HeatUpAndChangeArea
struct AGameEventBorder_HeatUpAndChangeArea_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     focus;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              heatUpDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBorder.GetState
struct AGameEventBorder_GetState_Params
{
	EGameEventBorderState                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBorder.GetRadiusChangeAmount
struct AGameEventBorder_GetRadiusChangeAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBorder.GetRadius
struct AGameEventBorder_GetRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBorder.GetOffset
struct AGameEventBorder_GetOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBorder.GetBorderCenter
struct AGameEventBorder_GetBorderCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventBorder.ChangeState
struct AGameEventBorder_ChangeState_Params
{
	EGameEventBorderState                              State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventBorder.ChangeArea
struct AGameEventBorder_ChangeArea_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     focus;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventCardWidget.UpdateStats
struct UGameEventCardWidget_UpdateStats_Params
{
};

// Function ConZ.GameEventCardWidget.GetGameEvent
struct UGameEventCardWidget_GetGameEvent_Params
{
	class AGameEventBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventCardWidget.Create
struct UGameEventCardWidget_Create_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameEventCardWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.GameEventInfoWidget.UpdateStats
struct UGameEventInfoWidget_UpdateStats_Params
{
	class AGameEventBase*                              _gameEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventLeaderboardWidget.UpdateTopPlayers
struct UGameEventLeaderboardWidget_UpdateTopPlayers_Params
{
};

// Function ConZ.GameEventLeaderboardWidget.UpdatePlayerRanking
struct UGameEventLeaderboardWidget_UpdatePlayerRanking_Params
{
};

// Function ConZ.GameEventLeaderboardWidget.RequestTopPlayers
struct UGameEventLeaderboardWidget_RequestTopPlayers_Params
{
	int                                                count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterStatsSorting                             sort;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               descending;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventLeaderboardWidget.RequestPlayerRanking
struct UGameEventLeaderboardWidget_RequestPlayerRanking_Params
{
	int                                                Pad;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterStatsSorting                             sort;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               descending;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventLeaderboardWidget.CancelReqeusts
struct UGameEventLeaderboardWidget_CancelReqeusts_Params
{
};

// Function ConZ.GameEventLoadoutMenuWidget.SetGameEvent
struct UGameEventLoadoutMenuWidget_SetGameEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventLoadoutMenuWidget.GetGameEvent
struct UGameEventLoadoutMenuWidget_GetGameEvent_Params
{
	class AGameEventBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventLoadoutMenuWidget.CreateLoadout
struct UGameEventLoadoutMenuWidget_CreateLoadout_Params
{
	class UClass*                                      primary;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      secondary;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      tertiary;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UClass*>                              outfit;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              support;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UPrisonerLoadout*                            loadout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventManager.TrySchedulingNextEvent
struct AGameEventManager_TrySchedulingNextEvent_Params
{
	class AGameEventBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventManager.PickRandomMarker
struct AGameEventManager_PickRandomMarker_Params
{
	class UClass*                                      markerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preferUnused;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forcePick;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameEventLocationMarker*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventManager.OnRep_EndedGameEvents
struct AGameEventManager_OnRep_EndedGameEvents_Params
{
};

// Function ConZ.GameEventManager.OnRep_CurrentGameEvents
struct AGameEventManager_OnRep_CurrentGameEvents_Params
{
};

// Function ConZ.GameEventManager.OnRep_AnnouncedGameEvents
struct AGameEventManager_OnRep_AnnouncedGameEvents_Params
{
};

// Function ConZ.GameEventManager.IsEventLocationFree
struct AGameEventManager_IsEventLocationFree_Params
{
	struct FText                                       Location;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventManager.GetPrisonerRegisteredGameEvent
struct AGameEventManager_GetPrisonerRegisteredGameEvent_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameEventBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventManager.GetPanelWidget
struct AGameEventManager_GetPanelWidget_Params
{
	class UGameEventPanelWidget*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.GameEventManager.GetEndedEvents
struct AGameEventManager_GetEndedEvents_Params
{
	TArray<class AGameEventBase*>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.GameEventManager.GetCurrentEvents
struct AGameEventManager_GetCurrentEvents_Params
{
	TArray<class AGameEventBase*>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.GameEventManager.GetAnnouncedEvents
struct AGameEventManager_GetAnnouncedEvents_Params
{
	TArray<class AGameEventBase*>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.GameEventManager.CreateGameEvent
struct AGameEventManager_CreateGameEvent_Params
{
	class AGameEventLocationMarker*                    marker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameEventBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventPanelWidget.UpdateLists
struct UGameEventPanelWidget_UpdateLists_Params
{
};

// Function ConZ.GameEventPanelWidget.OnUpdate
struct UGameEventPanelWidget_OnUpdate_Params
{
};

// Function ConZ.GameEventPanelWidget.OnOpened
struct UGameEventPanelWidget_OnOpened_Params
{
};

// Function ConZ.GameEventPanelWidget.OnClosed
struct UGameEventPanelWidget_OnClosed_Params
{
};

// Function ConZ.GameEventPanelWidget.GetGameEventManager
struct UGameEventPanelWidget_GetGameEventManager_Params
{
	class AGameEventManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventPanelWidget.EmptyLists
struct UGameEventPanelWidget_EmptyLists_Params
{
};

// Function ConZ.GameEventPanelWidget.Create
struct UGameEventPanelWidget_Create_Params
{
	class AGameEventManager*                           GEManager;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameEventPanelWidget*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.GameEventPanelWidget.AddEndedEvent
struct UGameEventPanelWidget_AddEndedEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventPanelWidget.AddCurrentEvent
struct UGameEventPanelWidget_AddCurrentEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventPanelWidget.AddAnnouncedEvent
struct UGameEventPanelWidget_AddAnnouncedEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventParticipantInfoCardWidget.UpdateStats
struct UGameEventParticipantInfoCardWidget_UpdateStats_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventParticipantStatsWidget.UpdateStats
struct UGameEventParticipantStatsWidget_UpdateStats_Params
{
};

// Function ConZ.GameEventParticipantStatsWidget.UpdateColours
struct UGameEventParticipantStatsWidget_UpdateColours_Params
{
};

// Function ConZ.GameEventParticipantStatsWidget.SetTeamIndex
struct UGameEventParticipantStatsWidget_SetTeamIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventParticipantStatsWidget.SetColours
struct UGameEventParticipantStatsWidget_SetColours_Params
{
	struct FGameEventTeamColours                       colours;                                                  // (Parm)
};

// Function ConZ.GameEventParticipantStatsWidget.IsValid
struct UGameEventParticipantStatsWidget_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventParticipantStatsWidget.GetTeamIndex
struct UGameEventParticipantStatsWidget_GetTeamIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventParticipantStatsWidget.GetScoreboard
struct UGameEventParticipantStatsWidget_GetScoreboard_Params
{
	class UGameEventScoreboardWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.GameEventParticipantStatsWidget.GetIndex
struct UGameEventParticipantStatsWidget_GetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventParticipantStatsWidget.GetGameEvent
struct UGameEventParticipantStatsWidget_GetGameEvent_Params
{
	class AGameEventBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventParticipantStatsWidget.FillLabels
struct UGameEventParticipantStatsWidget_FillLabels_Params
{
};

// Function ConZ.GameEventRoundInfoWidget.SetGameEvent
struct UGameEventRoundInfoWidget_SetGameEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventScoreboardWidget.SetSelectedIndex
struct UGameEventScoreboardWidget_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventScoreboardWidget.OnUpdate
struct UGameEventScoreboardWidget_OnUpdate_Params
{
};

// Function ConZ.GameEventScoreboardWidget.InitializeScoreboard
struct UGameEventScoreboardWidget_InitializeScoreboard_Params
{
};

// Function ConZ.GameEventScoreboardWidget.GetSelectedIndex
struct UGameEventScoreboardWidget_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventScoreboardWidget.CreateMini
struct UGameEventScoreboardWidget_CreateMini_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      statClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      teamHeaderClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameEventScoreboardWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.GameEventScoreboardWidget.Create
struct UGameEventScoreboardWidget_Create_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      roundInfoClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      teamHeaderClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      statClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameEventScoreboardWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.GameEventTeamHeaderWidget.SetGameEvent
struct UGameEventTeamHeaderWidget_SetGameEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventTeamHeaderWidget.ClearWinCounters
struct UGameEventTeamHeaderWidget_ClearWinCounters_Params
{
};

// Function ConZ.GameEventTeamHeaderWidget.AddWinCounter
struct UGameEventTeamHeaderWidget_AddWinCounter_Params
{
};

// Function ConZ.GameEventTeamScoreWidget.UpdateScore
struct UGameEventTeamScoreWidget_UpdateScore_Params
{
};

// Function ConZ.GameEventTransport.TravelToDestination
struct AGameEventTransport_TravelToDestination_Params
{
	struct FVector                                     Destination;                                              // (Parm, IsPlainOldData)
};

// Function ConZ.GameEventTransport.SkipToDestination
struct AGameEventTransport_SkipToDestination_Params
{
};

// Function ConZ.GameEventTransport.ReserveForPrisoner
struct AGameEventTransport_ReserveForPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GameEventTransport.OnRep_TargetPosition
struct AGameEventTransport_OnRep_TargetPosition_Params
{
};

// Function ConZ.GameEventTransport.OnRep_LastPosition
struct AGameEventTransport_OnRep_LastPosition_Params
{
};

// Function ConZ.GameEventTransport.OnOrderComplete
struct AGameEventTransport_OnOrderComplete_Params
{
};

// Function ConZ.GameEventTransport.LiftOff
struct AGameEventTransport_LiftOff_Params
{
};

// Function ConZ.GameEventTransport.LeaveIsland
struct AGameEventTransport_LeaveIsland_Params
{
};

// Function ConZ.GameEventTransport.LandAtLocation
struct AGameEventTransport_LandAtLocation_Params
{
	struct FVector                                     Destination;                                              // (Parm, IsPlainOldData)
};

// Function ConZ.GameEventTransport.IsInteractable
struct AGameEventTransport_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventTransport.GetReservedParticipant
struct AGameEventTransport_GetReservedParticipant_Params
{
	class APrisoner*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GameEventTransport.CancelOrder
struct AGameEventTransport_CancelOrder_Params
{
};

// Function ConZ.GenericItemContainerWidget.UpdateVisualsFromItem
struct UGenericItemContainerWidget_UpdateVisualsFromItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GenericItemContainerWidget.UpdateImageFromBodySlot
struct UGenericItemContainerWidget_UpdateImageFromBodySlot_Params
{
	EBodySlot                                          bodySlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GenericItemContainerWidget.SetResizableWindowParentSlot
struct UGenericItemContainerWidget_SetResizableWindowParentSlot_Params
{
	class UCanvasPanelSlot*                            PanelSlot;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.GenericItemContainerWidget.SetMinimizationState
struct UGenericItemContainerWidget_SetMinimizationState_Params
{
	bool                                               minimizePartial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               minimizeFull;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GenericItemContainerWidget.RefreshOccupiedSlotsAndMassVisuals
struct UGenericItemContainerWidget_RefreshOccupiedSlotsAndMassVisuals_Params
{
};

// Function ConZ.GenericItemContainerWidget.OnClose
struct UGenericItemContainerWidget_OnClose_Params
{
};

// Function ConZ.GenericItemContainerWidget.GetMinimizedPartial
struct UGenericItemContainerWidget_GetMinimizedPartial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GenericItemContainerWidget.GetMinimizedFull
struct UGenericItemContainerWidget_GetMinimizedFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.GenericItemContainerWidget.ChangeTitle
struct UGenericItemContainerWidget_ChangeTitle_Params
{
	struct FText                                       Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.GenericItemContainerWidget.BlinkItemContainer
struct UGenericItemContainerWidget_BlinkItemContainer_Params
{
};

// Function ConZ.GenericItemContainerWidget.AdjustSize
struct UGenericItemContainerWidget_AdjustSize_Params
{
	struct FVector2D                                   oldSize;                                                  // (Parm, IsPlainOldData)
};

// Function ConZ.GhostTrailComponent.SetTrailActive
struct UGhostTrailComponent_SetTrailActive_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.GhostTrailComponent.GetTrailActive
struct UGhostTrailComponent_GetTrailActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HandInventorySecondIteration.UpdateVisuals
struct UHandInventorySecondIteration_UpdateVisuals_Params
{
};

// Function ConZ.HandInventorySecondIteration.UpdateItemWidgetHighlightings
struct UHandInventorySecondIteration_UpdateItemWidgetHighlightings_Params
{
};

// Function ConZ.HandInventorySecondIteration.OnWeaponAttachmentRemoved
struct UHandInventorySecondIteration_OnWeaponAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HandInventorySecondIteration.OnWeaponAttachmentAdded
struct UHandInventorySecondIteration_OnWeaponAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HandInventorySecondIteration.OnItemPickedUpStateChanged
struct UHandInventorySecondIteration_OnItemPickedUpStateChanged_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pickedUp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HandInventorySecondIteration.OnItemDestroyed
struct UHandInventorySecondIteration_OnItemDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HandInventorySecondIteration.EquipItem
struct UHandInventorySecondIteration_EquipItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InventoryUserWidget.UpdateImage
struct UInventoryUserWidget_UpdateImage_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InventoryUserWidget.UpdateDisplayValues
struct UInventoryUserWidget_UpdateDisplayValues_Params
{
	unsigned char                                      occupiedSlots;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              occupiedMass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InventoryUserWidget.SetTitle
struct UInventoryUserWidget_SetTitle_Params
{
	struct FText                                       Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.InventoryUserWidget.SetMinimizeAndAdjustSize
struct UInventoryUserWidget_SetMinimizeAndAdjustSize_Params
{
	bool                                               isMinimizedFull;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isMinimizedPartial;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               adjustPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InventoryUserWidget.GetMinimizedPartial
struct UInventoryUserWidget_GetMinimizedPartial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.InventoryUserWidget.GetMinimizedFull
struct UInventoryUserWidget_GetMinimizedFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HandInventoryWidget.UpdateWithItem
struct UHandInventoryWidget_UpdateWithItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HandInventoryWidget.SetGridVisibility
struct UHandInventoryWidget_SetGridVisibility_Params
{
	ESlateVisibility                                   gridVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HandInventoryWidget.SetAddonsVisibility
struct UHandInventoryWidget_SetAddonsVisibility_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HandInventoryWidget.RequestUpdateSize
struct UHandInventoryWidget_RequestUpdateSize_Params
{
};

// Function ConZ.HandPanel.UpdateItemWidgetHighlightings
struct UHandPanel_UpdateItemWidgetHighlightings_Params
{
};

// Function ConZ.HandPanel.GetShoulderHolster
struct UHandPanel_GetShoulderHolster_Params
{
	int                                                holsterId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UShoulderHolsterWidget*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HandPanel.GetQuickAccessAt
struct UHandPanel_GetQuickAccessAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuickAccessItemSwitcher*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HandPanel.GetHandInventory
struct UHandPanel_GetHandInventory_Params
{
	class UHandInventorySecondIteration*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HasLadderMarkersInterface.GetLadderMarkers
struct UHasLadderMarkersInterface_GetLadderMarkers_Params
{
	TArray<struct FLadderMarker>                       Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ConZ.HasWindowMarkersInterface.GetWindowMarkers
struct UHasWindowMarkersInterface_GetWindowMarkers_Params
{
	TArray<struct FWindowMarker>                       Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ConZ.HealingItem.GetQuantity
struct UHealingItem_GetQuantity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HealingItem.GetId
struct UHealingItem_GetId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HealingItem.GetCaption
struct UHealingItem_GetCaption_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.HeartbeatWidget.SetPrisonerLifeComponent
struct UHeartbeatWidget_SetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      Value;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.HeartbeatWidget.GetPrisonerLifeComponent
struct UHeartbeatWidget_GetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Helpers.SortSkillsByLevelAndExperience
struct UHelpers_SortSkillsByLevelAndExperience_Params
{
	TArray<class USkill*>                              Skills;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.Helpers.SendChatLineToAll
struct UHelpers_SendChatLineToAll_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function ConZ.Helpers.PasteLocationAndRotationFromClipboard
struct UHelpers_PasteLocationAndRotationFromClipboard_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.ParseServerIpAndPort
struct UHelpers_ParseServerIpAndPort_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Ip;                                                       // (Parm, OutParm, ZeroConstructor)
	int                                                Port;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.MakeAuthTokenForUser
struct UHelpers_MakeAuthTokenForUser_Params
{
	class UDbUser*                                     user;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     password;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Helpers.MakeAuthTokenForCurrentUser
struct UHelpers_MakeAuthTokenForCurrentUser_Params
{
	class AActor*                                      Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     password;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Helpers.MakeAuthToken
struct UHelpers_MakeAuthToken_Params
{
	struct FString                                     UserId;                                                   // (Parm, ZeroConstructor)
	struct FString                                     password;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Helpers.IsWorldStreamed
struct UHelpers_IsWorldStreamed_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.IsPointWithinCircle
struct UHelpers_IsPointWithinCircle_Params
{
	struct FVector2D                                   Point;                                                    // (Parm, IsPlainOldData)
	struct FVector2D                                   circleCenter;                                             // (Parm, IsPlainOldData)
	float                                              circleRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.GetRandomPointWithinTwoCircles
struct UHelpers_GetRandomPointWithinTwoCircles_Params
{
	struct FVector2D                                   centerA;                                                  // (Parm, IsPlainOldData)
	float                                              radiusA;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   centerB;                                                  // (Parm, IsPlainOldData)
	float                                              radiusB;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.GetRandomPointWithinCircle
struct UHelpers_GetRandomPointWithinCircle_Params
{
	struct FVector2D                                   Center;                                                   // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.GetLineBatcher
struct UHelpers_GetLineBatcher_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistentLines;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDepthIsForeground;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULineBatchComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Helpers.GetGameVersion
struct UHelpers_GetGameVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Helpers.GetEnumeratorName
struct UHelpers_GetEnumeratorName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Helpers.GetDistanceToClosestPlayerPawnOrSpectator
struct UHelpers_GetDistanceToClosestPlayerPawnOrSpectator_Params
{
	class UWorld*                                      World;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.GetDefaultDedicatedServerResponsePort
struct UHelpers_GetDefaultDedicatedServerResponsePort_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.GetDataSingleton
struct UHelpers_GetDataSingleton_Params
{
	class UDataSingleton*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.GetCircleYForX
struct UHelpers_GetCircleYForX_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Up;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.GetAuthTokenForUser
struct UHelpers_GetAuthTokenForUser_Params
{
	class UDbUser*                                     user;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerIp;                                                 // (Parm, ZeroConstructor)
	int                                                ServerResponsePort;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Helpers.GetAuthTokenForCurrentUser
struct UHelpers_GetAuthTokenForCurrentUser_Params
{
	class AActor*                                      Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerIp;                                                 // (Parm, ZeroConstructor)
	int                                                ServerResponsePort;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Helpers.GetActorComponentByName
struct UHelpers_GetActorComponentByName_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Helpers.DrawLine
struct UHelpers_DrawLine_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bPersistentLines;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Helpers.CopyLocationAndRotationToClipboard
struct UHelpers_CopyLocationAndRotationToClipboard_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Helpers.AreCirclesIntersecting
struct UHelpers_AreCirclesIntersecting_Params
{
	struct FVector2D                                   centerA;                                                  // (Parm, IsPlainOldData)
	float                                              radiusA;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   centerB;                                                  // (Parm, IsPlainOldData)
	float                                              radiusB;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               onlyEdge;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Helpers.AddChatLine
struct UHelpers_AddChatLine_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function ConZ.HitReactComponent.RecoverFromRagdollImmediately
struct UHitReactComponent_RecoverFromRagdollImmediately_Params
{
};

// Function ConZ.HitReactComponent.RecoverFromRagdoll
struct UHitReactComponent_RecoverFromRagdoll_Params
{
};

// Function ConZ.HitReactComponent.OnRep_ServerRagdollLocation
struct UHitReactComponent_OnRep_ServerRagdollLocation_Params
{
};

// Function ConZ.HitReactComponent.OnRep_RagdollTransitionState
struct UHitReactComponent_OnRep_RagdollTransitionState_Params
{
};

// Function ConZ.HitReactComponent.OnMontageBlendingOut
struct UHitReactComponent_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HitReactComponent.MoveRagdollMesh
struct UHitReactComponent_MoveRagdollMesh_Params
{
	class UPrimitiveComponent*                         MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     currentLocation;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.HitReactComponent.IsRagdollAtRest
struct UHitReactComponent_IsRagdollAtRest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HitReactComponent.IsPlayingGetUpMontage
struct UHitReactComponent_IsPlayingGetUpMontage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HitReactComponent.IsInRagdoll
struct UHitReactComponent_IsInRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HitReactComponent.IsCapsuleOverlapped
struct UHitReactComponent_IsCapsuleOverlapped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HitReactComponent.IsBlendingRagdoll
struct UHitReactComponent_IsBlendingRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HitReactComponent.GoToRagdoll
struct UHitReactComponent_GoToRagdoll_Params
{
};

// Function ConZ.HitReactComponent.GetPelvisBoneName
struct UHitReactComponent_GetPelvisBoneName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HitReactComponent.CanRecoverFromRagdoll
struct UHitReactComponent_CanRecoverFromRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HitReactComponent.ApplyPhysicalAnimationData
struct UHitReactComponent_ApplyPhysicalAnimationData_Params
{
	struct FPhysicalAnimationDesc                      desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.HudWidget.UpdateAttributesHistory
struct UHudWidget_UpdateAttributesHistory_Params
{
};

// Function ConZ.HudWidget.ToggleMonitorsVisibility
struct UHudWidget_ToggleMonitorsVisibility_Params
{
};

// Function ConZ.HudWidget.SwitchTabMode
struct UHudWidget_SwitchTabMode_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HudWidget.ShowNotification
struct UHudWidget_ShowNotification_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HudWidget.ShowKillFeedNotification
struct UHudWidget_ShowKillFeedNotification_Params
{
	struct FText                                       prefix;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       characterName;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       suffix;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ping;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HudWidget.ShouldSerializeWidgetLayout
struct UHudWidget_ShouldSerializeWidgetLayout_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HudWidget.SetTabEnabled
struct UHudWidget_SetTabEnabled_Params
{
	ETabMode                                           Tab;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HudWidget.SetPrisoner
struct UHudWidget_SetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HudWidget.SetMainCanvasVisibility
struct UHudWidget_SetMainCanvasVisibility_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HudWidget.SaveLayout
struct UHudWidget_SaveLayout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HudWidget.ResetLayout
struct UHudWidget_ResetLayout_Params
{
};

// Function ConZ.HudWidget.RemoveTeammateName
struct UHudWidget_RemoveTeammateName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function ConZ.HudWidget.OpenChat
struct UHudWidget_OpenChat_Params
{
};

// Function ConZ.HudWidget.LoadLayout
struct UHudWidget_LoadLayout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HudWidget.IsChatOpen
struct UHudWidget_IsChatOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HudWidget.GetVicinityPanel
struct UHudWidget_GetVicinityPanel_Params
{
	class UVicinityPanelSecondIteration*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HudWidget.GetTopLevelPanelWidget
struct UHudWidget_GetTopLevelPanelWidget_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HudWidget.GetTabModeSwitcherWidget
struct UHudWidget_GetTabModeSwitcherWidget_Params
{
	class UTabModeSwitcherWidget*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HudWidget.GetMainCanvasVisibility
struct UHudWidget_GetMainCanvasVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HudWidget.GetInventoryPanel
struct UHudWidget_GetInventoryPanel_Params
{
	class UInventoryPanelSecondIteration*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HudWidget.GetHandPanel
struct UHudWidget_GetHandPanel_Params
{
	class UHandPanel*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HudWidget.GetCraftingPanel
struct UHudWidget_GetCraftingPanel_Params
{
	class UCraftingPanelWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HudWidget.GetBCURightPanel
struct UHudWidget_GetBCURightPanel_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HudWidget.GetBCULeftPanel
struct UHudWidget_GetBCULeftPanel_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.HudWidget.DumpStringToFile
struct UHudWidget_DumpStringToFile_Params
{
	struct FString                                     stringToDump;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.HudWidget.CloseChat
struct UHudWidget_CloseChat_Params
{
};

// Function ConZ.HudWidget.ClearTeammateNames
struct UHudWidget_ClearTeammateNames_Params
{
};

// Function ConZ.HudWidget.ClearNotifications
struct UHudWidget_ClearNotifications_Params
{
};

// Function ConZ.HudWidget.ChangeChatType
struct UHudWidget_ChangeChatType_Params
{
	EChatType                                          chatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HudWidget.AddWarning
struct UHudWidget_AddWarning_Params
{
	EWarningType                                       warningType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HudWidget.AddTeammateName
struct UHudWidget_AddTeammateName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function ConZ.HudWidget.AddMessageToScreen
struct UHudWidget_AddMessageToScreen_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               beep;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.HudWidget.AddChatLine
struct UHudWidget_AddChatLine_Params
{
	struct FString                                     string;                                                   // (Parm, ZeroConstructor)
	EChatType                                          chatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InspectedItemWidget.SetIsToolForSomething
struct UInspectedItemWidget_SetIsToolForSomething_Params
{
	bool                                               IsTool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.UseItemOnServer
struct UInteractionComponent_UseItemOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              usageWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Eat;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.UpdateItemDataOnServer
struct UInteractionComponent_UpdateItemDataOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.UpdateExistenceOnClient
struct UInteractionComponent_UpdateExistenceOnClient_Params
{
	bool                                               Exists;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.UnspawnExaminedItemsOnServer
struct UInteractionComponent_UnspawnExaminedItemsOnServer_Params
{
	bool                                               destroyItems;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.UnexamineItemOnServer
struct UInteractionComponent_UnexamineItemOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.UnexamineItemOnClient
struct UInteractionComponent_UnexamineItemOnClient_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.UncraftItemOnServer
struct UInteractionComponent_UncraftItemOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.TankFuelOnServer
struct UInteractionComponent_TankFuelOnServer_Params
{
	class AFuelTank*                                   FuelTank;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AFuelCanister*                               FuelCanister;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.StoreItemsOnServer
struct UInteractionComponent_StoreItemsOnServer_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     instanceLocation;                                         // (Parm, IsPlainOldData)
	TArray<class AItem*>                               storeItems;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.InteractionComponent.PickupItemOnServer
struct UInteractionComponent_PickupItemOnServer_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pickupLocation;                                           // (Parm, IsPlainOldData)
	EPickupItemOperation                               Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.PickupItemOnClients
struct UInteractionComponent_PickupItemOnClients_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pickupLocation;                                           // (Parm, IsPlainOldData)
};

// Function ConZ.InteractionComponent.OperateGeneratorOnServer
struct UInteractionComponent_OperateGeneratorOnServer_Params
{
	class APowerGenerator*                             generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               working;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.OperateElectricDoorOnServer
struct UInteractionComponent_OperateElectricDoorOnServer_Params
{
	class ADoor*                                       Door;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Open;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.OperateElectricalDeviceOnServer
struct UInteractionComponent_OperateElectricalDeviceOnServer_Params
{
	class AElectricalDevice*                           device;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               working;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.OpenItemOnServer
struct UInteractionComponent_OpenItemOnServer_Params
{
	class AFoodItem*                                   FoodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       openingItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.OnRep_PickupSpawnedItem
struct UInteractionComponent_OnRep_PickupSpawnedItem_Params
{
};

// Function ConZ.InteractionComponent.OnRep_ExamineSpawnedItems
struct UInteractionComponent_OnRep_ExamineSpawnedItems_Params
{
};

// Function ConZ.InteractionComponent.LockElectricDoorOnServer
struct UInteractionComponent_LockElectricDoorOnServer_Params
{
	class ADoor*                                       Door;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     password;                                                 // (Parm, ZeroConstructor)
};

// Function ConZ.InteractionComponent.FinishPickupItemOnServer
struct UInteractionComponent_FinishPickupItemOnServer_Params
{
};

// Function ConZ.InteractionComponent.FinishExaminePrisonerOnServer
struct UInteractionComponent_FinishExaminePrisonerOnServer_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.FinishExamineObjectOnServer
struct UInteractionComponent_FinishExamineObjectOnServer_Params
{
};

// Function ConZ.InteractionComponent.FillWaterOnServer
struct UInteractionComponent_FillWaterOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              salinity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.FillCanisterOnServer
struct UInteractionComponent_FillCanisterOnServer_Params
{
	class AFuelPump*                                   FuelPump;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AFuelCanister*                               FuelCanister;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.ExecuteInteractionOnServer
struct UInteractionComponent_ExecuteInteractionOnServer_Params
{
	class AItem*                                       interactionItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractionType                                   Interaction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FServerCraftableItem                        CraftableItem;                                            // (Parm)
};

// Function ConZ.InteractionComponent.ExamineWidgetIsEmpty
struct UInteractionComponent_ExamineWidgetIsEmpty_Params
{
};

// Function ConZ.InteractionComponent.ExamineWidgetClose
struct UInteractionComponent_ExamineWidgetClose_Params
{
};

// Function ConZ.InteractionComponent.ExaminePrisonerOnServer
struct UInteractionComponent_ExaminePrisonerOnServer_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.ExamineObjectOnServer
struct UInteractionComponent_ExamineObjectOnServer_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     instanceLocation;                                         // (Parm, IsPlainOldData)
};

// Function ConZ.InteractionComponent.DestroyItemOnServer
struct UInteractionComponent_DestroyItemOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.DestroyActorOnServer
struct UInteractionComponent_DestroyActorOnServer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.CutObjectOnServer
struct UInteractionComponent_CutObjectOnServer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               tools;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	bool                                               collectOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.CutObjectOnClients
struct UInteractionComponent_CutObjectOnClients_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionComponent.CraftItemOnServer
struct UInteractionComponent_CraftItemOnServer_Params
{
	struct FServerCraftableItem                        CraftableItem;                                            // (Parm)
};

// Function ConZ.InteractionComponent.Client_SendGroundSearchLocation
struct UInteractionComponent_Client_SendGroundSearchLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function ConZ.InteractionComponent.ChopOnServer
struct UInteractionComponent_ChopOnServer_Params
{
	class UObject*                                     choppedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               tools;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.InteractionComponent.CheckExistenceOnServer
struct UInteractionComponent_CheckExistenceOnServer_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionContainerUserWidget.RemoveActiveInteractionWidget
struct UInteractionContainerUserWidget_RemoveActiveInteractionWidget_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionContainerUserWidget.InteractableDestroyed
struct UInteractionContainerUserWidget_InteractableDestroyed_Params
{
	class AActor*                                      interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InteractionUserWidget.Interact
struct UInteractionUserWidget_Interact_Params
{
};

// Function ConZ.InventoryContainersWidget.RemoveItem
struct UInventoryContainersWidget_RemoveItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InventoryContainersWidget.GetWidgetForItem
struct UInventoryContainersWidget_GetWidgetForItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemUserWidget*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.InventoryContainersWidget.ChangeTitle
struct UInventoryContainersWidget_ChangeTitle_Params
{
	struct FText                                       Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.InventoryContainersWidget.AddItem
struct UInventoryContainersWidget_AddItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemUserWidget*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.InventoryPanelSecondIteration.UpdateItemWidgetHighlightings
struct UInventoryPanelSecondIteration_UpdateItemWidgetHighlightings_Params
{
};

// Function ConZ.InventoryPanelSecondIteration.UpdateContainerForItem
struct UInventoryPanelSecondIteration_UpdateContainerForItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InventoryPanelSecondIteration.RemoveContainerForItem
struct UInventoryPanelSecondIteration_RemoveContainerForItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InventoryPanelSecondIteration.AddContainerForItem
struct UInventoryPanelSecondIteration_AddContainerForItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.InventorySecondIteration.UpdateItemWidgetHighlightings
struct UInventorySecondIteration_UpdateItemWidgetHighlightings_Params
{
};

// Function ConZ.InventorySecondIteration.UpdateContainer
struct UInventorySecondIteration_UpdateContainer_Params
{
};

// Function ConZ.InventorySecondIteration.Blink
struct UInventorySecondIteration_Blink_Params
{
};

// Function ConZ.ItemClassWidget.InteractWith
struct UItemClassWidget_InteractWith_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ItemClassWidget.Init
struct UItemClassWidget_Init_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ItemClassWidget.Examine
struct UItemClassWidget_Examine_Params
{
};

// Function ConZ.ItemContainer.ShowInteractions
struct UItemContainer_ShowInteractions_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ItemContainer.Expand
struct UItemContainer_Expand_Params
{
};

// Function ConZ.ItemContainer.Collapse
struct UItemContainer_Collapse_Params
{
};

// Function ConZ.ItemSpawningManager.SimulateExamineSpawner
struct AItemSpawningManager_SimulateExamineSpawner_Params
{
	int                                                numIterations;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ItemUserWidget.UpdateHighlightStatus
struct UItemUserWidget_UpdateHighlightStatus_Params
{
};

// Function ConZ.ItemUserWidget.SetItem
struct UItemUserWidget_SetItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ItemUserWidget.SetImage
struct UItemUserWidget_SetImage_Params
{
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.ItemUserWidget.OnClicked__DelegateSignature
struct UItemUserWidget_OnClicked__DelegateSignature_Params
{
	class UItemUserWidget*                             clickedWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.ItemUserWidget.MarkAsWeaponWidget
struct UItemUserWidget_MarkAsWeaponWidget_Params
{
};

// Function ConZ.ItemUserWidget.ItemPickedUpStateChanged
struct UItemUserWidget_ItemPickedUpStateChanged_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pickedUp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ItemUserWidget.InteractableDestroyed
struct UItemUserWidget_InteractableDestroyed_Params
{
	class AActor*                                      interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ItemUserWidget.GetItem
struct UItemUserWidget_GetItem_Params
{
	class AItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ItemUserWidget.CreateFromItem
struct UItemUserWidget_CreateFromItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemUserWidget*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.ItemUserWidget.BlinkItemContainer
struct UItemUserWidget_BlinkItemContainer_Params
{
};

// Function ConZ.MainMenuGameMode.UpdatePreviewPrisoner
struct AMainMenuGameMode_UpdatePreviewPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDbUserProfile*                              profile;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.MainMenuGameMode.UITransition
struct AMainMenuGameMode_UITransition_Params
{
	class UClass*                                      newWidget;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ConZ.MeleeCombatComponent.ToggleCombatMode
struct UMeleeCombatComponent_ToggleCombatMode_Params
{
};

// Function ConZ.MeleeCombatComponent.SetIsInCombatMode
struct UMeleeCombatComponent_SetIsInCombatMode_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.MeleeCombatComponent.Server_StartMeleeAttack
struct UMeleeCombatComponent_Server_StartMeleeAttack_Params
{
	struct FMeleeAction                                action;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.MeleeCombatComponent.Server_EnablePendingBlockOrDodge
struct UMeleeCombatComponent_Server_EnablePendingBlockOrDodge_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.MeleeCombatComponent.Server_Dodge
struct UMeleeCombatComponent_Server_Dodge_Params
{
	struct FMeleeAction                                action;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.MeleeCombatComponent.OnRep_CurrentMeleeAction
struct UMeleeCombatComponent_OnRep_CurrentMeleeAction_Params
{
};

// Function ConZ.MeleeCombatComponent.IsHoldingBlock
struct UMeleeCombatComponent_IsHoldingBlock_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeCombatComponent.GetIsInCombatMode
struct UMeleeCombatComponent_GetIsInCombatMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeInterface.OnBeingAttackedByMelee
struct UMeleeInterface_OnBeingAttackedByMelee_Params
{
	struct FAttackedByMeleeData                        Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.MeleeInterface.CheckMeleeAttackCapsuleCollision
struct UMeleeInterface_CheckMeleeAttackCapsuleCollision_Params
{
	struct FCheckMeleeAttackCapsuleCollisionData       Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MeleeInterface.CanHoldBlock
struct UMeleeInterface_CanHoldBlock_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.MenuPlayerController.InputComponent_MouseReleased
struct AMenuPlayerController_InputComponent_MouseReleased_Params
{
};

// Function ConZ.MenuPlayerController.InputComponent_MousePressed
struct AMenuPlayerController_InputComponent_MousePressed_Params
{
};

// Function ConZ.Mountable.Eject
struct UMountable_Eject_Params
{
};

// Function ConZ.NativeWindowsContent.TestText
struct UNativeWindowsContent_TestText_Params
{
};

// Function ConZ.NativeWindowsContent.SetParentWindow
struct UNativeWindowsContent_SetParentWindow_Params
{
	class UUserWidget*                                 _parentWindow;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.NativeWindowsContent.GetParentWindow
struct UNativeWindowsContent_GetParentWindow_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.NightVisionGogglesItem.SetActivatedOnServer
struct ANightVisionGogglesItem_SetActivatedOnServer_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.NightVisionGogglesItem.OnRep_Activated
struct ANightVisionGogglesItem_OnRep_Activated_Params
{
};

// DelegateFunction ConZ.NightVisionGogglesItem.ActivatedChangedEvent__DelegateSignature
struct ANightVisionGogglesItem_ActivatedChangedEvent__DelegateSignature_Params
{
	class ANightVisionGogglesItem*                     sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.NotificationPanelWidget.ShowNotification
struct UNotificationPanelWidget_ShowNotification_Params
{
	class UNotificationWidget*                         notification;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.NotificationPanelWidget.ClearAllNotifications
struct UNotificationPanelWidget_ClearAllNotifications_Params
{
};

// Function ConZ.ObjectSelectionContainerWidget.HasItem
struct UObjectSelectionContainerWidget_HasItem_Params
{
	class AItem*                                       Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction ConZ.ObjectSelectionContainerWidget.DoubleClickedOnHeaderDelegate__DelegateSignature
struct UObjectSelectionContainerWidget_DoubleClickedOnHeaderDelegate__DelegateSignature_Params
{
	class UObjectSelectionContainerWidget*             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.ObjectSelectionContainerWidget.Close
struct UObjectSelectionContainerWidget_Close_Params
{
};

// Function ConZ.OptionsWidget.SetMouseSensitivity
struct UOptionsWidget_SetMouseSensitivity_Params
{
	EMouseSensitivityMode                              Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.OptionsWidget.SetInvertMouseY
struct UOptionsWidget_SetInvertMouseY_Params
{
	bool                                               invert;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.OptionsWidget.RevertControlChanges
struct UOptionsWidget_RevertControlChanges_Params
{
};

// Function ConZ.OptionsWidget.ResetControlsToDefault
struct UOptionsWidget_ResetControlsToDefault_Params
{
};

// Function ConZ.OptionsWidget.GetResolutionStringFormatted
struct UOptionsWidget_GetResolutionStringFormatted_Params
{
	struct FString                                     string;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.OptionsWidget.GetMouseSensitivity
struct UOptionsWidget_GetMouseSensitivity_Params
{
	EMouseSensitivityMode                              Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.OptionsWidget.GetAxisMappings
struct UOptionsWidget_GetAxisMappings_Params
{
	TArray<struct FInputAxisKeyMapping>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.OptionsWidget.GetAxisMappingForAxisName
struct UOptionsWidget_GetAxisMappingForAxisName_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputAxisKeyMapping                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.OptionsWidget.GetActionMappings
struct UOptionsWidget_GetActionMappings_Params
{
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.OptionsWidget.GetActionMappingForActionName
struct UOptionsWidget_GetActionMappingForActionName_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.OptionsWidget.ChangeAxisMapping
struct UOptionsWidget_ChangeAxisMapping_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.OptionsWidget.ChangeActionMapping
struct UOptionsWidget_ChangeActionMapping_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function ConZ.OptionsWidget.ApplyControlChanges
struct UOptionsWidget_ApplyControlChanges_Params
{
};

// Function ConZ.PAX_GameEventManager.ForceUnjoinedParticipantsIntoEvent
struct APAX_GameEventManager_ForceUnjoinedParticipantsIntoEvent_Params
{
};

// Function ConZ.PlaceableActor.Server_SetDesiredPlacement
struct APlaceableActor_Server_SetDesiredPlacement_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	bool                                               allowed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PlaceableActor.Server_Place
struct APlaceableActor_Server_Place_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function ConZ.PlaceableActor.OnRep_PlacementState
struct APlaceableActor_OnRep_PlacementState_Params
{
};

// Function ConZ.PlaceableActor.OnRep_Ingredients
struct APlaceableActor_OnRep_Ingredients_Params
{
};

// Function ConZ.PlaceableActor.OnRep_CraftingIndex
struct APlaceableActor_OnRep_CraftingIndex_Params
{
};

// Function ConZ.PowerGenerator.OnRep_IsWorking
struct APowerGenerator_OnRep_IsWorking_Params
{
};

// Function ConZ.PreviousNextSwitchWidget.SwitchToPrevious
struct UPreviousNextSwitchWidget_SwitchToPrevious_Params
{
};

// Function ConZ.PreviousNextSwitchWidget.SwitchToNext
struct UPreviousNextSwitchWidget_SwitchToNext_Params
{
};

// DelegateFunction ConZ.PreviousNextSwitchWidget.OnSwitchClickedDelegate__DelegateSignature
struct UPreviousNextSwitchWidget_OnSwitchClickedDelegate__DelegateSignature_Params
{
	int                                                widgetArrayIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.UpdateZoomEffect
struct APrisoner_UpdateZoomEffect_Params
{
	float                                              Fraction;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.UpdateWristwatchVisibility
struct APrisoner_UpdateWristwatchVisibility_Params
{
};

// Function ConZ.Prisoner.UpdateMaterialsFadeAmount
struct APrisoner_UpdateMaterialsFadeAmount_Params
{
	float                                              fadeAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.UpdateChipLightColorIndex
struct APrisoner_UpdateChipLightColorIndex_Params
{
};

// Function ConZ.Prisoner.Unmount
struct APrisoner_Unmount_Params
{
};

// Function ConZ.Prisoner.Unhide
struct APrisoner_Unhide_Params
{
};

// Function ConZ.Prisoner.TryInteractDefault
struct APrisoner_TryInteractDefault_Params
{
};

// Function ConZ.Prisoner.ToggleWantsToHoldBlock
struct APrisoner_ToggleWantsToHoldBlock_Params
{
};

// Function ConZ.Prisoner.ToggleEventsPanel
struct APrisoner_ToggleEventsPanel_Params
{
};

// Function ConZ.Prisoner.ToggleCraftingPanel
struct APrisoner_ToggleCraftingPanel_Params
{
};

// Function ConZ.Prisoner.Teleport
struct APrisoner_Teleport_Params
{
	struct FPrisonerTeleportRequest                    request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.Prisoner.TakeItemInHandsOnServer
struct APrisoner_TakeItemInHandsOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.TakeItemInHands
struct APrisoner_TakeItemInHands_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.StopInteraction
struct APrisoner_StopInteraction_Params
{
};

// Function ConZ.Prisoner.StartSecondaryMeleeAttack
struct APrisoner_StartSecondaryMeleeAttack_Params
{
};

// Function ConZ.Prisoner.StartPrimaryMeleeAttack
struct APrisoner_StartPrimaryMeleeAttack_Params
{
};

// Function ConZ.Prisoner.StartMeleeDodge
struct APrisoner_StartMeleeDodge_Params
{
	EDodgeDirectionType                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.StartMeleeAttack
struct APrisoner_StartMeleeAttack_Params
{
	struct FGameplayTag                                meleeAttackType;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.Prisoner.StartComboMeleeAttack
struct APrisoner_StartComboMeleeAttack_Params
{
};

// Function ConZ.Prisoner.ShowSpawnScreen
struct APrisoner_ShowSpawnScreen_Params
{
};

// Function ConZ.Prisoner.ShouldLookatMeleeTarget
struct APrisoner_ShouldLookatMeleeTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.SetWristwatchBrightness
struct APrisoner_SetWristwatchBrightness_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetWeaponsVisibility
struct APrisoner_SetWeaponsVisibility_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetWeaponOnClient
struct APrisoner_SetWeaponOnClient_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetWeaponAimingTypeOnServer
struct APrisoner_SetWeaponAimingTypeOnServer_Params
{
	EWeaponAimingType                                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetThrowingModeOnServer
struct APrisoner_SetThrowingModeOnServer_Params
{
	EThrowingMode                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetThrowingMode
struct APrisoner_SetThrowingMode_Params
{
	EThrowingMode                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetTeamIndexOnServer
struct APrisoner_SetTeamIndexOnServer_Params
{
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetTargetOnServer
struct APrisoner_SetTargetOnServer_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetTargetLeanAmountOnServer
struct APrisoner_SetTargetLeanAmountOnServer_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetTargetCrouchStage
struct APrisoner_SetTargetCrouchStage_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetStrengthOnServer
struct APrisoner_SetStrengthOnServer_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetStrength
struct APrisoner_SetStrength_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetStance
struct APrisoner_SetStance_Params
{
	EPrisonerStance                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetSkillLevelOnServer
struct APrisoner_SetSkillLevelOnServer_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetSkillLevel
struct APrisoner_SetSkillLevel_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetPlayerSoundLevel
struct APrisoner_SetPlayerSoundLevel_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetPartWaterWeight
struct APrisoner_SetPartWaterWeight_Params
{
	EPrisonerWettablePart                              part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetNightVisionEnabled
struct APrisoner_SetNightVisionEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetNameTextVisibilityForAll
struct APrisoner_SetNameTextVisibilityForAll_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetNameTextVisibility
struct APrisoner_SetNameTextVisibility_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetMeleeTargetSelectionMode
struct APrisoner_SetMeleeTargetSelectionMode_Params
{
	EPrisonerMeleeTargetSelectionMode                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetMeleeTarget
struct APrisoner_SetMeleeTarget_Params
{
	class AActor*                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetLocationAndRotationOnServer
struct APrisoner_SetLocationAndRotationOnServer_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function ConZ.Prisoner.SetItemInHandsOnClient
struct APrisoner_SetItemInHandsOnClient_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetIsInCombatModeOnServer
struct APrisoner_SetIsInCombatModeOnServer_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetIsInCombatMode
struct APrisoner_SetIsInCombatMode_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetIntelligenceOnServer
struct APrisoner_SetIntelligenceOnServer_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetIntelligence
struct APrisoner_SetIntelligence_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetGameEventLoadout
struct APrisoner_SetGameEventLoadout_Params
{
	class UClass*                                      primary;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              primaryAttachments;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class UClass*                                      secondary;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              secondaryAttachments;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class UClass*                                      tertiary;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              tertiaryAttachments;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              outfit;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              support;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.Prisoner.SetGameEvent
struct APrisoner_SetGameEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetFreeLookEnabledOnServer
struct APrisoner_SetFreeLookEnabledOnServer_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetFreeLookEnabled
struct APrisoner_SetFreeLookEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetDexterityOnServer
struct APrisoner_SetDexterityOnServer_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetDexterity
struct APrisoner_SetDexterity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetDesiredPaceOnServer
struct APrisoner_SetDesiredPaceOnServer_Params
{
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetDesiredPace
struct APrisoner_SetDesiredPace_Params
{
	EPrisonerMovementPace                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetDesiredLeanAmount
struct APrisoner_SetDesiredLeanAmount_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetCrouchStage
struct APrisoner_SetCrouchStage_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetConstitutionOnServer
struct APrisoner_SetConstitutionOnServer_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetConstitution
struct APrisoner_SetConstitution_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SetAutoWalk
struct APrisoner_SetAutoWalk_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_UnpackAmmoBox
struct APrisoner_Server_UnpackAmmoBox_Params
{
	class AAmmunitionBoxItem*                          Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_UnloadAmmoFromMagazine
struct APrisoner_Server_UnloadAmmoFromMagazine_Params
{
	class AWeaponAttachmentMagazine*                   magazine;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_SyncWeaponState
struct APrisoner_Server_SyncWeaponState_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                loadedAmmoCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                internalMagazineAmmoCount;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChamberOpened;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_SwapWeaponAttachments
struct APrisoner_Server_SwapWeaponAttachments_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           oldAttachment;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           newAttachment;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_StoreAmmoInAmmoBox
struct APrisoner_Server_StoreAmmoInAmmoBox_Params
{
	class AAmmunitionItem*                             ammo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AAmmunitionBoxItem*                          Box;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_SplitAmmo
struct APrisoner_Server_SplitAmmo_Params
{
	class AAmmunitionItem*                             ammoitem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_SetTargetCrouchStage
struct APrisoner_Server_SetTargetCrouchStage_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_SetScopingWithItemInHandsState
struct APrisoner_Server_SetScopingWithItemInHandsState_Params
{
	EScopingWithItemInHandsState                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_SetPlayingInstrumentInHandsState
struct APrisoner_Server_SetPlayingInstrumentInHandsState_Params
{
	EPlayingInstrumentInHandsState                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_SetMeleeTargetSelectionMode
struct APrisoner_Server_SetMeleeTargetSelectionMode_Params
{
	EPrisonerMeleeTargetSelectionMode                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_SetMeleeTarget
struct APrisoner_Server_SetMeleeTarget_Params
{
	class AActor*                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_SetIsDeluxePlayer
struct APrisoner_Server_SetIsDeluxePlayer_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_RespawnAtCommonSpawnLocation
struct APrisoner_Server_RespawnAtCommonSpawnLocation_Params
{
	EPrisonerCommonSpawnLocation                       commonSpawnLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       spawnTag;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_RequestCharacterAction
struct APrisoner_Server_RequestCharacterAction_Params
{
	struct FCharacterActionReplicationHelper           Value;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.Prisoner.Server_ReportClientWantsToSpawn
struct APrisoner_Server_ReportClientWantsToSpawn_Params
{
};

// Function ConZ.Prisoner.Server_ReportClientReady
struct APrisoner_Server_ReportClientReady_Params
{
};

// Function ConZ.Prisoner.Server_LoadAmmoIntoMagazine
struct APrisoner_Server_LoadAmmoIntoMagazine_Params
{
	class AAmmunitionItem*                             AmmunitionItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachmentMagazine*                   magazine;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_JumpOffLadder
struct APrisoner_Server_JumpOffLadder_Params
{
};

// Function ConZ.Prisoner.Server_JoinAmmo
struct APrisoner_Server_JoinAmmo_Params
{
	class AAmmunitionItem*                             finalItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AAmmunitionItem*                             initiatingItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_InteractWithLadder
struct APrisoner_Server_InteractWithLadder_Params
{
	struct FVector                                     traceOrigin;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     traceDirection;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_InitiateCraftedPlacement
struct APrisoner_Server_InitiateCraftedPlacement_Params
{
	int                                                craftableIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_HandleGearMotion
struct APrisoner_Server_HandleGearMotion_Params
{
	EMotionIntensity                                   motionIntensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldMakeNoise;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_HandleFootstep
struct APrisoner_Server_HandleFootstep_Params
{
	EMotionIntensity                                   motionIntensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldMakeNoise;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Server_CommitSuicide
struct APrisoner_Server_CommitSuicide_Params
{
};

// Function ConZ.Prisoner.Server_ClimbWindow
struct APrisoner_Server_ClimbWindow_Params
{
};

// Function ConZ.Prisoner.Server_Climb
struct APrisoner_Server_Climb_Params
{
};

// Function ConZ.Prisoner.Server_CharacterActionAck
struct APrisoner_Server_CharacterActionAck_Params
{
	struct FCharacterActionAck                         ack;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.Prisoner.SendTeamInvitationOnServer
struct APrisoner_SendTeamInvitationOnServer_Params
{
	class APrisoner*                                   invited;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.SendTeamInvitationOnClient
struct APrisoner_SendTeamInvitationOnClient_Params
{
	class APrisoner*                                   invitor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     invitorName;                                              // (Parm, ZeroConstructor)
};

// Function ConZ.Prisoner.SendMessageToClient
struct APrisoner_SendMessageToClient_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               beep;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.RightShoulderHolsterInteract
struct APrisoner_RightShoulderHolsterInteract_Params
{
};

// Function ConZ.Prisoner.RespawnAtCommonSpawnLocation
struct APrisoner_RespawnAtCommonSpawnLocation_Params
{
	EPrisonerCommonSpawnLocation                       commonSpawnLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       spawnTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.RequestRespawn
struct APrisoner_RequestRespawn_Params
{
	struct FPrisonerTeleportRequest                    request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.Prisoner.RequestCharacterAction
struct APrisoner_RequestCharacterAction_Params
{
	class UCharacterActionDescription*                 desc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.RemoveWeaponAttachment
struct APrisoner_RemoveWeaponAttachment_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.RemoveFromTeamOnServer
struct APrisoner_RemoveFromTeamOnServer_Params
{
	class APrisoner*                                   member;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.RecoverLastSafeLocation
struct APrisoner_RecoverLastSafeLocation_Params
{
};

// Function ConZ.Prisoner.RecoverFromRagdollImmediately
struct APrisoner_RecoverFromRagdollImmediately_Params
{
};

// Function ConZ.Prisoner.RecoverFromRagdoll
struct APrisoner_RecoverFromRagdoll_Params
{
};

// Function ConZ.Prisoner.ProjectileDealDirectDamageOnServer
struct APrisoner_ProjectileDealDirectDamageOnServer_Params
{
	struct FProjectilePointDamageEvent                 ProjectilePointDamageEvent;                               // (Parm)
	struct FSkillEventWeaponProjectileHitTarget        SkillEventWeaponProjectileHitTarget;                      // (Parm)
};

// Function ConZ.Prisoner.Preset4
struct APrisoner_Preset4_Params
{
};

// Function ConZ.Prisoner.Preset3
struct APrisoner_Preset3_Params
{
};

// Function ConZ.Prisoner.Preset2
struct APrisoner_Preset2_Params
{
};

// Function ConZ.Prisoner.Preset1
struct APrisoner_Preset1_Params
{
};

// Function ConZ.Prisoner.PlaceItemInInventoryOrHolster
struct APrisoner_PlaceItemInInventoryOrHolster_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.OpenTabMode
struct APrisoner_OpenTabMode_Params
{
	ETabMode                                           Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.OpenInteractDefaultContextMenu
struct APrisoner_OpenInteractDefaultContextMenu_Params
{
};

// Function ConZ.Prisoner.OnRep_UserProfileName
struct APrisoner_OnRep_UserProfileName_Params
{
};

// Function ConZ.Prisoner.OnRep_ThrowingMode
struct APrisoner_OnRep_ThrowingMode_Params
{
};

// Function ConZ.Prisoner.OnRep_SkinColorIndex
struct APrisoner_OnRep_SkinColorIndex_Params
{
};

// Function ConZ.Prisoner.OnRep_ScopingWithItemInHandsState
struct APrisoner_OnRep_ScopingWithItemInHandsState_Params
{
};

// Function ConZ.Prisoner.OnRep_RightShoulderHolsteredItem
struct APrisoner_OnRep_RightShoulderHolsteredItem_Params
{
};

// Function ConZ.Prisoner.OnRep_PlayingInstrumentInHandsState
struct APrisoner_OnRep_PlayingInstrumentInHandsState_Params
{
};

// Function ConZ.Prisoner.OnRep_PackedWetness
struct APrisoner_OnRep_PackedWetness_Params
{
	uint32_t                                           oldWetness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.OnRep_MeleeTargetSelectionMode
struct APrisoner_OnRep_MeleeTargetSelectionMode_Params
{
};

// Function ConZ.Prisoner.OnRep_MeleeTarget
struct APrisoner_OnRep_MeleeTarget_Params
{
};

// Function ConZ.Prisoner.OnRep_LeftShoulderHolsteredItem
struct APrisoner_OnRep_LeftShoulderHolsteredItem_Params
{
};

// Function ConZ.Prisoner.OnRep_LastSafeLocation
struct APrisoner_OnRep_LastSafeLocation_Params
{
};

// Function ConZ.Prisoner.OnRep_LastCorpse
struct APrisoner_OnRep_LastCorpse_Params
{
};

// Function ConZ.Prisoner.OnRep_ItemInHands
struct APrisoner_OnRep_ItemInHands_Params
{
};

// Function ConZ.Prisoner.OnRep_IsInCombatMode
struct APrisoner_OnRep_IsInCombatMode_Params
{
};

// Function ConZ.Prisoner.OnRep_IsDeluxePlayer
struct APrisoner_OnRep_IsDeluxePlayer_Params
{
};

// Function ConZ.Prisoner.OnRep_HeadTattooIndex
struct APrisoner_OnRep_HeadTattooIndex_Params
{
};

// Function ConZ.Prisoner.OnRep_HeadIndex
struct APrisoner_OnRep_HeadIndex_Params
{
};

// Function ConZ.Prisoner.OnRep_GameEvent
struct APrisoner_OnRep_GameEvent_Params
{
};

// Function ConZ.Prisoner.OnRep_FreeLookEnabled
struct APrisoner_OnRep_FreeLookEnabled_Params
{
};

// Function ConZ.Prisoner.OnRep_DesiredPace
struct APrisoner_OnRep_DesiredPace_Params
{
};

// Function ConZ.Prisoner.OnRep_ChipLightColorIndex
struct APrisoner_OnRep_ChipLightColorIndex_Params
{
};

// Function ConZ.Prisoner.OnRep_BodyTattooIndex
struct APrisoner_OnRep_BodyTattooIndex_Params
{
};

// Function ConZ.Prisoner.OnRep_AimOffset
struct APrisoner_OnRep_AimOffset_Params
{
};

// Function ConZ.Prisoner.OnPlaceableDestroyed
struct APrisoner_OnPlaceableDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.OnMovingThroughNearbyFoliageInstance
struct APrisoner_OnMovingThroughNearbyFoliageInstance_Params
{
	struct FPrisonerNearbyFoliageInstanceInfo          instanceInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.OnInteractDefaultContextMenuClosed
struct APrisoner_OnInteractDefaultContextMenuClosed_Params
{
};

// Function ConZ.Prisoner.OnHearNoise
struct APrisoner_OnHearNoise_Params
{
	class APawn*                                       instigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.OnEndMovingThroughNearbyFoliageInstance
struct APrisoner_OnEndMovingThroughNearbyFoliageInstance_Params
{
	struct FPrisonerNearbyFoliageInstanceInfo          instanceInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.Prisoner.OnBorderCrossingPenaltyChange
struct APrisoner_OnBorderCrossingPenaltyChange_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPrisonerBorderCrossingPenalty                     newPenalty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.OnBeginMovingThroughNearbyFoliageInstance
struct APrisoner_OnBeginMovingThroughNearbyFoliageInstance_Params
{
	struct FPrisonerNearbyFoliageInstanceInfo          instanceInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.Prisoner.NetMulticast_Teleport_SpawnScreen
struct APrisoner_NetMulticast_Teleport_SpawnScreen_Params
{
};

// Function ConZ.Prisoner.NetMulticast_Teleport_MoveAndWaitUntilReady
struct APrisoner_NetMulticast_Teleport_MoveAndWaitUntilReady_Params
{
};

// Function ConZ.Prisoner.NetMulticast_Teleport_Finish
struct APrisoner_NetMulticast_Teleport_Finish_Params
{
};

// Function ConZ.Prisoner.NetMulticast_Teleport_FadeIn
struct APrisoner_NetMulticast_Teleport_FadeIn_Params
{
};

// Function ConZ.Prisoner.NetMulticast_Teleport
struct APrisoner_NetMulticast_Teleport_Params
{
	struct FPrisonerTeleportRequest                    request;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.Prisoner.NetMulticast_RequestCharacterAction
struct APrisoner_NetMulticast_RequestCharacterAction_Params
{
	struct FCharacterActionReplicationHelper           Value;                                                    // (ConstParm, Parm, ReferenceParm)
	bool                                               ignoreAutonomousProxy;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.NetMulticast_HandleLanded
struct APrisoner_NetMulticast_HandleLanded_Params
{
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Prisoner.NetMulticast_CharacterActionAck
struct APrisoner_NetMulticast_CharacterActionAck_Params
{
	struct FCharacterActionAck                         ack;                                                      // (ConstParm, Parm, ReferenceParm)
	bool                                               ignoreAutonomousProxy;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Mount
struct APrisoner_Mount_Params
{
	class AActor*                                      Mount;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.MakeUnconscious
struct APrisoner_MakeUnconscious_Params
{
};

// Function ConZ.Prisoner.MakeConscious
struct APrisoner_MakeConscious_Params
{
};

// Function ConZ.Prisoner.LifeComponent_StateRemoved
struct APrisoner_LifeComponent_StateRemoved_Params
{
	class UPrisonerLifeComponent*                      sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EBodyState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.LifeComponent_StateAdded
struct APrisoner_LifeComponent_StateAdded_Params
{
	class UPrisonerLifeComponent*                      sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EBodyState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.LeftShoulderHolsterInteract
struct APrisoner_LeftShoulderHolsterInteract_Params
{
};

// Function ConZ.Prisoner.LeaveTeamOnServer
struct APrisoner_LeaveTeamOnServer_Params
{
};

// Function ConZ.Prisoner.LeaveCombatMode
struct APrisoner_LeaveCombatMode_Params
{
};

// Function ConZ.Prisoner.IsPostFreeLookControllerRotationBlendActive
struct APrisoner_IsPostFreeLookControllerRotationBlendActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsNightVisionEnabled
struct APrisoner_IsNightVisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsInteracting
struct APrisoner_IsInteracting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsInCombatMode
struct APrisoner_IsInCombatMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsFreeLookEnabled
struct APrisoner_IsFreeLookEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsDeluxePlayer
struct APrisoner_IsDeluxePlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsCompletelyInitialized
struct APrisoner_IsCompletelyInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsAutoWalking
struct APrisoner_IsAutoWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsAliveInGameEvent
struct APrisoner_IsAliveInGameEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsActorMeleeTargetCandidate
struct APrisoner_IsActorMeleeTargetCandidate_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.IsActivelyParticipatingInGameEvent
struct APrisoner_IsActivelyParticipatingInGameEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.InventoryComponent_ItemUnequipped
struct APrisoner_InventoryComponent_ItemUnequipped_Params
{
	class UPrisonerInventoryComponent*                 sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.InventoryComponent_ItemEquipped
struct APrisoner_InventoryComponent_ItemEquipped_Params
{
	class UPrisonerInventoryComponent*                 sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.InteractWithObjectOnServer
struct APrisoner_InteractWithObjectOnServer_Params
{
	class UObject*                                     interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractionType                                   InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractionData                            InteractionData;                                          // (ConstParm, Parm, ReferenceParm)
};

// DelegateFunction ConZ.Prisoner.InteractedDelegate__DelegateSignature
struct APrisoner_InteractedDelegate__DelegateSignature_Params
{
	class APrisoner*                                   sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractionType                                   InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.InitTextMeshFromName
struct APrisoner_InitTextMeshFromName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function ConZ.Prisoner.InitFromCharacterTemplate
struct APrisoner_InitFromCharacterTemplate_Params
{
	struct FCharacterTemplate                          CharacterTemplate;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.Prisoner.IncreaseCrouchStage
struct APrisoner_IncreaseCrouchStage_Params
{
};

// Function ConZ.Prisoner.HolsterItemOnServer
struct APrisoner_HolsterItemOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                attachmentSocketHelper;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.HitReactComponent_StateChanged
struct APrisoner_HitReactComponent_StateChanged_Params
{
};

// Function ConZ.Prisoner.Hide
struct APrisoner_Hide_Params
{
};

// Function ConZ.Prisoner.HasItem
struct APrisoner_HasItem_Params
{
	class AItem*                                       Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.HasCurrentMovementEffectOnNearbyFoliage
struct APrisoner_HasCurrentMovementEffectOnNearbyFoliage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.HasCharacterAction
struct APrisoner_HasCharacterAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GoToRagdoll
struct APrisoner_GoToRagdoll_Params
{
};

// Function ConZ.Prisoner.GetWristwatchComponent
struct APrisoner_GetWristwatchComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetWetness
struct APrisoner_GetWetness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetWeaponSocketName
struct APrisoner_GetWeaponSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetWeaponHolsterSocketName
struct APrisoner_GetWeaponHolsterSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetWeapon
struct APrisoner_GetWeapon_Params
{
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetWaterMovementParameters
struct APrisoner_GetWaterMovementParameters_Params
{
	struct FPrisonerWaterMovementParameters            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.Prisoner.GetVisionEffectsComponent
struct APrisoner_GetVisionEffectsComponent_Params
{
	class UVisionEffectsComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetUserProfileName
struct APrisoner_GetUserProfileName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Prisoner.GetUserProfile
struct APrisoner_GetUserProfile_Params
{
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetUserId
struct APrisoner_GetUserId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Prisoner.GetUpperMouthMeshComponent
struct APrisoner_GetUpperMouthMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetUpperHeadSkeletalMeshComponent
struct APrisoner_GetUpperHeadSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetUpperHeadMeshComponent
struct APrisoner_GetUpperHeadMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetTorsoMeshComponent
struct APrisoner_GetTorsoMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetTimeOfDeath
struct APrisoner_GetTimeOfDeath_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.Prisoner.GetTeleportState
struct APrisoner_GetTeleportState_Params
{
	EPrisonerTeleportState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetTargetCrouchStage
struct APrisoner_GetTargetCrouchStage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetTacticsBlobMaterial
struct APrisoner_GetTacticsBlobMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetTabMouseMovement
struct APrisoner_GetTabMouseMovement_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetStance
struct APrisoner_GetStance_Params
{
	EPrisonerStance                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetSavedSpawnLocationActive
struct APrisoner_GetSavedSpawnLocationActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetSavedSpawnLocation
struct APrisoner_GetSavedSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetREyeRotationDelta
struct APrisoner_GetREyeRotationDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetREyeMeshComponent
struct APrisoner_GetREyeMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetPrisonerMovement
struct APrisoner_GetPrisonerMovement_Params
{
	class UPrisonerMovementComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetPrisonerAnimInstance
struct APrisoner_GetPrisonerAnimInstance_Params
{
	class UPrisonerAnimInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetPartWetness
struct APrisoner_GetPartWetness_Params
{
	EPrisonerWettablePart                              part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetPartWaterWeight
struct APrisoner_GetPartWaterWeight_Params
{
	EPrisonerWettablePart                              part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetNearbyFoliageInfo
struct APrisoner_GetNearbyFoliageInfo_Params
{
	struct FPrisonerNearbyFoliageInfo                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.Prisoner.GetMount
struct APrisoner_GetMount_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetMotionIntensity
struct APrisoner_GetMotionIntensity_Params
{
	EMotionIntensity                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetMeleeTargetSelectionMode
struct APrisoner_GetMeleeTargetSelectionMode_Params
{
	EPrisonerMeleeTargetSelectionMode                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetMeleeTarget
struct APrisoner_GetMeleeTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetMaxPartWaterWeight
struct APrisoner_GetMaxPartWaterWeight_Params
{
	EPrisonerWettablePart                              part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetMaxAllowedPace
struct APrisoner_GetMaxAllowedPace_Params
{
	EPrisonerMovementPace                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetLowerMouthMeshComponent
struct APrisoner_GetLowerMouthMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetLowerHeadMeshComponent
struct APrisoner_GetLowerHeadMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetLookatMeleeTargetAimOffset
struct APrisoner_GetLookatMeleeTargetAimOffset_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetLEyeRotationDelta
struct APrisoner_GetLEyeRotationDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetLEyeMeshComponent
struct APrisoner_GetLEyeMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetLegsMeshComponent
struct APrisoner_GetLegsMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetLeavesComponent
struct APrisoner_GetLeavesComponent_Params
{
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetLeanAmount
struct APrisoner_GetLeanAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetLastSafeLocation
struct APrisoner_GetLastSafeLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetItemInHands
struct APrisoner_GetItemInHands_Params
{
	class AItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetIsInFirstPersonView
struct APrisoner_GetIsInFirstPersonView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetHoldBreathState
struct APrisoner_GetHoldBreathState_Params
{
	EHoldBreathState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetHeadMeshComponent
struct APrisoner_GetHeadMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetHandsMeshComponent
struct APrisoner_GetHandsMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetHairMeshComponent
struct APrisoner_GetHairMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetGroundMovementParameters
struct APrisoner_GetGroundMovementParameters_Params
{
	struct FPrisonerGroundMovementParameters           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.Prisoner.GetGameEvent
struct APrisoner_GetGameEvent_Params
{
	class AGameEventBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetFeetMeshComponent
struct APrisoner_GetFeetMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetFacialHairMeshComponent
struct APrisoner_GetFacialHairMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetEyewearMeshComponent
struct APrisoner_GetEyewearMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetEnumeratorNameENetMode
struct APrisoner_GetEnumeratorNameENetMode_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Prisoner.GetDesiredPace
struct APrisoner_GetDesiredPace_Params
{
	EPrisonerMovementPace                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetDesiredLeanAmount
struct APrisoner_GetDesiredLeanAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetCurrentHitReactType
struct APrisoner_GetCurrentHitReactType_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.Prisoner.GetCrouchStage
struct APrisoner_GetCrouchStage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetCombatMode
struct APrisoner_GetCombatMode_Params
{
	EPrisonerCombatMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetClampedDesiredPace
struct APrisoner_GetClampedDesiredPace_Params
{
	EPrisonerMovementPace                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetChipMeshComponent
struct APrisoner_GetChipMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetCharacterAction
struct APrisoner_GetCharacterAction_Params
{
	class UCharacterAction*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetChanceToKnockoutTargetUsingMeleeAttack
struct APrisoner_GetChanceToKnockoutTargetUsingMeleeAttack_Params
{
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetBruisingComponent
struct APrisoner_GetBruisingComponent_Params
{
	class UBruisingComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetBodyArmorMeshComponent
struct APrisoner_GetBodyArmorMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetBackpackMeshComponent
struct APrisoner_GetBackpackMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetArmsMeshComponent
struct APrisoner_GetArmsMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.GetAngularVelocity
struct APrisoner_GetAngularVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetAimOffset
struct APrisoner_GetAimOffset_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GetActualPace
struct APrisoner_GetActualPace_Params
{
	EPrisonerMovementPace                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.GameEventFriendlyFireCheck
struct APrisoner_GameEventFriendlyFireCheck_Params
{
	class APrisoner*                                   Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.FindNextOrPreviousMeleeTarget
struct APrisoner_FindNextOrPreviousMeleeTarget_Params
{
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Next;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.ExamineItem
struct APrisoner_ExamineItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.EquipWeapon
struct APrisoner_EquipWeapon_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.EquippedNightVisionGoggles_ActivatedChanged
struct APrisoner_EquippedNightVisionGoggles_ActivatedChanged_Params
{
	class ANightVisionGogglesItem*                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.EnterCombatMode
struct APrisoner_EnterCombatMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.DropItemFromHands
struct APrisoner_DropItemFromHands_Params
{
};

// Function ConZ.Prisoner.DidGameEventRoundStarted
struct APrisoner_DidGameEventRoundStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.DiarrheaOnServer
struct APrisoner_DiarrheaOnServer_Params
{
};

// Function ConZ.Prisoner.DetonateChip
struct APrisoner_DetonateChip_Params
{
};

// Function ConZ.Prisoner.DecreaseCrouchStage
struct APrisoner_DecreaseCrouchStage_Params
{
};

// Function ConZ.Prisoner.ConstructWristwatchChildActor
struct APrisoner_ConstructWristwatchChildActor_Params
{
};

// Function ConZ.Prisoner.CommitSuicide
struct APrisoner_CommitSuicide_Params
{
};

// Function ConZ.Prisoner.ClosePanels
struct APrisoner_ClosePanels_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.Client_ShowSpawnScreen
struct APrisoner_Client_ShowSpawnScreen_Params
{
};

// Function ConZ.Prisoner.Client_SetSavedSpawnLocation
struct APrisoner_Client_SetSavedSpawnLocation_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function ConZ.Prisoner.Client_RequestCharacterAction
struct APrisoner_Client_RequestCharacterAction_Params
{
	struct FCharacterActionReplicationHelper           Value;                                                    // (ConstParm, Parm, ReferenceParm)
	bool                                               cancelExecutingAction;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Client_OnTakeDamage
struct APrisoner_Client_OnTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, ReferenceParm)
	class AController*                                 eventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Client_LoadAmmoIntoMagazine
struct APrisoner_Client_LoadAmmoIntoMagazine_Params
{
	class AWeaponAttachmentMagazine*                   magazine;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Client_FadeOutVision
struct APrisoner_Client_FadeOutVision_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.Client_FadeInVision
struct APrisoner_Client_FadeInVision_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.ClearGameEventLoadout
struct APrisoner_ClearGameEventLoadout_Params
{
};

// Function ConZ.Prisoner.ClearEquipment
struct APrisoner_ClearEquipment_Params
{
};

// Function ConZ.Prisoner.ChooseFirstMeleeTarget
struct APrisoner_ChooseFirstMeleeTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.CheckForDeluxeDLC
struct APrisoner_CheckForDeluxeDLC_Params
{
};

// Function ConZ.Prisoner.CharacterAction_End
struct APrisoner_CharacterAction_End_Params
{
	class UCharacterAction*                            action;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.Prisoner.CapsuleComponent_PhysicsVolumeChanged
struct APrisoner_CapsuleComponent_PhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.CanLeaveCombatMode
struct APrisoner_CanLeaveCombatMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.CanEnterMeleeCombatMode
struct APrisoner_CanEnterMeleeCombatMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.CanEnterCombatMode
struct APrisoner_CanEnterCombatMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.CancelInteractableDragging
struct APrisoner_CancelInteractableDragging_Params
{
};

// DelegateFunction ConZ.Prisoner.BorderCrossingPenaltyChange__DelegateSignature
struct APrisoner_BorderCrossingPenaltyChange__DelegateSignature_Params
{
	class APrisoner*                                   sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EPrisonerBorderCrossingPenalty                     newPenalty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.BCU_GetSpeedModifier
struct APrisoner_BCU_GetSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.BCU_GetMovementSpeed
struct APrisoner_BCU_GetMovementSpeed_Params
{
	EPrisonerMovementPace                              pace;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.BCU_GetMeleeDamageBonus
struct APrisoner_BCU_GetMeleeDamageBonus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.BCU_GetMaxMovementSpeed
struct APrisoner_BCU_GetMaxMovementSpeed_Params
{
	EPrisonerMovementPace                              pace;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Prisoner.ApplyHeadMesh
struct APrisoner_ApplyHeadMesh_Params
{
};

// Function ConZ.Prisoner.AddWeaponAttachment
struct APrisoner_AddWeaponAttachment_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Prisoner.AddToTeamOnServer
struct APrisoner_AddToTeamOnServer_Params
{
	struct FString                                     teamName;                                                 // (Parm, ZeroConstructor)
};

// Function ConZ.Prisoner.AcceptTeamInvitationOnServer
struct APrisoner_AcceptTeamInvitationOnServer_Params
{
	class APrisoner*                                   invitor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               accepted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.OnIdleStateExit
struct UPrisonerAnimInstance_OnIdleStateExit_Params
{
	struct FAnimNode_StateMachine                      machine;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                prevStateIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nextStateIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.OnIdleStateEntry
struct UPrisonerAnimInstance_OnIdleStateEntry_Params
{
	struct FAnimNode_StateMachine                      machine;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                prevStateIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nextStateIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.IsCourseAngleSupportedByStartAndStopAnimations
struct UPrisonerAnimInstance_IsCourseAngleSupportedByStartAndStopAnimations_Params
{
	float                                              courseAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.IsAnyStanceTransitionActive
struct UPrisonerAnimInstance_IsAnyStanceTransitionActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetWeaponRelatedIdleStateAnimationPlayRateOnGameThread
struct UPrisonerAnimInstance_GetWeaponRelatedIdleStateAnimationPlayRateOnGameThread_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetWeaponAnimationPoseOnWorkerThread
struct UPrisonerAnimInstance_GetWeaponAnimationPoseOnWorkerThread_Params
{
	EWeaponAnimationPose                               animationPose;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EPrisonerStance                                    Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetWeaponAimingNoisePlayRateOnGameThread
struct UPrisonerAnimInstance_GetWeaponAimingNoisePlayRateOnGameThread_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetWeaponAimingNoiseBlendValueOnGameThread
struct UPrisonerAnimInstance_GetWeaponAimingNoiseBlendValueOnGameThread_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetUpperEyelidRotationDelta
struct UPrisonerAnimInstance_GetUpperEyelidRotationDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetPlayRateFromSpeed
struct UPrisonerAnimInstance_GetPlayRateFromSpeed_Params
{
	float                                              speedInAnimation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetLowerEyelidRotationDelta
struct UPrisonerAnimInstance_GetLowerEyelidRotationDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetLocomotionStateWeight
struct UPrisonerAnimInstance_GetLocomotionStateWeight_Params
{
	EPrisonerAnimationState                            State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetLeanBlendWeights
struct UPrisonerAnimInstance_GetLeanBlendWeights_Params
{
	float                                              Left;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 strengthBySpeedCurve;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetKnownCurveValueOnWorkerThread
struct UPrisonerAnimInstance_GetKnownCurveValueOnWorkerThread_Params
{
	EPrisonerAnimationCurve                            Curve;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetInPlaceTurningElapsedTimeRight
struct UPrisonerAnimInstance_GetInPlaceTurningElapsedTimeRight_Params
{
	EPrisonerStance                                    Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetInPlaceTurningElapsedTimeLeft
struct UPrisonerAnimInstance_GetInPlaceTurningElapsedTimeLeft_Params
{
	EPrisonerStance                                    Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetInPlaceTurningDirectionBlendAlpha
struct UPrisonerAnimInstance_GetInPlaceTurningDirectionBlendAlpha_Params
{
	EPrisonerStance                                    Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetInPlaceTurningBlendAlpha
struct UPrisonerAnimInstance_GetInPlaceTurningBlendAlpha_Params
{
	EPrisonerStance                                    Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetIKLegsRootOffsetVectorFromCardinalDirection
struct UPrisonerAnimInstance_GetIKLegsRootOffsetVectorFromCardinalDirection_Params
{
	ECardinalDirection                                 Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetFacialExpressionBlendWeightOnWorkerThread
struct UPrisonerAnimInstance_GetFacialExpressionBlendWeightOnWorkerThread_Params
{
	EPrisonerFacialExpression                          facialExpression;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetFacialExpressionBlendWeightOnGameThread
struct UPrisonerAnimInstance_GetFacialExpressionBlendWeightOnGameThread_Params
{
	EPrisonerFacialExpression                          facialExpression;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetCurrentLocomotionStateElapsedTime
struct UPrisonerAnimInstance_GetCurrentLocomotionStateElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetCurrentLocomotionState
struct UPrisonerAnimInstance_GetCurrentLocomotionState_Params
{
	EPrisonerAnimationState                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetCardinalDirectionFromCourseAngle
struct UPrisonerAnimInstance_GetCardinalDirectionFromCourseAngle_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECardinalDirection                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetBoxingTurnAngle
struct UPrisonerAnimInstance_GetBoxingTurnAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetBoxingInPlaceTurningElapsedTimeRight
struct UPrisonerAnimInstance_GetBoxingInPlaceTurningElapsedTimeRight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetBoxingInPlaceTurningElapsedTimeLeft
struct UPrisonerAnimInstance_GetBoxingInPlaceTurningElapsedTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetBoxingInPlaceTurningDirectionBlendAlpha
struct UPrisonerAnimInstance_GetBoxingInPlaceTurningDirectionBlendAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.GetBoxingInPlaceTurningBlendAlpha
struct UPrisonerAnimInstance_GetBoxingInPlaceTurningBlendAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.FindTimeBeforeJumpApex
struct UPrisonerAnimInstance_FindTimeBeforeJumpApex_Params
{
	class UAnimSequenceBase*                           AnimSequence;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              distanceToApex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.FindTimeAtStoppingDistance
struct UPrisonerAnimInstance_FindTimeAtStoppingDistance_Params
{
	class UAnimSequenceBase*                           AnimSequence;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              stoppingDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.FindTimeAfterJumpApex
struct UPrisonerAnimInstance_FindTimeAfterJumpApex_Params
{
	class UAnimSequenceBase*                           AnimSequence;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              distanceToApex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.DeactivateFacialExpressionOnGameThread
struct UPrisonerAnimInstance_DeactivateFacialExpressionOnGameThread_Params
{
	EPrisonerFacialExpression                          facialExpression;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.DeactivateAllFacialExpressionsOnGameThread
struct UPrisonerAnimInstance_DeactivateAllFacialExpressionsOnGameThread_Params
{
};

// Function ConZ.PrisonerAnimInstance.Blink
struct UPrisonerAnimInstance_Blink_Params
{
};

// Function ConZ.PrisonerAnimInstance.AnimNotify_ThrowRelease
struct UPrisonerAnimInstance_AnimNotify_ThrowRelease_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.AnimNotify_TakeItemInHands
struct UPrisonerAnimInstance_AnimNotify_TakeItemInHands_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.AnimNotify_RFootDown
struct UPrisonerAnimInstance_AnimNotify_RFootDown_Params
{
};

// Function ConZ.PrisonerAnimInstance.AnimNotify_RemoveItemFromHands
struct UPrisonerAnimInstance_AnimNotify_RemoveItemFromHands_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.AnimNotify_LFootDown
struct UPrisonerAnimInstance_AnimNotify_LFootDown_Params
{
};

// Function ConZ.PrisonerAnimInstance.AnimNotify_EnableCapsuleCollision
struct UPrisonerAnimInstance_AnimNotify_EnableCapsuleCollision_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.AnimNotify_DisableCapsuleCollision
struct UPrisonerAnimInstance_AnimNotify_DisableCapsuleCollision_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerAnimInstance.ActivateFacialExpressionOnGameThread
struct UPrisonerAnimInstance_ActivateFacialExpressionOnGameThread_Params
{
	EPrisonerFacialExpression                          facialExpression;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendInDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendOutDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendWeightMultiplier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerHUD.ToggleHUDMode
struct APrisonerHUD_ToggleHUDMode_Params
{
};

// Function ConZ.PrisonerHUD.SetHUDMode
struct APrisonerHUD_SetHUDMode_Params
{
	EPrisonerHUDMode                                   NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerHUD.IsShowingSpawnScreen
struct APrisonerHUD_IsShowingSpawnScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerHUD.IsShowingLoading
struct APrisonerHUD_IsShowingLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerHUD.GetWaypointScreenWidget
struct APrisonerHUD_GetWaypointScreenWidget_Params
{
	class UWaypointScreenWidget*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.PrisonerHUD.GetHudWidgetCanvasPanel
struct APrisonerHUD_GetHudWidgetCanvasPanel_Params
{
	class UCanvasPanel*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.PrisonerHUD.GetHUDMode
struct APrisonerHUD_GetHUDMode_Params
{
	EPrisonerHUDMode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.UpdateItemContainerOnServer
struct UPrisonerInventoryComponent_UpdateItemContainerOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCondensedInventoryContainer                container;                                                // (Parm)
	EItemContainerOperation                            Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.UpdateItemContainerOnClient
struct UPrisonerInventoryComponent_UpdateItemContainerOnClient_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCondensedInventoryContainer                container;                                                // (Parm)
	EItemContainerOperation                            Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.UnEquipStolenClothesItemOnServer
struct UPrisonerInventoryComponent_UnEquipStolenClothesItemOnServer_Params
{
	class APrisoner*                                   stolenPrisoner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AClothesItem*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.UnEquipClothesItemOnServer
struct UPrisonerInventoryComponent_UnEquipClothesItemOnServer_Params
{
	class AClothesItem*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               placeInInventory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.UnEquipClothesItem
struct UPrisonerInventoryComponent_UnEquipClothesItem_Params
{
	class AClothesItem*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               placeInInventory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.ResendItemToClientOnServer
struct UPrisonerInventoryComponent_ResendItemToClientOnServer_Params
{
	class AItem*                                       containingItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.ReportItemNotReceived
struct UPrisonerInventoryComponent_ReportItemNotReceived_Params
{
	unsigned char                                      containerId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.RemoveStolenItemOnServer
struct UPrisonerInventoryComponent_RemoveStolenItemOnServer_Params
{
	class APrisoner*                                   stolenPrisoner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.RemoveSelectionItemsOnClients
struct UPrisonerInventoryComponent_RemoveSelectionItemsOnClients_Params
{
	TArray<class AItem*>                               Items;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	bool                                               allClients;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.RemoveSelectionItemsOnClient
struct UPrisonerInventoryComponent_RemoveSelectionItemsOnClient_Params
{
	TArray<class AItem*>                               Items;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerInventoryComponent.RemoveItemOnServer
struct UPrisonerInventoryComponent_RemoveItemOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.RemoveItemOnClient
struct UPrisonerInventoryComponent_RemoveItemOnClient_Params
{
	unsigned char                                      containerId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnViewingItemPickedUpStateChanged
struct UPrisonerInventoryComponent_OnViewingItemPickedUpStateChanged_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pickedUp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnViewingItemDestroyed
struct UPrisonerInventoryComponent_OnViewingItemDestroyed_Params
{
	class AActor*                                      viewingItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnRep_TorsoItem
struct UPrisonerInventoryComponent_OnRep_TorsoItem_Params
{
	class AClothesItem*                                oldItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnRep_LegsItem
struct UPrisonerInventoryComponent_OnRep_LegsItem_Params
{
	class AClothesItem*                                oldItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnRep_HeadUpperItem
struct UPrisonerInventoryComponent_OnRep_HeadUpperItem_Params
{
	class AClothesItem*                                oldItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnRep_HandsItem
struct UPrisonerInventoryComponent_OnRep_HandsItem_Params
{
	class AClothesItem*                                oldItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnRep_FeetItem
struct UPrisonerInventoryComponent_OnRep_FeetItem_Params
{
	class AClothesItem*                                oldItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnRep_EyesItem
struct UPrisonerInventoryComponent_OnRep_EyesItem_Params
{
	class AClothesItem*                                oldItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnRep_EquippedItems
struct UPrisonerInventoryComponent_OnRep_EquippedItems_Params
{
};

// Function ConZ.PrisonerInventoryComponent.OnRep_BackItem
struct UPrisonerInventoryComponent_OnRep_BackItem_Params
{
	class AClothesItem*                                oldItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnEquippedItemStaticMeshChanged
struct UPrisonerInventoryComponent_OnEquippedItemStaticMeshChanged_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnEquippedItemSkeletalMeshChanged
struct UPrisonerInventoryComponent_OnEquippedItemSkeletalMeshChanged_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.OnEquippedClothesDestroyed
struct UPrisonerInventoryComponent_OnEquippedClothesDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.MoveItemOnServer
struct UPrisonerInventoryComponent_MoveItemOnServer_Params
{
	unsigned char                                      oldContainerId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      newContainerId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.MoveItemOnClient
struct UPrisonerInventoryComponent_MoveItemOnClient_Params
{
	unsigned char                                      oldContainerId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      newContainerId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.PrisonerInventoryComponent.ItemUnequippedDelegate__DelegateSignature
struct UPrisonerInventoryComponent_ItemUnequippedDelegate__DelegateSignature_Params
{
	class UPrisonerInventoryComponent*                 sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.PrisonerInventoryComponent.ItemEquippedDelegate__DelegateSignature
struct UPrisonerInventoryComponent_ItemEquippedDelegate__DelegateSignature_Params
{
	class UPrisonerInventoryComponent*                 sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.IsClothesItemEquipped
struct UPrisonerInventoryComponent_IsClothesItemEquipped_Params
{
	class AClothesItem*                                Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.InitializeItemContainerOnServer
struct UPrisonerInventoryComponent_InitializeItemContainerOnServer_Params
{
	class AClothesItem*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.HasSelectionItem
struct UPrisonerInventoryComponent_HasSelectionItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.GetVicinityItems
struct UPrisonerInventoryComponent_GetVicinityItems_Params
{
	bool                                               containedItems;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerInventoryComponent.GetGearWeightFast
struct UPrisonerInventoryComponent_GetGearWeightFast_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.GetGearWeight
struct UPrisonerInventoryComponent_GetGearWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.GetEquippedItemsForClothesType
struct UPrisonerInventoryComponent_GetEquippedItemsForClothesType_Params
{
	EClothesType                                       ClothesType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AClothesItem*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerInventoryComponent.GetEquippedClothes
struct UPrisonerInventoryComponent_GetEquippedClothes_Params
{
	TArray<class AClothesItem*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerInventoryComponent.GetBodySlotForClothesType
struct UPrisonerInventoryComponent_GetBodySlotForClothesType_Params
{
	EClothesType                                       ClothesType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EBodySlot                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.GetBodySlotForBodyPart
struct UPrisonerInventoryComponent_GetBodySlotForBodyPart_Params
{
	EBodyPart                                          bodyPart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EBodySlot                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.GetAllItems
struct UPrisonerInventoryComponent_GetAllItems_Params
{
	bool                                               containedItems;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerInventoryComponent.ForceInitiateDropOnClient
struct UPrisonerInventoryComponent_ForceInitiateDropOnClient_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.FinishAddSelectionItemOnServer
struct UPrisonerInventoryComponent_FinishAddSelectionItemOnServer_Params
{
};

// Function ConZ.PrisonerInventoryComponent.EquipItemInHandsOnServer
struct UPrisonerInventoryComponent_EquipItemInHandsOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.EquipItemInHandsOnClient
struct UPrisonerInventoryComponent_EquipItemInHandsOnClient_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.EquipClothesItemOnServer
struct UPrisonerInventoryComponent_EquipClothesItemOnServer_Params
{
	class AClothesItem*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.EquipClothesItem
struct UPrisonerInventoryComponent_EquipClothesItem_Params
{
	class AClothesItem*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.DropItemOnServer
struct UPrisonerInventoryComponent_DropItemOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.DropItemOnClient
struct UPrisonerInventoryComponent_DropItemOnClient_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.DropItemAtOnServer
struct UPrisonerInventoryComponent_DropItemAtOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.DropAllItemsOnServer
struct UPrisonerInventoryComponent_DropAllItemsOnServer_Params
{
	TArray<class AItem*>                               Items;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	bool                                               removeSelection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.CanEquipClothesItem
struct UPrisonerInventoryComponent_CanEquipClothesItem_Params
{
	class AClothesItem*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.CanAddItem
struct UPrisonerInventoryComponent_CanAddItem_Params
{
	class AItem*                                       Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.AutoAddItemToItemOnServer
struct UPrisonerInventoryComponent_AutoAddItemToItemOnServer_Params
{
	class AItem*                                       containerItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       containedItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.AutoAddItemOnServer
struct UPrisonerInventoryComponent_AutoAddItemOnServer_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.AutoAddAllItemsOnServer
struct UPrisonerInventoryComponent_AutoAddAllItemsOnServer_Params
{
	TArray<class AItem*>                               Items;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	bool                                               removeSelection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.AddSelectionItemOnClient
struct UPrisonerInventoryComponent_AddSelectionItemOnClient_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.AddItemOnServer
struct UPrisonerInventoryComponent_AddItemOnServer_Params
{
	unsigned char                                      containerId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.AddItemOnClient
struct UPrisonerInventoryComponent_AddItemOnClient_Params
{
	unsigned char                                      containerId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.AddEquippedClothesOnServer
struct UPrisonerInventoryComponent_AddEquippedClothesOnServer_Params
{
	unsigned char                                      containerId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AClothesItem*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerInventoryComponent.AddDefaultEquipment
struct UPrisonerInventoryComponent_AddDefaultEquipment_Params
{
};

// Function ConZ.PrisonerLifeComponent.UpdateAttributesHistoryOnClient
struct UPrisonerLifeComponent_UpdateAttributesHistoryOnClient_Params
{
	TArray<float>                                      strengthHistory;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      constitutionHistory;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      dexterityHistory;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      intelligenceHistory;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerLifeComponent.TestDoDigestionStuff
struct UPrisonerLifeComponent_TestDoDigestionStuff_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.TestDoBladderStuff
struct UPrisonerLifeComponent_TestDoBladderStuff_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.TakeMedicationOnServer
struct UPrisonerLifeComponent_TakeMedicationOnServer_Params
{
	class AMedicationItem*                             MedicationItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.StopLifeProcessing
struct UPrisonerLifeComponent_StopLifeProcessing_Params
{
};

// DelegateFunction ConZ.PrisonerLifeComponent.StateRemovedDelegate__DelegateSignature
struct UPrisonerLifeComponent_StateRemovedDelegate__DelegateSignature_Params
{
	class UPrisonerLifeComponent*                      sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EBodyState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.PrisonerLifeComponent.StateAddedDelegate__DelegateSignature
struct UPrisonerLifeComponent_StateAddedDelegate__DelegateSignature_Params
{
	class UPrisonerLifeComponent*                      sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EBodyState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetUsingDebugPresets
struct UPrisonerLifeComponent_SetUsingDebugPresets_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetStrength
struct UPrisonerLifeComponent_SetStrength_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetStamina
struct UPrisonerLifeComponent_SetStamina_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetMuscularAndFatFactors
struct UPrisonerLifeComponent_SetMuscularAndFatFactors_Params
{
	float                                              muscular;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fat;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetMusclesOnServer
struct UPrisonerLifeComponent_SetMusclesOnServer_Params
{
	ETestMinMax                                        Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetInitialAttributes
struct UPrisonerLifeComponent_SetInitialAttributes_Params
{
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Constitution;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dexterity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intelligence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetFatnessOnServer
struct UPrisonerLifeComponent_SetFatnessOnServer_Params
{
	ETestMinMax                                        Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetDexterity
struct UPrisonerLifeComponent_SetDexterity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetConstitution
struct UPrisonerLifeComponent_SetConstitution_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.SetBreathRateFactorOnServer
struct UPrisonerLifeComponent_SetBreathRateFactorOnServer_Params
{
	float                                              factor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.Server_SpawnPrisonWalletItem
struct UPrisonerLifeComponent_Server_SpawnPrisonWalletItem_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.PushActionOnServer
struct UPrisonerLifeComponent_PushActionOnServer_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              staminaDrain;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EPrisonerTempCategory                              tempCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              staminaRecoveryDelay;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              staminaRecoveryTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.PushAction
struct UPrisonerLifeComponent_PushAction_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              staminaDrain;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EPrisonerTempCategory                              tempCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              staminaRecoveryDelay;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              staminaRecoveryTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.PrisonerLifeComponent.PrisonerDiedDelegate__DelegateSignature
struct UPrisonerLifeComponent_PrisonerDiedDelegate__DelegateSignature_Params
{
	class UPrisonerLifeComponent*                      sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.OnRep_ReplicatedStatus
struct UPrisonerLifeComponent_OnRep_ReplicatedStatus_Params
{
};

// Function ConZ.PrisonerLifeComponent.OnRep_ReplicatedStates
struct UPrisonerLifeComponent_OnRep_ReplicatedStates_Params
{
};

// Function ConZ.PrisonerLifeComponent.OnRep_BCUMonitorData
struct UPrisonerLifeComponent_OnRep_BCUMonitorData_Params
{
};

// Function ConZ.PrisonerLifeComponent.IsReadyToEat
struct UPrisonerLifeComponent_IsReadyToEat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.IsConscious
struct UPrisonerLifeComponent_IsConscious_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.IsChoking
struct UPrisonerLifeComponent_IsChoking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.IsBreathing
struct UPrisonerLifeComponent_IsBreathing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.IsBodyPartInjured
struct UPrisonerLifeComponent_IsBodyPartInjured_Params
{
	EBodyPart                                          bodyPart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.IsAlive
struct UPrisonerLifeComponent_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.HasState
struct UPrisonerLifeComponent_HasState_Params
{
	EBodyState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWLTVeryDemanding
struct UPrisonerLifeComponent_GetWLTVeryDemanding_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWLTForActionDifficulty
struct UPrisonerLifeComponent_GetWLTForActionDifficulty_Params
{
	EPrisonerActionDifficulty                          actionDifficulty;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWLTEasy
struct UPrisonerLifeComponent_GetWLTEasy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWLTDemanding
struct UPrisonerLifeComponent_GetWLTDemanding_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWLT
struct UPrisonerLifeComponent_GetWLT_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWeightNormalized
struct UPrisonerLifeComponent_GetWeightNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWeightLoad
struct UPrisonerLifeComponent_GetWeightLoad_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWeight
struct UPrisonerLifeComponent_GetWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWCRWalking
struct UPrisonerLifeComponent_GetWCRWalking_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWCRRunning
struct UPrisonerLifeComponent_GetWCRRunning_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWCRModifier
struct UPrisonerLifeComponent_GetWCRModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWCRJogging
struct UPrisonerLifeComponent_GetWCRJogging_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWCRIdle
struct UPrisonerLifeComponent_GetWCRIdle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWaterUsage
struct UPrisonerLifeComponent_GetWaterUsage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWaterToAbsorb
struct UPrisonerLifeComponent_GetWaterToAbsorb_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWaterIntake
struct UPrisonerLifeComponent_GetWaterIntake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWaterBalanceClamped
struct UPrisonerLifeComponent_GetWaterBalanceClamped_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetWaterBalance
struct UPrisonerLifeComponent_GetWaterBalance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetVitamin
struct UPrisonerLifeComponent_GetVitamin_Params
{
	EVitamin                                           vitamin;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetViewRange
struct UPrisonerLifeComponent_GetViewRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetTemperatureDeviation
struct UPrisonerLifeComponent_GetTemperatureDeviation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetTeethNumber
struct UPrisonerLifeComponent_GetTeethNumber_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSystolicBloodPressure
struct UPrisonerLifeComponent_GetSystolicBloodPressure_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSugarRDA
struct UPrisonerLifeComponent_GetSugarRDA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSugarNormalized
struct UPrisonerLifeComponent_GetSugarNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSugar
struct UPrisonerLifeComponent_GetSugar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStrengthNormalized
struct UPrisonerLifeComponent_GetStrengthNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStrengthHistory
struct UPrisonerLifeComponent_GetStrengthHistory_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerLifeComponent.GetStrengthGain
struct UPrisonerLifeComponent_GetStrengthGain_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStrengthChangeInLastPeriod
struct UPrisonerLifeComponent_GetStrengthChangeInLastPeriod_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStrength
struct UPrisonerLifeComponent_GetStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStorageFat
struct UPrisonerLifeComponent_GetStorageFat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStomachWaterVolume
struct UPrisonerLifeComponent_GetStomachWaterVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStomachVolumeRatio
struct UPrisonerLifeComponent_GetStomachVolumeRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStomachVolumeOccupied
struct UPrisonerLifeComponent_GetStomachVolumeOccupied_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStomachVolumeMax
struct UPrisonerLifeComponent_GetStomachVolumeMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStaminaRecoveryModifier
struct UPrisonerLifeComponent_GetStaminaRecoveryModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStaminaNormalized
struct UPrisonerLifeComponent_GetStaminaNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStaminaConsumptionModifier
struct UPrisonerLifeComponent_GetStaminaConsumptionModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetStamina
struct UPrisonerLifeComponent_GetStamina_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSodiumRDA
struct UPrisonerLifeComponent_GetSodiumRDA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSodiumNormalized
struct UPrisonerLifeComponent_GetSodiumNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSodium
struct UPrisonerLifeComponent_GetSodium_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSicknesses
struct UPrisonerLifeComponent_GetSicknesses_Params
{
	TArray<class USickness*>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.PrisonerLifeComponent.GetSex
struct UPrisonerLifeComponent_GetSex_Params
{
	EPrisonerSex                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSCRWalking
struct UPrisonerLifeComponent_GetSCRWalking_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSCRRunning
struct UPrisonerLifeComponent_GetSCRRunning_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSCRJogging
struct UPrisonerLifeComponent_GetSCRJogging_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSCRIdle
struct UPrisonerLifeComponent_GetSCRIdle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSCR
struct UPrisonerLifeComponent_GetSCR_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSaturatedFatRDA
struct UPrisonerLifeComponent_GetSaturatedFatRDA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSaturatedFatNormalized
struct UPrisonerLifeComponent_GetSaturatedFatNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetSaturatedFat
struct UPrisonerLifeComponent_GetSaturatedFat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetResistPoisonsModifier
struct UPrisonerLifeComponent_GetResistPoisonsModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetPulse
struct UPrisonerLifeComponent_GetPulse_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetProteinsRDA
struct UPrisonerLifeComponent_GetProteinsRDA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetProteinsNormalized
struct UPrisonerLifeComponent_GetProteinsNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetProteins
struct UPrisonerLifeComponent_GetProteins_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetPerformanceFailure
struct UPrisonerLifeComponent_GetPerformanceFailure_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetOxygenSaturation
struct UPrisonerLifeComponent_GetOxygenSaturation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMuscleMassRange
struct UPrisonerLifeComponent_GetMuscleMassRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMuscleMassChange
struct UPrisonerLifeComponent_GetMuscleMassChange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMuscleMass
struct UPrisonerLifeComponent_GetMuscleMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMSR
struct UPrisonerLifeComponent_GetMSR_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMSI
struct UPrisonerLifeComponent_GetMSI_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMineral
struct UPrisonerLifeComponent_GetMineral_Params
{
	EMineral                                           mineral;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMinBlood
struct UPrisonerLifeComponent_GetMinBlood_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMetabolicCalories
struct UPrisonerLifeComponent_GetMetabolicCalories_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMaxHealth
struct UPrisonerLifeComponent_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetMaxFoodWeight
struct UPrisonerLifeComponent_GetMaxFoodWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetLifeTime
struct UPrisonerLifeComponent_GetLifeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetIntestineVolumeOccupied
struct UPrisonerLifeComponent_GetIntestineVolumeOccupied_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetIntestineVolumeMax
struct UPrisonerLifeComponent_GetIntestineVolumeMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetIntelligenceNormalized
struct UPrisonerLifeComponent_GetIntelligenceNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetIntelligenceHistory
struct UPrisonerLifeComponent_GetIntelligenceHistory_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerLifeComponent.GetIntelligenceChangeInLastPeriod
struct UPrisonerLifeComponent_GetIntelligenceChangeInLastPeriod_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetIntelligence
struct UPrisonerLifeComponent_GetIntelligence_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetInitialWeight
struct UPrisonerLifeComponent_GetInitialWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetInitialMuscleMass
struct UPrisonerLifeComponent_GetInitialMuscleMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetInitialBlood
struct UPrisonerLifeComponent_GetInitialBlood_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetHydration
struct UPrisonerLifeComponent_GetHydration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetHungerCalories
struct UPrisonerLifeComponent_GetHungerCalories_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetHoldingBreathModifier
struct UPrisonerLifeComponent_GetHoldingBreathModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetHealthPointsModifier
struct UPrisonerLifeComponent_GetHealthPointsModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetHealth
struct UPrisonerLifeComponent_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetHealingSpeedModifier
struct UPrisonerLifeComponent_GetHealingSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetHealingSpeed
struct UPrisonerLifeComponent_GetHealingSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetHealingItems
struct UPrisonerLifeComponent_GetHealingItems_Params
{
	TArray<class UHealingItem*>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.PrisonerLifeComponent.GetGearWeightLimitForSwimming
struct UPrisonerLifeComponent_GetGearWeightLimitForSwimming_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetGearWeight
struct UPrisonerLifeComponent_GetGearWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetFoodWeightRatio
struct UPrisonerLifeComponent_GetFoodWeightRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetFoodWeight
struct UPrisonerLifeComponent_GetFoodWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetFiberRDA
struct UPrisonerLifeComponent_GetFiberRDA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetFiberNormalized
struct UPrisonerLifeComponent_GetFiberNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetFiber
struct UPrisonerLifeComponent_GetFiber_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetFatRDA
struct UPrisonerLifeComponent_GetFatRDA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetFatNormalized
struct UPrisonerLifeComponent_GetFatNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetFat
struct UPrisonerLifeComponent_GetFat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetEnergyUsage
struct UPrisonerLifeComponent_GetEnergyUsage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetEnergyIntake
struct UPrisonerLifeComponent_GetEnergyIntake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetEnergy
struct UPrisonerLifeComponent_GetEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetECGRhythm
struct UPrisonerLifeComponent_GetECGRhythm_Params
{
	EPrisonerECGRhythm                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetEatingSpeed
struct UPrisonerLifeComponent_GetEatingSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDrunkenness
struct UPrisonerLifeComponent_GetDrunkenness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDigestionItems
struct UPrisonerLifeComponent_GetDigestionItems_Params
{
	TArray<class UDigestionItem*>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.PrisonerLifeComponent.GetDiastolicBloodPressure
struct UPrisonerLifeComponent_GetDiastolicBloodPressure_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDexterityNormalized
struct UPrisonerLifeComponent_GetDexterityNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDexterityMultiplier
struct UPrisonerLifeComponent_GetDexterityMultiplier_Params
{
	float                                              gearWeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EPrisonerActionDifficulty                          actionDifficulty;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDexterityHistory
struct UPrisonerLifeComponent_GetDexterityHistory_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerLifeComponent.GetDexterityGain
struct UPrisonerLifeComponent_GetDexterityGain_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDexterityChangeInLastPeriod
struct UPrisonerLifeComponent_GetDexterityChangeInLastPeriod_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDexterity
struct UPrisonerLifeComponent_GetDexterity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDailyWaterIntake
struct UPrisonerLifeComponent_GetDailyWaterIntake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDailySugarCalories
struct UPrisonerLifeComponent_GetDailySugarCalories_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDailyProteinsCalories
struct UPrisonerLifeComponent_GetDailyProteinsCalories_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDailyFatCalories
struct UPrisonerLifeComponent_GetDailyFatCalories_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDailyCarbsCalories
struct UPrisonerLifeComponent_GetDailyCarbsCalories_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDailyCaloriesIntake
struct UPrisonerLifeComponent_GetDailyCaloriesIntake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetDailyAlcoholCalories
struct UPrisonerLifeComponent_GetDailyAlcoholCalories_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCurrentWaterConsumption
struct UPrisonerLifeComponent_GetCurrentWaterConsumption_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCurrentState
struct UPrisonerLifeComponent_GetCurrentState_Params
{
	EPrisonerMovementPace                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCurrentStaminaChange
struct UPrisonerLifeComponent_GetCurrentStaminaChange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCurrentCaloriesConsumption
struct UPrisonerLifeComponent_GetCurrentCaloriesConsumption_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetConstitutionNormalized
struct UPrisonerLifeComponent_GetConstitutionNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetConstitutionHistory
struct UPrisonerLifeComponent_GetConstitutionHistory_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerLifeComponent.GetConstitutionGain
struct UPrisonerLifeComponent_GetConstitutionGain_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetConstitutionChangeInLastPeriod
struct UPrisonerLifeComponent_GetConstitutionChangeInLastPeriod_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetConstitution
struct UPrisonerLifeComponent_GetConstitution_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetColonVolumeOccupied
struct UPrisonerLifeComponent_GetColonVolumeOccupied_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetColonVolumeMax
struct UPrisonerLifeComponent_GetColonVolumeMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCarbsRDA
struct UPrisonerLifeComponent_GetCarbsRDA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCarbsNormalized
struct UPrisonerLifeComponent_GetCarbsNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCarbs
struct UPrisonerLifeComponent_GetCarbs_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCaloriesWalking
struct UPrisonerLifeComponent_GetCaloriesWalking_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCaloriesUsageSpeed
struct UPrisonerLifeComponent_GetCaloriesUsageSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCaloriesRunning
struct UPrisonerLifeComponent_GetCaloriesRunning_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCaloriesJogging
struct UPrisonerLifeComponent_GetCaloriesJogging_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCaloriesIdle
struct UPrisonerLifeComponent_GetCaloriesIdle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCaloriesBurntModifier
struct UPrisonerLifeComponent_GetCaloriesBurntModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCaloriesBalance
struct UPrisonerLifeComponent_GetCaloriesBalance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetCalories
struct UPrisonerLifeComponent_GetCalories_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBreathVolume
struct UPrisonerLifeComponent_GetBreathVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBreath
struct UPrisonerLifeComponent_GetBreath_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBodyTempIncrease
struct UPrisonerLifeComponent_GetBodyTempIncrease_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBodyTempCategory
struct UPrisonerLifeComponent_GetBodyTempCategory_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBodyTemp
struct UPrisonerLifeComponent_GetBodyTemp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBlood
struct UPrisonerLifeComponent_GetBlood_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBleedingType
struct UPrisonerLifeComponent_GetBleedingType_Params
{
	EBodyPart                                          bodyPart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               returnNoneIfTreated;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EBleedingType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBladderVolumeOccupied
struct UPrisonerLifeComponent_GetBladderVolumeOccupied_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBladderVolumeMax
struct UPrisonerLifeComponent_GetBladderVolumeMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBFP
struct UPrisonerLifeComponent_GetBFP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetBCUDataInitialized
struct UPrisonerLifeComponent_GetBCUDataInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetAttributesHistoryInitialized
struct UPrisonerLifeComponent_GetAttributesHistoryInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetAlcohol
struct UPrisonerLifeComponent_GetAlcohol_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.GetAge
struct UPrisonerLifeComponent_GetAge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.EnterUnconsciousness
struct UPrisonerLifeComponent_EnterUnconsciousness_Params
{
	float                                              unconsciousTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              deathTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.EatFoodOnServer
struct UPrisonerLifeComponent_EatFoodOnServer_Params
{
	class AFoodItem*                                   FoodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               eatAll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.DrinkWaterOnServer
struct UPrisonerLifeComponent_DrinkWaterOnServer_Params
{
	float                                              quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              salinity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.DownloadBCUMonitorDataFromServer
struct UPrisonerLifeComponent_DownloadBCUMonitorDataFromServer_Params
{
};

// Function ConZ.PrisonerLifeComponent.DieOnServer
struct UPrisonerLifeComponent_DieOnServer_Params
{
};

// Function ConZ.PrisonerLifeComponent.Die
struct UPrisonerLifeComponent_Die_Params
{
};

// Function ConZ.PrisonerLifeComponent.Client_WarnForBodyState
struct UPrisonerLifeComponent_Client_WarnForBodyState_Params
{
	EBodyState                                         State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerLifeComponent.CancelEatingOnServer
struct UPrisonerLifeComponent_CancelEatingOnServer_Params
{
};

// Function ConZ.PrisonerLifeComponent.CancelEating
struct UPrisonerLifeComponent_CancelEating_Params
{
};

// Function ConZ.PrisonerLoadout.EquipPrisoner
struct UPrisonerLoadout_EquipPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               givenItems;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function ConZ.PrisonerMovementComponent.Server_ClimbOffLadder
struct UPrisonerMovementComponent_Server_ClimbOffLadder_Params
{
};

// Function ConZ.PrisonerMovementComponent.JumpOffLadder
struct UPrisonerMovementComponent_JumpOffLadder_Params
{
	struct FVector                                     jumpVelocity;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.IsFlyingOrFalling
struct UPrisonerMovementComponent_IsFlyingOrFalling_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.IsClimbingWindow
struct UPrisonerMovementComponent_IsClimbingWindow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.IsClimbingLadder
struct UPrisonerMovementComponent_IsClimbingLadder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.IsClimbing
struct UPrisonerMovementComponent_IsClimbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetWindowInfo
struct UPrisonerMovementComponent_GetWindowInfo_Params
{
	struct FWindowInfo                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.PrisonerMovementComponent.GetWaterImmersionDepth
struct UPrisonerMovementComponent_GetWaterImmersionDepth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetTimeSpentInAir
struct UPrisonerMovementComponent_GetTimeSpentInAir_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetTimeSpentFalling
struct UPrisonerMovementComponent_GetTimeSpentFalling_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetMaxAllowedPace
struct UPrisonerMovementComponent_GetMaxAllowedPace_Params
{
	EPrisonerMovementPace                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetLadderInfo
struct UPrisonerMovementComponent_GetLadderInfo_Params
{
	struct FLadderInfo                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.PrisonerMovementComponent.GetGroundSlopeAngleSmoothed
struct UPrisonerMovementComponent_GetGroundSlopeAngleSmoothed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetGroundSlopeAngleForSpeedScaling
struct UPrisonerMovementComponent_GetGroundSlopeAngleForSpeedScaling_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetGroundSlopeAngle
struct UPrisonerMovementComponent_GetGroundSlopeAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetDesiredCoursePitchAngle
struct UPrisonerMovementComponent_GetDesiredCoursePitchAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetDesiredCourseAngle
struct UPrisonerMovementComponent_GetDesiredCourseAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetCustomMovementMode
struct UPrisonerMovementComponent_GetCustomMovementMode_Params
{
	EPrisonerMovementMode                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetClimbableObstacleInfo
struct UPrisonerMovementComponent_GetClimbableObstacleInfo_Params
{
	struct FClimbableObstacleInfo                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.PrisonerMovementComponent.GetAnticipatedLandingSpot
struct UPrisonerMovementComponent_GetAnticipatedLandingSpot_Params
{
	struct FHitResult                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.GetActualCourseAngle
struct UPrisonerMovementComponent_GetActualCourseAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.DetectWindow
struct UPrisonerMovementComponent_DetectWindow_Params
{
	struct FWindowInfo                                 Result;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.DetectLadderDisembarkLocation
struct UPrisonerMovementComponent_DetectLadderDisembarkLocation_Params
{
	struct FLadderInfo                                 LadderInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     newCapsuleLocation;                                       // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    newCapsuleRotation;                                       // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.DetectLadder
struct UPrisonerMovementComponent_DetectLadder_Params
{
	struct FLadderInfo                                 Result;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.DetectClimbableObstacle
struct UPrisonerMovementComponent_DetectClimbableObstacle_Params
{
	struct FClimbableObstacleInfo                      Result;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.ClimbWindow
struct UPrisonerMovementComponent_ClimbWindow_Params
{
	struct FWindowInfo                                 WindowInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.ClimbOntoLadder
struct UPrisonerMovementComponent_ClimbOntoLadder_Params
{
	struct FLadderInfo                                 LadderInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.ClimbOffLadder
struct UPrisonerMovementComponent_ClimbOffLadder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.Climb
struct UPrisonerMovementComponent_Climb_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.CanClimbWindow
struct UPrisonerMovementComponent_CanClimbWindow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.CanClimbOntoLadder
struct UPrisonerMovementComponent_CanClimbOntoLadder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerMovementComponent.CanClimb
struct UPrisonerMovementComponent_CanClimb_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.ToggleGameMenuEvent
struct APrisonerPlayerController_ToggleGameMenuEvent_Params
{
};

// Function ConZ.PrisonerPlayerController.ShowNotification
struct APrisonerPlayerController_ShowNotification_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.ShowKillFeedNotificationOnClient
struct APrisonerPlayerController_ShowKillFeedNotificationOnClient_Params
{
	struct FString                                     prefix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     characterName;                                            // (Parm, ZeroConstructor)
	struct FString                                     suffix;                                                   // (Parm, ZeroConstructor)
	bool                                               ping;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.SetIsChatDuplicationToMessageNotificationsMuted
struct APrisonerPlayerController_SetIsChatDuplicationToMessageNotificationsMuted_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.SetGameEventCooldown
struct APrisonerPlayerController_SetGameEventCooldown_Params
{
	float                                              cooldown;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.SetFamePoints
struct APrisonerPlayerController_SetFamePoints_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.Server_RequestRespawnWaitTime
struct APrisonerPlayerController_Server_RequestRespawnWaitTime_Params
{
};

// Function ConZ.PrisonerPlayerController.Server_RequestGameEventTeamChange
struct APrisonerPlayerController_Server_RequestGameEventTeamChange_Params
{
	int                                                preferredTeam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.Server_RequestCharacterStats
struct APrisonerPlayerController_Server_RequestCharacterStats_Params
{
	uint32_t                                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     steamId;                                                  // (Parm, ZeroConstructor)
	int                                                count;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterStatsSorting                             sort;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               descending;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.Server_ReportWorldStreamed
struct APrisonerPlayerController_Server_ReportWorldStreamed_Params
{
};

// Function ConZ.PrisonerPlayerController.Server_ReportStartLeavingGame
struct APrisonerPlayerController_Server_ReportStartLeavingGame_Params
{
};

// Function ConZ.PrisonerPlayerController.Server_ReportCancelLeavingGame
struct APrisonerPlayerController_Server_ReportCancelLeavingGame_Params
{
};

// Function ConZ.PrisonerPlayerController.Server_ProcessAdminCommand
struct APrisonerPlayerController_Server_ProcessAdminCommand_Params
{
	struct FString                                     authToken;                                                // (Parm, ZeroConstructor)
	struct FString                                     commandText;                                              // (Parm, ZeroConstructor)
};

// Function ConZ.PrisonerPlayerController.Server_LeaveGameEvent
struct APrisonerPlayerController_Server_LeaveGameEvent_Params
{
};

// Function ConZ.PrisonerPlayerController.Server_JoinGameEvent
struct APrisonerPlayerController_Server_JoinGameEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                preferredTeam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.SendHUDMessageToClient
struct APrisonerPlayerController_SendHUDMessageToClient_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               beep;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.SendHUDMessageToAll
struct APrisonerPlayerController_SendHUDMessageToAll_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               beep;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.SendChatStringToServer
struct APrisonerPlayerController_SendChatStringToServer_Params
{
	struct FString                                     string;                                                   // (Parm, ZeroConstructor)
	EChatType                                          chatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.SendChatStringToClient
struct APrisonerPlayerController_SendChatStringToClient_Params
{
	struct FString                                     string;                                                   // (Parm, ZeroConstructor)
	EChatType                                          chatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.SendAnimalEyeSocketYawToServer
struct APrisonerPlayerController_SendAnimalEyeSocketYawToServer_Params
{
	class AAnimal2*                                    Animal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.SaveState
struct APrisonerPlayerController_SaveState_Params
{
};

// Function ConZ.PrisonerPlayerController.RepossesOriginalPrisoner
struct APrisonerPlayerController_RepossesOriginalPrisoner_Params
{
};

// Function ConZ.PrisonerPlayerController.RemoveServerFromFavorites
struct APrisonerPlayerController_RemoveServerFromFavorites_Params
{
};

// DelegateFunction ConZ.PrisonerPlayerController.PrisonerSpawnedDelegate__DelegateSignature
struct APrisonerPlayerController_PrisonerSpawnedDelegate__DelegateSignature_Params
{
	class APrisoner*                                   spawnedPrisoner;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.OnRep_PossessedPawn
struct APrisonerPlayerController_OnRep_PossessedPawn_Params
{
};

// Function ConZ.PrisonerPlayerController.LeaveGameEvent
struct APrisonerPlayerController_LeaveGameEvent_Params
{
};

// Function ConZ.PrisonerPlayerController.JoinGameEvent
struct APrisonerPlayerController_JoinGameEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                preferredTeam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.InputComponent_CancelAllControllerActions
struct APrisonerPlayerController_InputComponent_CancelAllControllerActions_Params
{
};

// Function ConZ.PrisonerPlayerController.GetUserProfileName
struct APrisonerPlayerController_GetUserProfileName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerPlayerController.GetUserProfile
struct APrisonerPlayerController_GetUserProfile_Params
{
	class UDbUserProfile*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.GetUserName2
struct APrisonerPlayerController_GetUserName2_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerPlayerController.GetUserId
struct APrisonerPlayerController_GetUserId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.PrisonerPlayerController.GetRespawnWaitTime
struct APrisonerPlayerController_GetRespawnWaitTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.GetPrisonerCameraManager
struct APrisonerPlayerController_GetPrisonerCameraManager_Params
{
	class APrisonerCameraManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.GetNoiseEmitterComponent
struct APrisonerPlayerController_GetNoiseEmitterComponent_Params
{
	class UPawnNoiseEmitterComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.GetLoginInfo
struct APrisonerPlayerController_GetLoginInfo_Params
{
	struct FPlayerLoginInfo                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.PrisonerPlayerController.GetIsChatDuplicationToMessageNotificationsMuted
struct APrisonerPlayerController_GetIsChatDuplicationToMessageNotificationsMuted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.GetGameEventCooldown
struct APrisonerPlayerController_GetGameEventCooldown_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.GetFamePoints
struct APrisonerPlayerController_GetFamePoints_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.GetFameMultiplier
struct APrisonerPlayerController_GetFameMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.GetFameLevel
struct APrisonerPlayerController_GetFameLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.Crash
struct APrisonerPlayerController_Crash_Params
{
};

// Function ConZ.PrisonerPlayerController.Client_TestPingLockStuff
struct APrisonerPlayerController_Client_TestPingLockStuff_Params
{
	float                                              averageDelta;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              averagePing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              counter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.Client_SetRespawnWaitTime
struct APrisonerPlayerController_Client_SetRespawnWaitTime_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.Client_SetGameEventCooldown
struct APrisonerPlayerController_Client_SetGameEventCooldown_Params
{
	float                                              cooldown;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.Client_SaveState
struct APrisonerPlayerController_Client_SaveState_Params
{
};

// Function ConZ.PrisonerPlayerController.Client_RecieveCharacterStats
struct APrisonerPlayerController_Client_RecieveCharacterStats_Params
{
	uint32_t                                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterStatsItem>                 stats;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	int                                                rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.Client_ProcessAdminCommand_ListAssets
struct APrisonerPlayerController_Client_ProcessAdminCommand_ListAssets_Params
{
	struct FString                                     assetType;                                                // (Parm, ZeroConstructor)
	struct FString                                     Filter;                                                   // (Parm, ZeroConstructor)
};

// Function ConZ.PrisonerPlayerController.Client_Login
struct APrisonerPlayerController_Client_Login_Params
{
	struct FPlayerLoginInfo                            serverLoginInfo;                                          // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.PrisonerPlayerController.CanAddServerToFavorites
struct APrisonerPlayerController_CanAddServerToFavorites_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerPlayerController.AddServerToFavorites
struct APrisonerPlayerController_AddServerToFavorites_Params
{
};

// Function ConZ.PrisonerSkillComponent.UpdateNearbyFoliageCoverageOnServer
struct UPrisonerSkillComponent_UpdateNearbyFoliageCoverageOnServer_Params
{
	float                                              coverage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isInBushes;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.UpdateIsInFocusModeOnServer
struct UPrisonerSkillComponent_UpdateIsInFocusModeOnServer_Params
{
	bool                                               isInFocus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.TreatSicknessOnServer
struct UPrisonerSkillComponent_TreatSicknessOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EDiagnosedResult                                   diagnosedResult;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               medicalItems;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerSkillComponent.TreatBrokenLimbsOnServer
struct UPrisonerSkillComponent_TreatBrokenLimbsOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EBrokenLimbsTreatment                              treatment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               medicalItems;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerSkillComponent.TreatBrokenLimbsOnClients
struct UPrisonerSkillComponent_TreatBrokenLimbsOnClients_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.TameAnimalOnServer
struct UPrisonerSkillComponent_TameAnimalOnServer_Params
{
	class AAnimal*                                     Animal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.ShowWatchingWarningOnClient
struct UPrisonerSkillComponent_ShowWatchingWarningOnClient_Params
{
};

// Function ConZ.PrisonerSkillComponent.SetSkillStaminaConsumptionOnServer
struct UPrisonerSkillComponent_SetSkillStaminaConsumptionOnServer_Params
{
	class USkill*                                      Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              consumption;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.SetDetectablePrisonersOnServer
struct UPrisonerSkillComponent_SetDetectablePrisonersOnServer_Params
{
	TArray<class APrisoner*>                           detectablePrisoners;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerSkillComponent.SendVisiblePrisoners
struct UPrisonerSkillComponent_SendVisiblePrisoners_Params
{
};

// Function ConZ.PrisonerSkillComponent.RevivePatientOnServer
struct UPrisonerSkillComponent_RevivePatientOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.RevivePatientOnClients
struct UPrisonerSkillComponent_RevivePatientOnClients_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.RequestNearbyFoliageUpdateOnClient
struct UPrisonerSkillComponent_RequestNearbyFoliageUpdateOnClient_Params
{
};

// Function ConZ.PrisonerSkillComponent.PullToothOnServer
struct UPrisonerSkillComponent_PullToothOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               medicalItems;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerSkillComponent.PullToothOnClients
struct UPrisonerSkillComponent_PullToothOnClients_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.PerformSurgeryOnServer
struct UPrisonerSkillComponent_PerformSurgeryOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               medicalItems;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerSkillComponent.PerformSurgeryOnClients
struct UPrisonerSkillComponent_PerformSurgeryOnClients_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.PerformAnesthesiaOnServer
struct UPrisonerSkillComponent_PerformAnesthesiaOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EAnesthesiaType                                    anesthesiaType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               medicalItems;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerSkillComponent.PerformAnesthesiaOnClients
struct UPrisonerSkillComponent_PerformAnesthesiaOnClients_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.PatchWoundsOnServer
struct UPrisonerSkillComponent_PatchWoundsOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               medicalItems;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerSkillComponent.PatchWoundsOnClients
struct UPrisonerSkillComponent_PatchWoundsOnClients_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.PacifyAnimalOnServer
struct UPrisonerSkillComponent_PacifyAnimalOnServer_Params
{
	class AAnimal*                                     Animal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.OnRep_Skills
struct UPrisonerSkillComponent_OnRep_Skills_Params
{
};

// Function ConZ.PrisonerSkillComponent.OnRep_MedicalRecord
struct UPrisonerSkillComponent_OnRep_MedicalRecord_Params
{
};

// Function ConZ.PrisonerSkillComponent.MedicalDiagnosisOnServer
struct UPrisonerSkillComponent_MedicalDiagnosisOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EMedicalDiagnosisType                              diagnosisType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.MakeUnconsciousOnServer
struct UPrisonerSkillComponent_MakeUnconsciousOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.MakeUnconsciousOnClients
struct UPrisonerSkillComponent_MakeUnconsciousOnClients_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.MakeConsciousOnServer
struct UPrisonerSkillComponent_MakeConsciousOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.MakeConsciousOnClients
struct UPrisonerSkillComponent_MakeConsciousOnClients_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.LearnAnimalOnServer
struct UPrisonerSkillComponent_LearnAnimalOnServer_Params
{
	class AAnimal*                                     Animal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               Items;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	EAnimalLearnLevel                                  learnLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.HighlightNearbyItems
struct UPrisonerSkillComponent_HighlightNearbyItems_Params
{
};

// Function ConZ.PrisonerSkillComponent.HighlightItemOnClient
struct UPrisonerSkillComponent_HighlightItemOnClient_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.GetSkills
struct UPrisonerSkillComponent_GetSkills_Params
{
	TArray<class USkill*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ConZ.PrisonerSkillComponent.ForceSkillsReplicationOnServer
struct UPrisonerSkillComponent_ForceSkillsReplicationOnServer_Params
{
};

// Function ConZ.PrisonerSkillComponent.FeedAnimalOnServer
struct UPrisonerSkillComponent_FeedAnimalOnServer_Params
{
	class AAnimal*                                     Animal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               Items;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.PrisonerSkillComponent.CommandAnimalOnServer
struct UPrisonerSkillComponent_CommandAnimalOnServer_Params
{
	class AAnimal*                                     Animal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EAnimalCommand                                     Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AConZCharacter*                              Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.ArtificalPerspirationOnServer
struct UPrisonerSkillComponent_ArtificalPerspirationOnServer_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSkillComponent.ArtificalPerspirationOnClients
struct UPrisonerSkillComponent_ArtificalPerspirationOnClients_Params
{
	class APrisoner*                                   Patient;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSoundComponent.UpdateMovingThroughFoliageSounds
struct UPrisonerSoundComponent_UpdateMovingThroughFoliageSounds_Params
{
	int                                                PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMotionIntensity                                   motionIntensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerSoundComponent.StopMovingThroughFoliageSounds
struct UPrisonerSoundComponent_StopMovingThroughFoliageSounds_Params
{
	int                                                PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerSoundComponent.StopAllMovingThroughFoliageSounds
struct UPrisonerSoundComponent_StopAllMovingThroughFoliageSounds_Params
{
};

// Function ConZ.PrisonerSoundComponent.PlayMovingThroughFoliageSounds
struct UPrisonerSoundComponent_PlayMovingThroughFoliageSounds_Params
{
	class UAkAudioEvent*                               StartAudioEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopAudioEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EMotionIntensity                                   motionIntensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.PrisonerSoundComponent.PlayGearSounds
struct UPrisonerSoundComponent_PlayGearSounds_Params
{
	EMotionIntensity                                   motionIntensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSoundComponent.PlayFootstepSounds
struct UPrisonerSoundComponent_PlayFootstepSounds_Params
{
	TEnumAsByte<EPhysicalSurface>                      inPhysicalSurface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSoundComponent.OnOutOfBoundsSoundPercentChanged
struct UPrisonerSoundComponent_OnOutOfBoundsSoundPercentChanged_Params
{
	class USoundWave*                                  PlayingSoundWave;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackPercent;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PrisonerSoundComponent.OnBorderCrossingStateChanged
struct UPrisonerSoundComponent_OnBorderCrossingStateChanged_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPrisonerBorderCrossingPenalty                     penalty;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Projectile.OnStop
struct AProjectile_OnStop_Params
{
};

// Function ConZ.QuickAccessItemWidget.OnQuickAccessItemPickedUpStateChanged
struct UQuickAccessItemWidget_OnQuickAccessItemPickedUpStateChanged_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PickedUpState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.QuickAccessItemWidget.OnItemDestroyed
struct UQuickAccessItemWidget_OnItemDestroyed_Params
{
	class AActor*                                      itemActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.SimpleAnimalAIController.UpdatePerception
struct ASimpleAnimalAIController_UpdatePerception_Params
{
	TArray<class AActor*>                              actorsPercepted;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.SimpleAnimalAIController.StartAlert
struct ASimpleAnimalAIController_StartAlert_Params
{
};

// Function ConZ.SimpleAnimalAIController.OnTakeDamageHandler
struct ASimpleAnimalAIController_OnTakeDamageHandler_Params
{
	class AActor*                                      damageActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class APawn*                                       eventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Rabbit2AIController.Wander
struct ARabbit2AIController_Wander_Params
{
};

// Function ConZ.RespiratoryRateWidget.SetPrisonerLifeComponent
struct URespiratoryRateWidget_SetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      Value;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.RespiratoryRateWidget.GetPrisonerLifeComponent
struct URespiratoryRateWidget_GetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.RespiratoryRateWidget.GetMinRespiratoryRate
struct URespiratoryRateWidget_GetMinRespiratoryRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.RespiratoryRateWidget.GetMaxRespiratoryRate
struct URespiratoryRateWidget_GetMaxRespiratoryRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Sentry.TickIK
struct ASentry_TickIK_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Sentry.PlayWarningSound
struct ASentry_PlayWarningSound_Params
{
};

// Function ConZ.Sentry.PlayTargetEngagedSound
struct ASentry_PlayTargetEngagedSound_Params
{
};

// Function ConZ.Sentry.PlayReloadSound
struct ASentry_PlayReloadSound_Params
{
};

// Function ConZ.Sentry.PlayPlayerLostSound
struct ASentry_PlayPlayerLostSound_Params
{
};

// Function ConZ.Sentry.PlayPlayerKilledSound
struct ASentry_PlayPlayerKilledSound_Params
{
};

// Function ConZ.Sentry.PlayMontageMulticast
struct ASentry_PlayMontageMulticast_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       montageSection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Sentry.PlayLastWarningSound
struct ASentry_PlayLastWarningSound_Params
{
};

// Function ConZ.Sentry.PlayHeardPrisonerSound
struct ASentry_PlayHeardPrisonerSound_Params
{
};

// Function ConZ.Sentry.OnRep_GunsLookAtLocation
struct ASentry_OnRep_GunsLookAtLocation_Params
{
};

// Function ConZ.Sentry.NetMulticast_Reload
struct ASentry_NetMulticast_Reload_Params
{
};

// Function ConZ.Sentry.Kill
struct ASentry_Kill_Params
{
};

// Function ConZ.Sentry.GetMuzzleLocation
struct ASentry_GetMuzzleLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Sentry.GetMuzzleDirection
struct ASentry_GetMuzzleDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Sentry.GetHealth
struct ASentry_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Sentry.FireShotEffects_Multicast
struct ASentry_FireShotEffects_Multicast_Params
{
};

// Function ConZ.Sentry.DealDamage_Multicast
struct ASentry_DealDamage_Multicast_Params
{
	class AActor*                                      ActorToDamge;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Sentry.ChangeLightsColor
struct ASentry_ChangeLightsColor_Params
{
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
};

// Function ConZ.SentryAIController.SensingComponent_OnSensePawn
struct ASentryAIController_SensingComponent_OnSensePawn_Params
{
	TArray<class AActor*>                              actorsPercepted;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.SentryAIController.SensingComponent_OnSeePawn
struct ASentryAIController_SensingComponent_OnSeePawn_Params
{
	class AActor*                                      PawnSeen;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.SentryAIController.SensingComponent_OnHearNoise
struct ASentryAIController_SensingComponent_OnHearNoise_Params
{
	class AActor*                                      NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.SentryAIController.OnTakenDamage
struct ASentryAIController_OnTakenDamage_Params
{
	class AActor*                                      damageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.SentryAnimInstance.GetTurnInPlaceElapsedTimeRight
struct USentryAnimInstance_GetTurnInPlaceElapsedTimeRight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.SentryAnimInstance.GetTurnInPlaceElapsedTimeLeft
struct USentryAnimInstance_GetTurnInPlaceElapsedTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.SentryAnimInstance.GetTurnInPlaceDirectionBlendAlpha
struct USentryAnimInstance_GetTurnInPlaceDirectionBlendAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.SentryAnimInstance.GetTurnInPlaceBlendAlpha
struct USentryAnimInstance_GetTurnInPlaceBlendAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.SentryAnimInstance.FindTimeAtStoppingDistance
struct USentryAnimInstance_FindTimeAtStoppingDistance_Params
{
	class UAnimSequenceBase*                           AnimSequence;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              stoppingDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.SentryAnimInstance.AnimNotify_SentryJump
struct USentryAnimInstance_AnimNotify_SentryJump_Params
{
};

// Function ConZ.SentryAnimInstance.AnimNotify_RFootDown
struct USentryAnimInstance_AnimNotify_RFootDown_Params
{
};

// Function ConZ.SentryAnimInstance.AnimNotify_LFootDown
struct USentryAnimInstance_AnimNotify_LFootDown_Params
{
};

// Function ConZ.SerializableLayoutWidgetInterface.SaveLayout
struct USerializableLayoutWidgetInterface_SaveLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>     Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ConZ.SerializableLayoutWidgetInterface.ResetLayout
struct USerializableLayoutWidgetInterface_ResetLayout_Params
{
};

// Function ConZ.SerializableLayoutWidgetInterface.LoadLayout
struct USerializableLayoutWidgetInterface_LoadLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>     Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ConZ.ServerBrowser.UpdateSorting
struct UServerBrowser_UpdateSorting_Params
{
};

// Function ConZ.ServerBrowser.UpdateList
struct UServerBrowser_UpdateList_Params
{
};

// Function ConZ.ServerBrowser.UpdateFilter
struct UServerBrowser_UpdateFilter_Params
{
};

// Function ConZ.ServerBrowser.StartNewMultiplayerGame
struct UServerBrowser_StartNewMultiplayerGame_Params
{
	struct FString                                     Ip;                                                       // (Parm, ZeroConstructor)
	int                                                GameplayPort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResponsePort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     authToken;                                                // (Parm, ZeroConstructor)
};

// Function ConZ.ServerBrowser.ShutdownPingingThread
struct UServerBrowser_ShutdownPingingThread_Params
{
};

// Function ConZ.ServerBrowser.ShowRentAServerPage
struct UServerBrowser_ShowRentAServerPage_Params
{
};

// Function ConZ.ServerBrowser.ShowErrorDialog
struct UServerBrowser_ShowErrorDialog_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.ServerBrowser.SetSortType
struct UServerBrowser_SetSortType_Params
{
	ESortType                                          Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ascending;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ServerBrowser.SetFilter
struct UServerBrowser_SetFilter_Params
{
	struct FString                                     Filter;                                                   // (Parm, ZeroConstructor)
};

// Function ConZ.ServerBrowser.RequestServerList
struct UServerBrowser_RequestServerList_Params
{
};

// Function ConZ.ServerBrowser.RemoveInfo
struct UServerBrowser_RemoveInfo_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ServerBrowser.RemoveFavoriteServer
struct UServerBrowser_RemoveFavoriteServer_Params
{
	class AActor*                                      Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Host;                                                     // (Parm, ZeroConstructor)
	int                                                ResponsePort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ServerBrowser.RefreshServerInfosPing
struct UServerBrowser_RefreshServerInfosPing_Params
{
};

// Function ConZ.ServerBrowser.OpenContinueOrNewDialog
struct UServerBrowser_OpenContinueOrNewDialog_Params
{
	struct FString                                     Ip;                                                       // (Parm, ZeroConstructor)
	int                                                GameplayPort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResponsePort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     authToken;                                                // (Parm, ZeroConstructor)
};

// Function ConZ.ServerBrowser.OnLastPlayedServersTabOpened
struct UServerBrowser_OnLastPlayedServersTabOpened_Params
{
};

// Function ConZ.ServerBrowser.OnInternetTabOpened
struct UServerBrowser_OnInternetTabOpened_Params
{
};

// Function ConZ.ServerBrowser.OnFavoriteServersTabOpened
struct UServerBrowser_OnFavoriteServersTabOpened_Params
{
};

// Function ConZ.ServerBrowser.EnterPassword
struct UServerBrowser_EnterPassword_Params
{
};

// Function ConZ.ServerBrowser.EndWaitingOnServerResponse
struct UServerBrowser_EndWaitingOnServerResponse_Params
{
};

// Function ConZ.ServerBrowser.DoesServerInfoSatisfyFilter
struct UServerBrowser_DoesServerInfoSatisfyFilter_Params
{
	struct FServerInfo                                 ServerInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ServerBrowser.DisconnectFromServer
struct UServerBrowser_DisconnectFromServer_Params
{
};

// Function ConZ.ServerBrowser.ContinueMultiplayerGame
struct UServerBrowser_ContinueMultiplayerGame_Params
{
	struct FString                                     Ip;                                                       // (Parm, ZeroConstructor)
	int                                                GameplayPort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResponsePort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     authToken;                                                // (Parm, ZeroConstructor)
};

// Function ConZ.ServerBrowser.ConnectToServer
struct UServerBrowser_ConnectToServer_Params
{
	struct FString                                     Ip;                                                       // (Parm, ZeroConstructor)
	int                                                ResponsePort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     authToken;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ServerBrowser.CloseSocketAndPingingThreads
struct UServerBrowser_CloseSocketAndPingingThreads_Params
{
};

// Function ConZ.ServerBrowser.CloseConnection
struct UServerBrowser_CloseConnection_Params
{
};

// Function ConZ.ServerBrowser.CancelWaitingOnServerResponse
struct UServerBrowser_CancelWaitingOnServerResponse_Params
{
};

// Function ConZ.ServerBrowser.BeginWaitingOnServerResponse
struct UServerBrowser_BeginWaitingOnServerResponse_Params
{
};

// Function ConZ.ServerBrowser.AddNewInfo
struct UServerBrowser_AddNewInfo_Params
{
	struct FServerInfo                                 ServerInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.ShoulderHolsterWidget.UpdateVisuals
struct UShoulderHolsterWidget_UpdateVisuals_Params
{
};

// Function ConZ.ShoulderHolsterWidget.UpdateItemWidgetHighlightings
struct UShoulderHolsterWidget_UpdateItemWidgetHighlightings_Params
{
};

// Function ConZ.ShoulderHolsterWidget.OnWeaponAttachmentRemoved
struct UShoulderHolsterWidget_OnWeaponAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ShoulderHolsterWidget.OnWeaponAttachmentAdded
struct UShoulderHolsterWidget_OnWeaponAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ShoulderHolsterWidget.EquipItem
struct UShoulderHolsterWidget_EquipItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.SmokeGrenadeItem.Multicast_PlayEffects
struct ASmokeGrenadeItem_Multicast_PlayEffects_Params
{
	struct FVector                                     ZeroBasedLcoation;                                        // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.SpawnScreen.UpdateInfo
struct USpawnScreen_UpdateInfo_Params
{
};

// Function ConZ.TabElement.Update
struct UTabElement_Update_Params
{
	bool                                               Up;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // (Parm, IsPlainOldData)
};

// Function ConZ.TabElement.GetNextIndex
struct UTabElement_GetNextIndex_Params
{
	bool                                               Up;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.TabModeSwitcherWidget.GetSelectedTabMode
struct UTabModeSwitcherWidget_GetSelectedTabMode_Params
{
	ETabMode                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.TacticsSkill.ShouldDetectPrisoner
struct UTacticsSkill_ShouldDetectPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.TacticsSkill.IsPrisonerDetected
struct UTacticsSkill_IsPrisonerDetected_Params
{
	class APrisoner*                                   Prisoner;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.TeamDeathmatchGameEvent.SetTeamDeathmatchParameters
struct ATeamDeathmatchGameEvent_SetTeamDeathmatchParameters_Params
{
	struct FTeamDeathmatchParameters                   Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.TeamDeathmatchGameEvent.RestrictGameEventArea
struct ATeamDeathmatchGameEvent_RestrictGameEventArea_Params
{
};

// Function ConZ.TeamDeathmatchGameEvent.GetTeamDeathmatchParameters
struct ATeamDeathmatchGameEvent_GetTeamDeathmatchParameters_Params
{
	struct FTeamDeathmatchParameters                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ConZ.ThrowingComponent.OnProjectileStopped
struct UThrowingComponent_OnProjectileStopped_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.ThrowingComponent.OnProjectileBounced
struct UThrowingComponent_OnProjectileBounced_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.ThrowingComponent.Multicast_PierceHitObject
struct UThrowingComponent_Multicast_PierceHitObject_Params
{
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  ZeroBasedImpactResult;                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.VicinityItemContainerWidget.SetSavedLayoutMinimized
struct UVicinityItemContainerWidget_SetSavedLayoutMinimized_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.VicinityItemContainerWidget.SetNeedLayoutLoading
struct UVicinityItemContainerWidget_SetNeedLayoutLoading_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.VicinityItemContainerWidget.OnVicinityItemPickedUpStateChanged
struct UVicinityItemContainerWidget_OnVicinityItemPickedUpStateChanged_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PickedUpState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.VicinityItemContainerWidget.DoubleClickedOnHeaderDelegate__DelegateSignature
struct UVicinityItemContainerWidget_DoubleClickedOnHeaderDelegate__DelegateSignature_Params
{
	class UObjectSelectionContainerWidget*             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.VicinityItemContainerWidget.DeferredLoadLayout
struct UVicinityItemContainerWidget_DeferredLoadLayout_Params
{
};

// Function ConZ.VicinityPanelSecondIteration.UpdateItemWidgetHighlightings
struct UVicinityPanelSecondIteration_UpdateItemWidgetHighlightings_Params
{
};

// Function ConZ.VicinityPanelSecondIteration.RemoveItem
struct UVicinityPanelSecondIteration_RemoveItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.VicinityPanelSecondIteration.Minimize
struct UVicinityPanelSecondIteration_Minimize_Params
{
};

// Function ConZ.VicinityPanelSecondIteration.Maximize
struct UVicinityPanelSecondIteration_Maximize_Params
{
};

// Function ConZ.VicinityPanelSecondIteration.GetIsMinimized
struct UVicinityPanelSecondIteration_GetIsMinimized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.VicinityPanelSecondIteration.AutoAddItem
struct UVicinityPanelSecondIteration_AutoAddItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.VoiceAudioComponent.QueueVoiceData
struct UVoiceAudioComponent_QueueVoiceData_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ConZ.VoiceAudioComponent.InitializeVoiceAudioComponent
struct UVoiceAudioComponent_InitializeVoiceAudioComponent_Params
{
};

// Function ConZ.VoiceChatComponent.GetCompressedVoiceData
struct UVoiceChatComponent_GetCompressedVoiceData_Params
{
	TArray<unsigned char>                              OutBuffer;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.VoiceChatComponent.GetAllPlayersInRange
struct UVoiceChatComponent_GetAllPlayersInRange_Params
{
	float                                              requiredDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APawn*>                               pawnList;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ConZ.VoiceDecoder.DecompressVoiceData
struct UVoiceDecoder_DecompressVoiceData_Params
{
	TArray<unsigned char>                              InCompressedVoiceData;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InCompressedVoiceBytes;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              OutDecompressedVoiceData;                                 // (Parm, OutParm, ZeroConstructor)
	int                                                OutDecompressedVoiceBytes;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.VoiceDecoder.CreateVoiceDecoder
struct UVoiceDecoder_CreateVoiceDecoder_Params
{
	class UObject*                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVoiceDecoder*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WaypointGroup.GetWaypointLocation
struct AWaypointGroup_GetWaypointLocation_Params
{
	int                                                waypointIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.WaypointScreenWidget.UpdateWaypoints
struct UWaypointScreenWidget_UpdateWaypoints_Params
{
};

// Function ConZ.WaypointScreenWidget.RemoveWaypointWidgetFromScreen
struct UWaypointScreenWidget_RemoveWaypointWidgetFromScreen_Params
{
	class UWaypointWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.WaypointScreenWidget.RemoveWaypoint
struct UWaypointScreenWidget_RemoveWaypoint_Params
{
	class UWaypointWidget*                             Waypoint;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.WaypointScreenWidget.RemoveAllWaypoints
struct UWaypointScreenWidget_RemoveAllWaypoints_Params
{
};

// Function ConZ.WaypointScreenWidget.AddWaypointWidgetToScreen
struct UWaypointScreenWidget_AddWaypointWidgetToScreen_Params
{
	class UWaypointWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConZ.WaypointScreenWidget.AddWaypoint
struct UWaypointScreenWidget_AddWaypoint_Params
{
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UWaypointWidget*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.WaypointWidget.TieLifetimeToActor
struct UWaypointWidget_TieLifetimeToActor_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WaypointWidget.SetWorldPosition
struct UWaypointWidget_SetWorldPosition_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function ConZ.WaypointWidget.SetTargetActor
struct UWaypointWidget_SetTargetActor_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WaypointWidget.OnLifetimeTiedActorDestroyed
struct UWaypointWidget_OnLifetimeTiedActorDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WaypointWidget.IsOnScreen
struct UWaypointWidget_IsOnScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WaypointWidget.IsAttached
struct UWaypointWidget_IsAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WaypointWidget.GetTargetActor
struct UWaypointWidget_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WaypointWidget.GetDistance
struct UWaypointWidget_GetDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WaypointWidget.GetAngle
struct UWaypointWidget_GetAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachment.Unequip
struct AWeaponAttachment_Unequip_Params
{
};

// Function ConZ.WeaponAttachment.Equip
struct AWeaponAttachment_Equip_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.SetAmmoCount
struct AWeaponAttachmentMagazine_SetAmmoCount_Params
{
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.GetProjectileClass
struct AWeaponAttachmentMagazine_GetProjectileClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.GetCapacity
struct AWeaponAttachmentMagazine_GetCapacity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.GetAmmoCount
struct AWeaponAttachmentMagazine_GetAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.Client_SetLoadedVariables
struct AWeaponAttachmentMagazine_Client_SetLoadedVariables_Params
{
	int                                                ammoCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.AddAmmo
struct AWeaponAttachmentMagazine_AddAmmo_Params
{
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentScope.SetZoomLevelOnServer
struct AWeaponAttachmentScope_SetZoomLevelOnServer_Params
{
	int                                                zoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentScope.SetWindageOnServer
struct AWeaponAttachmentScope_SetWindageOnServer_Params
{
	int                                                windage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentScope.SetLoadedVariablesOnClient
struct AWeaponAttachmentScope_SetLoadedVariablesOnClient_Params
{
	int                                                zoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                windage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponHolsterItem.OnRep_HolsteredWeapon
struct AWeaponHolsterItem_OnRep_HolsteredWeapon_Params
{
};

// Function ConZ.WeaponHolsterItem.HolsterWeapon
struct AWeaponHolsterItem_HolsterWeapon_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponScopeWidget.OnShowElements
struct UWeaponScopeWidget_OnShowElements_Params
{
};

// Function ConZ.WeaponScopeWidget.OnHideElements
struct UWeaponScopeWidget_OnHideElements_Params
{
};

// Function ConZ.WeaponScopeWidget.OnFadeOutComplete
struct UWeaponScopeWidget_OnFadeOutComplete_Params
{
};

// Function ConZ.WeaponScopeWidget.OnFadeInComplete
struct UWeaponScopeWidget_OnFadeInComplete_Params
{
};

// Function ConZ.WeaponScopeWidget.OnConstructFinished
struct UWeaponScopeWidget_OnConstructFinished_Params
{
};

// Function ConZ.WeaponScopeWidget.BeginFadeIn
struct UWeaponScopeWidget_BeginFadeIn_Params
{
};

// Function ConZ.WeaponStateChamberBullet.OnMontageEnded
struct UWeaponStateChamberBullet_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeatherCapture2D.CaptureNextFrame
struct AWeatherCapture2D_CaptureNextFrame_Params
{
};

// Function ConZ.WeatherController.SetTimeOfDay
struct AWeatherController_SetTimeOfDay_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeatherController.GetWindVelocity
struct AWeatherController_GetWindVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeatherController.GetWaterTemperature
struct AWeatherController_GetWaterTemperature_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeatherController.GetTimeOfDaySpeed
struct AWeatherController_GetTimeOfDaySpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeatherController.GetTimeOfDay
struct AWeatherController_GetTimeOfDay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeatherController.GetStormIntensity
struct AWeatherController_GetStormIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeatherController.GetRelativeHumidity
struct AWeatherController_GetRelativeHumidity_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeatherController.GetRainIntensity
struct AWeatherController_GetRainIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeatherController.GetDayPeriod
struct AWeatherController_GetDayPeriod_Params
{
	EDayPeriod                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeatherController.GetAirTemperature
struct AWeatherController_GetAirTemperature_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeatherController.GetAirPressure
struct AWeatherController_GetAirPressure_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WetnessHelpers.SetMaterialsWetness
struct UWetnessHelpers_SetMaterialsWetness_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              wetness;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Wettable.SetWaterWeight
struct UWettable_SetWaterWeight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Wettable.GetWaterWeight
struct UWettable_GetWaterWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Wettable.GetMaxWaterWeight
struct UWettable_GetMaxWaterWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WidgetHelpers.GetWidgetParentOfType
struct UWidgetHelpers_GetWidgetParentOfType_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.WidgetHelpers.GetMuscleLeanFatFactorsFromCoordinates
struct UWidgetHelpers_GetMuscleLeanFatFactorsFromCoordinates_Params
{
	struct FVector2D                                   Coordinates;                                              // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.WidgetHelpers.GetDesiredWidgetClass
struct UWidgetHelpers_GetDesiredWidgetClass_Params
{
	EWidgetType                                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WidgetHelpers.GetAttributesFromMuscularAndFatFactors
struct UWidgetHelpers_GetAttributesFromMuscularAndFatFactors_Params
{
	float                                              muscular;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fat;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.WidgetHelpers.FilterNonNumbersFromString
struct UWidgetHelpers_FilterNonNumbersFromString_Params
{
	struct FString                                     string;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Wolf.PlayAttackMontageOnClients
struct AWolf_PlayAttackMontageOnClients_Params
{
};

// Function ConZ.Wolf.OnRep_Scale
struct AWolf_OnRep_Scale_Params
{
};

// Function ConZ.WolfAnimInstance.AnimNotify_Howl
struct UWolfAnimInstance_AnimNotify_Howl_Params
{
};

// Function ConZ.WorldCraftingMarkerWidget.ChangeMode
struct UWorldCraftingMarkerWidget_ChangeMode_Params
{
	ECraftingMarkerMode                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Wristwatch.ToggleDisplayVisibility
struct AWristwatch_ToggleDisplayVisibility_Params
{
	bool                                               Visiblity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Wristwatch.SyncTime
struct AWristwatch_SyncTime_Params
{
};

// Function ConZ.Wristwatch.SetTime
struct AWristwatch_SetTime_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Wristwatch.SetDisplayBrightness
struct AWristwatch_SetDisplayBrightness_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.StartAttack
struct AZombie2_StartAttack_Params
{
	class APawn*                                       foe;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.SetStance
struct AZombie2_SetStance_Params
{
	EZombieStance                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.SetFoe
struct AZombie2_SetFoe_Params
{
	class APawn*                                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.Server_StartAttack
struct AZombie2_Server_StartAttack_Params
{
	int                                                attackDescriptionIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.Server_SetStance
struct AZombie2_Server_SetStance_Params
{
	EZombieStance                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.Server_PlayTurnMontage
struct AZombie2_Server_PlayTurnMontage_Params
{
	EZombieTurnMontage                                 turnMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              turnAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.Server_PlayMontage
struct AZombie2_Server_PlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.RecoverFromRagdoll
struct AZombie2_RecoverFromRagdoll_Params
{
};

// Function ConZ.Zombie2.OnRep_Stance
struct AZombie2_OnRep_Stance_Params
{
	EZombieStance                                      OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.OnRep_IsSearched
struct AZombie2_OnRep_IsSearched_Params
{
	bool                                               OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.OnRep_Health
struct AZombie2_OnRep_Health_Params
{
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.NetMulticast_StartAttack
struct AZombie2_NetMulticast_StartAttack_Params
{
	int                                                attackDescriptionIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.NetMulticast_PlayTurnMontage
struct AZombie2_NetMulticast_PlayTurnMontage_Params
{
	EZombieTurnMontage                                 turnMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              turnAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.NetMulticast_PlaySound
struct AZombie2_NetMulticast_PlaySound_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.NetMulticast_PlayMontage
struct AZombie2_NetMulticast_PlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Zombie2.NetMulticast_HandleLanded
struct AZombie2_NetMulticast_HandleLanded_Params
{
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Zombie2.IsRagdollAtRest
struct AZombie2_IsRagdollAtRest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.IsInRagdoll
struct AZombie2_IsInRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.IsAttacking
struct AZombie2_IsAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.GoToRagdoll
struct AZombie2_GoToRagdoll_Params
{
	struct FZombieRagdollAutoRecovery                  autoRecovery;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.Zombie2.GetZombieSoundComponent
struct AZombie2_GetZombieSoundComponent_Params
{
	class UZombieSoundComponent2*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Zombie2.GetZombieMovement
struct AZombie2_GetZombieMovement_Params
{
	class UZombieMovementComponent2*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Zombie2.GetStance
struct AZombie2_GetStance_Params
{
	EZombieStance                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.GetMaxHealth
struct AZombie2_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.GetHitReactComponent
struct AZombie2_GetHitReactComponent_Params
{
	class UHitReactComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Zombie2.GetHealthRatio
struct AZombie2_GetHealthRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.GetHealth
struct AZombie2_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.GetFoe
struct AZombie2_GetFoe_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.GetAimOffset
struct AZombie2_GetAimOffset_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ConZ.Zombie2.CanStartAttack
struct AZombie2_CanStartAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ZombieAnimInstance2.AnimNotify_RFootDown
struct UZombieAnimInstance2_AnimNotify_RFootDown_Params
{
};

// Function ConZ.ZombieAnimInstance2.AnimNotify_LFootDown
struct UZombieAnimInstance2_AnimNotify_LFootDown_Params
{
};

// Function ConZ.ZombieAnimInstance2.AnimNotify_GoToRagdoll
struct UZombieAnimInstance2_AnimNotify_GoToRagdoll_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
