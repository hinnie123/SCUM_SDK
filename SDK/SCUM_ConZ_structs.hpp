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

// Enum ConZ.EWidgetDisplayInfoType
enum class EWidgetDisplayInfoType : uint8_t
{
	None                           = 0,
	FirstOverSecond                = 1,
	Single                         = 2,
	EWidgetDisplayInfoType_MAX     = 3
};


// Enum ConZ.EInteractionType
enum class EInteractionType : uint8_t
{
	None                           = 0,
	Select                         = 1,
	UnSelectAll                    = 2,
	Search                         = 3,
	Examine                        = 4,
	PickUp                         = 5,
	PickUpAllExamined              = 6,
	PickUpAllSelected              = 7,
	Use                            = 8,
	Operate                        = 9,
	Drop                           = 10,
	DropAllSelected                = 11,
	Throw                          = 12,
	Open                           = 13,
	Close                          = 14,
	Lock                           = 15,
	Unlock                         = 16,
	Push                           = 17,
	GodModeFill                    = 18,
	Fill                           = 19,
	Tank                           = 20,
	Craft                          = 21,
	Uncraft                        = 22,
	Create                         = 23,
	Fix                            = 24,
	FixAll                         = 25,
	Eat                            = 26,
	EatAll                         = 27,
	Drink                          = 28,
	DrinkAll                       = 29,
	CheckTaste                     = 30,
	Equip                          = 31,
	UnEquip                        = 32,
	Cut                            = 33,
	Collect                        = 34,
	LightFire                      = 35,
	AddFuel                        = 36,
	Extinguish                     = 37,
	Prepare                        = 38,
	Cook                           = 39,
	Chop                           = 40,
	SmokeFood                      = 41,
	Destroy                        = 42,
	Store                          = 43,
	TakeInHands                    = 44,
	WashCloth                      = 45,
	WashClothAll                   = 46,
	RemoveFromHands                = 47,
	CarryItem                      = 48,
	AddToQuickAccess               = 49,
	RemoveFromQuickAccess          = 50,
	ChamberBullet                  = 51,
	LoadAmmo                       = 52,
	UnloadAmmo                     = 53,
	Swap                           = 54,
	Join                           = 55,
	Split                          = 56,
	Unpack                         = 57,
	CheckPulse                     = 58,
	Diagnose                       = 59,
	MakeConscious                  = 60,
	ArtificalPerspiration          = 61,
	PullTooth                      = 62,
	PatchWounds                    = 63,
	ImmobilizeLimbs                = 64,
	MendBones                      = 65,
	TreatSickness                  = 66,
	PerformLocalAnesthesia         = 67,
	PerformGeneralAnesthesia       = 68,
	PerformSurgery                 = 69,
	RevivePatient                  = 70,
	InviteToSquad                  = 71,
	RemoveFromSquad                = 72,
	LeaveSquad                     = 73,
	Urinate                        = 74,
	Defecate                       = 75,
	Vomit                          = 76,
	CheckTime                      = 77,
	BindHands                      = 78,
	TightenBinds                   = 79,
	RemoveBinds                    = 80,
	LoosenBinds                    = 81,
	BreakBinds                     = 82,
	Bury                           = 83,
	UnBury                         = 84,
	Rest                           = 85,
	SitOnGround                    = 86,
	LayOnGround                    = 87,
	ExamineInventory               = 88,
	GestureShowFinger              = 89,
	GestureStandSurrender          = 90,
	GestureWaveHi                  = 91,
	GestureYouAreDead              = 92,
	GestureFY                      = 93,
	GesturePoint                   = 94,
	GestureHeart                   = 95,
	GestureBallpalm                = 96,
	GestureFacepalm                = 97,
	GestureFingerGun               = 98,
	GestureLaughing                = 99,
	GestureSmellWave               = 100,
	GestureSquat                   = 101,
	GestureCharge                  = 102,
	GestureFreeze                  = 103,
	GestureGetDown                 = 104,
	GestureGetUp                   = 105,
	GestureHalt                    = 106,
	GestureHurryUp                 = 107,
	GesturePointMe                 = 108,
	GesturePointYou                = 109,
	GestureRally                   = 110,
	GestureThumbsUp                = 111,
	GestureThumbsDown              = 112,
	GestureUnderstandNot           = 113,
	GestureUnderstandYes           = 114,
	PlayInstrument                 = 115,
	Whistle                        = 116,
	MakeUnconscious                = 117,
	CutHair                        = 118,
	CutFacialHair                  = 119,
	PacifyAnimal                   = 120,
	TameAnimal                     = 121,
	LearnAnimal                    = 122,
	CommandAnimal                  = 123,
	FeedAnimal                     = 124,
	Buy                            = 125,
	Maintain                       = 126,
	Lockpick                       = 127,
	RemoveLocks                    = 128,
	AddUpgrade                     = 129,
	RadioTurnOn                    = 130,
	RadioTurnOff                   = 131,
	RadioIncreaseVolume            = 132,
	RadioDecreaseVolume            = 133,
	StackAdd                       = 134,
	StackRemove                    = 135,
	RepairBaseElement              = 136,
	RepairBaseElementArea          = 137,
	RepairBaseElementsUnder25Percent = 138,
	RepairBaseElementsUnder50Percent = 139,
	RepairBaseElementsUnder75Percent = 140,
	ClaimBase                      = 141,
	ShowBaseFlagInfluence          = 142,
	OpenContainer                  = 143,
	ChangeItemText                 = 144,
	CommitItemText                 = 145,
	TurnOn                         = 146,
	TurnOff                        = 147,
	AddProximityTrigger            = 148,
	AddLaserTrigger                = 149,
	AddTripwireTrigger             = 150,
	RemoveTrigger                  = 151,
	ShowTrigger                    = 152,
	ArmTrap                        = 153,
	DisarmTrap                     = 154,
	BuryTrap                       = 155,
	UnburyTrap                     = 156,
	EInteractionType_MAX           = 157
};


// Enum ConZ.EItemNoiseLevel
enum class EItemNoiseLevel : uint8_t
{
	Mute                           = 0,
	VerySilent                     = 1,
	Silent                         = 2,
	Moderate                       = 3,
	Loud                           = 4,
	VeryLoud                       = 5,
	EItemNoiseLevel_MAX            = 6
};


// Enum ConZ.EItemExhausted
enum class EItemExhausted : uint8_t
{
	DoNothing                      = 0,
	Destroy                        = 1,
	Uncraft                        = 2,
	EItemExhausted_MAX             = 3
};


// Enum ConZ.EItemRarity
enum class EItemRarity : uint8_t
{
	ExtremelyRare                  = 0,
	VeryRare                       = 1,
	Rare                           = 2,
	Uncommon                       = 3,
	Common                         = 4,
	Abundant                       = 5,
	Count                          = 6,
	EItemRarity_MAX                = 7
};


// Enum ConZ.EConfigFile
enum class EConfigFile : uint8_t
{
	None                           = 0,
	Engine                         = 1,
	GameUserSettings               = 2,
	ServerSettings                 = 3,
	EConfigFile_MAX                = 4
};


// Enum ConZ.EDoorStateFlags
enum class EDoorStateFlags : uint8_t
{
	None                           = 0,
	Open                           = 1,
	Locked                         = 2,
	HasPower                       = 3,
	ChangeSide                     = 4,
	HasLock                        = 5,
	EDoorStateFlags_MAX            = 6
};


// Enum ConZ.ERespawnOption
enum class ERespawnOption : uint8_t
{
	Random                         = 0,
	Sector                         = 1,
	Shelter                        = 2,
	Squad                          = 3,
	ERespawnOption_MAX             = 4
};


// Enum ConZ.EConZSquadMemberRank
enum class EConZSquadMemberRank : uint8_t
{
	None                           = 0,
	Member                         = 1,
	Enforcer                       = 2,
	Underboss                      = 3,
	Boss                           = 4,
	EConZSquadMemberRank_MAX       = 5
};


// Enum ConZ.EChatType
enum class EChatType : uint8_t
{
	Default                        = 0,
	Local                          = 1,
	Global                         = 2,
	Squad                          = 3,
	ServerMessage                  = 4,
	Error                          = 5,
	EChatType_MAX                  = 6
};


// Enum ConZ.ESortOrder
enum class ESortOrder : uint8_t
{
	Ascending                      = 0,
	Descending                     = 1,
	ESortOrder_MAX                 = 2
};


// Enum ConZ.EEventsRankingStatsOrderByField
enum class EEventsRankingStatsOrderByField : uint8_t
{
	FamePoints                     = 0,
	EventScore                     = 1,
	EventKills                     = 2,
	EventDeaths                    = 3,
	EEventsRankingStatsOrderByField_MAX = 4
};


// Enum ConZ.ESkillLevel
enum class ESkillLevel : uint8_t
{
	NoSkill                        = 0,
	Basic                          = 1,
	Medium                         = 2,
	Advanced                       = 3,
	AboveAdvanced                  = 4,
	ESkillLevel_MAX                = 5
};


// Enum ConZ.EAnimalAction
enum class EAnimalAction : uint8_t
{
	None                           = 0,
	Eat                            = 1,
	Rest                           = 2,
	Attack                         = 3,
	Sit                            = 4,
	Wait                           = 5,
	Intimidate                     = 6,
	Alert                          = 7,
	Turn                           = 8,
	EAnimalAction_MAX              = 9
};


// Enum ConZ.EBodyPart
enum class EBodyPart : uint8_t
{
	Unknown                        = 0,
	Head                           = 1,
	Chest                          = 2,
	Abdomen                        = 3,
	ArmLeftLower                   = 4,
	ArmLeftUpper                   = 5,
	ArmRightLower                  = 6,
	ArmRightUpper                  = 7,
	LegLeftLower                   = 8,
	LegLeftUpper                   = 9,
	LegRightLower                  = 10,
	LegRightUpper                  = 11,
	Num                            = 12,
	EBodyPart_MAX                  = 13
};


// Enum ConZ.EEnvironmentClass
enum class EEnvironmentClass : uint8_t
{
	Indoor_Small                   = 0,
	Indoor_Medium                  = 1,
	Indoor_Large                   = 2,
	Outdoor_Large                  = 3,
	Count                          = 4,
	EEnvironmentClass_MAX          = 5
};


// Enum ConZ.EGender
enum class EGender : uint8_t
{
	Unspecified                    = 0,
	Female                         = 1,
	Male                           = 2,
	EGender_MAX                    = 3
};


// Enum ConZ.EDetectHitCollisionType
enum class EDetectHitCollisionType : uint8_t
{
	None                           = 0,
	Head                           = 1,
	Body                           = 2,
	Legs                           = 3,
	EDetectHitCollisionType_MAX    = 4
};


// Enum ConZ.EDamageMagnitudeType
enum class EDamageMagnitudeType : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	Knockout                       = 3,
	EDamageMagnitudeType_MAX       = 4
};


// Enum ConZ.ECharacterImpactSourceSoundCategory
enum class ECharacterImpactSourceSoundCategory : uint8_t
{
	Any                            = 0,
	Head_Bare                      = 1,
	Hands_Bare                     = 2,
	Hands_Gloved                   = 3,
	Legs_Bare                      = 4,
	Claws                          = 5,
	Jaws                           = 6,
	Blunt_Wood                     = 7,
	Blunt_Metal                    = 8,
	Sharp_Metal                    = 9,
	ECharacterImpactSourceSoundCategory_MAX = 10
};


// Enum ConZ.EAITeam
enum class EAITeam : uint8_t
{
	Prisoner                       = 0,
	Zombie                         = 1,
	Animal                         = 2,
	Mechanoid                      = 3,
	None                           = 4,
	EAITeam_MAX                    = 5
};


// Enum ConZ.EConZPxDominanceGroup
enum class EConZPxDominanceGroup : uint8_t
{
	Default                        = 0,
	MediumPawns                    = 1,
	LargePawns                     = 2,
	EConZPxDominanceGroup_MAX      = 3
};


// Enum ConZ.EPrisonerMovementPace
enum class EPrisonerMovementPace : uint8_t
{
	NotMoving                      = 0,
	Slow                           = 1,
	Medium                         = 2,
	Fast                           = 3,
	EPrisonerMovementPace_MAX      = 4
};


// Enum ConZ.EPrisonerBorderCrossingPenalty
enum class EPrisonerBorderCrossingPenalty : uint8_t
{
	None                           = 0,
	Penalty1                       = 1,
	Penalty2                       = 2,
	Penalty3                       = 3,
	Penalty4                       = 4,
	DeadPenalty                    = 5,
	EPrisonerBorderCrossingPenalty_MAX = 6
};


// Enum ConZ.ETabMode
enum class ETabMode : uint8_t
{
	None                           = 0,
	Inventory                      = 1,
	BCU                            = 2,
	Crafting                       = 3,
	Journal                        = 4,
	Squad                          = 5,
	Events                         = 6,
	Last                           = 7,
	ETabMode_MAX                   = 8
};


// Enum ConZ.EPrisonerCombatMode
enum class EPrisonerCombatMode : uint8_t
{
	None                           = 0,
	MeleeUnarmed                   = 1,
	MeleeWeapon                    = 2,
	Firearm                        = 3,
	EPrisonerCombatMode_MAX        = 4
};


// Enum ConZ.EHoldBreathState
enum class EHoldBreathState : uint8_t
{
	None                           = 0,
	BreathIn                       = 1,
	HoldBreath                     = 2,
	BreathOut                      = 3,
	Breathless                     = 4,
	BreathInRecovery               = 5,
	Count                          = 6,
	EHoldBreathState_MAX           = 7
};


// Enum ConZ.EPrisonerWettablePart
enum class EPrisonerWettablePart : uint8_t
{
	Head                           = 0,
	UpperBody                      = 1,
	LowerBody                      = 2,
	Feet                           = 3,
	Count                          = 4,
	EPrisonerWettablePart_MAX      = 5
};


// Enum ConZ.EPrisonerMeleeTargetSelectionMode
enum class EPrisonerMeleeTargetSelectionMode : uint8_t
{
	Manual                         = 0,
	SemiAutomatic                  = 1,
	Automatic                      = 2,
	EPrisonerMeleeTargetSelectionMode_MAX = 3
};


// Enum ConZ.EMotionIntensity
enum class EMotionIntensity : uint8_t
{
	None                           = 0,
	Light                          = 1,
	Medium                         = 2,
	Heavy                          = 3,
	EMotionIntensity_MAX           = 4
};


// Enum ConZ.EPrisonerStance
enum class EPrisonerStance : uint8_t
{
	Standing                       = 0,
	Crouching                      = 1,
	Prone                          = 2,
	Swimming                       = 3,
	Count                          = 4,
	EPrisonerStance_MAX            = 5
};


// Enum ConZ.ESkillAttribute
enum class ESkillAttribute : uint8_t
{
	Constitution                   = 0,
	Dexterity                      = 1,
	Intelligence                   = 2,
	Strength                       = 3,
	ESkillAttribute_MAX            = 4
};


// Enum ConZ.EBodyState
enum class EBodyState : uint8_t
{
	FullyFed                       = 0,
	Hungry                         = 1,
	Starving                       = 2,
	WellHydrated                   = 3,
	Hydrated                       = 4,
	Thirsty                        = 5,
	VeryThirsty                    = 6,
	Dehydrated                     = 7,
	UrinationNeeded                = 8,
	ForcedUrination                = 9,
	DefecationNeeded               = 10,
	ForcedDefecation               = 11,
	Choking                        = 12,
	Unconsciousness                = 13,
	Coma                           = 14,
	Death                          = 15,
	Headless                       = 16,
	LowBloodSugar                  = 17,
	NoseBleeding                   = 18,
	FeelingCold                    = 19,
	Fatigue                        = 20,
	HeartPalpitations              = 21,
	RespiratoryProblems            = 22,
	RespiratoryFailure             = 23,
	Confusion                      = 24,
	Nausea                         = 25,
	BlurredVision                  = 26,
	NightBlindness                 = 27,
	Pellagra                       = 28,
	PainfulJoints                  = 29,
	SkinProblems                   = 30,
	MuscleWeakness                 = 31,
	ItchingFeet                    = 32,
	Headache                       = 33,
	LightChestPain                 = 34,
	SeriousChestPain               = 35,
	CardiacArrest                  = 36,
	GrayHair                       = 37,
	HairLoss                       = 38,
	ColdHands                      = 39,
	Fever                          = 40,
	ApetiteLoss                    = 41,
	MemoryLoss                     = 42,
	Anemia                         = 43,
	Cramps                         = 44,
	Numbness                       = 45,
	Farts                          = 46,
	Constipation                   = 47,
	AbdominalPain                  = 48,
	StomachPain                    = 49,
	Seizures                       = 50,
	Burping                        = 51,
	Vomiting                       = 52,
	StomachRupture                 = 53,
	LiverFailure                   = 54,
	Diarrhea                       = 55,
	Dizziness                      = 56,
	Depression                     = 57,
	Lethargy                       = 58,
	Hallucinations                 = 59,
	Delirium                       = 60,
	DecreasedConsciousness         = 61,
	DifficultySleeping             = 62,
	Overdose                       = 63,
	Tiring                         = 64,
	Fainting                       = 65,
	Count                          = 66,
	EBodyState_MAX                 = 67
};


// Enum ConZ.ECharacterActionEndState
enum class ECharacterActionEndState : uint8_t
{
	None                           = 0,
	Regular                        = 1,
	ConditionNotMet                = 2,
	Canceled                       = 3,
	Failed                         = 4,
	Terminated                     = 5,
	ECharacterActionEndState_MAX   = 6
};


// Enum ConZ.ECharacterActionAckType
enum class ECharacterActionAckType : uint8_t
{
	None                           = 0,
	Begin                          = 1,
	End                            = 2,
	ECharacterActionAckType_MAX    = 3
};


// Enum ConZ.EPlayableInstrumentTone
enum class EPlayableInstrumentTone : uint8_t
{
	C                              = 0,
	Db                             = 1,
	D                              = 2,
	Eb                             = 3,
	E                              = 4,
	F                              = 5,
	Gb                             = 6,
	G                              = 7,
	Ab                             = 8,
	A                              = 9,
	Bb                             = 10,
	B                              = 11,
	C2                             = 12,
	Count                          = 13,
	EPlayableInstrumentTone_MAX    = 14
};


// Enum ConZ.EWeaponCategory
enum class EWeaponCategory : uint8_t
{
	ThrowingWeapons                = 0,
	RangedWeapons                  = 1,
	Handguns                       = 2,
	SubmachineGuns                 = 3,
	Rifles                         = 4,
	Shotguns                       = 5,
	AutomaticRifles                = 6,
	SniperRifles                   = 7,
	Bow                            = 8,
	Count                          = 9,
	EWeaponCategory_MAX            = 10
};


// Enum ConZ.EWindSpeedCategory
enum class EWindSpeedCategory : uint8_t
{
	Zero                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EWindSpeedCategory_MAX         = 4
};


// Enum ConZ.EPrisonerPostTeleportBehavior
enum class EPrisonerPostTeleportBehavior : uint8_t
{
	None                           = 0,
	ReviveIfDead                   = 1,
	GameEventLoadout               = 2,
	EPrisonerPostTeleportBehavior_MAX = 3
};


// Enum ConZ.EPrisonerCommonSpawnLocation
enum class EPrisonerCommonSpawnLocation : uint8_t
{
	None                           = 0,
	Random                         = 1,
	Sector                         = 2,
	Home                           = 3,
	Squad                          = 4,
	Event                          = 5,
	EPrisonerCommonSpawnLocation_MAX = 6
};


// Enum ConZ.ECarryingItemState
enum class ECarryingItemState : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	ECarryingItemState_MAX         = 2
};


// Enum ConZ.EPlayingInstrumentState
enum class EPlayingInstrumentState : uint8_t
{
	None                           = 0,
	Exiting                        = 1,
	Idle                           = 2,
	Playing                        = 3,
	EPlayingInstrumentState_MAX    = 4
};


// Enum ConZ.EScopingWithItemInHandsState
enum class EScopingWithItemInHandsState : uint8_t
{
	None                           = 0,
	Starting                       = 1,
	Scoping                        = 2,
	StoppingWithEffect             = 3,
	StoppingNoEffect               = 4,
	EScopingWithItemInHandsState_MAX = 5
};


// Enum ConZ.EThrowingMode
enum class EThrowingMode : uint8_t
{
	None                           = 0,
	Cancelled                      = 1,
	Aiming                         = 2,
	Throwing                       = 3,
	EThrowingMode_MAX              = 4
};


// Enum ConZ.EWeaponAimingType
enum class EWeaponAimingType : uint8_t
{
	None                           = 0,
	Hip                            = 1,
	DownTheSights                  = 2,
	EWeaponAimingType_MAX          = 3
};


// Enum ConZ.EDodgeDirectionType
enum class EDodgeDirectionType : uint8_t
{
	Front                          = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	EDodgeDirectionType_MAX        = 4
};


