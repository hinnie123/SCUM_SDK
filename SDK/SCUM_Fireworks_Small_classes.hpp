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

// BlueprintGeneratedClass Fireworks_Small.Fireworks_Small_C
// 0x00C8 (0x08E0 - 0x0818)
class AFireworks_Small_C : public AFireworksItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0818(0x0008) (Transient, DuplicateTransient)
	float                                              RandomAngle;                                              // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	TArray<class UParticleSystem*>                     BurstParticleSystems;                                     // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MaxRotationSpeed;                                         // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRotationSpeed;                                         // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLaunchVelocity;                                        // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinLaunchVelocity;                                        // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShellMaxLife;                                             // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShellminLife;                                             // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBurstTime;                                             // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBurstTime;                                             // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ShellParticleSystem;                                      // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfBursts;                                           // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryBurstDelay;                                      // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FlareColor;                                               // 0x0868(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShellTailColor;                                           // 0x0878(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               UseShapedBurst;                                           // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0889(0x0003) MISSED OFFSET
	float                                              BurstSparkleMultiplier;                                   // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShellSparkleMultiplier;                                   // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BurstStarMultiplier;                                      // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellSmoke;                                            // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseBurstSmoke;                                            // 0x0899(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x089A(0x0006) MISSED OFFSET
	class USkeletalMesh*                               ShapedBurstActorMesh;                                     // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08A9(0x0007) MISSED OFFSET
	struct FTransform                                  ShellTransform;                                           // 0x08B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fireworks_Small.Fireworks_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void LaunchShell();
	void ExecuteUbergraph_Fireworks_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
