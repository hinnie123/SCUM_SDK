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

// BlueprintGeneratedClass Recurve_Bow.Recurve_Bow_C
// 0x0008 (0x1148 - 0x1140)
class ARecurve_Bow_C : public AWeaponBow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1140(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Recurve_Bow.Recurve_Bow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Recurve_Bow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
