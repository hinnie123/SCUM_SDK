#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VictoryBPLibrary.ESpeedUnit
enum class ESpeedUnit : uint8_t
{
	CentimeterPerSecond            = 0,
	FootPerSecond                  = 1,
	MeterPerSecond                 = 2,
	MeterPerMinute                 = 3,
	KilometerPerSecond             = 4,
	KilometerPerMinute             = 5,
	KilometerPerHour               = 6,
	MilePerHour                    = 7,
	Knot                           = 8,
	Mach                           = 9,
	SpeedOfLight                   = 10,
	YardPerSecond                  = 11,
	ESpeedUnit_MAX                 = 12
};


// Enum VictoryBPLibrary.EJoyGraphicsFullScreen
enum class EJoyGraphicsFullScreen : uint8_t
{
	FullScreen                     = 0,
	WindowedFullScreen             = 1,
	WindowedFullScreenPerformance  = 2,
	EJoyGraphicsFullScreen_Max     = 3
};


// Enum VictoryBPLibrary.EVictoryHMDDevice
enum class EVictoryHMDDevice : uint8_t
{
	None                           = 0,
	OculusRift                     = 1,
	Morpheus                       = 2,
	ES2GenericStereoMesh           = 3,
	SteamVR                        = 4,
	GearVR                         = 5,
	EVictoryHMDDevice_MAX          = 6
};


// Enum VictoryBPLibrary.EJoyImageFormats
enum class EJoyImageFormats : uint8_t
{
	JPG                            = 0,
	PNG                            = 1,
	BMP                            = 2,
	ICO                            = 3,
	EXR                            = 4,
	ICNS                           = 5,
	EJoyImageFormats_MAX           = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VictoryBPLibrary.VictoryInputAxis
// 0x0040
struct FVictoryInputAxis
{
	struct FString                                     AxisName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     KeyAsString;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FKey                                        Key;                                                      // 0x0020(0x0018) (Edit, BlueprintVisible)
	float                                              Scale;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct VictoryBPLibrary.VictoryInput
// 0x0040
struct FVictoryInput
{
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FString                                     KeyAsString;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bShift : 1;                                               // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct VictoryBPLibrary.LevelStreamInstanceInfo
// 0x0030
struct FLevelStreamInstanceInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PackageNameToLoad;                                        // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x0028(0x0001) (BlueprintVisible)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x0028(0x0001) (BlueprintVisible)
	unsigned char                                      bShouldBlockOnLoad : 1;                                   // 0x0028(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                LODIndex;                                                 // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VictoryBPLibrary.VictorySubtitleCue
// 0x0020
struct FVictorySubtitleCue
{
	struct FText                                       SubtitleText;                                             // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