// Enum ConZ.EClothesType
enum class EClothesType : uint8_t
{
	None                           = 0,
	Back                           = 1,
	HeadUpper                      = 2,
	HeadUpperSkeletal              = 3,
	HeadLower                      = 4,
	Head                           = 5,
	Eyes                           = 6,
	Neck                           = 7,
	Body_Armor                     = 8,
	Body_LongSleeves               = 9,
	Body_ShortSleeves              = 10,
	Waist                          = 11,
	Hands                          = 12,
	Legs                           = 13,
	Feet                           = 14,
	Underwear                      = 15,
	PenisWarmer                    = 16,
	Suit                           = 17,
	Count                          = 18,
	EClothesType_MAX               = 19
};


// Enum ConZ.EBodySlot
enum class EBodySlot : uint8_t
{
	Head                           = 0,
	Chest                          = 1,
	Legs                           = 2,
	Feet                           = 3,
	Count                          = 4,
	EBodySlot_MAX                  = 5
};


// Enum ConZ.EClothesPart
enum class EClothesPart : uint8_t
{
	None                           = 0,
	BodyUpper                      = 1,
	BodyLower                      = 2,
	Head                           = 3,
	Eyes                           = 4,
	Neck                           = 5,
	Hands                          = 6,
	ArmUpper                       = 7,
	ArmLower                       = 8,
	Legs                           = 9,
	Feet                           = 10,
	EClothesPart_MAX               = 11
};


// Enum ConZ.EDiagnosedResult
enum class EDiagnosedResult : uint8_t
{
	None                           = 0,
	DeathDetected                  = 1,
	UnconsciousnessDetected        = 2,
	NotBreathingDetected           = 3,
	IncreasedBodyTempDetected      = 4,
	DiarrheaDetected               = 5,
	VomitingDetected               = 6,
	PhysicalInjuryDetected         = 7,
	BrokenLimbsInjuryDetected      = 8,
	ChokingSicknessDetected        = 9,
	OverdoseSicknessDetected       = 10,
	OvereatingSicknessDetected     = 11,
	DehydrationSicknessDetected    = 12,
	StarvationSicknessDetected     = 13,
	CarbonMonoxidePoisoningDetected = 14,
	DysenteryDiseaseDetected       = 15,
	HypothermiaDiseaseDetected     = 16,
	HyperthermiaDiseaseDetected    = 17,
	HookwormsDiseaseDetected       = 18,
	HepatitisADiseaseDetected      = 19,
	HeatstrokeDiseaseDetected      = 20,
	HeartAttackDetected            = 21,
	LeptospirosisDiseaseDetected   = 22,
	MalariaDiseaseDetected         = 23,
	MeningitisDiseaseDetected      = 24,
	RadiationSicknessDetected      = 25,
	SalmonellaDiseaseDetected      = 26,
	SunburnSicknessDetected        = 27,
	ToothacheSicknessDetected      = 28,
	TrenchFootDiseaseDetected      = 29,
	CystitisDiseaseDetected        = 30,
	CalciumDeficiencyDetected      = 31,
	CopperDeficiencyDetected       = 32,
	EnergyDeficiencyDetected       = 33,
	FatDeficiencyDetected          = 34,
	FiberDeficiencyDetected        = 35,
	IronDeficiencyDetected         = 36,
	MagnesiumDeficiencyDetected    = 37,
	ManganeseDeficiencyDetected    = 38,
	PhosphorusDeficiencyDetected   = 39,
	PotassiumDeficiencyDetected    = 40,
	ProteinDeficiencyDetected      = 41,
	SeleniumDeficiencyDetected     = 42,
	SodiumDeficiencyDetected       = 43,
	ZincDeficiencyDetected         = 44,
	VitaminADeficiencyDetected     = 45,
	VitaminB1DeficiencyDetected    = 46,
	VitaminB2DeficiencyDetected    = 47,
	VitaminB3DeficiencyDetected    = 48,
	VitaminB4DeficiencyDetected    = 49,
	VitaminB5DeficiencyDetected    = 50,
	VitaminB6DeficiencyDetected    = 51,
	VitaminB9DeficiencyDetected    = 52,
	VitaminB12DeficiencyDetected   = 53,
	VitaminCDeficiencyDetected     = 54,
	VitaminDDeficiencyDetected     = 55,
	VitaminEDeficiencyDetected     = 56,
	VitaminKDeficiencyDetected     = 57,
	BacillusCereusPoisoningDetected = 58,
	BotulismPoisoningDetected      = 59,
	CampylobacteriosisPoisoningDetected = 60,
	CyclosporiasisPoisoningDetected = 61,
	IntestinalCryptosporidiosisPoisoningDetected = 62,
	StaphylococcalPoisoningDetected = 63,
	VibrioVulnificusInfectionDetected = 64,
	AmanitaVirosaPoisoningDetected = 65,
	PsilocybeCyanescensPoisoningDetected = 66,
	AmanitaPhalloidesPoisoningDetected = 67,
	AmanitaPantheriaPoisoningDetected = 68,
	AmanitaMuscariaPoisoningDetected = 69,
	InocybePatouillardiiPoisoningDetected = 70,
	FoxglovePoisoningDetected      = 71,
	HemlockPoisoningDetected       = 72,
	BaneberryPoisoningDetected     = 73,
	DeadlyNightshadePoisoningDetected = 74,
	DrunkennessSicknessDetected    = 75,
	AlcoholismAddictionDetected    = 76,
	Count                          = 77,
	EDiagnosedResult_MAX           = 78
};


// Enum ConZ.EBleedingType
enum class EBleedingType : uint8_t
{
	None                           = 0,
	Scratch                        = 1,
	Small                          = 2,
	Large                          = 3,
	EBleedingType_MAX              = 4
};


// Enum ConZ.EPrisonerActionDifficulty
enum class EPrisonerActionDifficulty : uint8_t
{
	None                           = 0,
	Easy                           = 1,
	Demanding                      = 2,
	VeryDemanding                  = 3,
	EPrisonerActionDifficulty_MAX  = 4
};


// Enum ConZ.EPrisonerECGRhythm
enum class EPrisonerECGRhythm : uint8_t
{
	Normal                         = 0,
	A                              = 1,
	G                              = 2,
	H                              = 3,
	I                              = 4,
	EPrisonerECGRhythm_MAX         = 5
};


// Enum ConZ.EMineral
enum class EMineral : uint8_t
{
	Calcium                        = 0,
	Iron                           = 1,
	Magnesium                      = 2,
	Phosphorus                     = 3,
	Potassium                      = 4,
	Zinc                           = 5,
	Copper                         = 6,
	Manganese                      = 7,
	Selenium                       = 8,
	Count                          = 9,
	EMineral_MAX                   = 10
};


// Enum ConZ.EVitamin
enum class EVitamin : uint8_t
{
	A                              = 0,
	B1                             = 1,
	B2                             = 2,
	B3                             = 3,
	B4                             = 4,
	B5                             = 5,
	B6                             = 6,
	B9                             = 7,
	B12                            = 8,
	C                              = 9,
	D                              = 10,
	E                              = 11,
	K                              = 12,
	Count                          = 13,
	EVitamin_MAX                   = 14
};


// Enum ConZ.EPrisonerTempCategory
enum class EPrisonerTempCategory : uint8_t
{
	Idle                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EPrisonerTempCategory_MAX      = 4
};


// Enum ConZ.ETestMinMax
enum class ETestMinMax : uint8_t
{
	Normal                         = 0,
	Min                            = 1,
	Max                            = 2
};


// Enum ConZ.EOptionalState
enum class EOptionalState : uint8_t
{
	None                           = 0,
	Add                            = 1,
	Remove                         = 2,
	EOptionalState_MAX             = 3
};


// Enum ConZ.ERecipeAvailabilityState
enum class ERecipeAvailabilityState : uint8_t
{
	None                           = 0,
	SkillLow                       = 1,
	NoIngredients                  = 2,
	SomeIngredients                = 3,
	AllIngredients                 = 4,
	ERecipeAvailabilityState_MAX   = 5
};


// Enum ConZ.EInventoryNodeWidgetType
enum class EInventoryNodeWidgetType : uint8_t
{
	None                           = 0,
	Inventory                      = 1,
	InventoryContainer             = 2,
	HandsAndHolsters               = 3,
	QuickAccess                    = 4,
	ClothesSideLayer               = 5,
	ToolTip                        = 6,
	Vicinity                       = 7,
	VicinityContainer              = 8,
	EInventoryNodeWidgetType_MAX   = 9
};


// Enum ConZ.EWeaponFiringMode
enum class EWeaponFiringMode : uint8_t
{
	Automatic                      = 0,
	SingleShot                     = 1,
	EWeaponFiringMode_MAX          = 2
};


// Enum ConZ.EWeaponActionNotifyType
enum class EWeaponActionNotifyType : uint8_t
{
	None                           = 0,
	ChamberOpened                  = 1,
	ChamberClosed                  = 2,
	ChamberOpenedClosed            = 3,
	BowInsertArrow                 = 4,
	BowRemoveArrow                 = 5,
	CompoundBowTuneDrawWeight      = 6,
	StaminaDrained                 = 7,
	DropMagazine                   = 8,
	EWeaponActionNotifyType_MAX    = 9
};


// Enum ConZ.EWeaponFiringStateType
enum class EWeaponFiringStateType : uint8_t
{
	Automatic                      = 0,
	SemiAutomatic                  = 1,
	Manual                         = 2,
	EWeaponFiringStateType_MAX     = 3
};


// Enum ConZ.EAnimalStance
enum class EAnimalStance : uint8_t
{
	Breathing                      = 0,
	Idle                           = 1,
	Agressive                      = 2,
	Alerted                        = 3,
	EAnimalStance_MAX              = 4
};


// Enum ConZ.EAnimalActivityCycle
enum class EAnimalActivityCycle : uint8_t
{
	Diurnal                        = 0,
	Nocturnal                      = 1,
	Both                           = 2,
	EAnimalActivityCycle_MAX       = 3
};


// Enum ConZ.EAnimal2Sound
enum class EAnimal2Sound : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	Angry                          = 2,
	Attack                         = 3,
	Kill                           = 4,
	Scared                         = 5,
	Alerted                        = 6,
	EAnimal2Sound_MAX              = 7
};


// Enum ConZ.EAnimalSound
enum class EAnimalSound : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	Angry                          = 2,
	Attack                         = 3,
	Kill                           = 4,
	EAnimalSound_MAX               = 5
};


// Enum ConZ.EAnimalLearnLevel
enum class EAnimalLearnLevel : uint8_t
{
	Basic                          = 0,
	Medium                         = 1,
	Advanced                       = 2,
	EAnimalLearnLevel_MAX          = 3
};


// Enum ConZ.EAnimalCommand
enum class EAnimalCommand : uint8_t
{
	None                           = 0,
	Follow                         = 1,
	Unfollow                       = 2,
	StayStill                      = 3,
	MoveFreely                     = 4,
	FetchItem                      = 5,
	Attack                         = 6,
	Defend                         = 7,
	Guard                          = 8,
	Seek                           = 9,
	EAnimalCommand_MAX             = 10
};


// Enum ConZ.EAnimalHandlingStage
enum class EAnimalHandlingStage : uint8_t
{
	NotPacified                    = 0,
	Pacified                       = 1,
	Tamed                          = 2,
	LearnedBasic                   = 3,
	LearnedMedium                  = 4,
	LearnedAdvanced                = 5,
	EAnimalHandlingStage_MAX       = 6
};


// Enum ConZ.EAnimalHandlingLevel
enum class EAnimalHandlingLevel : uint8_t
{
	SmallDomestic                  = 0,
	BigDomestic                    = 1,
	Wild                           = 2,
	Unhandleable                   = 3,
	EAnimalHandlingLevel_MAX       = 4
};


// Enum ConZ.EAnimalPace
enum class EAnimalPace : uint8_t
{
	Idle                           = 0,
	Walking                        = 1,
	Running                        = 2,
	EAnimalPace_MAX                = 3
};


// Enum ConZ.EBlueprintItemActionType
enum class EBlueprintItemActionType : uint8_t
{
	BlueprintPlaced                = 0,
	BlueprintFilled                = 1,
	BlueprintCompleted             = 2,
	EBlueprintItemActionType_MAX   = 3
};


// Enum ConZ.EBoundBodyPart
enum class EBoundBodyPart : uint8_t
{
	Hands                          = 0,
	Feet                           = 1,
	EBoundBodyPart_MAX             = 2
};


// Enum ConZ.EBrokenLimbsTreatment
enum class EBrokenLimbsTreatment : uint8_t
{
	Immobilize                     = 0,
	MendBones                      = 1,
	EBrokenLimbsTreatment_MAX      = 2
};


// Enum ConZ.EBruiseZone
enum class EBruiseZone : uint8_t
{
	Left                           = 0,
	Middle                         = 1,
	Right                          = 2,
	Count                          = 3,
	EBruiseZone_MAX                = 4
};


// Enum ConZ.EBruiseLayer
enum class EBruiseLayer : uint8_t
{
	Light                          = 0,
	Medium                         = 1,
	Hard                           = 2,
	Count                          = 3,
	EBruiseLayer_MAX               = 4
};


// Enum ConZ.ECardinalDirection
enum class ECardinalDirection : uint8_t
{
	None                           = 0,
	North                          = 1,
	East                           = 2,
	South                          = 3,
	West                           = 4,
	ECardinalDirection_MAX         = 5
};


// Enum ConZ.ECharacterActionNotifyType
enum class ECharacterActionNotifyType : uint8_t
{
	None                           = 0,
	AddMagazine                    = 1,
	RemoveMagazine                 = 2,
	InsertCartridge                = 3,
	SwapWeapons                    = 4,
	Chop                           = 5,
	CommitSuicide                  = 6,
	IgniteFlare                    = 7,
	BuryBreach                     = 8,
	BuryDump                       = 9,
	ECharacterActionNotifyType_MAX = 10
};


// Enum ConZ.ECharacterActionState
enum class ECharacterActionState : uint8_t
{
	None                           = 0,
	WaitingBeginOnServer           = 1,
	Executing                      = 2,
	Ended                          = 3,
	ECharacterActionState_MAX      = 4
};


// Enum ConZ.ECharacterActionFlags
enum class ECharacterActionFlags : uint8_t
{
	ClientWaitBeginOnServer        = 0,
	AllWaitEndOnOwningClient       = 1,
	CanBeAborted                   = 2,
	ECharacterActionFlags_MAX      = 3
};


// Enum ConZ.ECharacterActionConstraint
enum class ECharacterActionConstraint : uint8_t
{
	Move                           = 0,
	Turn                           = 1,
	Stance                         = 2,
	ProneInOut                     = 3,
	Lean                           = 4,
	ECharacterActionConstraint_MAX = 5
};


