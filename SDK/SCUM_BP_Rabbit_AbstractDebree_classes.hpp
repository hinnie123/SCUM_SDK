#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C
// 0x0030 (0x0358 - 0x0328)
class ABP_Rabbit_AbstractDebree_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              DebrisClasses;                                            // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Damage;                                                   // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebrisSpawningDamage;                                     // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DebrisParticles;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C");
		return ptr;
	}


	void SpawnDebris(const struct FVector& InImpulseDirection);
	void UserConstructionScript();
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ExecuteUbergraph_BP_Rabbit_AbstractDebree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
