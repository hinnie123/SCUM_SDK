#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

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
	Fill                           = 17,
	Tank                           = 18,
	Craft                          = 19,
	Uncraft                        = 20,
	Create                         = 21,
	Fix                            = 22,
	Eat                            = 23,
	EatAll                         = 24,
	Drink                          = 25,
	DrinkAll                       = 26,
	Equip                          = 27,
	UnEquip                        = 28,
	Cut                            = 29,
	Collect                        = 30,
	LightFire                      = 31,
	Prepare                        = 32,
	Cook                           = 33,
	Chop                           = 34,
	SmokeFood                      = 35,
	Destroy                        = 36,
	Store                          = 37,
	TakeInHands                    = 38,
	RemoveFromHands                = 39,
	AddToQuickAccess               = 40,
	RemoveFromQuickAccess          = 41,
	ChamberBullet                  = 42,
	LoadAmmo                       = 43,
	UnloadAmmo                     = 44,
	Swap                           = 45,
	Join                           = 46,
	Split                          = 47,
	Unpack                         = 48,
	CheckPulse                     = 49,
	Diagnose                       = 50,
	MakeConscious                  = 51,
	ArtificalPerspiration          = 52,
	PullTooth                      = 53,
	PatchWounds                    = 54,
	ImmobilizeLimbs                = 55,
	MendBones                      = 56,
	TreatSickness                  = 57,
	PerformLocalAnesthesia         = 58,
	PerformGeneralAnesthesia       = 59,
	PerformSurgery                 = 60,
	RevivePatient                  = 61,
	InviteToTeam                   = 62,
	RemoveFromTeam                 = 63,
	LeaveTeam                      = 64,
	Urinate                        = 65,
	Defecate                       = 66,
	Vomit                          = 67,
	CheckTime                      = 68,
	GestureShowFinger              = 69,
	GestureStandSurrender          = 70,
	GestureWaveHi                  = 71,
	GestureYouAreDead              = 72,
	GestureFY                      = 73,
	GesturePoint                   = 74,
	PlayInstrument                 = 75,
	MakeUnconscious                = 76,
	PacifyAnimal                   = 77,
	TameAnimal                     = 78,
	LearnAnimal                    = 79,
	CommandAnimal                  = 80,
	FeedAnimal                     = 81,
	EInteractionType_MAX           = 82
};