// Enum ConZ.ECharacterLegsImpactSoundCategory
enum class ECharacterLegsImpactSoundCategory : uint8_t
{
	Any                            = 0,
	Bare                           = 1,
	Blocked                        = 2,
	LightlyClothed                 = 3,
	ECharacterLegsImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterArmsImpactSoundCategory
enum class ECharacterArmsImpactSoundCategory : uint8_t
{
	Any                            = 0,
	Bare                           = 1,
	Blocked                        = 2,
	LightlyClothed                 = 3,
	ECharacterArmsImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterTorsoImpactSoundCategory
enum class ECharacterTorsoImpactSoundCategory : uint8_t
{
	Any                            = 0,
	Bare                           = 1,
	Blocked                        = 2,
	LightlyClothed                 = 3,
	ECharacterTorsoImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterHeadImpactSoundCategory
enum class ECharacterHeadImpactSoundCategory : uint8_t
{
	Any                            = 0,
	Bare                           = 1,
	Blocked                        = 2,
	Helmet                         = 3,
	ECharacterHeadImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterPainSoundSeverity
enum class ECharacterPainSoundSeverity : uint8_t
{
	Light                          = 0,
	Medium                         = 1,
	Heavy                          = 2,
	Stun                           = 3,
	Knockout                       = 4,
	Death                          = 5,
	ECharacterPainSoundSeverity_MAX = 6
};


// Enum ConZ.ECharacterSpawnerRange
enum class ECharacterSpawnerRange : uint8_t
{
	Long                           = 0,
	Short                          = 1,
	ECharacterSpawnerRange_MAX     = 2
};


// Enum ConZ.ESpawnType
enum class ESpawnType : uint8_t
{
	POI                            = 0,
	Exterior                       = 1,
	Interior                       = 2,
	ESpawnType_MAX                 = 3
};


// Enum ConZ.ECharacterStatsOrderByField
enum class ECharacterStatsOrderByField : uint8_t
{
	FamePoints                     = 0,
	EventScore                     = 1,
	EventKills                     = 2,
	EventDeaths                    = 3,
	ECharacterStatsOrderByField_MAX = 4
};


// Enum ConZ.EInteractionTargetType
enum class EInteractionTargetType : uint8_t
{
	Self                           = 0,
	HoveredInteractable            = 1,
	Specified                      = 2,
	EInteractionTargetType_MAX     = 3
};


// Enum ConZ.ECompassType
enum class ECompassType : uint8_t
{
	None                           = 0,
	NorthOnly                      = 1,
	CardinalOnly                   = 2,
	CardinalAndIntercardinal       = 3,
	Everything                     = 4,
	Count                          = 5,
	ECompassType_MAX               = 6
};


// Enum ConZ.EAnimalMovementPace
enum class EAnimalMovementPace : uint8_t
{
	Sneak                          = 0,
	Walk                           = 1,
	Trot                           = 2,
	Run                            = 3,
	EAnimalMovementPace_MAX        = 4
};


// Enum ConZ.EAnimalAgressivness
enum class EAnimalAgressivness : uint8_t
{
	Timid                          = 0,
	Moderate                       = 1,
	Agressive                      = 2,
	EAnimalAgressivness_MAX        = 3
};


// Enum ConZ.EAnimalMode
enum class EAnimalMode : uint8_t
{
	None                           = 0,
	Roam                           = 1,
	Alert                          = 2,
	Observe                        = 3,
	TrotAway                       = 4,
	Aggro                          = 5,
	Flee                           = 6,
	EAnimalMode_MAX                = 7
};


// Enum ConZ.EConZBaseEventType
enum class EConZBaseEventType : uint8_t
{
	None                           = 0,
	ElementConstructed             = 1,
	ElementRepaired                = 2,
	EConZBaseEventType_MAX         = 3
};


// Enum ConZ.FConZBaseFlagType
enum class EFConZBaseFlagType : uint8_t
{
	None                           = 0,
	Friendly                       = 1,
	Enemy                          = 2,
	FConZBaseFlagType_MAX          = 3
};


// Enum ConZ.ESnappingPosition
enum class ESnappingPosition : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Front                          = 3,
	Back                           = 4,
	Top                            = 5,
	Bottom                         = 6,
	Door                           = 7,
	Platform                       = 8,
	ESnappingPosition_MAX          = 9
};


// Enum ConZ.EBaseElementType
enum class EBaseElementType : uint8_t
{
	None                           = 0,
	WoodenPalisade                 = 1,
	SandBox                        = 2,
	Door                           = 3,
	Well                           = 4,
	Platform                       = 5,
	Watchtower                     = 6,
	WatchtowerTop                  = 7,
	Foundation                     = 8,
	Flag                           = 9,
	WallOrnament                   = 10,
	CeilingOrnament                = 11,
	Cabin                          = 12,
	Stairs                         = 13,
	EBaseElementType_MAX           = 14
};


// Enum ConZ.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	NotRouted                      = 0,
	RelevantAllConnections         = 1,
	Spatialize_Static              = 2,
	Spatialize_Dynamic             = 3,
	Spatialize_Dormancy            = 4,
	EClassRepNodeMapping_MAX       = 5
};


// Enum ConZ.ECraftingItemCategory
enum class ECraftingItemCategory : uint8_t
{
	None                           = 0,
	ToolsAndWeapons                = 1,
	Items                          = 2,
	Food                           = 3,
	BaseBuilding                   = 4,
	ECraftingItemCategory_MAX      = 5
};


// Enum ConZ.ECraftingType
enum class ECraftingType : uint8_t
{
	Use                            = 0,
	Assemble                       = 1,
	Destroy                        = 2,
	Attach                         = 3,
	ECraftingType_MAX              = 4
};


// Enum ConZ.EDataTransferType
enum class EDataTransferType : uint8_t
{
	Buildings                      = 0,
	BaseBuilding                   = 1,
	LadderMarkers                  = 2,
	Count                          = 3,
	EDataTransferType_MAX          = 4
};


// Enum ConZ.EDbConnectionOpenMode
enum class EDbConnectionOpenMode : uint8_t
{
	None                           = 0,
	ReadOnly                       = 1,
	ReadWrite                      = 2,
	EDbConnectionOpenMode_MAX      = 3
};


// Enum ConZ.EDialogAnimationState
enum class EDialogAnimationState : uint8_t
{
	None                           = 0,
	Show                           = 1,
	Hide                           = 2,
	EDialogAnimationState_MAX      = 3
};


// Enum ConZ.EDoorType
enum class EDoorType : uint8_t
{
	Regular                        = 0,
	BaseDoor                       = 1,
	EDoorType_MAX                  = 2
};


// Enum ConZ.EDroneSound
enum class EDroneSound : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	Attack                         = 2,
	Kill                           = 3,
	EDroneSound_MAX                = 4
};


// Enum ConZ.EDroneState
enum class EDroneState : uint8_t
{
	Initial                        = 0,
	Patrolling                     = 1,
	Following                      = 2,
	Fleeing                        = 3,
	EDroneState_MAX                = 4
};


// Enum ConZ.EDropZoneGameEventPhase
enum class EDropZoneGameEventPhase : uint8_t
{
	Warmup                         = 0,
	Search                         = 1,
	Drop                           = 2,
	Capture                        = 3,
	EDropZoneGameEventPhase_MAX    = 4
};


// Enum ConZ.EFlareIgniteState
enum class EFlareIgniteState : uint8_t
{
	None                           = 0,
	Start                          = 1,
	Burning                        = 2,
	Extinguish                     = 3,
	Finished                       = 4,
	EFlareIgniteState_MAX          = 5
};


// Enum ConZ.EDigestionGroup
enum class EDigestionGroup : uint8_t
{
	Water                          = 0,
	Juices                         = 1,
	SemiLiquid                     = 2,
	Fruits1                        = 3,
	Fruits3                        = 4,
	Fruits4                        = 5,
	Fruits5                        = 6,
	Vegetables1                    = 7,
	Vegetables2                    = 8,
	Vegetables3                    = 9,
	Vegetables4                    = 10,
	SemiConcentratedCarbs          = 11,
	ConcentratedCarbs1             = 12,
	ConcentratedCarbs2             = 13,
	ConcentratedCarbs3             = 14,
	SeedsNuts1                     = 15,
	SeedsNuts2                     = 16,
	Dairy1                         = 17,
	Dairy2                         = 18,
	Dairy3                         = 19,
	Animal1                        = 20,
	Animal2                        = 21,
	Animal3                        = 22,
	Animal4                        = 23,
	Animal5                        = 24,
	Animal6                        = 25,
	Fish1                          = 26,
	Fish2                          = 27,
	Vitamins                       = 28,
	CookedMeals                    = 29,
	OilFat                         = 30,
	EDigestionGroup_MAX            = 31
};


// Enum ConZ.EGameEventPlayerRoundResult
enum class EGameEventPlayerRoundResult : uint8_t
{
	None                           = 0,
	Win                            = 1,
	Lose                           = 2,
	Draw                           = 3,
	EGameEventPlayerRoundResult_MAX = 4
};


// Enum ConZ.EGameEventNotificationType
enum class EGameEventNotificationType : uint8_t
{
	EventStarted                   = 0,
	EventCanceled                  = 1,
	EventEnded                     = 2,
	NotEnoughParticipants          = 3,
	ParticipantJoined              = 4,
	ParticipantLeft                = 5,
	EGameEventNotificationType_MAX = 6
};


// Enum ConZ.EGameEventParticipantState
enum class EGameEventParticipantState : uint8_t
{
	Registered                     = 0,
	Spawning                       = 1,
	Alive                          = 2,
	Dead                           = 3,
	Left                           = 4,
	EGameEventParticipantState_MAX = 5
};


// Enum ConZ.EGameEventState
enum class EGameEventState : uint8_t
{
	Announced                      = 0,
	RoundStarted                   = 1,
	RoundEnded                     = 2,
	Ended                          = 3,
	EGameEventState_MAX            = 4
};


// Enum ConZ.EGameEventBorderState
enum class EGameEventBorderState : uint8_t
{
	Off                            = 0,
	On                             = 1,
	Bright                         = 2,
	EGameEventBorderState_MAX      = 3
};


// Enum ConZ.EGameEventTransportState
enum class EGameEventTransportState : uint8_t
{
	StandBy                        = 0,
	Travelling                     = 1,
	Leaving                        = 2,
	Landing                        = 3,
	LiftOff                        = 4,
	EGameEventTransportState_MAX   = 5
};


// Enum ConZ.ERagdollTransitionState
enum class ERagdollTransitionState : uint8_t
{
	None                           = 0,
	GoTo                           = 1,
	RecoverFrom                    = 2,
	RecoverFromImmediately         = 3,
	ERagdollTransitionState_MAX    = 4
};


// Enum ConZ.EHitReactState
enum class EHitReactState : uint8_t
{
	None                           = 0,
	Hit                            = 1,
	Stun                           = 2,
	Knockout                       = 3,
	GettingUp                      = 4,
	Ragdoll                        = 5,
	EHitReactState_MAX             = 6
};


// Enum ConZ.EGoToRagdollCaller
enum class EGoToRagdollCaller : uint8_t
{
	Default                        = 0,
	Montage                        = 1,
	EGoToRagdollCaller_MAX         = 2
};


// Enum ConZ.EWarningType
enum class EWarningType : uint8_t
{
	Danger                         = 0,
	Explosion                      = 1,
	LifeThreat                     = 2,
	Watching                       = 3,
	Traps                          = 4,
	EWarningType_MAX               = 5
};


// Enum ConZ.EHumanRace
enum class EHumanRace : uint8_t
{
	Caucasian                      = 0,
	Mongoloid                      = 1,
	Negroid                        = 2,
	EHumanRace_MAX                 = 3
};


// Enum ConZ.EImpactSeverity
enum class EImpactSeverity : uint8_t
{
	Light                          = 0,
	Medium                         = 1,
	Heavy                          = 2,
	Count                          = 3,
	EImpactSeverity_MAX            = 4
};


// Enum ConZ.EInteractionState
enum class EInteractionState : uint8_t
{
	Busy                           = 0,
	NoInteractionDefined           = 1,
	CanInteract                    = 2,
	UnableToInteract               = 3,
	EInteractionState_MAX          = 4
};


// Enum ConZ.EHandsHolstersType
enum class EHandsHolstersType : uint8_t
{
	Hands                          = 0,
	HolsterLeft                    = 1,
	HolsterRight                   = 2,
	EHandsHolstersType_MAX         = 3
};


// Enum ConZ.EInventoryNodeWidgetDataType
enum class EInventoryNodeWidgetDataType : uint8_t
{
	Number                         = 0,
	Text                           = 1,
	Icon                           = 2,
	Visibility                     = 3,
	EInventoryNodeWidgetDataType_MAX = 4
};


// Enum ConZ.ETooltipPanelType
enum class ETooltipPanelType : uint8_t
{
	Overview                       = 0,
	Additional                     = 1,
	ETooltipPanelType_MAX          = 2
};


// Enum ConZ.EMedicalDiagnosisType
enum class EMedicalDiagnosisType : uint8_t
{
	CheckPulse                     = 0,
	FullDiagnosis                  = 1,
	EMedicalDiagnosisType_MAX      = 2
};


// Enum ConZ.EDiagnosisLevel
enum class EDiagnosisLevel : uint8_t
{
	TempOnly                       = 0,
	Physical                       = 1,
	PhysicalSeverity               = 2,
	Everything                     = 3,
	EDiagnosisLevel_MAX            = 4
};


// Enum ConZ.EMedicationType
enum class EMedicationType : uint8_t
{
	Painkillers                    = 0,
	Sedatives                      = 1,
	Antibiotics                    = 2,
	Antiparasitics                 = 3,
	Stimulants                     = 4,
	EMedicationType_MAX            = 5
};


// Enum ConZ.EMedicationUsage
enum class EMedicationUsage : uint8_t
{
	Pills                          = 0,
	Injections                     = 1,
	Infusions                      = 2,
	EMedicationUsage_MAX           = 3
};


// Enum ConZ.EMeleeActionType
enum class EMeleeActionType : uint8_t
{
	None                           = 0,
	Attack                         = 1,
	PrepareForBlockOrDodge         = 2,
	Block                          = 3,
	Dodge                          = 4,
	EMeleeActionType_MAX           = 5
};


// Enum ConZ.EMeleeState
enum class EMeleeState : uint8_t
{
	Idle                           = 0,
	Attacking                      = 1,
	PreparedForBlockOrDodge        = 2,
	Block                          = 3,
	Dodge                          = 4,
	HitReact                       = 5,
	EMeleeState_MAX                = 6
};


// Enum ConZ.EHitDirectionType
enum class EHitDirectionType : uint8_t
{
	Front                          = 0,
	Left                           = 1,
	Back                           = 2,
	Right                          = 3,
	EHitDirectionType_MAX          = 4
};


// Enum ConZ.EAttackCollisionType
enum class EAttackCollisionType : uint8_t
{
	None                           = 0,
	WeaponLeftHand                 = 1,
	WeaponRightHand                = 2,
	Head                           = 3,
	LeftHand                       = 4,
	RightHand                      = 5,
	LeftLeg                        = 6,
	RightLeg                       = 7,
	EAttackCollisionType_MAX       = 8
};


// Enum ConZ.EObjectiveAnimationState
enum class EObjectiveAnimationState : uint8_t
{
	None                           = 0,
	Start                          = 1,
	Complete                       = 2,
	EObjectiveAnimationState_MAX   = 3
};


// Enum ConZ.EMissionManagerState
enum class EMissionManagerState : uint8_t
{
	None                           = 0,
	MainStorySuccess               = 1,
	SideStorySuccess               = 2,
	TutorialSuccess                = 3,
	MainStoryFailed                = 4,
	SideStoryFailed                = 5,
	TutorialFailed                 = 6,
	EMissionManagerState_MAX       = 7
};


// Enum ConZ.EDialogType
enum class EDialogType : uint8_t
{
	Subtitle                       = 0,
	Action                         = 1,
	Wait                           = 2,
	EDialogType_MAX                = 3
};


// Enum ConZ.EDialogEvent
enum class EDialogEvent : uint8_t
{
	Intro                          = 0,
	OpenInteface                   = 1,
	OpenCraftingInterface          = 2,
	ChooseKnife                    = 3,
	OpenCraftingInterface_Bag      = 4,
	EDialogEvent_MAX               = 5
};


// Enum ConZ.EFaction
enum class EFaction : uint8_t
{
	None                           = 0,
	Rebel                          = 1,
	TEC                            = 2,
	EFaction_MAX                   = 3
};


// Enum ConZ.EObjectiveState
enum class EObjectiveState : uint8_t
{
	None                           = 0,
	Initialized                    = 1,
	Started                        = 2,
	Completed                      = 3,
	Failed                         = 4,
	Belated                        = 5,
	EObjectiveState_MAX            = 6
};


// Enum ConZ.EMissionType
enum class EMissionType : uint8_t
{
	None                           = 0,
	MainStory                      = 1,
	SideStory                      = 2,
	Tutorial                       = 3,
	EMissionType_MAX               = 4
};


// Enum ConZ.EMissionState
enum class EMissionState : uint8_t
{
	Available                      = 0,
	Unavailable                    = 1,
	Started                        = 2,
	Completed                      = 3,
	Failed                         = 4,
	Belated                        = 5,
	EMissionState_MAX              = 6
};


// Enum ConZ.EMouseSensitivityMode
enum class EMouseSensitivityMode : uint8_t
{
	None                           = 0,
	ThirdPerson                    = 1,
	FirstPerson                    = 2,
	DownTheSight                   = 3,
	Scope                          = 4,
	Drone                          = 5,
	EMouseSensitivityMode_MAX      = 6
};


// Enum ConZ.EAnesthesiaType
enum class EAnesthesiaType : uint8_t
{
	Local                          = 0,
	General                        = 1,
	EAnesthesiaType_MAX            = 2
};


// Enum ConZ.EPickupItemOperation
enum class EPickupItemOperation : uint8_t
{
	PickupOnly                     = 0,
	PickupAndEat                   = 1,
	PickupAndEatAll                = 2,
	EPickupItemOperation_MAX       = 3
};


// Enum ConZ.EPlacementAllowedStatus
enum class EPlacementAllowedStatus : uint8_t
{
	None                           = 0,
	Allowed                        = 1,
	NotAllowedLineTraceFailed      = 2,
	NotAllowedNormalTestFailed     = 3,
	NotAllowedInteractionDistance  = 4,
	NotAllowedWater                = 5,
	NotAllowedAngle                = 6,
	NotAllowedMeshOverlap          = 7,
	NotAllowedTopOverlap           = 8,
	NotAllowedBottomOverlap        = 9,
	NotAllowedExtendedOverlap      = 10,
	NotAllowedTeleportSpot         = 11,
	NotAllowedHitCharacter         = 12,
	NotAllowedHitItem              = 13,
	NotAllowedHitVehicle           = 14,
	NotAllowedNotSnapping          = 15,
	NotAllowedCantPlaceAtLocation  = 16,
	NotAllowedEnemyFlag            = 17,
	NotAllowedTwoPointsConstaints  = 18,
	NotAllowedPlacedDistance       = 19,
	NotAllowedUnknown              = 20,
	EPlacementAllowedStatus_MAX    = 21
};


// Enum ConZ.EPlacementState
enum class EPlacementState : uint8_t
{
	Placing                        = 0,
	PlacingSecondPoint             = 1,
	AdjustingHeight                = 2,
	PlacedPending                  = 3,
	Placed                         = 4,
	EPlacementState_MAX            = 5
};


// Enum ConZ.EPlaceableIngredientType
enum class EPlaceableIngredientType : uint8_t
{
	Mandatory                      = 0,
	Tool                           = 1,
	EPlaceableIngredientType_MAX   = 2
};


// Enum ConZ.EIngredientUsageRule
enum class EIngredientUsageRule : uint8_t
{
	Quantity                       = 0,
	Usage                          = 1,
	Weight                         = 2,
	EIngredientUsageRule_MAX       = 3
};


// Enum ConZ.EPlacementAlgorithm
enum class EPlacementAlgorithm : uint8_t
{
	Classic                        = 0,
	New                            = 1,
	EPlacementAlgorithm_MAX        = 2
};


// Enum ConZ.EPlayableInstrumentView
enum class EPlayableInstrumentView : uint8_t
{
	FirstPerson                    = 0,
	ThirdPerson                    = 1,
	EPlayableInstrumentView_MAX    = 2
};


// Enum ConZ.EPlayableInstrumentChord
enum class EPlayableInstrumentChord : uint8_t
{
	Count                          = 0,
	EPlayableInstrumentChord_MAX   = 1
};


// Enum ConZ.EInstrumentEventType
enum class EInstrumentEventType : uint8_t
{
	PlayTone                       = 0,
	StopTone                       = 1,
	EInstrumentEventType_MAX       = 2
};


// Enum ConZ.EStanceChangeFlag
enum class EStanceChangeFlag : uint8_t
{
	Exact                          = 0,
	Min                            = 1,
	Max                            = 2
};


// Enum ConZ.ESwapItemsType
enum class ESwapItemsType : uint8_t
{
	None                           = 0,
	NotWeaponToNotWeapon           = 1,
	WeaponToWeapon                 = 2,
	NotWeaponToWeapon              = 3,
	WeaponToNotWeapon              = 4,
	ESwapItemsType_MAX             = 5
};


// Enum ConZ.EPrisonerAnimationCurve
enum class EPrisonerAnimationCurve : uint8_t
{
	LegsPose                       = 0,
	CanStartGoToLoop               = 1,
	CanStartGoToStopLU             = 2,
	CanStartGoToStopRU             = 3,
	DistanceToPivot                = 4,
	CanLandGoToLoop                = 5,
	CanFireWeapon                  = 6,
	LeftHandIK                     = 7,
	MoveInputScale                 = 8,
	MoveInputModifierScale         = 9,
	MoveInputModifierCourseAngle   = 10,
	IgnoreMoveInput                = 11,
	IgnoreTurnInput                = 12,
	IsStanceTransitionActive       = 13,
	MeshOffsetWhenInWater          = 14,
	ViewRoll                       = 15,
	ViewPitch                      = 16,
	ViewYaw                        = 17,
	Count                          = 18,
	EPrisonerAnimationCurve_MAX    = 19
};


// Enum ConZ.EPrisonerAnimationState
enum class EPrisonerAnimationState : uint8_t
{
	Unknown                        = 0,
	Entry                          = 1,
	StandIdle                      = 2,
	StandIdleToCrouchIdle          = 3,
	StandIdleToProneIdle           = 4,
	StandWalkStart                 = 5,
	StandWalkLoop                  = 6,
	StandWalkStop                  = 7,
	StandJogStart                  = 8,
	StandJogLoop                   = 9,
	StandJogStop                   = 10,
	StandRunStart                  = 11,
	StandRunLoop                   = 12,
	StandRunStop                   = 13,
	CrouchIdle                     = 14,
	CrouchIdleToStandIdle          = 15,
	CrouchIdleToProneIdle          = 16,
	CrouchWalkStart                = 17,
	CrouchWalkLoop                 = 18,
	CrouchWalkStop                 = 19,
	ProneIdle                      = 20,
	ProneIdleToStandIdle           = 21,
	ProneIdleToCrouchIdle          = 22,
	ProneWalkLoop                  = 23,
	Count                          = 24,
	EPrisonerAnimationState_MAX    = 25
};


// Enum ConZ.EPrisonerConsciousness
enum class EPrisonerConsciousness : uint8_t
{
	Conscious                      = 0,
	Unconscious                    = 1,
	Coma                           = 2,
	Death                          = 3,
	EPrisonerConsciousness_MAX     = 4
};


// Enum ConZ.EBuryState
enum class EBuryState : uint8_t
{
	None                           = 0,
	Bury                           = 1,
	ResumeBury                     = 2,
	Rest                           = 3,
	Finish                         = 4,
	EBuryState_MAX                 = 5
};


// Enum ConZ.EPrisonerFacialExpression
enum class EPrisonerFacialExpression : uint8_t
{
	None                           = 0,
	Angry1                         = 1,
	Angry2                         = 2,
	Hit                            = 3,
	Punching                       = 4,
	Fear1                          = 5,
	Fear2                          = 6,
	Fear3                          = 7,
	WhatTheHell1                   = 8,
	WhatTheHell2                   = 9,
	Whistling1                     = 10,
	Whistling2                     = 11,
	Ouch1                          = 12,
	Ouch2                          = 13,
	Count                          = 14,
	EPrisonerFacialExpression_MAX  = 15
};


// Enum ConZ.EPrisonerFirstPersonSubview
enum class EPrisonerFirstPersonSubview : uint8_t
{
	Standing                       = 0,
	Crouching                      = 1,
	Prone                          = 2,
	StandingMelee                  = 3,
	StandingAiming                 = 4,
	CrouchingAiming                = 5,
	ProneAiming                    = 6,
	StandingAimingDownTheSights    = 7,
	CrouchingAimingDownTheSights   = 8,
	ProneAimingDownTheSights       = 9,
	ClimbingWindow                 = 10,
	Mounted                        = 11,
	Lying                          = 12,
	Count                          = 13,
	EPrisonerFirstPersonSubview_MAX = 14
};


// Enum ConZ.EPrisonerHUDMode
enum class EPrisonerHUDMode : uint8_t
{
	Normal                         = 0,
	DebugMain                      = 1,
	DebugSkills                    = 2,
	DebugMovement                  = 3,
	DebugMeleeSkill                = 4,
	Target                         = 5,
	Map                            = 6,
	DroneNormal                    = 7,
	DroneMap                       = 8,
	EPrisonerHUDMode_MAX           = 9
};


// Enum ConZ.EPrisonerDivingState
enum class EPrisonerDivingState : uint8_t
{
	None                           = 0,
	WantsToDive                    = 1,
	Diving                         = 2,
	EPrisonerDivingState_MAX       = 3
};


// Enum ConZ.EPrisonerMovementMode
enum class EPrisonerMovementMode : uint8_t
{
	None                           = 0,
	Climbing_Anchoring             = 1,
	Climbing_PlayingMontage        = 2,
	ClimbingLadder                 = 3,
	ClimbingWindow_Anchoring       = 4,
	ClimbingWindow_PlayingMontage  = 5,
	EPrisonerMovementMode_MAX      = 6
};


// Enum ConZ.EPrisonerResponseIdle
enum class EPrisonerResponseIdle : uint8_t
{
	None                           = 0,
	Winded                         = 1,
	Exhausted                      = 2,
	Cold                           = 3,
	Dirty                          = 4,
	NeedsToUrinate                 = 5,
	NeedsToDefecate                = 6,
	Dizzy                          = 7,
	Drunk                          = 8,
	Num                            = 9,
	EPrisonerResponseIdle_MAX      = 10
};


// Enum ConZ.EPrisonerRestingMode
enum class EPrisonerRestingMode : uint8_t
{
	None                           = 0,
	Sitting                        = 1,
	Lying                          = 2,
	Count                          = 3,
	EPrisonerRestingMode_MAX       = 4
};


// Enum ConZ.EPrisonerVisibilityFlag
enum class EPrisonerVisibilityFlag : uint8_t
{
	None                           = 0,
	Default                        = 1,
	View                           = 2,
	Awareness                      = 3,
	All                            = 4,
	EPrisonerVisibilityFlag_MAX    = 5
};


// Enum ConZ.EPrisonerAimOffsetType
enum class EPrisonerAimOffsetType : uint8_t
{
	Standing                       = 0,
	Crouching                      = 1,
	Prone                          = 2,
	ProneMoving                    = 3,
	FirstPersonView                = 4,
	FirstPersonViewProne           = 5,
	AimingDownTheSights            = 6,
	Count                          = 7,
	EPrisonerAimOffsetType_MAX     = 8
};


// Enum ConZ.EPrisonerMontageBlendType
enum class EPrisonerMontageBlendType : uint8_t
{
	All                            = 0,
	LeftHand                       = 1,
	RightHand                      = 2,
	EPrisonerMontageBlendType_MAX  = 3
};


// Enum ConZ.EPrisonerMontage
enum class EPrisonerMontage : uint8_t
{
	None                           = 0,
	WeaponEquipRifle               = 1,
	WeaponUnequipRifle             = 2,
	WeaponEquipHandgun             = 3,
	WeaponUnequipHandgun           = 4,
	Urinate                        = 5,
	UrinateForced                  = 6,
	Defecate                       = 7,
	DefecateForced                 = 8,
	Vomit                          = 9,
	VomitForced                    = 10,
	SearchObject                   = 11,
	SearchPrisoner                 = 12,
	SearchZombie                   = 13,
	PatchWounds                    = 14,
	PatchWoundsEnd                 = 15,
	DrinkInteraction               = 16,
	Eat                            = 17,
	EatCan                         = 18,
	Drink                          = 19,
	Throw                          = 20,
	SwapWeapons                    = 21,
	ChopTree                       = 22,
	ChopTreeEnd                    = 23,
	ChopLog                        = 24,
	ChopLogEnd                     = 25,
	SwapItemsNotWeaponToNotWeapon  = 26,
	SwapItemsWeaponToWeapon        = 27,
	SwapItemsNotWeaponToWeapon     = 28,
	SwapItemsWeaponToNotWeapon     = 29,
	Craft                          = 30,
	Uncraft                        = 31,
	CheckTime                      = 32,
	CheckTimeWhileItemInHands      = 33,
	CheckTimeWhileWeaponInHands    = 34,
	GestureShowFinger              = 35,
	GestureStandSurrender          = 36,
	GestureWaveHi                  = 37,
	GestureYouAreDead              = 38,
	GestureFY                      = 39,
	GesturePoint                   = 40,
	GestureHeart                   = 41,
	GestureBallpalm                = 42,
	GestureFacepalm                = 43,
	GestureFingerGun               = 44,
	GestureLaughing                = 45,
	GestureSmellWave               = 46,
	GestureSquat                   = 47,
	GestureCharge                  = 48,
	GestureFreeze                  = 49,
	GestureGetDown                 = 50,
	GestureGetUp                   = 51,
	GestureHalt                    = 52,
	GestureHurryUp                 = 53,
	GesturePointMe                 = 54,
	GesturePointYou                = 55,
	GestureRally                   = 56,
	GestureThumbsUp                = 57,
	GestureThumbsDown              = 58,
	GestureUnderstandNot           = 59,
	GestureUnderstandYes           = 60,
	CommitSuicide                  = 61,
	CommitSuicideRare              = 62,
	CommitSuicideCaptured          = 63,
	LockpickRegular                = 64,
	Whistle                        = 65,
	TuneBow                        = 66,
	RepairVehicle                  = 67,
	WashCloth                      = 68,
	Bury                           = 69,
	BuryRest                       = 70,
	ResumeBury                     = 71,
	SitOnGroundStart               = 72,
	SitOnGroundEnd                 = 73,
	LayOnGroundStart               = 74,
	LayOnGroundEnd                 = 75,
	IgniteFlare                    = 76,
	ArmTrap                        = 77,
	Count                          = 78,
	EPrisonerMontage_MAX           = 79
};


// Enum ConZ.EWeaponAnimationPose
enum class EWeaponAnimationPose : uint8_t
{
	None                           = 0,
	Relaxed                        = 1,
	AimingHip                      = 2,
	AimingDownTheSights            = 3,
	AimingDownTheSightsStill       = 4,
	AimingDownTheSightsWalking     = 5,
	AimingDownTheSightsLimpingWalking = 6,
	Count                          = 7,
	EWeaponAnimationPose_MAX       = 8
};


// Enum ConZ.EPrisonerAnimationSet
enum class EPrisonerAnimationSet : uint8_t
{
	Base                           = 0,
	Rifle                          = 1,
	RifleRelaxed                   = 2,
	UnarmedCombat                  = 3,
	Handgun                        = 4,
	BowRelaxed                     = 5,
	Bow                            = 6,
	CarryingItem                   = 7,
	HandsBound                     = 8,
	BaseLimping                    = 9,
	RifleLimping                   = 10,
	RifleRelaxedLimping            = 11,
	UnarmedCombatLimping           = 12,
	HandgunLimping                 = 13,
	BowRelaxedLimping              = 14,
	BowLimping                     = 15,
	CarryingItemLimping            = 16,
	HandsBoundLimping              = 17,
	Count                          = 18,
	EPrisonerAnimationSet_MAX      = 19
};


// Enum ConZ.EPrisonerReplicatedComponent
enum class EPrisonerReplicatedComponent : uint8_t
{
	LifeComponent                  = 0,
	SkillComponent                 = 1,
	InventoryComponent             = 2,
	HitReactComponent              = 3,
	InteractionComponent           = 4,
	Count                          = 5,
	EPrisonerReplicatedComponent_MAX = 6
};


// Enum ConZ.EPrisonerThirdPersonSubview
enum class EPrisonerThirdPersonSubview : uint8_t
{
	Standing                       = 0,
	Crouching                      = 1,
	Prone                          = 2,
	StandingMelee                  = 3,
	StandingAiming                 = 4,
	CrouchingAiming                = 5,
	ProneAiming                    = 6,
	Ragdoll                        = 7,
	NarrowLadder                   = 8,
	Swimming                       = 9,
	Diving                         = 10,
	ClimbingWindow                 = 11,
	Defecating                     = 12,
	Count                          = 13,
	EPrisonerThirdPersonSubview_MAX = 14
};


// Enum ConZ.EPlayerSideView
enum class EPlayerSideView : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Count                          = 2,
	EPlayerSideView_MAX            = 3
};


