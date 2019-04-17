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

// BlueprintGeneratedClass Christmas_tree_Decorated.Christmas_tree_Decorated_C
// 0x0008 (0x0738 - 0x0730)
class AChristmas_tree_Decorated_C : public AItem
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Christmas_tree_Decorated.Christmas_tree_Decorated_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
