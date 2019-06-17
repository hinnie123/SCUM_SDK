#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct NonImplementedSkill.NonImplementedSkill
// 0x0020
struct FNonImplementedSkill
{
	TEnumAsByte<ESkillAttribute>                       Attribute_2_8FE9CFC544A8D131822996940094EA1C;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Caption_5_5CCEC37D47989AF5B1F09CA5763CC787;               // 0x0008(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