// Enum ConZ.EWidgetDisplayInfoType
enum class EWidgetDisplayInfoType : uint8_t
{
	None                           = 0,
	FirstOverSecond                = 1,
	Single                         = 2,
	EWidgetDisplayInfoType_MAX     = 3
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


// Enum ConZ.EDoorStateFlags
enum class EDoorStateFlags : uint8_t
{
	None                           = 0,
	Open                           = 1,
	Locked                         = 2,
	HasPower                       = 3,
	ChangeSide                     = 4,
	EDoorStateFlags_MAX            = 5
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
	Male                           = 1,
	Female                         = 2,
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
	Count                          = 3,
	EPrisonerStance_MAX            = 4
};


// Enum ConZ.EPrisonerTeleportState
enum class EPrisonerTeleportState : uint8_t
{
	None                           = 0,
	FadeOut                        = 1,
	WaitUntilReady                 = 2,
	SpawnScreen                    = 3,
	FadeIn                         = 4,
	EPrisonerTeleportState_MAX     = 5
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
	LowBloodSugar                  = 16,
	NoseBleeding                   = 17,
	FeelingCold                    = 18,
	Fatigue                        = 19,
	HeartPalpitations              = 20,
	RespiratoryProblems            = 21,
	RespiratoryFailure             = 22,
	Confusion                      = 23,
	Nausea                         = 24,
	BlurredVision                  = 25,
	NightBlindness                 = 26,
	Pellagra                       = 27,
	PainfulJoints                  = 28,
	SkinProblems                   = 29,
	MuscleWeakness                 = 30,
	ItchingFeet                    = 31,
	Headache                       = 32,
	LightChestPain                 = 33,
	SeriousChestPain               = 34,
	CardiacArrest                  = 35,
	GrayHair                       = 36,
	HairLoss                       = 37,
	ColdHands                      = 38,
	Fever                          = 39,
	ApetiteLoss                    = 40,
	MemoryLoss                     = 41,
	Anemia                         = 42,
	Cramps                         = 43,
	Numbness                       = 44,
	Farts                          = 45,
	Constipation                   = 46,
	AbdominalPain                  = 47,
	StomachPain                    = 48,
	Seizures                       = 49,
	Burping                        = 50,
	Vomiting                       = 51,
	StomachRupture                 = 52,
	LiverFailure                   = 53,
	Diarrhea                       = 54,
	Dizziness                      = 55,
	Depression                     = 56,
	Lethargy                       = 57,
	Hallucinations                 = 58,
	Delirium                       = 59,
	DecreasedConsciousness         = 60,
	DifficultySleeping             = 61,
	Overdose                       = 62,
	Tiring                         = 63,
	Fainting                       = 64,
	Count                          = 65,
	EBodyState_MAX                 = 66
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


// Enum ConZ.ETabMode
enum class ETabMode : uint8_t
{
	None                           = 0,
	Inventory                      = 1,
	EventsAndQuests                = 2,
	BCU                            = 3,
	Crafting                       = 4,
	ETabMode_MAX                   = 5
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
	Count                          = 8,
	EWeaponCategory_MAX            = 9
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


// Enum ConZ.EPlayingInstrumentInHandsState
enum class EPlayingInstrumentInHandsState : uint8_t
{
	None                           = 0,
	Starting                       = 1,
	Playing                        = 2,
	Stopping                       = 3,
	EPlayingInstrumentInHandsState_MAX = 4
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


// Enum ConZ.EChatType
enum class EChatType : uint8_t
{
	Default                        = 0,
	Local                          = 1,
	Global                         = 2,
	EChatType_MAX                  = 3
};


// Enum ConZ.ECharacterStatsSorting
enum class ECharacterStatsSorting : uint8_t
{
	ByFamePoints                   = 0,
	ByEventScore                   = 1,
	ByEventKills                   = 2,
	ByEventDeaths                  = 3,
	ECharacterStatsSorting_MAX     = 4
};


// Enum ConZ.EClothesType
enum class EClothesType : uint8_t
{
	None                           = 0,
	HeadUpper                      = 1,
	HeadUpperSkeletal              = 2,
	HeadLower                      = 3,
	Head                           = 4,
	Eyes                           = 5,
	Neck                           = 6,
	Body_LongSleeves               = 7,
	Body_ShortSleeves              = 8,
	Body_Armor                     = 9,
	Hands                          = 10,
	Legs                           = 11,
	Feet                           = 12,
	Underwear                      = 13,
	Back                           = 14,
	Waist                          = 15,
	Suit                           = 16,
	Count                          = 17,
	EClothesType_MAX               = 18
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


// Enum ConZ.EItemContainerOperation
enum class EItemContainerOperation : uint8_t
{
	Initialize                     = 0,
	AddItem                        = 1,
	MoveItem                       = 2,
	RemoveItem                     = 3,
	Close                          = 4,
	EItemContainerOperation_MAX    = 5
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


// Enum ConZ.EPrisonerSex
enum class EPrisonerSex : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	EPrisonerSex_MAX               = 2
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


// Enum ConZ.EWeaponFiringMode
enum class EWeaponFiringMode : uint8_t
{
	Automatic                      = 0,
	SingleShot                     = 1,
	EWeaponFiringMode_MAX          = 2
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
	ECharacterActionNotifyType_MAX = 7
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
	ECharacterActionConstraint_MAX = 4
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


// Enum ConZ.EInteractionTargetType
enum class EInteractionTargetType : uint8_t
{
	Self                           = 0,
	HoveredInteractable            = 1,
	Specified                      = 2,
	EInteractionTargetType_MAX     = 3
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


// Enum ConZ.EConfigFile
enum class EConfigFile : uint8_t
{
	None                           = 0,
	Engine                         = 1,
	GameUserSettings               = 2,
	ServerSettings                 = 3,
	EConfigFile_MAX                = 4
};


// Enum ConZ.ECraftingItemCategory
enum class ECraftingItemCategory : uint8_t
{
	None                           = 0,
	ToolsAndWeapons                = 1,
	Items                          = 2,
	Food                           = 3,
	ECraftingItemCategory_MAX      = 4
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


// Enum ConZ.EDbConnectionOpenMode
enum class EDbConnectionOpenMode : uint8_t
{
	None                           = 0,
	ReadOnly                       = 1,
	ReadWrite                      = 2,
	EDbConnectionOpenMode_MAX      = 3
};


// Enum ConZ.EDbUserProfileType
enum class EDbUserProfileType : uint8_t
{
	Singleplayer                   = 0,
	MultiplayerAuthority           = 1,
	MultiplayerCache               = 2,
	EDbUserProfileType_MAX         = 3
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
	EWarningType_MAX               = 4
};


// Enum ConZ.EImpactSeverity
enum class EImpactSeverity : uint8_t
{
	Light                          = 0,
	Medium                         = 1,
	Heavy                          = 2,
	EImpactSeverity_MAX            = 3
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


// Enum ConZ.EMouseSensitivityMode
enum class EMouseSensitivityMode : uint8_t
{
	None                           = 0,
	ThirdPerson                    = 1,
	FirstPerson                    = 2,
	DownTheSight                   = 3,
	Scope                          = 4,
	EMouseSensitivityMode_MAX      = 5
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


// Enum ConZ.EPlacementState
enum class EPlacementState : uint8_t
{
	Placing                        = 0,
	PlacedPending                  = 1,
	Placed                         = 2,
	EPlacementState_MAX            = 3
};


// Enum ConZ.EIngredientUsageRule
enum class EIngredientUsageRule : uint8_t
{
	Quantity                       = 0,
	Usage                          = 1,
	Weight                         = 2,
	EIngredientUsageRule_MAX       = 3
};


// Enum ConZ.EPlayableInstrumentChord
enum class EPlayableInstrumentChord : uint8_t
{
	Chord1                         = 0,
	Chord2                         = 1,
	EPlayableInstrumentChord_MAX   = 2
};


// Enum ConZ.EPlayableInstrumentTone
enum class EPlayableInstrumentTone : uint8_t
{
	Tone1                          = 0,
	Tone2                          = 1,
	EPlayableInstrumentTone_MAX    = 2
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
	Count                          = 14,
	EPrisonerAnimationCurve_MAX    = 15
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
	Count                          = 11,
	EPrisonerFirstPersonSubview_MAX = 12
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
	EPrisonerHUDMode_MAX           = 7
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
	SearchObjectWhileItemInHands   = 12,
	SearchObjectWhileWeaponInHands = 13,
	SearchPrisoner                 = 14,
	SearchZombie                   = 15,
	PatchWounds                    = 16,
	PatchWoundsEnd                 = 17,
	DrinkInteraction               = 18,
	Eat                            = 19,
	Drink                          = 20,
	Throw                          = 21,
	SwapWeapons                    = 22,
	ChopTree                       = 23,
	ChopTreeEnd                    = 24,
	ChopLog                        = 25,
	ChopLogEnd                     = 26,
	SwapItemsNotWeaponToNotWeapon  = 27,
	SwapItemsWeaponToWeapon        = 28,
	SwapItemsNotWeaponToWeapon     = 29,
	SwapItemsWeaponToNotWeapon     = 30,
	Craft                          = 31,
	Uncraft                        = 32,
	CheckTime                      = 33,
	CheckTimeWhileItemInHands      = 34,
	CheckTimeWhileWeaponInHands    = 35,
	GestureShowFinger              = 36,
	GestureStandSurrender          = 37,
	GestureWaveHi                  = 38,
	GestureYouAreDead              = 39,
	GestureFY                      = 40,
	GesturePoint                   = 41,
	CommitSuicide                  = 42,
	Count                          = 43,
	EPrisonerMontage_MAX           = 44
};


// Enum ConZ.EWeaponAnimationPose
enum class EWeaponAnimationPose : uint8_t
{
	None                           = 0,
	Relaxed                        = 1,
	AimingHip                      = 2,
	AimingDownTheSights            = 3,
	Count                          = 4,
	EWeaponAnimationPose_MAX       = 5
};


// Enum ConZ.EPrisonerAnimationSet
enum class EPrisonerAnimationSet : uint8_t
{
	Base                           = 0,
	Rifle                          = 1,
	RifleRelaxed                   = 2,
	UnarmedCombat                  = 3,
	Handgun                        = 4,
	Count                          = 5,
	EPrisonerAnimationSet_MAX      = 6
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
	Diving                         = 9,
	ClimbingWindow                 = 10,
	Defecating                     = 11,
	Count                          = 12,
	EPrisonerThirdPersonSubview_MAX = 13
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
	ESkillReplicationID_MAX        = 20
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


// Enum ConZ.EWeaponActionNotifyType
enum class EWeaponActionNotifyType : uint8_t
{
	None                           = 0,
	ChamberOpened                  = 1,
	ChamberClosed                  = 2,
	ChamberOpenedClosed            = 3,
	EWeaponActionNotifyType_MAX    = 4
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
	Count                          = 2,
	EWeaponType_MAX                = 3
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
	ActionProgressWidgetClass      = 11,
	ItemSelectionWidgetClass       = 12,
	ExamineWidgetClass             = 13,
	HandsInventoryWidgetClass      = 14,
	GenericItemInventoryWidgetClass = 15,
	InventoryContainersWidgetClass = 16,
	CombinedInventoryWidgetClass   = 17,
	TeamInvitationWidgetClass      = 18,
	CraftingInfoWidgetClass        = 19,
	CraftingComponentWidgetClass   = 20,
	CraftingRecipeWidgetClass      = 21,
	EmptySlotWidgetClass           = 22,
	TeamInfoWidgetClass            = 23,
	TeammateNameWidgetClass        = 24,
	PreviousNextSwitchWidgetClass  = 25,
	VicinityItemContainerWidgetClass = 26,
	QuickAccessItemWidget          = 27,
	GameEventPanelWidgetClass      = 28,
	GameEventCardWidgetClass       = 29,
	GameEventScoreboardWidgetClass = 30,
	GameEventMiniScoreboardWidgetClass = 31,
	CircularMenuWidgetClass        = 32,
	CircularMenuSegmentWidgetClass = 33,
	EWidgetType_MAX                = 34
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
	Alerted                        = 1,
	Combat                         = 2,
	EZombieStance_MAX              = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

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
// 0x000C
struct FItemLocation
{
	bool                                               Coastal;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Continantal;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mountain;                                                 // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Urban;                                                    // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Rural;                                                    // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Industrial;                                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Police;                                                   // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Military;                                                 // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TVBase;                                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Sport;                                                    // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Market;                                                   // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               GasStation;                                               // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
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

// ScriptStruct ConZ.InteractionData
// 0x0010
struct FInteractionData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     PointerData;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
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

// ScriptStruct ConZ.InteractionStruct
// 0x0030
struct FInteractionStruct
{
	EInteractionType                                   InteractionType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeWeaponDesc
// 0x0028
struct FMeleeWeaponDesc
{
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sharpness;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KnockoutChance;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DamageMagnitudeChange;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECharacterImpactSourceSoundCategory                ImpactSoundCategory;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
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
	float                                              DamageMultiplier;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ScopeZoomLevelSettings
// 0x0530
struct FScopeZoomLevelSettings
{
	float                                              Magnification;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0010(0x0520) (Edit)
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
// 0x0034
struct FWeaponSpreadData
{
	struct FWeaponSpreadItem                           ByStance[0x3];                                            // 0x0000(0x000C) (Edit)
	float                                              IncrementPerShot;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncrementFromShotsMax;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncrementSpeed;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecrementSpeed;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                HeadIndex;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkinColorIndex;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeadTattooIndex;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BodyTattooIndex;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
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

// ScriptStruct ConZ.CharacterSpawnerData
// 0x0030
struct FCharacterSpawnerData
{
	class UClass*                                      Character;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPhysicalSurface>>              AllowedSurfaces;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CharactersPerCell;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalCharacters;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinElevation;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxElevation;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterStats
// 0x0024
struct FCharacterStats
{
	float                                              FamePoints;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FameLevel;                                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventScore;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventKills;                                               // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventDeaths;                                              // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventSuicides;                                            // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventAssists;                                             // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventHeadshots;                                           // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterStatsItem
// 0x0038
struct FCharacterStatsItem
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FCharacterStats                             CharacterStats;                                           // 0x0010(0x0024) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
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

// ScriptStruct ConZ.CondensedInventorySlot
// 0x0010
struct FCondensedInventorySlot
{
	unsigned char                                      column;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class AItem*                                       Item;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CondensedInventoryContainer
// 0x0018
struct FCondensedInventoryContainer
{
	unsigned char                                      Width;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Height;                                                   // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FCondensedInventorySlot>             Slots;                                                    // 0x0008(0x0010) (ZeroConstructor)
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
	EAnimalAction                                      action;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IndexParameter;                                           // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Version;                                                  // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ImageAssetToLoad
// 0x0018
struct FImageAssetToLoad
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (Edit)
	struct FString                                     FilePath;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
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

// ScriptStruct ConZ.ItemSpawningSettings
// 0x0078
struct FItemSpawningSettings
{
	struct FBox2D                                      WorldBounds;                                              // 0x0000(0x0014) (Edit)
	bool                                               UseQuadTreeToDetermineRelevantSpawnerGroups;              // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              RelevantSpawnerGroupsUpdateInterval;                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups;      // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerGroupsCullDistance;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerGroupsExpirationTimeInMinutes;                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerTasksProcessingInterval;                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerTasksProcessingBudgetInMilliseconds;               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfSpawnerTasksPerUpdate;                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDestroySpawnedItemsIfNoPlayersAround;               // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              RarityValues[0x6];                                        // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerProbabilityMultiplier;                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExamineSpawnerProbabilityMultiplier;                      // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     SaveFileName;                                             // 0x0058(0x0010) (Edit, ZeroConstructor)
	bool                                               DisableSerialization;                                     // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSpawnerProbability;                                 // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemLimit;                                          // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemZone;                                           // 0x006B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemRarity;                                         // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDrawItemSpawnTransforms;                             // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	float                                              DebugDrawItemSpawnTransformsDuration;                     // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseSkeletalMeshRepData
// 0x0070
struct FCorpseSkeletalMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               Visibility;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseStaticMeshRepData
// 0x0070
struct FCorpseStaticMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               Visibility;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpsePoseData
// 0x0080
struct FCorpsePoseData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	TArray<struct FTransform>                          Transforms;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FVector>                             LinearVelocities;                                         // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FVector>                             AngularVelocities;                                        // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
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
// 0x0020
struct FCraftingItem
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPossibleItem>                       PossibleItems;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
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
// 0x0060
struct FGameEventParticipantInfo
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TWeakObjectPtr<class APrisoner>                    Prisoner;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EGameEventParticipantState                         State;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                TeamIndex;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UGameEventParticipantStats*>          RoundStats;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UGameEventParticipantStats*                  EventStats;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class APrisoner*>                           HurtBy;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                RepHelper;                                                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x004C(0x0014) MISSED OFFSET
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
// 0x0180
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
	float                                              ScoreToFameConversionFactor;                              // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<class UItemSelection*>                      PossiblePrimaryWeapons;                                   // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSecondaryWeapons;                                 // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleTertiaryWeapons;                                  // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleOutfits;                                          // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSupportItems;                                     // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      MandatoryGear;                                            // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       EventName;                                                // 0x0108(0x0018) (Edit, BlueprintVisible)
	struct FText                                       EventDescription;                                         // 0x0120(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PrerequisitesText;                                        // 0x0138(0x0018) (Edit, BlueprintVisible)
	struct FText                                       WeaponText;                                               // 0x0150(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RewardsText;                                              // 0x0168(0x0018) (Edit, BlueprintVisible)
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

// ScriptStruct ConZ.ProjectileImpulseMultiplier
// 0x0010
struct FProjectileImpulseMultiplier
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.DbIntegerId
// 0x0008
struct FDbIntegerId
{
	int64_t                                            Value;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DbUserServerHistoryItem
// 0x0028
struct FDbUserServerHistoryItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.DbUserProfileAuthorityInfo
// 0x0040
struct FDbUserProfileAuthorityInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Ip;                                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ResponsePort;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GameplayPort;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FString                                     authToken;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
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

// ScriptStruct ConZ.DistantLevel
// 0x0020
struct FDistantLevel
{
	class AActor*                                      Level;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
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

// ScriptStruct ConZ.ItemSpawnerDataBasedOnPreset
// 0x0088
struct FItemSpawnerDataBasedOnPreset
{
	class UClass*                                      Preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
// 0x00A0
struct FExamineItemSpawnerData
{
	int                                                MinQuantity;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0008(0x0088) (Edit)
	TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes;                              // 0x0090(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.ExamineDataPerItemGroup
// 0x0004
struct FExamineDataPerItemGroup
{
	int                                                MaxNumberOfOccurrences;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HeatEmitter
// 0x001C
struct FHeatEmitter
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	float                                              Temperature;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScale;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
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
	struct FLinearColor                                teamName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
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

// ScriptStruct ConZ.WindowMarker
// 0x001C
struct FWindowMarker
{
	bool                                               IsVaultable;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Vertex1;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
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
// 0x0070
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
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
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
// 0x0024
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
	unsigned char                                      ID;                                                       // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
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
// 0x0050
struct FMeleeSkillAttack
{
	struct FGameplayTagContainer                       AttackTypes;                                              // 0x0000(0x0020) (Edit)
	class UAnimMontage*                                Montage;                                                  // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              PitchRange;                                               // 0x0028(0x0008) (Edit)
	float                                              MaxDistance;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinStamina;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OrientToTargetSpeedFactor;                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaminaDrainMultiplier;                                   // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedAsInitialAttack;                                 // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedToCloseLargeDistanceToTarget;                    // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Solo;                                                     // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mute;                                                     // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlwaysCandidate;                                        // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
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

// ScriptStruct ConZ.PhysicalSurfaceData
// 0x000C
struct FPhysicalSurfaceData
{
	float                                              DirtinessFactor;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandingImpactVelocityModifier;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseLoudnessModifier;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PlaceableIngredient
// 0x0030
struct FPlaceableIngredient
{
	TArray<class UCraftingItemTag*>                    Tags;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              SpecificItems;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	EIngredientUsageRule                               UsageRule;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              Required;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Satisfied;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
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

// ScriptStruct ConZ.PrisonerTeleportRequest
// 0x001C
struct FPrisonerTeleportRequest
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	bool                                               AlwaysShowSpawnScreen;                                    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShowPostTeleportScreen;                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterActionReplicationHelper
// 0x0018
struct FCharacterActionReplicationHelper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
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
// 0x0038 (0x00E0 - 0x00A8)
struct FProjectilePointDamageEvent : public FPointDamageEvent
{
	bool                                               IsHeadUpperShot;                                          // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              EnergyLossPerClothesLayer[0x7];                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      KillerLocation;                                           // 0x00C8(0x000C)
	struct FVector_NetQuantize100                      VictimLocation;                                           // 0x00D4(0x000C)
};

// ScriptStruct ConZ.SkillEventWeapon
// 0x0001
struct FSkillEventWeapon
{
	EWeaponCategory                                    WeaponCategory;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventWeaponProjectileHitTarget
// 0x001F (0x0020 - 0x0001)
struct FSkillEventWeaponProjectileHitTarget : public FSkillEventWeapon
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadShot;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsKill;                                                   // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasSniping;                                               // 0x0016(0x0001) (ZeroConstructor, IsPlainOldData)
	EPrisonerStance                                    Stance;                                                   // 0x0017(0x0001) (ZeroConstructor, IsPlainOldData)
	EWindSpeedCategory                                 WindSpeedCategory;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
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

// ScriptStruct ConZ.ItemArray
// 0x0010
struct FItemArray
{
	TArray<class AItem*>                               Value;                                                    // 0x0000(0x0010) (ZeroConstructor)
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
	EPrisonerSex                                       Sex;                                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
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

// ScriptStruct ConZ.PrisonerClimbingStateForSimulatedProxies
// 0x0038
struct FPrisonerClimbingStateForSimulatedProxies
{
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnchoringTargetLocation;                                  // 0x0018(0x000C) (IsPlainOldData)
	struct FRotator                                    AnchoringTargetRotation;                                  // 0x0024(0x000C) (IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Version;                                                  // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
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
// 0x0060
struct FPrisonerMovementSettings_Ground_Standing
{
	struct FPrisonerMovementSettings_Ground_Standing_Walking Walking;                                                  // 0x0000(0x0030) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging Jogging;                                                  // 0x0030(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Running Running;                                                  // 0x0054(0x000C) (Edit)
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
// 0x0048
struct FPrisonerMovementSettings_Ground_Crouching
{
	struct FPrisonerMovementSettings_Ground_Crouching_Walking Walking;                                                  // 0x0000(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkingFaster;                                            // 0x0024(0x0024) (Edit)
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
// 0x00F4
struct FPrisonerMovementSettings_Ground
{
	struct FPrisonerMovementSettings_Ground_Standing   Standing;                                                 // 0x0000(0x0060) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching  Crouching;                                                // 0x0060(0x0048) (Edit)
	struct FPrisonerMovementSettings_Ground_Prone      Prone;                                                    // 0x00A8(0x0024) (Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMinimal;         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMaximal;         // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenImmersedInWater;                // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenImmersedInWater;                // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
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
// 0x0048
struct FPrisonerMovementSettings_Water
{
	struct FPrisonerWaterMovementParameters            Slow;                                                     // 0x0000(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            Medium;                                                   // 0x000C(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            Fast;                                                     // 0x0018(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            Diving;                                                   // 0x0024(0x000C) (Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PlayerLoginInfo
// 0x0050
struct FPlayerLoginInfo
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0010(0x0008) (BlueprintVisible)
	struct FString                                     UserProfileName;                                          // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     ServerName;                                               // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FDbIntegerId                                ServerUserProfileId;                                      // 0x0040(0x0008) (BlueprintVisible)
	float                                              TimeToRemainInGameAfterLeaveGameRequest;                  // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
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
// 0x0028
struct FProjectileData
{
	float                                              Caliber;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleVelocity;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BallisticCoefficient;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EBallisticDragModel                                BallisticDragModel;                                       // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationFactor;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ConZ.ImpactEffectData
// 0x0010
struct FImpactEffectData
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Decal;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.RunningSkillParametersPerSkillLevel
// 0x0010
struct FRunningSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   MaxSpeedMultiplier;                                       // 0x0000(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaConsumptionMultiplier;                             // 0x0008(0x0008) (Edit)
};

// ScriptStruct ConZ.SearchPerItemData
// 0x0018
struct FSearchPerItemData
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinQuantity;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
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

// ScriptStruct ConZ.HandsPoseCorrections
// 0x0020
struct FHandsPoseCorrections
{
	class UAnimSequenceBase*                           RightHand;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightFist;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightFistInCombatMode;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightHandToIdleBlendAlpha;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
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
// 0x0018
struct FZombieMeshVariation
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (Edit)
	class USkeletalMesh*                               DressedMesh;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               StrippedMesh;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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

// ScriptStruct ConZ.SelectedChoppingTool
// 0x0040
struct FSelectedChoppingTool
{
	class AItem*                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FChoppingTool2                              Tool;                                                     // 0x0008(0x0030)
	bool                                               IsRequiredToBeInHands;                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
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
// 0x0028
struct FCraftingPart
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ConZ.ExplosionRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FExplosionRadialDamageEvent : public FRadialDamageEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
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

// ScriptStruct ConZ.BodyPartInjury
// 0x0008
struct FBodyPartInjury
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
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
// 0x002C
struct FLadderDetectionParams
{
	struct FVector                                     RayOrigin;                                                // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     RayDirection;                                             // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     CharacterLocation;                                        // 0x0018(0x000C) (IsPlainOldData)
	float                                              MaxHorzDistanceToLadder;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxRayToLadderAngle;                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerViolation
// 0x0010
struct FPrisonerViolation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
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

// ScriptStruct ConZ.Version
// 0x0010
struct FVersion
{
	int                                                Major;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minor;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Build;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Revision;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponSyncData
// 0x000C
struct FWeaponSyncData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.WorldEventDrawData
// 0x0040
struct FWorldEventDrawData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