// Enum ConZ.EPenetrationType
enum class EPenetrationType : uint8_t
{
	None                           = 0,
	Entry                          = 1,
	Exit                           = 2,
	Both                           = 3,
	EPenetrationType_MAX           = 4
};


// Enum ConZ.EBallisticDragModel
enum class EBallisticDragModel : uint8_t
{
	G1                             = 0,
	G2                             = 1,
	G5                             = 2,
	G6                             = 3,
	G7                             = 4,
	G8                             = 5,
	EBallisticDragModel_MAX        = 6
};


// Enum ConZ.EQuiverActiveMesh
enum class EQuiverActiveMesh : uint8_t
{
	Static                         = 0,
	Skeletal                       = 1,
	SkeletalAlternative            = 2,
	EQuiverActiveMesh_MAX          = 3
};


// Enum ConZ.ERepairType
enum class ERepairType : uint8_t
{
	None                           = 0,
	RepairHealth                   = 1,
	ERepairType_MAX                = 2
};


// Enum ConZ.EScopingView
enum class EScopingView : uint8_t
{
	FirstPerson                    = 0,
	ThirdPerson                    = 1,
	EScopingView_MAX               = 2
};


// Enum ConZ.EScopingStance
enum class EScopingStance : uint8_t
{
	Standing                       = 0,
	Crouching                      = 1,
	Prone                          = 2,
	EScopingStance_MAX             = 3
};


// Enum ConZ.ESentryMovementPace
enum class ESentryMovementPace : uint8_t
{
	Walking                        = 0,
	Running                        = 1,
	Count                          = 2,
	ESentryMovementPace_MAX        = 3
};


// Enum ConZ.ESentryState
enum class ESentryState : uint8_t
{
	Initial                        = 0,
	Offline                        = 1,
	Patrolling                     = 2,
	Guarding                       = 3,
	Following                      = 4,
	Threaten                       = 5,
	SearchAndDestroy               = 6,
	ESentryState_MAX               = 7
};


// Enum ConZ.ESentryThirdPersonSubview
enum class ESentryThirdPersonSubview : uint8_t
{
	Standing                       = 0,
	StandingAiming                 = 1,
	Count                          = 2,
	ESentryThirdPersonSubview_MAX  = 3
};


// Enum ConZ.ESortType
enum class ESortType : uint8_t
{
	None                           = 0,
	Host                           = 1,
	Password                       = 2,
	Mode                           = 3,
	Version                        = 4,
	Time                           = 5,
	Friends                        = 6,
	Players                        = 7,
	Ping                           = 8,
	ESortType_MAX                  = 9
};


// Enum ConZ.EServerBrowserTab
enum class EServerBrowserTab : uint8_t
{
	Internet                       = 0,
	Favorites                      = 1,
	LastPlayed                     = 2,
	EServerBrowserTab_MAX          = 3
};


// Enum ConZ.ESicknessState
enum class ESicknessState : uint8_t
{
	Sick                           = 0,
	Cured                          = 1,
	Treated                        = 2,
	Untreated                      = 3,
	Done                           = 4,
	ESicknessState_MAX             = 5
};


// Enum ConZ.ESimpleAnimalMode
enum class ESimpleAnimalMode : uint8_t
{
	Wander                         = 0,
	Flee                           = 1,
	ESimpleAnimalMode_MAX          = 2
};


// Enum ConZ.ESkillReplicationID
enum class ESkillReplicationID : uint8_t
{
	None                           = 0,
	EnduranceSkill                 = 1,
	ResistanceSkill                = 2,
	RunningSkill                   = 3,
	SwimmingSkill                  = 4,
	MedicalSkill                   = 5,
	AwarenessSkill                 = 6,
	StealthSkill                   = 7,
	AnimalHandlingSkill            = 8,
	CookingSkill                   = 9,
	SurvivalSkill                  = 10,
	BioChemSkill                   = 11,
	BoxingSkill                    = 12,
	MeleeWeaponsSkill              = 13,
	RiflesSkill                    = 14,
	HandgunSkill                   = 15,
	SnipingSkill                   = 16,
	CamouflageSkill                = 17,
	TacticsSkill                   = 18,
	ThrowingSkill                  = 19,
	ArcherySkill                   = 20,
	ThieverySkill                  = 21,
	DrivingSkill                   = 22,
	EngineeringSkill               = 23,
	DemolitionSkill                = 24,
	ESkillReplicationID_MAX        = 25
};


// Enum ConZ.ESurvivalStatsSubcategory
enum class ESurvivalStatsSubcategory : uint8_t
{
	General                        = 0,
	Food                           = 1,
	Hunting                        = 2,
	Travel                         = 3,
	Metabolism                     = 4,
	Crafting                       = 5,
	Combat                         = 6,
	Events                         = 7,
	ESurvivalStatsSubcategory_MAX  = 8
};


// Enum ConZ.ESurvivalStatsCategory
enum class ESurvivalStatsCategory : uint8_t
{
	Survival                       = 0,
	Weapons                        = 1,
	Combat                         = 2,
	ESurvivalStatsCategory_MAX     = 3
};


// Enum ConZ.EItemThrowingBehavior
enum class EItemThrowingBehavior : uint8_t
{
	None                           = 0,
	Default                        = 1,
	Piercing                       = 2,
	Fragile                        = 3,
	Sticky                         = 4,
	EItemThrowingBehavior_MAX      = 5
};


// Enum ConZ.EBleedingSeverity
enum class EBleedingSeverity : uint8_t
{
	NoBleeding                     = 0,
	VeryLight                      = 1,
	Light                          = 2,
	Moderate                       = 3,
	Heavy                          = 4,
	Severe                         = 5,
	EBleedingSeverity_MAX          = 6
};


// Enum ConZ.ETrapTriggerType
enum class ETrapTriggerType : uint8_t
{
	None                           = 0,
	ProximityTrigger               = 1,
	LaserTrigger                   = 2,
	TripwireTrigger                = 3,
	ETrapTriggerType_MAX           = 4
};


// Enum ConZ.EUnarmedCombatInput
enum class EUnarmedCombatInput : uint8_t
{
	WalkForward                    = 0,
	WalkBackward                   = 1,
	WalkRight                      = 2,
	WalkLeft                       = 3,
	Punch                          = 4,
	Kick                           = 5,
	BlockPressed                   = 6,
	BlockReleased                  = 7,
	PreviousTarget                 = 8,
	NextTarget                     = 9,
	ReleaseCursor                  = 10,
	EUnarmedCombatInput_MAX        = 11
};


// Enum ConZ.EUserProfileType
enum class EUserProfileType : uint8_t
{
	Singleplayer                   = 0,
	MultiplayerAuthority           = 1,
	MultiplayerCache               = 2,
	EUserProfileType_MAX           = 3
};


// Enum ConZ.EVehicleEngineState
enum class EVehicleEngineState : uint8_t
{
	Unavailable                    = 0,
	TurnedOff                      = 1,
	Starting                       = 2,
	ReadyDelay                     = 3,
	Ready                          = 4,
	FailedToStartDelay             = 5,
	FailedToStart                  = 6,
	StalledDelay                   = 7,
	Stalled                        = 8,
	EVehicleEngineState_MAX        = 9
};


// Enum ConZ.EVehicleSeatType
enum class EVehicleSeatType : uint8_t
{
	Driver                         = 0,
	Passenger                      = 1,
	EVehicleSeatType_MAX           = 2
};


// Enum ConZ.EWaypointTraverseType
enum class EWaypointTraverseType : uint8_t
{
	Clockwise                      = 0,
	CounterClockwise               = 1,
	Random                         = 2,
	EWaypointTraverseType_MAX      = 3
};


// Enum ConZ.EAnimalWaypointType
enum class EAnimalWaypointType : uint8_t
{
	PassThrough                    = 0,
	Wait                           = 1,
	Rest                           = 2,
	Eat                            = 3,
	All                            = 4,
	EAnimalWaypointType_MAX        = 5
};


// Enum ConZ.EWeaponAnimationCurve
enum class EWeaponAnimationCurve : uint8_t
{
	DrawAmount                     = 0,
	StrengthAmount                 = 1,
	Count                          = 2,
	EWeaponAnimationCurve_MAX      = 3
};


// Enum ConZ.EBowAimingTestType
enum class EBowAimingTestType : uint8_t
{
	DotOnly                        = 0,
	ViewOnly                       = 1,
	DotAndView                     = 2,
	EBowAimingTestType_MAX         = 3
};


// Enum ConZ.EBowDrawPercentage
enum class EBowDrawPercentage : uint8_t
{
	Draw50percent                  = 0,
	Draw75percent                  = 1,
	Draw100percent                 = 2,
	Count                          = 3,
	EBowDrawPercentage_MAX         = 4
};


// Enum ConZ.EWeaponBowState
enum class EWeaponBowState : uint8_t
{
	None                           = 0,
	InsertArrow                    = 1,
	RemoveArrow                    = 2,
	Draw                           = 3,
	CancelFiring                   = 4,
	FireDummy                      = 5,
	Fire                           = 6,
	FireAndInsertArrow             = 7,
	Active                         = 8,
	EWeaponBowState_MAX            = 9
};


// Enum ConZ.EWeaponKeyInput
enum class EWeaponKeyInput : uint8_t
{
	ToggleLight                    = 0,
	EWeaponKeyInput_MAX            = 1
};


// Enum ConZ.EReloadWeaponSequence
enum class EReloadWeaponSequence : uint8_t
{
	None                           = 0,
	InsertMagazine                 = 1,
	RemoveMagazineInstertMagazine  = 2,
	InstertCartridge               = 3,
	RemoveMagazineInstertCartridge = 4,
	EReloadWeaponSequence_MAX      = 5
};


// Enum ConZ.EWeaponAttachmentActionType
enum class EWeaponAttachmentActionType : uint8_t
{
	Add                            = 0,
	Remove                         = 1,
	Swap                           = 2,
	Count                          = 3,
	EWeaponAttachmentActionType_MAX = 4
};


// Enum ConZ.EWeaponType
enum class EWeaponType : uint8_t
{
	Rifle                          = 0,
	Handgun                        = 1,
	Bow                            = 2,
	Count                          = 3,
	EWeaponType_MAX                = 4
};


// Enum ConZ.EDayPeriod
enum class EDayPeriod : uint8_t
{
	Nighttime                      = 0,
	Dawn                           = 1,
	Daytime                        = 2,
	Dusk                           = 3,
	EDayPeriod_MAX                 = 4
};


// Enum ConZ.EWidgetType
enum class EWidgetType : uint8_t
{
	InteractionWidgetClass         = 0,
	InteractionContainerWidgetClass = 1,
	ItemWidgetClass                = 2,
	InventoryWidgetClass           = 3,
	InventorySlotWidgetClass       = 4,
	WarningWidgetClass             = 5,
	HudWidgetClass                 = 6,
	LoadingWidgetClass             = 7,
	LoadingIconWidgetClass         = 8,
	SpawnScreenWidgetClass         = 9,
	WaypointScreenWidgetClass      = 10,
	HoverPanelWidgetClass          = 11,
	ActionProgressWidgetClass      = 12,
	ItemSelectionWidgetClass       = 13,
	ExamineWidgetClass             = 14,
	HandsInventoryWidgetClass      = 15,
	GenericItemInventoryWidgetClass = 16,
	InventoryContainersWidgetClass = 17,
	CombinedInventoryWidgetClass   = 18,
	TeamInvitationWidgetClass      = 19,
	CraftingInfoWidgetClass        = 20,
	CraftingComponentWidgetClass   = 21,
	CraftingRecipeWidgetClass      = 22,
	EmptySlotWidgetClass           = 23,
	TeamInfoWidgetClass            = 24,
	TeammateNameWidgetClass        = 25,
	PreviousNextSwitchWidgetClass  = 26,
	VicinityItemContainerWidgetClass = 27,
	QuickAccessItemWidget          = 28,
	GameEventPanelWidgetClass      = 29,
	GameEventCardWidgetClass       = 30,
	GameEventScoreboardWidgetClass = 31,
	GameEventMiniScoreboardWidgetClass = 32,
	CircularMenuWidgetClass        = 33,
	CircularMenuSegmentWidgetClass = 34,
	LockpickingWidgetClass         = 35,
	DoorUpgradeWidgetClass         = 36,
	UpgradeWidgetClass             = 37,
	ObjectivesWidget               = 38,
	MissionPrompt                  = 39,
	MissionResult                  = 40,
	MissionItem                    = 41,
	ObjectiveItem                  = 42,
	MissionReward                  = 43,
	InventoryContainerWidget2Test  = 44,
	InventoryItemWidget2Test       = 45,
	ItemInventoryWidget2           = 46,
	InventoryPanelSideLayerWidget  = 47,
	ItemWidget2                    = 48,
	ItemWidget2VicinityContainer   = 49,
	ItemTooltipWidget              = 50,
	TooltipPanelFoodOverview       = 51,
	TooltipPanelFoodNutritionsSingle = 52,
	TooltipPanelFoodNutritionsFull = 53,
	TooltipPanelFoodGraphs         = 54,
	TooltipPanelWeaponAbsolute     = 55,
	TooltipPanelWeaponRelative     = 56,
	StatisticsListRow              = 57,
	RewardItemWidget               = 58,
	EWidgetType_MAX                = 59
};


// Enum ConZ.EWolfAttackState
enum class EWolfAttackState : uint8_t
{
	Peace                          = 0,
	Chasing                        = 1,
	Attacking                      = 2,
	EWolfAttackState_MAX           = 3
};


// Enum ConZ.ECraftingMarkerMode
enum class ECraftingMarkerMode : uint8_t
{
	Marker                         = 0,
	FullInfo                       = 1,
	ECraftingMarkerMode_MAX        = 2
};


// Enum ConZ.EZombieRagdollAutoRecoveryType
enum class EZombieRagdollAutoRecoveryType : uint8_t
{
	None                           = 0,
	WhenAtRest                     = 1,
	AfterTimeSpan                  = 2,
	WhenAtRestAfterTimeSpan        = 3,
	EZombieRagdollAutoRecoveryType_MAX = 4
};


// Enum ConZ.EZombieTurnMontage
enum class EZombieTurnMontage : uint8_t
{
	RelaxedIdle                    = 0,
	AlertedIdle                    = 1,
	CombatIdle                     = 2,
	RelaxedIdleToAlertedIdle       = 3,
	Count                          = 4,
	EZombieTurnMontage_MAX         = 5
};


