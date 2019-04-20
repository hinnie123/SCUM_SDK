#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass M1887_InsertShellLoop.M1887_InsertShellLoop_C
// 0x0000 (0x0090 - 0x0090)
class UM1887_InsertShellLoop_C : public UInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M1887_InsertShellLoop.M1887_InsertShellLoop_C");
		return ptr;
	}


	float ExecuteUsingData(struct FWeaponReloadData* Data);
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
