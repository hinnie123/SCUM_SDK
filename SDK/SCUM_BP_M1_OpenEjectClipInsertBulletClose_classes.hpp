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

// BlueprintGeneratedClass BP_M1_OpenEjectClipInsertBulletClose.BP_M1_OpenEjectClipInsertBulletClose_C
// 0x0000 (0x0080 - 0x0080)
class UBP_M1_OpenEjectClipInsertBulletClose_C : public URemoveMagazineInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_OpenEjectClipInsertBulletClose.BP_M1_OpenEjectClipInsertBulletClose_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