// Enum ConZ.EZombieStance
enum class EZombieStance : uint8_t
{
	Relaxed                        = 0,
	Lying                          = 1,
	Alerted                        = 2,
	Combat                         = 3,
	EZombieStance_MAX              = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ConZ.AdminCommandArgumentDescription
// 0x0020
struct FAdminCommandArgumentDescription
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               ShowCompletionValuesInHelpText;                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      Completion;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AttachmentSocketDataItem
// 0x0018
struct FAttachmentSocketDataItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MountType;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MountedItem;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AttachmentSocket
// 0x0010
struct FAttachmentSocket
{
	TArray<struct FAttachmentSocketDataItem>           Items;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.AttachmentSocketOffset
// 0x0020
struct FAttachmentSocketOffset
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ConZ.ItemLocation
// 0x000E
struct FItemLocation
{
	bool                                               Coastal;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Continantal;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mountain;                                                 // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Urban;                                                    // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Rural;                                                    // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Industrial;                                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Police;                                                   // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryBasic;                                            // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryMedium;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryAdvanced;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryWW2;                                              // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Sport;                                                    // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Market;                                                   // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               GasStation;                                               // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PossibleItemSickness
// 0x0010
struct FPossibleItemSickness
{
	class UClass*                                      Sickness;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageProbability;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemMotionNoise
// 0x0008
struct FItemMotionNoise
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemInventoryHandlingSounds
// 0x0008
struct FItemInventoryHandlingSounds
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VisibilityReplication
// 0x0008
struct FVisibilityReplication
{
	bool                                               Value;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                RepHelper;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryStackData
// 0x0030
struct FInventoryStackData
{
	class UClass*                                      _stackClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              _approximateCount;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              _approximateMaxCount;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              _weight;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<unsigned char>                              _data;                                                    // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ItemLayout
// 0x0040
struct FItemLayout
{
	int                                                CellDivisions;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                OffsetX;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                OffsetY;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BoundsX;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BoundsY;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       Bitmask;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   IconOffset;                                               // 0x0030(0x0008) (IsPlainOldData)
	float                                              IconScale;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UpgradedTo4kUHD;                                          // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               RevertedFromTetris;                                       // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.WidgetDisplayInfo
// 0x000C
struct FWidgetDisplayInfo
{
	EWidgetDisplayInfoType                             DisplayType;                                              // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                First;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HitEffects
// 0x0038
struct FHitEffects
{
	float                                              SpeedThreshold;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParticlesScale;                                           // 0x0010(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.EnvironmentDescription
// 0x0002
struct FEnvironmentDescription
{
	EEnvironmentClass                                  EnvironmentClass;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderground;                                            // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MeleeWeaponDesc
// 0x0028
struct FMeleeWeaponDesc
{
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAbsorptionMultiplier;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sharpness;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KnockoutChance;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DamageMagnitudeChange;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECharacterImpactSourceSoundCategory                ImpactSoundCategory;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UProjectileImpactEffects*                    ImpactEffects;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                HitReact;                                                 // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.MeleeAttackCapsule
// 0x0070
struct FMeleeAttackCapsule
{
	TWeakObjectPtr<class AActor>                       AttachParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Attachment;                                               // 0x0008(0x0008)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (IsPlainOldData)
	float                                              UnscaledRadius;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnscaledHalfHeight;                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FMeleeWeaponDesc                            WeaponDesc;                                               // 0x0048(0x0028)
};

// ScriptStruct ConZ.MeleeAttackCapsuleHitInfo
// 0x0100
struct FMeleeAttackCapsuleHitInfo
{
	struct FMeleeAttackCapsule                         MeleeAttackCapsule;                                       // 0x0000(0x0070)
	struct FHitResult                                  HitResult;                                                // 0x0070(0x0088) (IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.AnimalSpawnInfo
// 0x0008
struct FAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpawnProbability;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalManagementData
// 0x0030
struct FAnimalManagementData
{
	class UClass*                                      AnimalClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AAnimal2*>                            AliveAnimals;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class ACorpse*>                             DeadAnimals;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                VirtualAnimalAmount;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeHitDetectionMarker
// 0x0080
struct FMeleeHitDetectionMarker
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  RootMotion;                                               // 0x0040(0x0030) (Edit, IsPlainOldData)
	float                                              damageMultiplier;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseBuildingSnappingData
// 0x0010
struct FConZBaseBuildingSnappingData
{
	bool                                               CanSnapLeft;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapRight;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapFront;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapBack;                                              // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapTop;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapBottom;                                            // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              SnappingDistance;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreZCoordinate;                                        // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.BaseElementSnapMarker
// 0x0050
struct FBaseElementSnapMarker
{
	struct FTransform                                  SnapTransform;                                            // 0x0000(0x0030) (Edit, IsPlainOldData)
	EBaseElementType                                   ElementType;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              SnappingDistance;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveAmountX;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveAmountY;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveAmountZ;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESnappingPosition                                  SnappingPosition;                                         // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanMoveOnXAxis;                                           // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanMoveOnYAxis;                                           // 0x0046(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanMoveOnZAxis;                                           // 0x0047(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.RepairableParams
// 0x0038
struct FRepairableParams
{
	struct FGameplayTagContainer                       RepairableTypes;                                          // 0x0000(0x0020) (Edit)
	float                                              HealthRepairedPerUse;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExperienceAwardedPerHealthRepaired;                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRepairDuration;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRepairDuration;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        MinSkillLevelRequired;                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.LadderMarker
// 0x00A0
struct FLadderMarker
{
	struct FTransform                                  FirstStep;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LastStep;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FTransform                                  Edge;                                                     // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0070(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StepHeight;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepWidth;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionExtraAboveLastStep;                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionExtraBelowFirstStep;                          // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionExtraOnTheSides;                              // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasEdge;                                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNarrow;                                                 // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0093(0x000D) MISSED OFFSET
};

// ScriptStruct ConZ.ScopeZoomLevelSettings
// 0x0530
struct FScopeZoomLevelSettings
{
	float                                              Magnification;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0010(0x0520) (Edit)
};

// ScriptStruct ConZ.DialogueInfo
// 0x0028
struct FDialogueInfo
{
	class UAkAudioEvent*                               VoiceOver;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0008(0x0018) (Edit)
	float                                              Duration;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDialogType                                        DialogType;                                               // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillExperienceAwards
// 0x0010
struct FMeleeSkillExperienceAwards
{
	float                                              Hit;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Kill;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ComboHitMultiplier;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkillLevelBonus;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.BruisePatch
// 0x0038
struct FBruisePatch
{
	EBruiseLayer                                       Layer;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<EBruiseZone>                                AllowedZones;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                Order;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UTexture2D*                                  Texture;                                                  // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0028(0x0008) (Edit, IsPlainOldData)
	bool                                               Mute;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.WindowMarker
// 0x0050
struct FWindowMarker
{
	bool                                               IsVaultable;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFortifiable;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UWindowFortificationsType*                   WindowFortificationsType;                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AdditionalMarkerIndicesToModify;                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DidIFailToCorrectlyPlaceWindowMarkers;                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Vertex1;                                                  // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FortificationOffset;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionBoxVertBias;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionBoxHorzBias;                                     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.WindowMarkerModifier
// 0x0008
struct FWindowMarkerModifier
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsVaultable;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFortifiable;                                            // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.DbIntegerId
// 0x0008
struct FDbIntegerId
{
	int64_t                                            Value;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DoorRepData
// 0x0020
struct FDoorRepData
{
	EDoorStateFlags                                    StateFlags;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDbIntegerId                                OwningUserProfileId;                                      // 0x0008(0x0008)
	TArray<class UClass*>                              Locks;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.FortificationData
// 0x0020
struct FFortificationData
{
	int                                                MarkerIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      FortificationClass;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                OwnerUserProfileId;                                       // 0x0010(0x0008)
	float                                              health;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.BuildingData
// 0x0028
struct FBuildingData
{
	bool                                               IsCleared;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FWindowMarkerModifier>               WindowMarkerModifiers;                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FFortificationData>                  Fortifications;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.BuildingsArray
// 0x0010
struct FBuildingsArray
{
	TArray<class ABuilding*>                           _buildings;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.BuryMaterialData
// 0x0028
struct FBuryMaterialData
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BreachActionParticles;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               BreachActionSound;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DumpActionParticles;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DumpActionSound;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.BodyWeaponAnimation
// 0x0010
struct FBodyWeaponAnimation
{
	class UAnimMontage*                                Body;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Weapon;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponAttachmentAnimations
// 0x0020
struct FWeaponAttachmentAnimations
{
	struct FBodyWeaponAnimation                        Add;                                                      // 0x0000(0x0010) (Edit)
	struct FBodyWeaponAnimation                        Remove;                                                   // 0x0010(0x0010) (Edit)
};

// ScriptStruct ConZ.WeaponSpreadItem
// 0x000C
struct FWeaponSpreadItem
{
	float                                              Idle;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Moving;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedTarget;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponSpreadData
// 0x0040
struct FWeaponSpreadData
{
	struct FWeaponSpreadItem                           ByStance[0x4];                                            // 0x0000(0x000C) (Edit)
	float                                              IncrementPerShot;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncrementFromShotsMax;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncrementSpeed;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecrementSpeed;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponViewKickData
// 0x0018
struct FWeaponViewKickData
{
	float                                              PitchMin;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMax;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawMin;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawMax;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchDecrementSpeed;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawDecrementSpeed;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponReloadData
// 0x0020
struct FWeaponReloadData
{
	bool                                               IsQuick;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AItem*                                       Item;                                                     // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                count;                                                    // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      ReloadSequenceClass;                                      // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillTemplate
// 0x0038
struct FSkillTemplate
{
	ESkillAttribute                                    Attribute;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FString                                     ClassName;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ESkillLevel                                        Level;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Experience;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterTemplate
// 0x0088
struct FCharacterTemplate
{
	float                                              Strength;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Constitution;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Dexterity;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intelligence;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Age;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGender                                            Gender;                                                   // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AppearanceIndex;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TattooIndex;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreastSize;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PenisSize;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamIndex;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     BirthDate;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ArrestDate;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkillTemplate>                      Skills;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      Item0;                                                    // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item1;                                                    // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item2;                                                    // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterImpactSounds
// 0x0008
struct FCharacterImpactSounds
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundData
// 0x0028
struct FCharacterHeadImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterHeadImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundsData
// 0x0018
struct FCharacterHeadImpactSoundsData
{
	TArray<struct FCharacterHeadImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundData
// 0x0028
struct FCharacterTorsoImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterTorsoImpactSoundCategory>         ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundsData
// 0x0018
struct FCharacterTorsoImpactSoundsData
{
	TArray<struct FCharacterTorsoImpactSoundData>      SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundData
// 0x0028
struct FCharacterArmsImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterArmsImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundsData
// 0x0018
struct FCharacterArmsImpactSoundsData
{
	TArray<struct FCharacterArmsImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundData
// 0x0028
struct FCharacterLegsImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterLegsImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundsData
// 0x0018
struct FCharacterLegsImpactSoundsData
{
	TArray<struct FCharacterLegsImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterSpawnerData2
// 0x0030
struct FCharacterSpawnerData2
{
	class UClass*                                      Character;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPhysicalSurface>>              AllowedSurfaces;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CharactersPerCell;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalCharacters;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinElevation;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxElevation;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterSpawnerDataBasedOnPreset
// 0x0020
struct FCharacterSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideCharacterClasses;                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<class UClass*>                              CharacterClasses;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.CharacterSpawnerMarker
// 0x0050
struct FCharacterSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FCharacterSpawnerDataBasedOnPreset          Spawner;                                                  // 0x0030(0x0020) (Edit)
};

// ScriptStruct ConZ.CharacterSpawneeInfo
// 0x0010
struct FCharacterSpawneeInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.SpawnedPawnInfo
// 0x0014
struct FSpawnedPawnInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.PawnCharacterInfo
// 0x0098
struct FPawnCharacterInfo
{
	class UClass*                                      SpawnablePawn;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              CharacterPreset;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              PoiCharacterIdleThresholdTimeMP;                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorCharacterIdleThresholdTimeMP;                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InteriorCharacterIdleThresholdTimeMP;                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoiCharacterIdleThresholdTimeSP;                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorCharacterIdleThresholdTimeSP;                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InteriorCharacterIdleThresholdTimeSP;                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinShortRangeSpawnDistance;                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxShortRangeSpawnDistance;                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLongRangeSpawnDistance;                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLongRangeSpawnDistance;                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PawnCullDuration;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxWildCharactersPerPawnGroup;                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExteriorCharactersPerPawnGroup;                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxInteriorCharactersPerPawnGroup;                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PawnFieldOfView;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawningFieldOfView;                                      // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowedPawns;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowedWildPawns;                                      // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	int                                                MaxAllowedExteriorPawns;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x006C(0x000C) MISSED OFFSET
	int                                                MaxAllowedInteriorPawns;                                  // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x007C(0x000C) MISSED OFFSET
	TArray<struct FSpawnedPawnInfo>                    SpawnedPawns;                                             // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.CharacterSpawnerData
// 0x0010
struct FCharacterSpawnerData
{
	TArray<class UClass*>                              CharacterClasses;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.ChoppingIngredient
// 0x0028
struct FChoppingIngredient
{
	class UClass*                                      Item;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinQuantity;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsQuantityAffectedByTool;                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideAutoDestructTime;                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              AutoDestructTime;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ChoppingTool2
// 0x0030
struct FChoppingTool2
{
	TArray<class UBaseItemTag*>                        ItemTags;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ItemTagClass;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideChoppingTime;                                     // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ChoppingTimeMultiplier;                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideIngredientsQuantity;                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                IngredientsQuantityBonus;                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PossibleChoppingTools
// 0x0010
struct FPossibleChoppingTools
{
	TArray<struct FChoppingTool2>                      PossibleTools;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.ExperienceDependentFloat
// 0x0008
struct FExperienceDependentFloat
{
	float                                              ValueWhenExperienceIsMinimal;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValueWhenExperienceIsMaximal;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ChoppingParametersPerSkillLevel
// 0x000C
struct FChoppingParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   ChoppingTime;                                             // 0x0000(0x0008) (Edit)
	int                                                IngredientsQuantityBonus;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ChoppingRecipe
// 0x0090
struct FChoppingRecipe
{
	struct FText                                       InteractionCaption;                                       // 0x0000(0x0018) (Edit)
	class UAkAudioEvent*                               ChopAudioEvent;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FChoppingIngredient>                 Ingredients;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FPossibleChoppingTools                      ToolRequiredToBeInRightHand;                              // 0x0030(0x0010) (Edit)
	TArray<struct FPossibleChoppingTools>              AdditionalToolsRequired;                                  // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      Skill;                                                    // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExperiencePointsAwarded;                                  // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FChoppingParametersPerSkillLevel            NoSkillLevelData;                                         // 0x005C(0x000C) (Edit)
	struct FChoppingParametersPerSkillLevel            BasicLevelData;                                           // 0x0068(0x000C) (Edit)
	struct FChoppingParametersPerSkillLevel            MediumLevelData;                                          // 0x0074(0x000C) (Edit)
	struct FChoppingParametersPerSkillLevel            AdvancedLevelData;                                        // 0x0080(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InteractionStruct
// 0x0068
struct FInteractionStruct
{
	EInteractionType                                   interactionType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     InteractionCaption;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0018(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.CircularLayerData
// 0x0008
struct FCircularLayerData
{
	float                                              CenterCutoffPercentage;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CircularSegmentContainer
// 0x0018
struct FCircularSegmentContainer
{
	TArray<class UCircularMenuSegmentWidget*>          SegmentWidgets;                                           // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	int                                                SegmentCountOverride;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalPaceSettings
// 0x0010
struct FAnimalPaceSettings
{
	float                                              RunSpeed;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TrotSpeed;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SneakSpeed;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalStationaryRotationRateSettings
// 0x003C
struct FAnimalStationaryRotationRateSettings
{
	struct FRotator                                    RunRotationRate;                                          // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    TrotRotationRate;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    WalkRotationRate;                                         // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    SneakRotationRate;                                        // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    StandRotationRate;                                        // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ConZ.ChargeAttackData
// 0x0020
struct FChargeAttackData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lengthOverride;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CloseRangeAttackData
// 0x0018
struct FCloseRangeAttackData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalHalfAngleRange;                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TurnMontages
// 0x0010
struct FTurnMontages
{
	class UAnimMontage*                                TurnInPlaceLeft;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TurnInPlaceRight;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalActionMontageData
// 0x0018
struct FAnimalActionMontageData
{
	class UAnimMontage*                                SleepMontage;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EatMontage;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                IntimidateMontage;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.RepActionData
// 0x0003
struct FRepActionData
{
	EAnimalAction                                      Action;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IndexParameter;                                           // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Version;                                                  // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ContainerItemDescriptorData
// 0x0028
struct FContainerItemDescriptorData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              health;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              maxHealth;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisplayAmmountLeft;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisplayAmmountRight;                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDisplayText;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ImageAssetToLoad
// 0x0018
struct FImageAssetToLoad
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (Edit)
	struct FString                                     FilePath;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.InteractionData
// 0x0048
struct FInteractionData
{
	int                                                IntegerData;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     PointerData;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolData;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       TextData;                                                 // 0x0018(0x0018)
	struct FVector                                     InteractionLocation;                                      // 0x0030(0x000C) (IsPlainOldData)
	struct FVector                                     VectorData;                                               // 0x003C(0x000C) (IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseRepairAreaDuration
// 0x0008
struct FConZBaseRepairAreaDuration
{
	int                                                NumberOfBaseElementsTreshold;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepairDuration;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseData
// 0x00A0
struct FConZBaseData
{
	int64_t                                            BaseId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BaseName;                                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FVector2D                                   BaseSize;                                                 // 0x0018(0x0008) (IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // 0x0020(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	int64_t                                            BaseOwnerPlayerId;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOwnedByPlayer;                                          // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector2D                                   BaseBoundsMin;                                            // 0x003C(0x0008) (IsPlainOldData)
	struct FVector2D                                   BaseBoundsMax;                                            // 0x0044(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x54];                                      // 0x004C(0x0054) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseInteractionData
// 0x0018
struct FConZBaseInteractionData
{
	int64_t                                            BaseId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementInteractionData
// 0x0018
struct FConZBaseElementInteractionData
{
	int64_t                                            BaseElementId;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseElementLocation;                                      // 0x0008(0x000C) (IsPlainOldData)
	float                                              RepairValue;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseElementIdentifier
// 0x0020
struct FConZBaseElementIdentifier
{
	int64_t                                            BaseId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ElementID;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CommonMapNames
// 0x0018
struct FCommonMapNames
{
	struct FName                                       MainMenu;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterCreationMenu;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Singleplayer;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterCreationMenuContext
// 0x0030
struct FCharacterCreationMenuContext
{
	bool                                               IsPreferringMultiplayer;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ServerIp;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ServerGameplayPort;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerAuthToken;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.RespawnParameters
// 0x0040
struct FRespawnParameters
{
	int                                                RandomLocationPrice;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectorLocationPrice;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShelterLocationPrice;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadLocationPrice;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RandomInitialTime;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectorInitialTime;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShelterInitialTime;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadInitialTime;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RandomCooldownTime;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectorCooldownTime;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShelterCooldownTime;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadCooldownTime;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RandomCooldownResetMultiplier;                            // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SectorCooldownResetMultiplier;                            // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShelterCooldownResetMultiplier;                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SquadCooldownResetMultiplier;                             // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TeleportRequest
// 0x0028
struct FTeleportRequest
{
	TWeakObjectPtr<class AActor>                       Subject;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0008(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0014(0x000C) (BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class UTeleportUserData>            UserData;                                                 // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameplayRules
// 0x0010
struct FGameplayRules
{
	bool                                               AllowFirstperson;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowThirdperson;                                         // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowCrosshair;                                           // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowGlobalChat;                                          // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowLocalChat;                                           // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowSquadChat;                                           // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowMapScreen;                                           // 0x0006(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	float                                              TimeToRemainInGameAfterLeaveGameRequest;                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToRemainInGameAfterLeaveGameRequestWhileCaptured;     // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PlayerLoginInfo
// 0x0060
struct FPlayerLoginInfo
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0010(0x0008) (BlueprintVisible)
	struct FString                                     UserProfileName;                                          // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               IsUserAdmin;                                              // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeluxeUser;                                             // 0x0029(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDrone;                                              // 0x002A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FString                                     ServerName;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FDbIntegerId                                ServerUserProfileId;                                      // 0x0048(0x0008) (BlueprintVisible)
	struct FGameplayRules                              GameplayRules;                                            // 0x0050(0x0010) (BlueprintVisible)
};

// ScriptStruct ConZ.SurvivalStats
// 0x0140
struct FSurvivalStats
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              HighestPositiveFamePoints;                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DoorsClaimed;                                             // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimalsKilled;                                            // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinutesSurvived;                                          // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LocksPicked;                                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PuppetsKilled;                                            // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GunsCrafted;                                              // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmmoCrafted;                                              // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BulletsCrafted;                                           // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArrowsCrafted;                                            // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ClothingCrafted;                                          // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LongestKillDistance;                                      // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeKills;                                               // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArcheryKills;                                             // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayersKnockedOut;                                        // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalDefecations;                                         // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalUrinations;                                          // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LightsFired;                                              // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ContainersLooted;                                         // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemsPutIntoContainers;                                   // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeathsByPrisoners;                                        // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimalsSkinned;                                           // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoodEaten;                                                // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelledByFoot;                                  // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WoundsPatched;                                            // 0x0070(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemsPickedUp;                                            // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LiquidDrank;                                              // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeethLost;                                                // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCaloriesIntake;                                      // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShotsFired;                                               // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShotsHit;                                                 // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangeWeaponAccuracy;                                      // 0x008C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Headshots;                                                // 0x0090(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeWeaponSwings;                                        // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeWeaponHits;                                          // 0x0098(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeleeWeaponAccuracy;                                      // 0x009C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeWeaponsCrafted;                                      // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DroneKills;                                               // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SentryKills;                                              // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PrisonerKills;                                            // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PuppetsKnockedOut;                                        // 0x00B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Diarrheas;                                                // 0x00B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Vomits;                                                   // 0x00B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelledInVehicle;                               // 0x00BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MushroomsEaten;                                           // 0x00C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestMuscleMass;                                        // 0x00C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestFat;                                               // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeartAttacks;                                             // 0x00CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Overdose;                                                 // 0x00D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Starvation;                                               // 0x00D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestDamageTaken;                                       // 0x00D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestWeightCarried;                                     // 0x00DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsWon;                                                // 0x00E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsLost;                                               // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowestNegativeFamePoints;                                 // 0x00E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelledSwimming;                                // 0x00EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsEnemyKills;                                         // 0x00F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsDeaths;                                             // 0x00F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagCaptures;                                             // 0x00F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CrowsKilled;                                              // 0x00FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeagullsKilled;                                           // 0x0100(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HorsesKilled;                                             // 0x0104(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BoarsKilled;                                              // 0x0108(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BearsKilled;                                              // 0x010C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GoatsKilled;                                              // 0x0110(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeersKilled;                                              // 0x0114(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChickensKilled;                                           // 0x0118(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RabbitsKilled;                                            // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DonkeysKilled;                                            // 0x0120(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimesMauledByABear;                                       // 0x0124(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LongestAnimalKillDistance;                                // 0x0128(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x012C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillDeathRatio;                                           // 0x0130(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventsKillDeathRatio;                                     // 0x0134(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlcoholDrank;                                             // 0x0138(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.EventsRankingStats
// 0x0030
struct FEventsRankingStats
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FamePoints;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FameLevel;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventScore;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventKills;                                               // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventDeaths;                                              // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventSuicides;                                            // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventAssists;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventHeadshots;                                           // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBanned;                                                 // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.EventsRankingStatsItem
// 0x0048
struct FEventsRankingStatsItem
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FEventsRankingStats                         CharacterStats;                                           // 0x0018(0x0030) (BlueprintVisible)
};

// ScriptStruct ConZ.ConZSquadEmblemElement
// 0x0004
struct FConZSquadEmblemElement
{
	unsigned char                                      ShapeIndex;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrimaryColorIndex;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SecondaryColorIndex;                                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TertiaryColorIndex;                                       // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZSquadEmblem
// 0x0008
struct FConZSquadEmblem
{
	struct FConZSquadEmblemElement                     Background;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	struct FConZSquadEmblemElement                     Symbol;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ConZ.ConZSquadMember
// 0x0010
struct FConZSquadMember
{
	struct FDbIntegerId                                UserProfileId;                                            // 0x0000(0x0008) (Edit, BlueprintVisible)
	EConZSquadMemberRank                               Rank;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               online;                                                   // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               InDanger;                                                 // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsAlive;                                                  // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnParameters
// 0x0030
struct FVehicleSpawnParameters
{
	struct FGameplayTag                                SpawnGroup;                                               // 0x0000(0x0008) (Edit)
	struct FVector                                     MinSpawnLocationOffset;                                   // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     MaxSpawnLocationOffset;                                   // 0x0014(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     AdminSpawnLocationOffset;                                 // 0x0020(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleMaterialParameterDescription
// 0x0010
struct FVehicleMaterialParameterDescription
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VehicleDamagedEffectsParameters
// 0x0060
struct FVehicleDamagedEffectsParameters
{
	struct FFloatRange                                 HealthRatioRange;                                         // 0x0000(0x0010) (Edit)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StartAudioEvent;                                          // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopAudioEvent;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleExhaustParticles
// 0x0018
struct FVehicleExhaustParticles
{
	struct FName                                       AttachSocketName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleExhaustEffects
// 0x0048
struct FVehicleExhaustEffects
{
	TArray<struct FVehicleExhaustParticles>            Particles;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              ThrottleImpulseMinValue;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseMaxValue;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseSpeedTermMaxValue;                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseAttackDuration;                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseSustainDuration;                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseReleaseDuration;                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticlesDestructionDelay;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x002C(0x001C) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleImpactEffects
// 0x0038
struct FVehicleImpactEffects
{
	float                                              HitImpulseThreshold;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParticlesScale;                                           // 0x0010(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleEngineStallingParameters
// 0x0050
struct FVehicleEngineStallingParameters
{
	float                                              MinDuration;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopEngineChance;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldStallingStopOnThrottleOrBreakRelease;               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldEngineStopOnThrottleOrBreakRelease;                 // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	class UCurveFloat*                                 ThrottleCurve;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BrakeCurve;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceMagnitudeScale;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ForceMagnitudeScaleCurve;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceDirectionRandomizationAngle;                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      AudioEventTriggerTimeRatios;                              // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.MountSlotEntryPoint
// 0x000C
struct FMountSlotEntryPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSpawningSettings
// 0x0058
struct FItemSpawningSettings
{
	bool                                               UseQuadTreeToDetermineRelevantSpawnerGroups;              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              RelevantSpawnerGroupsUpdateInterval;                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups;      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerGroupsCullDistance;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerGroupsExpirationTimeInMinutes;                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerTasksProcessingInterval;                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerTasksProcessingBudgetInMilliseconds;               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfSpawnerTasksPerUpdate;                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDestroySpawnedItemsIfNoPlayersAround;               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              RarityRatio;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerProbabilityMultiplier;                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExamineSpawnerProbabilityMultiplier;                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemHealthMultiplierWhenUnderwater;                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     SaveFileName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	bool                                               DisableSerialization;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSpawnerProbability;                                 // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemLimit;                                          // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemZone;                                           // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemRarity;                                         // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDrawItemSpawnTransforms;                             // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              DebugDrawItemSpawnTransformsDuration;                     // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseSkeletalMeshRepData
// 0x0070
struct FCorpseSkeletalMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Visibility;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseStaticMeshRepData
// 0x0070
struct FCorpseStaticMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Visibility;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpsePoseData
// 0x0080
struct FCorpsePoseData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<struct FTransform>                          Transforms;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector>                             LinearVelocities;                                         // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector>                             AngularVelocities;                                        // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingPair
// 0x0010
struct FCraftingPair
{
	class UClass*                                      CraftedItem;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CraftingItem;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PossibleItem
// 0x0030
struct FPossibleItem
{
	class UCraftingItemTag*                            CraftingTag;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              usageWeight;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                QuantityVariation;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeightVariation;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHere;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingItem
// 0x0028
struct FCraftingItem
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPossibleItem>                       PossibleItems;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	class UAkAudioEvent*                               FillSound;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CraftingSkillLevelData
// 0x0014
struct FCraftingSkillLevelData
{
	float                                              CraftingTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProcessingTime;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Points;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability_Add;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability_Multiply;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemClassesArray
// 0x0010
struct FItemClassesArray
{
	TArray<class UClass*>                              ItemClasses;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.CraftingRecipeCraftableItem
// 0x0010
struct FCraftingRecipeCraftableItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnoughSkill;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipeCraftingItem
// 0x0010
struct FCraftingRecipeCraftingItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isOptional;                                               // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipeCraftingIngredient
// 0x0018
struct FCraftingRecipeCraftingIngredient
{
	TArray<struct FCraftingRecipeCraftingItem>         CraftingItems;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsTool;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isOptional;                                               // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipe
// 0x0038
struct FCraftingRecipe
{
	TArray<struct FCraftingRecipeCraftableItem>        CraftableItems;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FCraftingRecipeCraftingIngredient>   CraftingIngredients;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      SkillNeeded;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        SkillLevelNeeded;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UCraftableItem*                              CraftableItem;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameEventParticipantInfo
// 0x0070
struct FGameEventParticipantInfo
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TWeakObjectPtr<class APrisoner>                    Prisoner;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EGameEventParticipantState                         State;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                TeamIndex;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UGameEventParticipantStats*>          RoundStats;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UGameEventParticipantStats*                  EventStats;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class APrisoner*>                           HurtBy;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                RepHelper;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x005C(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.GameEventRewardPoints
// 0x000C
struct FGameEventRewardPoints
{
	int                                                Cash;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FamePoints;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameEventParameters
// 0x0188
struct FGameEventParameters
{
	float                                              AnnounceDuration;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CancelDuration;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoundDuration;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RoundLimit;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WinLimit;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RespawnDelay;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeoutDuration;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinParticipants;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxParticipants;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowRespawn;                                             // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FriendlyFire;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<int>                                        TeamLimit;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                EntryFee;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameEventRewardPoints                      PointsPerEnemyKill;                                       // 0x003C(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerTeamKill;                                        // 0x0048(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerDeath;                                           // 0x0054(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerSuicide;                                         // 0x0060(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerAssist;                                          // 0x006C(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerHeadshot;                                        // 0x0078(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerRoundWin;                                        // 0x0084(0x000C) (Edit, BlueprintVisible)
	TArray<struct FGameEventRewardPoints>              PointsPerRank;                                            // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGameEventRewardPoints                      PointsForParticipation;                                   // 0x00A0(0x000C) (Edit, BlueprintVisible)
	float                                              ScoreToFameConversionFactor;                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UItemSelection*>                      PossiblePrimaryWeapons;                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSecondaryWeapons;                                 // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleTertiaryWeapons;                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleOutfits;                                          // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSupportItems;                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      MandatoryGear;                                            // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       EventName;                                                // 0x0110(0x0018) (Edit, BlueprintVisible)
	struct FText                                       EventDescription;                                         // 0x0128(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PrerequisitesText;                                        // 0x0140(0x0018) (Edit, BlueprintVisible)
	struct FText                                       WeaponText;                                               // 0x0158(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RewardsText;                                              // 0x0170(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.CTFParameters
// 0x0030
struct FCTFParameters
{
	float                                              FlagResetDuration;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowReturns;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                CaptureLimit;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameEventRewardPoints                      PointsPerPickup;                                          // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerCapture;                                         // 0x0018(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerReturn;                                          // 0x0024(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.SpawnArea
// 0x0014
struct FSpawnArea
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamIndex;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DamageOverTimeUpdateGroup
// 0x0018
struct FDamageOverTimeUpdateGroup
{
	float                                              UpdateInterval;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.TriggeredEventData
// 0x0010
struct FTriggeredEventData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.TrapTriggerParams
// 0x0010
struct FTrapTriggerParams
{
	class AActor*                                      TriggeredActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileImpulseMultiplier
// 0x0010
struct FProjectileImpulseMultiplier
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MultiplierByClass
// 0x0010
struct FMultiplierByClass
{
	class UClass*                                      ObjectClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.DamageMultipliers
// 0x0018
struct FDamageMultipliers
{
	class UClass*                                      DamageCauserClass;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiplierByClass>                  DamageMultipliers;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.DataTransferEvent
// 0x0001
struct FDataTransferEvent
{
	EDataTransferType                                  Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DeathmatchParameters
// 0x0014
struct FDeathmatchParameters
{
	int                                                RoundScoreLimit;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionInterval;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionDuration;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionStep;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarrierHeatUpDuration;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DemolitionSkillParametersPerSkillLevel
// 0x001C
struct FDemolitionSkillParametersPerSkillLevel
{
	float                                              TrapQuality;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefuseTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArmTrapXP;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisarmOwnedTrapXP;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisarmEnemyTrapXP;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AddTriggerXP;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CraftTrapXP;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TooltipPanelData
// 0x0020
struct FTooltipPanelData
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ETooltipPanelType                                  PanelType;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Layer;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsEditorOnly;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.DialogInfoContainer
// 0x0010
struct FDialogInfoContainer
{
	TArray<struct FDialogueInfo>                       DialogInfos;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.DistantLevel
// 0x0020
struct FDistantLevel
{
	class AActor*                                      Level;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.DrivingSkillExperienceAwards
// 0x0008
struct FDrivingSkillExperienceAwards
{
	float                                              StartEngine;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointsPerDrivenDistanceInKm;                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DrivingSkillEngineStallingParameters
// 0x0038
struct FDrivingSkillEngineStallingParameters
{
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDuration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopEngineChance;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ThrottleCurve;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BrakeCurve;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceMagnitudeScale;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ForceMagnitudeScaleCurve;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceDirectionRandomizationAngle;                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.DrivingSkillParametersPerSkillLevel
// 0x00A0
struct FDrivingSkillParametersPerSkillLevel
{
	float                                              EngineStartDuration;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineStartFailureChance;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineReadyDelay;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineFailedToStartDelay;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineStalledDelay;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedModifier;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleModifier;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrakeModifier;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearboxSwitchTime;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearboxLatency;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerRaiseRate;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerFallRate;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDrivingSkillEngineStallingParameters       EngineStallingByAccelerationParameters;                   // 0x0030(0x0038) (Edit)
	struct FDrivingSkillEngineStallingParameters       EngineStallingByUpShiftParameters;                        // 0x0068(0x0038) (Edit)
};

// ScriptStruct ConZ.DropZoneParameters
// 0x002C
struct FDropZoneParameters
{
	float                                              IntroAnnouncementDelay;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarmupPhaseDuration;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrateDropDuration;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SearchPhaseTimeLimit;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CargoDropDuration;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapturePhaseTimeLimit;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CargoOpeningDuration;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SkipKeyPhase;                                             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FGameEventRewardPoints                      PointsPerActivation;                                      // 0x0020(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.EnduranceSkillParametersPerSkillLevel
// 0x0008
struct FEnduranceSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StaminaRecoveryMultiplier;                                // 0x0000(0x0008) (Edit)
};

// ScriptStruct ConZ.EngineeringSkillExperienceAwards
// 0x0004
struct FEngineeringSkillExperienceAwards
{
	float                                              RepairExperienceMultiplier;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.EngineeringSkillParametersPerSkillLevel
// 0x0014
struct FEngineeringSkillParametersPerSkillLevel
{
	float                                              RepairRadius;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepairTimeMultiplier;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ResultQuality;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IngredientMultiplier;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ToolUsageMultiplier;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSpawnerDataBasedOnPreset
// 0x0088
struct FItemSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideItemClasses;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideItemSpawnTypes;                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideProbability;                                      // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseItemZone;                                      // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseItemRarity;                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideInitialDamage;                                    // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRandomizeDamage;                                  // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideInitialUsage;                                     // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRandomizeUsage;                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideInitialDirtiness;                                 // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRandomizeDirtiness;                               // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideMinAmmoCount;                                     // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideMaxAmmoCount;                                     // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverridePossibleSicknesses;                               // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnLocation;           // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnRotation;           // 0x0017(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ItemClasses;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0028(0x0020) (Edit)
	float                                              Probability;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialUsage;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinAmmoCount;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x0070(0x0010) (Edit, ZeroConstructor)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                   // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                   // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.ExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
// 0x0028
struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
{
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0000(0x0020) (Edit)
	int                                                MaxNumberOfOccurrences;                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ExamineItemSpawnerData
// 0x00A8
struct FExamineItemSpawnerData
{
	int                                                MinQuantity;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowDuplicates;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0010(0x0088) (Edit)
	TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes;                              // 0x0098(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.ExamineDataPerItemGroup
// 0x0004
struct FExamineDataPerItemGroup
{
	int                                                MaxNumberOfOccurrences;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HeatSourceParameters
// 0x0020
struct FHeatSourceParameters
{
	float                                              Temperature;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TemperatureCurve;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurningSpeed;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScale;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSnapMarker
// 0x0050
struct FItemSnapMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FString                                     Tag;                                                      // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SnapDistance;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.FishSpawnInfo
// 0x0008
struct FFishSpawnInfo
{
	int                                                SpawnInstances;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentlySpawned;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.FoliageEffectsData
// 0x0020
struct FFoliageEffectsData
{
	float                                              DetectionBoundsScale;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartMovingThroughFoliageAudioEvent;                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopMovingThroughFoliageAudioEvent;                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OneShotMovingThroughFoliageAudioEvent;                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameEventTeamColours
// 0x0060
struct FGameEventTeamColours
{
	struct FLinearColor                                TeamName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsDarker;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsLighter;                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsHighlighted;                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsDisabled;                                 // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsMini;                                     // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ConZ.GlobalAnimalSpawnInfo
// 0x001C
struct FGlobalAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RespawnPeriod;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfExistingWaypointGroups;                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                WorldMaxSpawnInstances;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                CurrentlyAssigned;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                CurrentlySpawned;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                CurrentlyDead;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalHitReactData
// 0x0018
struct FPhysicalHitReactData
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PelvisBoneName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialStrengthMultiplier;                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendDuration;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalAnimationDesc
// 0x0038
struct FPhysicalAnimationDesc
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactBodyPartDataItem
// 0x0040
struct FHitReactBodyPartDataItem
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToRespondTo;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       WeaponsToRespondTo;                                       // 0x0010(0x0020) (Edit)
	class UAnimMontage*                                FollowupMontage;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactDirectionData
// 0x0048
struct FHitReactDirectionData
{
	TArray<struct FHitReactBodyPartDataItem>           FrontHit;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           LeftHit;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           BackHit;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           RightHit;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	float                                              RegainControlDurationMultiplier;                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactMagnitudeData
// 0x0120
struct FHitReactMagnitudeData
{
	struct FHitReactDirectionData                      SmallHit;                                                 // 0x0000(0x0048) (Edit)
	struct FHitReactDirectionData                      MediumHit;                                                // 0x0048(0x0048) (Edit)
	struct FHitReactDirectionData                      LargeHit;                                                 // 0x0090(0x0048) (Edit)
	struct FHitReactDirectionData                      KnockoutHit;                                              // 0x00D8(0x0048) (Edit)
};

// ScriptStruct ConZ.HitReactLandingData
// 0x0028
struct FHitReactLandingData
{
	float                                              MinImpactSpeedToReact;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimMontage*                                MontageToPlay;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanEverGoToRagdoll;                                       // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              MinImpactSpeedForRagdoll;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRagdollDuration;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRagdollDuration;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RagdollDurationPerSpeedUnit;                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InteractionQueryParameters
// 0x0010
struct FInteractionQueryParameters
{
	struct FVector                                     InteractionLocation;                                      // 0x0000(0x000C) (IsPlainOldData)
	bool                                               IsInDroneMode;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.SpawnedItems
// 0x0018
struct FSpawnedItems
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	EPickupItemOperation                               Operation;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<class AItem*>                               Items;                                                    // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.ServerUsedItem
// 0x0018
struct FServerUsedItem
{
	class AItem*                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              usageWeight;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHere;                                                // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.ServerCraftableItem
// 0x0088
struct FServerCraftableItem
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FServerUsedItem>                     MandatoryItems;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     MandatoryParts;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     OptionalItems;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     OptionalParts;                                            // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     ToolsNeeded;                                              // 0x0050(0x0010) (ZeroConstructor)
	class UAnimMontage*                                CustomCraftingMontage;                                    // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StartCraftingAudioEvent;                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopCraftingAudioEvent;                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryPositionDataRepHelper
// 0x0018
struct FInventoryPositionDataRepHelper
{
	class UClass*                                      _dataClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInventoryPositionData*                      _positionData;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     _owner;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryItemPositionPair
// 0x0020
struct FInventoryItemPositionPair
{
	struct FInventoryPositionDataRepHelper             Position;                                                 // 0x0000(0x0018)
	class UObject*                                     Item;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryContainer2DRepData
// 0x0028
struct FInventoryContainer2DRepData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SizeX;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RepCounter;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryContainerClothesData
// 0x0020
struct FInventoryContainerClothesData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RepCounter;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryContainerHandsHolstersData
// 0x0020
struct FInventoryContainerHandsHolstersData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RepCounter;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryContainerSelectionRepData
// 0x0028
struct FInventoryContainerSelectionRepData
{
	TArray<class UObject*>                             Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0010(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSpawnerMarker
// 0x00C0
struct FItemSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0030(0x0088) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ItemSpawnerData
// 0x0070
struct FItemSpawnerData
{
	TArray<class UClass*>                              ItemClasses;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0010(0x0020) (Edit)
	float                                              Probability;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialUsage;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinAmmoCount;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x0058(0x0010) (Edit, ZeroConstructor)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                   // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryNodeWidgetData
// 0x0038
struct FInventoryNodeWidgetData
{
	struct FName                                       Slot;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EInventoryNodeWidgetDataType                       Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              NumberData;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FText                                       TextData;                                                 // 0x0010(0x0018)
	class UTexture2D*                                  IconData;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   VisibilityData;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ObjectiveData
// 0x0030
struct FObjectiveData
{
	struct FString                                     ObjectiveAssetId;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	EObjectiveState                                    ObjectiveState;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0018(0x0018) (Edit, EditConst)
};

// ScriptStruct ConZ.MissionReward
// 0x0018
struct FMissionReward
{
	TArray<class UClass*>                              RewardItems;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              RewardFamePoints;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RewardReceived;                                           // 0x0014(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.MissionData
// 0x00B8
struct FMissionData
{
	struct FText                                       MissionName;                                              // 0x0000(0x0018) (Edit, EditConst)
	struct FText                                       MissionCategory;                                          // 0x0018(0x0018) (Edit, EditConst)
	struct FText                                       MissionDescription;                                       // 0x0030(0x0018) (Edit, EditConst)
	EMissionType                                       MissionType;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                MissionOrdinalNumber;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EMissionState                                      MissionState;                                             // 0x0050(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EFaction                                           MissionFaction;                                           // 0x0051(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0052(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.MissionData.MissionStartingLocations
	int                                                IntendedNumberOfPlayers;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MissionCooldown;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	struct FString                                     MissionAssetId;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FObjectiveData>                      ObjectivesData;                                           // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FMissionReward                              MissionReward;                                            // 0x0098(0x0018) (Edit, EditConst)
	class UTexture2D*                                  MissionBannerImage;                                       // 0x00B0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.LandingEffectDataPerSeverity
// 0x0010
struct FLandingEffectDataPerSeverity
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnParticlesInDirectionOfVelocity;                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.LandingEffectDataPerPhysicalSurface
// 0x0030
struct FLandingEffectDataPerPhysicalSurface
{
	struct FLandingEffectDataPerSeverity               Light;                                                    // 0x0000(0x0010) (Edit)
	struct FLandingEffectDataPerSeverity               Medium;                                                   // 0x0010(0x0010) (Edit)
	struct FLandingEffectDataPerSeverity               Heavy;                                                    // 0x0020(0x0010) (Edit)
};

// ScriptStruct ConZ.MeleeAction
// 0x0020
struct FMeleeAction
{
	EMeleeActionType                                   ActionType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlockDuration;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OrientToTargetSpeedFactor;                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AttackedByMeleeData
// 0x0018
struct FAttackedByMeleeData
{
	TWeakObjectPtr<class AActor>                       attacker;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CheckMeleeAttackCapsuleCollisionData
// 0x00D0
struct FCheckMeleeAttackCapsuleCollisionData
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillAttack
// 0x0070
struct FMeleeSkillAttack
{
	struct FGameplayTagContainer                       AttackTypes;                                              // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       IgnoreReason;                                             // 0x0020(0x0020) (Edit)
	class UAnimMontage*                                Montage;                                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              PitchRange;                                               // 0x0048(0x0008) (Edit)
	float                                              MaxDistance;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinStamina;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OrientToTargetSpeedFactor;                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaminaDrainMultiplier;                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedAsInitialAttack;                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedToCloseLargeDistanceToTarget;                    // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Solo;                                                     // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mute;                                                     // 0x006B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlwaysCandidate;                                        // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillDodge
// 0x0018
struct FMeleeSkillDodge
{
	EDodgeDirectionType                                DodgeDirectionType;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                Montage;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillAnimations
// 0x0098
struct FMeleeSkillAnimations
{
	class UAnimSequenceBase*                           PrimaryIdleAnimationTP;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PrimaryIdleAnimationFP;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           TiredIdleAnimationTP;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           TiredIdleAnimationFP;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           WalkingIdleAnimationTP;                                   // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           WalkingIdleAnimationFP;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           BlockIdleAnimationTP;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           BlockIdleAnimationFP;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 AimOffsetBlendSpaceTP;                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 AimOffsetBlendSpaceFP;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EnterCombatModeMontage;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LeaveCombatModeMontage;                                   // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequenceBase*>                   InactivityIdleAnimations;                                 // 0x0060(0x0010) (Edit, ZeroConstructor)
	float                                              IdleToBlockBlendDuration;                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockToIdleBlendDuration;                                 // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeleeSkillAttack>                   Attacks;                                                  // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMeleeSkillDodge>                    Dodges;                                                   // 0x0088(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.MeleeSkillParametersPerSkillLevel
// 0x0098
struct FMeleeSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StartDelay;                                               // 0x0000(0x0008) (Edit)
	struct FExperienceDependentFloat                   StartDelayPenaltyPerStrengthShortage;                     // 0x0008(0x0008) (Edit)
	struct FExperienceDependentFloat                   AnimationPlayRateModifier;                                // 0x0010(0x0008) (Edit)
	struct FExperienceDependentFloat                   AnimationPlayRatePenaltyPerStrengthShortage;              // 0x0018(0x0008) (Edit)
	struct FExperienceDependentFloat                   RegainControlDurationModifier;                            // 0x0020(0x0008) (Edit)
	struct FExperienceDependentFloat                   DamageModifier;                                           // 0x0028(0x0008) (Edit)
	struct FExperienceDependentFloat                   staminaDrain;                                             // 0x0030(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaDrainPenaltyPerStrengthShortage;                   // 0x0038(0x0008) (Edit)
	struct FExperienceDependentFloat                   staminaRecoveryDelay;                                     // 0x0040(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaRecoveryDuration;                                  // 0x0048(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMin;                                // 0x0050(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMax;                                // 0x0058(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowLinearity;                          // 0x0060(0x0008) (Edit)
	struct FExperienceDependentFloat                   StartDelayWhenExhausted;                                  // 0x0068(0x0008) (Edit)
	struct FExperienceDependentFloat                   AnimationPlayRateModifierWhenExhausted;                   // 0x0070(0x0008) (Edit)
	struct FExperienceDependentFloat                   RegainControlDurationModifierWhenExhausted;               // 0x0078(0x0008) (Edit)
	struct FExperienceDependentFloat                   DamageModifierWhenExhausted;                              // 0x0080(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaMultiplierPerExcessGearWeight;                     // 0x0088(0x0008) (Edit)
	struct FExperienceDependentFloat                   ComboCooldownDuration;                                    // 0x0090(0x0008) (Edit)
};

// ScriptStruct ConZ.MissionItemInfo
// 0x0038
struct FMissionItemInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ConZ.MissionItemInfo.ItemLocation
	class UClass*                                      ItemClass;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldRemove;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              TimeToDestroy;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalSurfaceData
// 0x000C
struct FPhysicalSurfaceData
{
	float                                              DirtinessFactor;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandingImpactVelocityModifier;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseLoudnessModifier;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PlaceableIngredient
// 0x0058
struct FPlaceableIngredient
{
	TArray<class UCraftingItemTag*>                    Tags;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              SpecificItems;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	EIngredientUsageRule                               UsageRule;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<ECraftingType>                              TagsCraftingTypes;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<ECraftingType>                              SpecificItemsCraftingTypes;                               // 0x0038(0x0010) (Edit, ZeroConstructor)
	EPlaceableIngredientType                           Type;                                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              Required;                                                 // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Satisfied;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ConZOnDemandElementData
// 0x0030
struct FConZOnDemandElementData
{
	struct FConZBaseElementIdentifier                  ElementIdentifier;                                        // 0x0000(0x0020)
	struct FString                                     OwnerName;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.VehicleSpawnerInfo
// 0x0050
struct FVehicleSpawnerInfo
{
	struct FPrimaryAssetId                             VehicleAssetId;                                           // 0x0000(0x0010)
	struct FTransform                                  VehicleTransform;                                         // 0x0010(0x0030) (IsPlainOldData)
	int64_t                                            VehicleLastAccessTime;                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       VehicleActor;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMeleeAttackTypes
// 0x0080
struct FPrisonerMeleeAttackTypes
{
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenNotMoving;                      // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenWalking;                        // 0x0008(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenJogging;                        // 0x0010(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenRunning;                        // 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenFalling;                        // 0x0020(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenNotMoving;                    // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenWalking;                      // 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenJogging;                      // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenRunning;                      // 0x0040(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenFalling;                      // 0x0048(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenNotMoving;                        // 0x0050(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenWalking;                          // 0x0058(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenJogging;                          // 0x0060(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenRunning;                          // 0x0068(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenFalling;                          // 0x0070(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                BashMeleeAttackType;                                      // 0x0078(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfo
// 0x0050
struct FPrisonerNearbyFoliageInstanceInfo
{
	class UInstancedStaticMeshComponent*               InstancedMeshComponent;                                   // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  TransformZeroOrigin;                                      // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UFoliageEffectsAssetData*                    FoliageEffectsAssetData;                                  // 0x0040(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInfo
// 0x0010
struct FPrisonerNearbyFoliageInfo
{
	TArray<struct FPrisonerNearbyFoliageInstanceInfo>  InstancesInfo;                                            // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.PrisonerMountReplication
// 0x0010
struct FPrisonerMountReplication
{
	bool                                               HasMountedSlot;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     MountedSlot;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerTeleportRequest
// 0x001C
struct FPrisonerTeleportRequest
{
	struct FVector                                     TargetLocation;                                           // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C) (IsPlainOldData)
	EPrisonerPostTeleportBehavior                      PostTeleportBehavior;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterActionReplicationHelper
// 0x0018
struct FCharacterActionReplicationHelper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileArrowData
// 0x0018
struct FProjectileArrowData
{
	class UClass*                                      AmmunitionArrowClass;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ItemsHealth;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFactor;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlightRotationCorrectionSpeed;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeviationDegrees;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterActionAck
// 0x000C
struct FCharacterActionAck
{
	int                                                ActionId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubactionIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	ECharacterActionAckType                            Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	ECharacterActionEndState                           EndState;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectilePointDamageEvent
// 0x0050 (0x00F8 - 0x00A8)
struct FProjectilePointDamageEvent : public FPointDamageEvent
{
	bool                                               IsHeadUpperShot;                                          // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              EnergyLossPerClothesLayer[0x7];                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      KillerLocation;                                           // 0x00C8(0x000C)
	struct FVector_NetQuantize100                      VictimLocation;                                           // 0x00D4(0x000C)
	class UClass*                                      ProjectileClass;                                          // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstHit;                                               // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventWeapon
// 0x0001
struct FSkillEventWeapon
{
	EWeaponCategory                                    WeaponCategory;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventWeaponProjectileHitTarget
// 0x0027 (0x0028 - 0x0001)
struct FSkillEventWeaponProjectileHitTarget : public FSkillEventWeapon
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnergyRatio;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadShot;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsKill;                                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasSniping;                                               // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	EPrisonerStance                                    Stance;                                                   // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	EWindSpeedCategory                                 WindSpeedCategory;                                        // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              ExperienceMultiplier;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerWaterMovementParameters
// 0x000C
struct FPrisonerWaterMovementParameters
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerGroundMovementParameters
// 0x000C
struct FPrisonerGroundMovementParameters
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerResponseIdleCompatibleAnimationSets
// 0x0005
struct FPrisonerResponseIdleCompatibleAnimationSets
{
	bool                                               Base;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Rifle;                                                    // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RifleRelaxed;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UnarmedCombat;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Handgun;                                                  // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerResponseIdleDescription
// 0x0028
struct FPrisonerResponseIdleDescription
{
	TArray<class UAnimMontage*>                        Montages;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              PreMontageDelay;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostMontageDelay;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CooldownDuration;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedWhenItemIsInHands;                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPrisonerResponseIdleCompatibleAnimationSets CombatibleAnimationsSets;                                 // 0x001D(0x0005) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerAppearanceData
// 0x0018
struct FPrisonerAppearanceData
{
	EHumanRace                                         Race;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTag                                MeshSet;                                                  // 0x0008(0x0008) (Edit)
	struct FGameplayTag                                MaterialSet;                                              // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.PrisonerAppearanceMeshSet
// 0x0048
struct FPrisonerAppearanceMeshSet
{
	class USkeletalMesh*                               HairMesh;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               FacialHairMesh;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HeadMesh;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               TorsoMesh;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ArmsMesh;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HandsMesh;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               LegsMesh;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               FeetMesh;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               PenisMesh;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerAppearanceMaterialSet
// 0x0048
struct FPrisonerAppearanceMaterialSet
{
	class UMaterialInstance*                           HairMaterial;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           FacialHairMaterial;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           HeadMaterial;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           TorsoMaterial;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           ArmsMaterial;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           HandsMaterial;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           LegsMaterial;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           FeetMaterial;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           PenisMaterial;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerTattooMaterialSet
// 0x0020
struct FPrisonerTattooMaterialSet
{
	bool                                               DeluxeOnly;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UTexture2D*                                  HeadTattoo;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TorsoTattoo;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LimbTattoo;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ClothesPartSet
// 0x0050
struct FClothesPartSet
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty ConZ.ClothesPartSet.ClothesParts
};

// ScriptStruct ConZ.SicknessRecord
// 0x0004
struct FSicknessRecord
{
	EDiagnosedResult                                   Diagnose;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           Phase;                                                    // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DigestionItemRecord
// 0x0038
struct FDigestionItemRecord
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Caption;                                                  // 0x0008(0x0010) (ZeroConstructor)
	class UClass*                                      ItemClass;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           RemainingWeight;                                          // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              Weight;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingVolume;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Water;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsWaterFromWorld;                                         // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.HealingItemRecord
// 0x0020
struct FHealingItemRecord
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Caption;                                                  // 0x0008(0x0010) (ZeroConstructor)
	uint16_t                                           quantity;                                                 // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerBCUMonitorData
// 0x0128
struct FPrisonerBCUMonitorData
{
	unsigned char                                      Age;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeethNumber;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Strength;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Constitution;                                             // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Dexterity;                                                // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Intelligence;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StrengthGain;                                             // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConstitutionGain;                                         // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DexterityGain;                                            // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StrengthRate;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConstitutionRate;                                         // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DexterityRate;                                            // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	uint16_t                                           Weight;                                                   // 0x0014(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           InitialWeight;                                            // 0x0016(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           StorageFat;                                               // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BFP;                                                      // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	uint16_t                                           MuscleMass;                                               // 0x001C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightLoad;                                               // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	uint16_t                                           FoodWeight;                                               // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           MaxFoodWeight;                                            // 0x0022(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              StomachVolumeOccupied;                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StomachVolumeMax;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StomachWater;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntestineVolumeOccupied;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntestineVolumeMax;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntestineWater;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ColonVolumeOccupied;                                      // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ColonVolumeMax;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BladderVolumeOccupied;                                    // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BladderVolumeMax;                                         // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           gearWeight;                                               // 0x004C(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLT;                                                      // 0x004E(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLTEasy;                                                  // 0x0050(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLTDemanding;                                             // 0x0052(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLTVeryDemanding;                                         // 0x0054(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             BodyTempCategory;                                         // 0x0056(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             BodyTempIncrease;                                         // 0x0057(0x0001) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Blood;                                                    // 0x0058(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           MinBlood;                                                 // 0x005A(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              Calories;                                                 // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DailyCaloriesIntake;                                      // 0x0060(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CaloriesUsageSpeed;                                       // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	uint16_t                                           CaloriesIdle;                                             // 0x0064(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CaloriesWalking;                                          // 0x0066(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CaloriesJogging;                                          // 0x0068(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CaloriesRunning;                                          // 0x006A(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              EnergyIntake;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnergyUsage;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MetabolicCalories;                                        // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Water;                                                    // 0x0078(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              WaterIntake;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaterUsage;                                               // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DailyWaterIntake;                                         // 0x0084(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeFat;                                                // 0x0086(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeSaturatedFat;                                       // 0x0088(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeSugar;                                              // 0x008A(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeSodium;                                             // 0x008C(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeCarbs;                                              // 0x008E(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeFiber;                                              // 0x0090(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeProteins;                                           // 0x0092(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeAlcohol;                                            // 0x0094(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	float                                              DailyFatCalories;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailySugarCalories;                                       // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailyCarbsCalories;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailyProteinsCalories;                                    // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailyAlcoholCalories;                                     // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<int16_t>                                    IntakeVitamins;                                           // 0x00B0(0x0010) (ZeroConstructor)
	TArray<int16_t>                                    IntakeMinerals;                                           // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      MSR;                                                      // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x00D1(0x0001) MISSED OFFSET
	int16_t                                            CurrentStaminaChange;                                     // 0x00D2(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            SCRIdle;                                                  // 0x00D4(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            SCRWalking;                                               // 0x00D6(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CurrentWaterConsumption;                                  // 0x00D8(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRIdle;                                                  // 0x00DA(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRWalking;                                               // 0x00DC(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRJogging;                                               // 0x00DE(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRRunning;                                               // 0x00E0(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CurrentCaloriesConsumption;                               // 0x00E2(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealingSpeed;                                             // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewRange;                                                // 0x00E5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PerformanceFailure;                                       // 0x00E6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SpeedModifier;                                            // 0x00E7(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StaminaRecoveryModifier;                                  // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StaminaConsumptionModifier;                               // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WCRModifier;                                              // 0x00EA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CaloriesBurntModifier;                                    // 0x00EB(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HoldingBreathModifier;                                    // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealingSpeedModifier;                                     // 0x00ED(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealthPointsModifier;                                     // 0x00EE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ResistPoisonsModifier;                                    // 0x00EF(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSicknessRecord>                     Sicknesses;                                               // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FDigestionItemRecord>                DigestionItems;                                           // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FHealingItemRecord>                  HealingItems;                                             // 0x0110(0x0010) (ZeroConstructor)
	uint16_t                                           AirTemp;                                                  // 0x0120(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WindSpeed;                                                // 0x0122(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               BCUDataInitializedOnServer;                               // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerClimbAnimationInfo
// 0x0040
struct FPrisonerClimbAnimationInfo
{
	float                                              MinEdgeHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEdgeHeight;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VaultDistance;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxVaultLandHeightError;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnchorOffset;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              staminaDrain;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresEmptyLHand;                                       // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresEmptyRHand;                                       // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.WindowClimbingAnimationInfo
// 0x0048
struct FWindowClimbingAnimationInfo
{
	struct FVector                                     AnchorOffset;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindowWidth;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindowHeight;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpacingToLeftWindowEdge;                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpacingToRightWindowEdge;                              // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindowDistanceToFloor;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWindowDistanceToFloor;                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              staminaDrain;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.LadderInfoRepData
// 0x0050
struct FLadderInfoRepData
{
	struct FTransform                                  LadderTransform;                                          // 0x0000(0x0030) (IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0030(0x000C) (IsPlainOldData)
	struct FVector                                     RootBoneOffset;                                           // 0x003C(0x000C) (IsPlainOldData)
	float                                              StepHeight;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumberOfSteps;                                            // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.WindowInfo
// 0x00D0
struct FWindowInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TransformInverse;                                         // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Anchor;                                                   // 0x0060(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Width;                                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FWindowClimbingAnimationInfo                AnimationInfo;                                            // 0x0078(0x0048) (Edit, BlueprintVisible)
	int                                                AnimationIndex;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.LadderInfo
// 0x00B0
struct FLadderInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TransformInverse;                                         // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Edge;                                                     // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0090(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StepHeight;                                               // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepWidth;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasEdge;                                                  // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNarrow;                                                 // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x00A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	int                                                NumberOfSteps;                                            // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HitStepIndex;                                             // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ClimbableObstacleInfo
// 0x0080
struct FClimbableObstacleInfo
{
	struct FVector                                     EdgeLocation;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EdgeHeight;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HWallNormal;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VWallNormal;                                              // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CapsuleLocationAtAnchor;                                  // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CapsuleRotationAtAnchor;                                  // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FPrisonerClimbAnimationInfo                 AnimationInfo;                                            // 0x0040(0x0040) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Walking
// 0x0030
struct FPrisonerMovementSettings_Ground_Standing_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                              // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x0018(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0024(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Jogging
// 0x0024
struct FPrisonerMovementSettings_Ground_Standing_Jogging
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                              // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x0018(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Running
// 0x000C
struct FPrisonerMovementSettings_Ground_Standing_Running
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing
// 0x00B4
struct FPrisonerMovementSettings_Ground_Standing
{
	struct FPrisonerMovementSettings_Ground_Standing_Walking Walking;                                                  // 0x0000(0x0030) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Walking WalkLimping;                                              // 0x0030(0x0030) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging Jogging;                                                  // 0x0060(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging JogLimping;                                               // 0x0084(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Running Running;                                                  // 0x00A8(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Crouching_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0018(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching
// 0x006C
struct FPrisonerMovementSettings_Ground_Crouching
{
	struct FPrisonerMovementSettings_Ground_Crouching_Walking Walking;                                                  // 0x0000(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkingFaster;                                            // 0x0024(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkLimping;                                              // 0x0048(0x0024) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0018(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone
{
	struct FPrisonerMovementSettings_Ground_Prone_Walking Walking;                                                  // 0x0000(0x0024) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground
// 0x016C
struct FPrisonerMovementSettings_Ground
{
	struct FPrisonerMovementSettings_Ground_Standing   Standing;                                                 // 0x0000(0x00B4) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching  Crouching;                                                // 0x00B4(0x006C) (Edit)
	struct FPrisonerMovementSettings_Ground_Prone      Prone;                                                    // 0x0120(0x0024) (Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMinimal;         // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMaximal;         // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenImmersedInWater;                // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenImmersedInWater;                // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Air
// 0x000C
struct FPrisonerMovementSettings_Air
{
	float                                              JumpZVelocity;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMinimal;            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMaximal;            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Water
// 0x0054
struct FPrisonerMovementSettings_Water
{
	struct FPrisonerWaterMovementParameters            Slow;                                                     // 0x0000(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            Medium;                                                   // 0x000C(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            Fast;                                                     // 0x0018(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            DivingSlow;                                               // 0x0024(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            DivingMedium;                                             // 0x0030(0x000C) (Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerRestingData
// 0x0010
struct FPrisonerRestingData
{
	EPrisonerRestingMode                               Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsRestingOnGround;                                        // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasChangedTransform;                                      // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasDisabledCapsuleCollision;                              // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAnimSequenceBase>            RestingAnimation;                                         // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FeetIKOffset;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerRestingDataAutonomous
// 0x001C
struct FPrisonerRestingDataAutonomous
{
	bool                                               HasDisabledMovement;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         Location;                                                 // 0x0004(0x000C)
	struct FVector_NetQuantize                         EulerRotation;                                            // 0x0010(0x000C)
};

// ScriptStruct ConZ.PrisonerInitialSkillInfo
// 0x0010
struct FPrisonerInitialSkillInfo
{
	class USkill*                                      Skill;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        InitialLevel;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              InitialExperiencePoints;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MedicalRecord
// 0x0028
struct FMedicalRecord
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class APrisoner*                                   Patient;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               CheckSuccessful;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   Diagnoses;                                                // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.SkillRecord
// 0x000C
struct FSkillRecord
{
	ESkillReplicationID                                ID;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExperiencePoints;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        Level;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int8_t                                             counter;                                                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ActiveMovingThroughFoliageSounds
// 0x0020
struct FActiveMovingThroughFoliageSounds
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               StartAudioEvent;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopAudioEvent;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.LocalOffsetCurves
// 0x0020
struct FLocalOffsetCurves
{
	class UCurveLinearColor*                           YawIdle;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           YawMoving;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PitchIdle;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PitchMoving;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ProjectileData
// 0x0048
struct FProjectileData
{
	struct FText                                       Caption;                                                  // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	float                                              Caliber;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleVelocity;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BallisticCoefficient;                                     // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EBallisticDragModel                                BallisticDragModel;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationFactor;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlancingAngle;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowGlanceOrForceBounce;                                 // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              BounceAngle;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ConZ.ImpactEffectData
// 0x0010
struct FImpactEffectData
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Decal;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.RadioStationTrackData
// 0x0028
struct FRadioStationTrackData
{
	class URadioTrack*                                 Track;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioEvent*>                       StartEvents;                                              // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UAkAudioEvent*>                       StopEvents;                                               // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.RadioProgramData
// 0x0018
struct FRadioProgramData
{
	class UClass*                                      ProgramClass;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class URadioProgram*                               Program;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.RepairToolItemParams
// 0x0040
struct FRepairToolItemParams
{
	struct FGameplayTagContainer                       RepairableItemTypes;                                      // 0x0000(0x0020) (Edit)
	class UAkAudioEvent*                               StartRepairSound;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopRepairSound;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                StartRepairMontage;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                StopRepairMontage;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.RunningSkillParametersPerSkillLevel
// 0x0010
struct FRunningSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   MaxSpeedMultiplier;                                       // 0x0000(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaConsumptionMultiplier;                             // 0x0008(0x0008) (Edit)
};

// ScriptStruct ConZ.SearchPerItemData
// 0x0028
struct FSearchPerItemData
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UPhysicalMaterial*>                   NeededMaterials;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              Probability;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinQuantity;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PatrolPoint
// 0x0020
struct FPatrolPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MinWaitDuration;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitDuration;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // 0x0014(0x000C) (IsPlainOldData)
};

// ScriptStruct ConZ.DangerZone
// 0x0028
struct FDangerZone
{
	struct FVector                                     GuardLocation;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ASentryGuardVolume*                          Area;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GuardWorldLocation;                                       // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ServerInfo
// 0x0050
struct FServerInfo
{
	struct FString                                     Address;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      PlayerCount;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxPlayerCount;                                           // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PasswordProtected;                                        // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	float                                              ping;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InGameTime;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Version;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsComplete;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ParticleCollisionDecalData
// 0x0018
struct FParticleCollisionDecalData
{
	class UMaterialInterface*                          Decal;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSize;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSize;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLifetime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CompassSkillParametersPerSkillLevel
// 0x0001
struct FCompassSkillParametersPerSkillLevel
{
	unsigned char                                      CompassSkillLevel;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HandsPoseCorrections
// 0x0040
struct FHandsPoseCorrections
{
	class UAnimSequenceBase*                           RightHand;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightFist;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightFistInCombatMode;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightHandToIdleBlendAlpha;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           LeftHand;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftFist;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftFistInCombatMode;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftHandToIdleBlendAlpha;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.TeamDeathmatchParameters
// 0x0014
struct FTeamDeathmatchParameters
{
	int                                                RoundScoreLimit;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionInterval;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionDuration;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionStep;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarrierHeatUpDuration;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TeleportUserDataReplicator
// 0x0008
struct FTeleportUserDataReplicator
{
	class UTeleportUserData*                           UserData;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TeleportRepData
// 0x0030
struct FTeleportRepData
{
	unsigned char                                      RequestID;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsInProgress;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Subject;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x000C(0x000C) (IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FTeleportUserDataReplicator                 UserDataReplicator;                                       // 0x0028(0x0008)
};

// ScriptStruct ConZ.Tractor4WAnimWheelData
// 0x0008
struct FTractor4WAnimWheelData
{
	float                                              RollAngle;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SteerAngle;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.UserServerHistoryItem
// 0x0028
struct FUserServerHistoryItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.UserProfileAuthorityInfo
// 0x0040
struct FUserProfileAuthorityInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Ip;                                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ResponsePort;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GameplayPort;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FString                                     AuthToken;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.VehicleCorpseBurningParticles
// 0x0070
struct FVehicleCorpseBurningParticles
{
	class UParticleSystem*                             Particles;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  ParticlesTransform;                                       // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FHeatSourceParameters                       HeatSourceParameters;                                     // 0x0040(0x0020) (Edit)
	struct FDbIntegerId                                HeatSourceId;                                             // 0x0060(0x0008)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerDataBasedOnPreset
// 0x0028
struct FVehicleSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideVehicleClasses;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideProbability;                                      // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x000A(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.VehicleSpawnerDataBasedOnPreset.VehicleClasses
	float                                              Probability;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerMarker
// 0x0060
struct FVehicleSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FVehicleSpawnerDataBasedOnPreset            Spawner;                                                  // 0x0030(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ExpirableVehicleSpawner
// 0x0028
struct FExpirableVehicleSpawner
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int64_t                                            ExpirationTime;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FPrimaryAssetId                             VehicleAssetId;                                           // 0x0018(0x0010) (Edit)
};

// ScriptStruct ConZ.VehicleSpawnerData
// 0x0018
struct FVehicleSpawnerData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.VehicleSpawnerData.VehicleClasses
	float                                              Probability;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ClassesArray
// 0x0020
struct FClassesArray
{
	TArray<class UClass*>                              Classes;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              ProhibitedClasses;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.WashItemData
// 0x0010
struct FWashItemData
{
	class UClass*                                      CleanItem;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WashItemUsage;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.Waypoint
// 0x0030
struct FWaypoint
{
	EAnimalWaypointType                                Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Center;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                AnimalsSpawnedNum;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class AAnimal2>>             SpawnedAnimals;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.WeaponBowAimOffsets
// 0x0018
struct FWeaponBowAimOffsets
{
	class UBlendSpace*                                 DrawPercentage[0x3];                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponBowArmsShake
// 0x0030
struct FWeaponBowArmsShake
{
	class UAnimSequenceBase*                           ThirdPerson[0x3];                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           FirstPerson[0x3];                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponBowStateDataReplicated
// 0x000C
struct FWeaponBowStateDataReplicated
{
	EBowDrawPercentage                                 BowDrawPercentage;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HoldTimeInFullDraw;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	EWeaponBowState                                    WeaponBowState;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieMeshVariation2
// 0x0010
struct FZombieMeshVariation2
{
	class USkeletalMesh*                               DressedMesh;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               StrippedMesh;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceAnimations
// 0x0008
struct FZombieRelaxedStanceAnimations
{
	class UAnimSequenceBase*                           WalkLoopAnimation;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceVariation2
// 0x0020
struct FZombieRelaxedStanceVariation2
{
	struct FZombieRelaxedStanceAnimations              Animations;                                               // 0x0000(0x0008) (Edit)
	float                                              WalkAcceleration;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkDeceleration;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedInAnimation;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkTurnRate;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieCombatStanceAnimations
// 0x0018
struct FZombieCombatStanceAnimations
{
	class UAnimSequenceBase*                           RunStartAnimation;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunLoopAnimation;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunStopAnimation;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieCombatStanceVariation2
// 0x0030
struct FZombieCombatStanceVariation2
{
	struct FZombieCombatStanceAnimations               Animations;                                               // 0x0000(0x0018) (Edit)
	float                                              RunAcceleration;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunDeceleration;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeedInAnimation;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunTurnRate;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieTurnMontageDescription
// 0x0040
struct FZombieTurnMontageDescription
{
	class UAnimSequenceBase*                           AnimationL90;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationL180;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationR90;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationR180;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TurnAngleCurveName;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTriggerTime;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieAttackDescription
// 0x0020
struct FZombieAttackDescription
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              PitchRange;                                               // 0x0008(0x0008) (Edit)
	float                                              MinDistance;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlMultiplier;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieRagdollAutoRecovery
// 0x0008
struct FZombieRagdollAutoRecovery
{
	EZombieRagdollAutoRecoveryType                     Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Timespan;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieMeshVariation
// 0x0020
struct FZombieMeshVariation
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (Edit)
	class USkeletalMesh*                               DressedMesh;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               StrippedMesh;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGender                                            Gender;                                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieAttributesVariation
// 0x0040
struct FZombieAttributesVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (Edit)
	float                                              HitPoints;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedMeleeDamageMultiplier;                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedMeleeDamageKnockoutChanceMultiplier;              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InflictedMeleeDamageMultiplier;                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinConsecutiveReceivedDamageRatioToBeKnockedOut;          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxConsecutiveReceivedDamageRatioToBeKnockedOut;          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumConsecutiveReceivedMeleeHitsToBeKnockedOut;         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumConsecutiveReceivedMeleeHitsToBeKnockedOut;         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceVariation
// 0x0040
struct FZombieRelaxedStanceVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (Edit)
	class UAnimSequenceBase*                           WalkLoopAnimation;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkAcceleration;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkDeceleration;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedInAnimation;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkTurnRate;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieCombatStanceVariation
// 0x0050
struct FZombieCombatStanceVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (Edit)
	class UAnimSequenceBase*                           RunStartAnimation;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunLoopAnimation;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunStopAnimation;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunAcceleration;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunDeceleration;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeedInAnimation;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunTurnRate;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombiesVariations
// 0x0040
struct FZombiesVariations
{
	TArray<struct FZombieMeshVariation>                MeshVariations;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FZombieAttributesVariation>          AttributesVariations;                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FZombieRelaxedStanceVariation>       RelaxedStanceVariations;                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FZombieCombatStanceVariation>        CombatStanceVariations;                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.AchievementStats
// 0x0001
struct FAchievementStats
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.Achievements
// 0x0001
struct FAchievements
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.AnimalData
// 0x0028
struct FAnimalData
{
	class UClass*                                      AnimalClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AAnimal2*>                            AliveAnimals;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class ACorpse*>                             DeadAnimals;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ConZ.HitByMeleeImpactSoundsInfo
// 0x0010
struct FHitByMeleeImpactSoundsInfo
{
	ECharacterImpactSourceSoundCategory                ImpactSourceSoundCategory;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDetectHitCollisionType                            ImpactBodyPart;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     ImpactPoint;                                              // 0x0004(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterStats
// 0x0030
struct FCharacterStats
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FamePoints;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FameLevel;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventScore;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventKills;                                               // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventDeaths;                                              // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventSuicides;                                            // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventAssists;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventHeadshots;                                           // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBanned;                                                 // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterStatsItem
// 0x0048
struct FCharacterStatsItem
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FCharacterStats                             CharacterStats;                                           // 0x0018(0x0030) (BlueprintVisible)
};

// ScriptStruct ConZ.SelectedChoppingTool
// 0x0040
struct FSelectedChoppingTool
{
	class AItem*                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FChoppingTool2                              Tool;                                                     // 0x0008(0x0030)
	bool                                               IsRequiredToBeInHands;                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ConZPlacementQueryParams
// 0x0010
struct FConZPlacementQueryParams
{
	bool                                               IsSnapping;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               MustBePlacedOnFoundations;                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanEverBePlacedOnFoundations;                             // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBePlacedOnOtherBaseElements;                           // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class APrisoner*                                   User;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseElementSnappingPoints
// 0x0078
struct FConZBaseElementSnappingPoints
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementSnappingPoint
// 0x002C
struct FConZBaseElementSnappingPoint
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementDescription
// 0x0170
struct FConZBaseElementDescription
{
	int64_t                                            ElementID;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ElementName;                                              // 0x0008(0x0010) (ZeroConstructor)
	int64_t                                            OwnerUserId;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerName;                                                // 0x0020(0x0010) (ZeroConstructor)
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (IsPlainOldData)
	class UClass*                                      ElementClass;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	EBaseElementType                                   ElementType;                                              // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0068(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	struct FVector                                     BoundingBoxMin;                                           // 0x006C(0x000C) (IsPlainOldData)
	struct FVector                                     BoundingBoxMax;                                           // 0x0078(0x000C) (IsPlainOldData)
	unsigned char                                      HeightLevel;                                              // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxHeightLevel;                                           // 0x0085(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NeighboursFlags;                                          // 0x0086(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0087(0x0001) MISSED OFFSET
	struct FConZBaseElementSnappingPoints              SnappingPoints;                                           // 0x0088(0x0078)
	struct FConZBaseBuildingSnappingData               SnappingData;                                             // 0x0100(0x0010)
	TArray<struct FBaseElementSnapMarker>              SnapMarkers;                                              // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FConZBaseElementSnappingPoint>       SnappingPointArray;                                       // 0x0120(0x0010) (ZeroConstructor)
	float                                              HealthPointsPercentage;                                   // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxHealthPoints;                                          // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamaged;                                             // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              DecayPerHour;                                             // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RadialDamageMultiplier;                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldRemoveIntersectingElementsOnDestroy;                // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	TWeakObjectPtr<class ADoor>                        DoorActor;                                                // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               QueuedDestroy;                                            // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	int64_t                                            LastFlagAreaAccessTime;                                   // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Quality;                                                  // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x0164(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementData
// 0x0070
struct FConZBaseElementData
{
	int64_t                                            ElementID;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            OwnerPlayerId;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	class UClass*                                      ElementClass;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              HealthPoints;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Quality;                                                  // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoorElementStateFlags;                                    // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<class UClass*>                              DoorUpgrades;                                             // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZMapLocationProperties
// 0x0004
struct FConZMapLocationProperties
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.RecipeAvailabilityState
// 0x00C8
struct FRecipeAvailabilityState
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct ConZ.RecipeItemState
// 0x001C
struct FRecipeItemState
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingPart
// 0x0030
struct FCraftingPart
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ConZ.ExplosionRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FExplosionRadialDamageEvent : public FRadialDamageEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.BuildingsReplicationHelper
// 0x00E0
struct FBuildingsReplicationHelper
{
	TMap<struct FString, struct FBuildingData>         BuildingsData;                                            // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
	TMap<struct FString, struct FDoorRepData>          DoorRepData;                                              // 0x0070(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET
};

// ScriptStruct ConZ.FortificationMarkerParams
// 0x0030
struct FFortificationMarkerParams
{
	bool                                               IsValid;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MarkerIndex;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (IsPlainOldData)
	float                                              Scale;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PlayerPawnBirdInfo
// 0x0010
struct FPlayerPawnBirdInfo
{
	int                                                CoastalBirdsinProximity;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ContinetalBirdsinProximity;                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                VirtualAssignedCoastalBirds;                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                VirtualAssignedContinentalBirds;                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.HeatSource
// 0x0040
struct FHeatSource
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FHeatSourceParameters                       parameters;                                               // 0x0010(0x0020) (Edit)
	float                                              FuelDuration;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FuelCapacity;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TimesUpdatedWithoutMoving;                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactResult
// 0x0018
struct FHitReactResult
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FollowupMontage;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InstanceManager
// 0x0058
struct FInstanceManager
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ConZ.VirtualizedItemDescription
// 0x0008
struct FVirtualizedItemDescription
{
	TWeakObjectPtr<class AItem>                        Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.LandingDamageEvent
// 0x0010 (0x00B8 - 0x00A8)
struct FLandingDamageEvent : public FPointDamageEvent
{
	struct FVector                                     ImpactVelocity;                                           // 0x00A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeDodge
// 0x0010
struct FMeleeDodge
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeAttack
// 0x0018
struct FMeleeAttack
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.MeleePointDamageEvent
// 0x0058 (0x0100 - 0x00A8)
struct FMeleePointDamageEvent : public FPointDamageEvent
{
	struct FMeleeWeaponDesc                            WeaponDesc;                                               // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FGameplayTag                                AttackCapsuleAttachment;                                  // 0x00D0(0x0008) (Edit, BlueprintVisible)
	EDetectHitCollisionType                            DetectHitCollisionType;                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class UAnimMontage*                                AttackMontage;                                            // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              KnockoutChance;                                           // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHitDirectionType                                  HitDirectionType;                                         // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class AItem*                                       Weapon;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MeshInstancesMap
// 0x0050
struct FMeshInstancesMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.MeshInstances
// 0x0050
struct FMeshInstances
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.MeshInstance
// 0x0038
struct FMeshInstance
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ConZ.MeshItemData
// 0x0058
struct FMeshItemData
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ConZ.MissionLevelInfo
// 0x0010
struct FMissionLevelInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.ActiveManagers
// 0x0010
struct FActiveManagers
{
	TArray<class AMissionManager*>                     MissionManagers;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.ObjectiveDataGroup
// 0x0018
struct FObjectiveDataGroup
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.ObjectiveDataGroup.RewardItems
	float                                              RewardFamePoints;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ObjectiveTrackableData
// 0x0008
struct FObjectiveTrackableData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.BodyPartInjury
// 0x0008
struct FBodyPartInjury
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.InstrumentEvent
// 0x0010
struct FInstrumentEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.WindowDetectionParams
// 0x0038
struct FWindowDetectionParams
{
	struct FVector                                     CharacterHeadLocation;                                    // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     CharacterFeetLocation;                                    // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     CharacterForwardVector;                                   // 0x0018(0x000C) (IsPlainOldData)
	float                                              MaxHorzDistanceToWindow;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxCharacterToWindowAngle;                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorzHitDetectionBias;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionBiasBelowWindow;                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionBiasAboveWindow;                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.LadderDetectionParams
// 0x0020
struct FLadderDetectionParams
{
	struct FVector                                     RayOrigin;                                                // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     RayDirection;                                             // 0x000C(0x000C) (IsPlainOldData)
	float                                              MaxHorzDistanceToLadder;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxRayToLadderAngle;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerRestingParameters
// 0x0060
struct FPrisonerRestingParameters
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerDistanceTravelledContext
// 0x0018
struct FPrisonerDistanceTravelledContext
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerViolation
// 0x0010
struct FPrisonerViolation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.SkillExperienceChange
// 0x0008
struct FSkillExperienceChange
{
	float                                              ExperienceChange;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerViewInfo
// 0x0010 (0x0580 - 0x0570)
struct FPrisonerViewInfo : public FMinimalViewInfo
{
	float                                              MinViewYaw;                                               // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxViewYaw;                                               // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinViewPitch;                                             // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxViewPitch;                                             // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0578(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FProjectileRadialDamageEvent : public FRadialDamageEvent
{
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.EngineeringEventData
// 0x0004
struct FEngineeringEventData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventThrownItemHitTarget
// 0x0008
struct FSkillEventThrownItemHitTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventItemThrown
// 0x0001
struct FSkillEventItemThrown
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventWeaponReload
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponReload : public FSkillEventWeapon
{

};

// ScriptStruct ConZ.SkillEventWeaponFireShot
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponFireShot : public FSkillEventWeapon
{

};

// ScriptStruct ConZ.StaticMeshInstanceId
// 0x0010
struct FStaticMeshInstanceId
{
	class UInstancedStaticMeshComponent*               Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ObjectiveItem
// 0x0010
struct FObjectiveItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ThrowingPointDamageEvent
// 0x0018 (0x00C0 - 0x00A8)
struct FThrowingPointDamageEvent : public FPointDamageEvent
{
	TWeakObjectPtr<class AActor>                       ThrownActor;                                              // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitVelocity;                                              // 0x00B0(0x000C) (IsPlainOldData)
	bool                                               IsHeadUpperShot;                                          // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DidPierce;                                                // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.UsableObjectiveItem
// 0x0010
struct FUsableObjectiveItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehiclePartDescription
// 0x0010
struct FVehiclePartDescription
{
	struct FGameplayTag                                PartType;                                                 // 0x0000(0x0008) (Edit)
	float                                              health;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleExhaustEffectsParameters
// 0x0070
struct FVehicleExhaustEffectsParameters
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	class UParticleSystem*                             EngineStartedParticleSystem;                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EngineIdleParticleSystem;                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThrottlePressedParticleSystem;                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ThrottlePressedAudioEvent;                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDurationBetweenThrottlePressedEffects;                 // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.Version
// 0x0010
struct FVersion
{
	int                                                Major;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minor;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Build;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Revision;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponBowDrawData
// 0x000C
struct FWeaponBowDrawData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.WeaponSyncData
// 0x000C
struct FWeaponSyncData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.WorldEventDrawData
// 0x0050
struct FWorldEventDrawData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
