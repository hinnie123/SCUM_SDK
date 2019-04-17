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

// BlueprintGeneratedClass BP_M1_OpenInsertBulletLoopClose.BP_M1_OpenInsertBulletLoopClose_C
// 0x0000 (0x0090 - 0x0090)
class UBP_M1_OpenInsertBulletLoopClose_C : public UInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_OpenInsertBulletLoopClose.BP_M1_OpenInsertBulletLoopClose_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
