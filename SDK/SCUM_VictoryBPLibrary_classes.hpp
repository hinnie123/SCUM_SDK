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

// Class VictoryBPLibrary.TKMathFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTKMathFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VictoryBPLibrary.TKMathFunctionLibrary");
		return ptr;
	}


	struct FVector STATIC_VectorRadiansToDegrees(const struct FVector& RadVector);
	struct FVector STATIC_VectorDegreesToRadians(const struct FVector& DegVector);
	bool STATIC_SphereBoxIntersection(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
	float STATIC_SignedDistancePlanePoint(const struct FVector& PlaneNormal, const struct FVector& planePoint, const struct FVector& Point);
	struct FVector STATIC_SetVectorLength(const struct FVector& A, float Size);
	void STATIC_SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FVector& Offset, const struct FName& BoneName);
	int STATIC_RoundToUpperMultiple(int A, int Multiple, bool skipSelf);
	int STATIC_RoundToNearestMultiple(int A, int Multiple);
	int STATIC_RoundToLowerMultiple(int A, int Multiple, bool skipSelf);
	struct FVector STATIC_ProjectPointOnLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& Point);
	int STATIC_PointOnWhichSideOfLineSegment(const struct FVector& LinePoint1, const struct FVector& LinePoint2, const struct FVector& Point);
	struct FVector2D STATIC_NegateVector2D(const struct FVector2D& A);
	int STATIC_NegateInt(int A);
	float STATIC_NegateFloat(float A);
	bool STATIC_LineToLineIntersection(const struct FVector& LinePoint1, const struct FVector& LineDir1, const struct FVector& LinePoint2, const struct FVector& LineDir2, struct FVector* IntersectionPoint);
	bool STATIC_LineExtentBoxIntersection(const struct FBox& inBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, float* HitTime);
	bool STATIC_IsPowerOfTwo(int X);
	bool STATIC_IsPointInsideBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
	bool STATIC_IsMultipleOf(int A, int Multiple);
	bool STATIC_IsLineInsideSphere(const struct FVector& LineStart, const struct FVector& LineDir, float LineLength, const struct FVector& SphereOrigin, float SphereRadius);
	bool STATIC_IsEvenNumber(float A);
	struct FVector STATIC_GridSnap(const struct FVector& A, float Grid);
	struct FVector STATIC_GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FVector& Point, const struct FName& BoneName, bool DrawDebugInfo);
	int STATIC_GetConsoleVariableInt(const struct FString& VariableName);
	float STATIC_GetConsoleVariableFloat(const struct FString& VariableName);
	float STATIC_ConvertPhysicsLinearVelocity(const struct FVector& Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit);
	void STATIC_ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets);
	bool STATIC_ClosestPointsOnTwoLines(const struct FVector& LinePoint1, const struct FVector& lineVec1, const struct FVector& LinePoint2, const struct FVector& lineVec2, struct FVector* closestPointLine1, struct FVector* closestPointLine2);
	void STATIC_ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2);
	struct FVector STATIC_ClosestPointOnSphereToLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineOrigin, const struct FVector& LineDir);
	struct FVector STATIC_ClosestPointOnLineSeqment(const struct FVector& Point, const struct FVector& LineStart, const struct FVector& LineEnd);
	bool STATIC_AreLineSegmentsCrossing(const struct FVector& pointA1, const struct FVector& pointA2, const struct FVector& pointB1, const struct FVector& pointB2);
};


// Class VictoryBPLibrary.VictoryBPFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VictoryBPLibrary.VictoryBPFunctionLibrary");
		return ptr;
	}


	bool STATIC_WorldType__InPIEWorld(class UObject* WorldContextObject);
	bool STATIC_WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
	bool STATIC_WorldType__InEditorWorld(class UObject* WorldContextObject);
	bool STATIC_WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);
	class UUserWidget* STATIC_WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass);
	void STATIC_WidgetGetChildrenOfClass(class UWidget* ParentWidget, class UClass* WidgetClass, bool bImmediateOnly, TArray<class UUserWidget*>* ChildWidgets);
	void STATIC_Visibility__GetRenderedActors(class UObject* WorldContextObject, float MinRecentTime, TArray<class AActor*>* CurrentlyRenderedActors);
	void STATIC_Visibility__GetNotRenderedActors(class UObject* WorldContextObject, float MinRecentTime, TArray<class AActor*>* CurrentlyNotRenderedActors);
	bool STATIC_ViewportPositionDeproject(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection);
	bool STATIC_Viewport__SetMousePosition(class APlayerController* ThePC, float PosX, float PosY);
	bool STATIC_Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY);
	bool STATIC_Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY);
	bool STATIC_Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld);
	bool STATIC_VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
	void STATIC_VictorySortIntArray(TArray<int>* IntArray, TArray<int>* IntArrayRef);
	void STATIC_VictorySortFloatArray(TArray<float>* FloatArray, TArray<float>* FloatArrayRef);
	void STATIC_VictorySimulateMouseWheel(float Delta);
	void STATIC_VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, TEnumAsByte<EInputEvent> EventType);
	void STATIC_VictorySetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, const struct FVector2D& Value);
	void STATIC_VictorySetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, const struct FVector& Value);
	void STATIC_VictorySetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, const struct FString& Value);
	void STATIC_VictorySetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, const struct FRotator& Value);
	void STATIC_VictorySetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, int Value);
	void STATIC_VictorySetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, float Value);
	void STATIC_VictorySetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, const struct FLinearColor& Value);
	void STATIC_VictorySetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool Value);
	void STATIC_VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove);
	void STATIC_VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove);
	bool STATIC_VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding);
	bool STATIC_VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding);
	bool STATIC_VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping);
	struct FString STATIC_VictoryPaths__WindowsNoEditorDir();
	struct FString STATIC_VictoryPaths__Win64Dir_BinaryLocation();
	struct FString STATIC_VictoryPaths__ScreenShotsDir();
	struct FString STATIC_VictoryPaths__SavedDir();
	struct FString STATIC_VictoryPaths__LogsDir();
	struct FString STATIC_VictoryPaths__GameRootDirectory();
	struct FString STATIC_VictoryPaths__ConfigDir();
	class ULevelStreaming* STATIC_VictoryLoadLevelInstance(class UObject* WorldContextObject, const struct FString& MapFolderOffOfContent, const struct FString& LevelName, int InstanceNumber, const struct FVector& Location, const struct FRotator& Rotation, bool* Success);
	void STATIC_VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>* Out);
	void STATIC_VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class UClass* ActorClass, bool DestroyOriginalActors, int MinCountToCreateISM, TArray<class AVictoryISM*>* CreatedISMActors);
	bool STATIC_VictoryIsApplicationRunning(int ProcessId);
	void STATIC_VictoryIntPlusEquals(int Add, int* Int, int* IntOut);
	void STATIC_VictoryIntMinusEquals(int Sub, int* Int, int* IntOut);
	struct FVictoryInputAxis STATIC_VictoryGetVictoryInputAxis(const struct FKeyEvent& KeyEvent);
	struct FVictoryInput STATIC_VictoryGetVictoryInput(const struct FKeyEvent& KeyEvent);
	float STATIC_VictoryGetSoundVolume(class USoundClass* SoundClassObject);
	struct FVector2D STATIC_VictoryGetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	struct FVector STATIC_VictoryGetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	struct FString STATIC_VictoryGetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	struct FRotator STATIC_VictoryGetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	int STATIC_VictoryGetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	float STATIC_VictoryGetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	struct FLinearColor STATIC_VictoryGetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	bool STATIC_VictoryGetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	struct FString STATIC_VictoryGetApplicationName(int ProcessId);
	void STATIC_VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings);
	void STATIC_VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings);
	void STATIC_VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings);
	void STATIC_VictoryFloatPlusEquals(float Add, float* Float, float* FloatOut);
	void STATIC_VictoryFloatMinusEquals(float Sub, float* Float, float* FloatOut);
	bool STATIC_VictoryDestructible_DestroyChunk(class UDestructibleComponent* DestructibleComp, int HitItem);
	void STATIC_VictoryCreateProc(const struct FString& FullPathOfProgramToRun, TArray<struct FString> CommandlineArgs, bool Detach, bool Hidden, int Priority, const struct FString& OptionalWorkingDirectory, int* ProcessId);
	void STATIC_VictoryAppendInline(const struct FString& ToAppend, bool AppendNewline, struct FString* string, struct FString* Result);
	struct FString STATIC_Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);
	void STATIC_Victory_SaveStringToOSClipboard(const struct FString& ToClipboard);
	bool STATIC_Victory_SavePixels(const struct FString& FullFilePath, int Width, int Height, TArray<struct FLinearColor> ImagePixels, bool SaveAsBMP, bool SRGB, struct FString* ErrorString);
	class UTexture2D* STATIC_Victory_LoadTexture2D_FromFile_Pixels(const struct FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int* Width, int* Height, TArray<struct FLinearColor>* OutPixels);
	class UTexture2D* STATIC_Victory_LoadTexture2D_FromFile(const struct FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int* Width, int* Height);
	void STATIC_Victory_GetStringFromOSClipboard(struct FString* FromClipboard);
	bool STATIC_Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int* TextureWidth, int* TextureHeight, TArray<struct FLinearColor>* PixelArray);
	bool STATIC_Victory_GetPixelFromT2D(class UTexture2D* T2D, int X, int Y, struct FLinearColor* PixelColor);
	struct FString STATIC_Victory_GetGRHIAdapterName();
	void STATIC_Victory_GetGPUInfo(struct FString* DeviceDescription, struct FString* Provider, struct FString* DriverVersion, struct FString* DriverDate);
	struct FString STATIC_Victory_GetGPUBrand();
	bool STATIC_Victory_Get_Pixel(TArray<struct FLinearColor> Pixels, int ImageHeight, int X, int Y, struct FLinearColor* FoundColor);
	TEnumAsByte<EPathFollowingRequestResult> STATIC_Victory_AI_MoveToWithFilter(class APawn* Pawn, const struct FVector& Dest, class UClass* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe);
	float STATIC_VerticalFOV(float HorizontalFOV, float AspectRatio);
	struct FVector2D STATIC_Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	struct FVector2D STATIC_Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	void STATIC_UTCToLocal(const struct FDateTime& UTCTime, struct FDateTime* LocalTime);
	void STATIC_UnloadStreamingLevel(class ULevelStreamingKismet* LevelInstance);
	struct FRotator TransformVectorToActorSpaceAngle(class AActor* Actor, const struct FVector& InVector);
	struct FVector TransformVectorToActorSpace(class AActor* Actor, const struct FVector& InVector);
	class AActor* STATIC_Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, struct FName* ClosestSocketName, struct FVector* SocketLocation, bool* IsValid);
	class AActor* STATIC_Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, struct FName* ClosestBoneName, struct FVector* ClosestBoneLocation, bool* IsValid);
	bool STATIC_TraceData__GetTraceDataFromSkeletalMeshSocket(class USkeletalMeshComponent* Mesh, const struct FRotator& TraceRotation, float TraceLength, const struct FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness, struct FVector* TraceStart, struct FVector* TraceEnd);
	bool STATIC_TraceData__GetTraceDataFromCharacterSocket(class AActor* TheCharacter, const struct FRotator& TraceRotation, float TraceLength, const struct FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness, struct FVector* TraceStart, struct FVector* TraceEnd);
	int STATIC_Text_ToInt(const struct FText& Text, bool UseDotForThousands);
	float STATIC_Text_ToFloat(const struct FText& Text, bool UseDotForThousands);
	bool STATIC_Text_IsNumeric(const struct FText& Text);
	bool STATIC_StringIsEmpty(const struct FString& Target);
	void STATIC_StringConversion__GetFloatAsStringWithPrecision(float TheFloat, int Precision, bool IncludeLeadingZero, struct FString* TheString);
	void STATIC_String__ExplodeString(const struct FString& InputString, const struct FString& Separator, int Limit, bool bTrimElements, TArray<struct FString>* OutputStrings);
	struct FString STATIC_String__CombineStrings_Multi(const struct FString& A, const struct FString& B);
	struct FString STATIC_String__CombineStrings(const struct FString& StringFirst, const struct FString& StringSecond, const struct FString& Separator, const struct FString& StringFirstLabel, const struct FString& StringSecondLabel);
	class AActor* STATIC_SpawnActorIntoLevel(class UObject* WorldContextObject, class UClass* ActorClass, const struct FName& Level, const struct FVector& Location, const struct FRotator& Rotation, bool SpawnEvenIfColliding);
	void STATIC_SetGenericTeamId(class AActor* Target, unsigned char NewTeamId);
	void STATIC_SetComponentTickRate(class UActorComponent* Component, float Seconds);
	void STATIC_SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity);
	void STATIC_ServerTravel(class UObject* WorldContextObject, const struct FString& MapName, bool bNotifyPlayers);
	void STATIC_Selection_SelectionBox(class UObject* WorldContextObject, const struct FVector2D& AnchorPoint, const struct FVector2D& DraggedPoint, class UClass* ClassFilter, TArray<class AActor*>* SelectedActors);
	void STATIC_seedRandWithTime();
	void STATIC_seedRandWithEntropy();
	void STATIC_seedRand(int Seed);
	bool STATIC_ScreenShots_Rename_Move_Most_Recent(const struct FString& NewName, const struct FString& NewAbsoluteFolderPath, bool HighResolution, struct FString* OriginalFileName);
	void STATIC_SaveGameObject_GetAllSaveSlotFileNames(TArray<struct FString>* FileNames);
	void STATIC_Rendering__UnFreezeGameRendering();
	void STATIC_Rendering__FreezeGameRendering();
	void STATIC_RemoveFromStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo);
	void STATIC_RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass);
	void STATIC_RealWorldTime__GetTimePassedSincePreviousTime(const struct FString& PreviousTime, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours);
	void STATIC_RealWorldTime__GetDifferenceBetweenTimes(const struct FString& PreviousTime1, const struct FString& PreviousTime2, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours);
	struct FString STATIC_RealWorldTime__GetCurrentOSTime(int* MilliSeconds, int* Seconds, int* Minutes, int* Hours12, int* Hours24, int* Day, int* Month, int* Year);
	int STATIC_RandInt_uniDis_MT();
	int STATIC_RandInt_uniDis();
	int STATIC_RandInt_MINMAX_uniDis_MT(int iMin, int iMax);
	int STATIC_RandInt_MINMAX_uniDis(int iMin, int iMax);
	float STATIC_RandFloat_uniDis_MT();
	float STATIC_RandFloat_uniDis();
	float STATIC_RandFloat_MINMAX_uniDis_MT(float iMin, float iMax);
	float STATIC_RandFloat_MINMAX_uniDis(float iMin, float iMax);
	bool STATIC_RandBool_Bernoulli_MT(float fBias);
	bool STATIC_RandBool_Bernoulli(float fBias);
	struct FVector2D STATIC_ProjectWorldToScreenPosition(const struct FVector& WorldLocation);
	void STATIC_PointDistanceToPlane(const struct FPlane& Plane, const struct FVector& Point, float* Distance);
	class UAudioComponent* STATIC_PlaySoundAttachedFromFile(const struct FString& FilePath, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void STATIC_PlaySoundAtLocationFromFile(class UObject* WorldContextObject, const struct FString& FilePath, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	bool STATIC_PlayerState_GetPlayerID(class APlayerController* ThePC, int* PlayerId);
	bool STATIC_PlayerController_GetControllerID(class APlayerController* ThePC, int* ControllerId);
	bool STATIC_Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed);
	bool STATIC_Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const struct FVector& InitLocation, const struct FRotator& InitRotation);
	bool STATIC_Physics__IsRagDoll(class AActor* TheCharacter);
	bool STATIC_Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, struct FVector* InitLocation, struct FRotator* InitRotation);
	bool STATIC_Physics__GetLocationofRagDoll(class AActor* TheCharacter, struct FVector* RagdollLocation);
	bool STATIC_Physics__EnterRagDoll(class AActor* TheCharacter);
	bool STATIC_OptionsMenu__GetDisplayAdapterScreenResolutions(bool IncludeRefreshRates, TArray<int>* Widths, TArray<int>* Heights, TArray<int>* RefreshRates);
	void STATIC_OperatingSystem__GetCurrentPlatform(bool* Windows_, bool* Mac, bool* Linux, bool* IOS, bool* Android, bool* Android_ARM, bool* Android_Vulkan, bool* PS4, bool* XBoxOne, bool* HTML5, bool* Apple);
	void STATIC_Open_URL_In_Web_Browser(const struct FString& TheURL);
	bool STATIC_NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	bool STATIC_Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, TEnumAsByte<EComponentMobility> NewMobility);
	void STATIC_MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue);
	void STATIC_MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue);
	void STATIC_MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue);
	void STATIC_MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue);
	float STATIC_MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	void STATIC_Loops_ResetBPRunawayCounter();
	class UTexture2D* STATIC_LoadTexture2D_FromFileByExtension(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight);
	class UTexture2D* STATIC_LoadTexture2D_FromDDSFile(const struct FString& FullFilePath);
	bool STATIC_LoadStringFromFile(const struct FString& FullFilePath, struct FString* Result);
	bool STATIC_LoadStringArrayFromFile(const struct FString& FullFilePath, bool ExcludeEmptyLines, TArray<struct FString>* StringArray, int* ArraySize);
	class UObject* STATIC_LoadObjectFromAssetPath(class UClass* ObjectClass, const struct FName& Path, bool* IsValid);
	bool STATIC_LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float* PitchOffset, float* YawOffset, float* RollOffset);
	void STATIC_JoyIsKey(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool* Ctrl, bool* Shift, bool* Alt, bool* Cmd, bool* Match);
	void STATIC_JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen> NewSetting);
	TEnumAsByte<EJoyGraphicsFullScreen> STATIC_JoyGraphicsSettings__FullScreen_Get();
	bool STATIC_JoyFileIO_GetFilesInRootAndAllSubFolders(const struct FString& RootFolderFullPath, const struct FString& Ext, TArray<struct FString>* Files);
	bool STATIC_JoyFileIO_GetFiles(const struct FString& RootFolderFullPath, const struct FString& Ext, TArray<struct FString>* Files);
	bool STATIC_IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass);
	bool STATIC_IsStandAlone(class UObject* WorldContextObject);
	bool STATIC_IsPointOnPlane(const struct FPlane& Plane, const struct FVector& Point, float Tolerance);
	bool STATIC_IsAlphaNumeric(const struct FString& string);
	class UPanelSlot* STATIC_InsertChildAt(class UWidget* Parent, int Index, class UWidget* Content);
	float STATIC_HorizontalFOV(float VerticalFOV, float AspectRatio);
	void STATIC_HideStreamingLevel(class ULevelStreamingKismet* LevelInstance);
	bool STATIC_HasSubstring(const struct FString& SearchIn, const struct FString& SubString, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir);
	void STATIC_GraphicsSettings__SetFrameRateToBeUnbound();
	void STATIC_GraphicsSettings__SetFrameRateCap(float NewValue);
	class UWidget* STATIC_GetWidgetFromName(class UUserWidget* ParentUserWidget, const struct FName& Name);
	bool STATIC_GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* OutHitResult);
	bool STATIC_GetViewportPosition(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* OutViewportPosition);
	struct FVector STATIC_GetVectorRelativeLocation(const struct FVector& ParentLocation, const struct FRotator& ParentRotation, const struct FVector& ChildLocation);
	void STATIC_GetUTCFromUnixTimeStamp(int UnixTimeStamp, struct FDateTime* UTCTime);
	void STATIC_GetUserDisplayAdapterBrand(bool* IsAMD, bool* IsNvidia, bool* IsIntel, bool* IsUnknown, int* UnknownId);
	int STATIC_GetUnixTimeStamp(const struct FDateTime& UTCTime);
	float STATIC_GetTimeInPlay(class AActor* Actor);
	float STATIC_GetTimeAlive(class AActor* Target);
	bool STATIC_GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions);
	class USoundWave* STATIC_GetSoundWaveFromFile(const struct FString& FilePath);
	struct FRotator STATIC_GetRotatorRelativeRotation(const struct FRotator& ParentRotation, const struct FRotator& ChildRotation);
	int STATIC_GetPlayerUniqueNetID();
	class APlayerStart* STATIC_GetPlayerStart(class UObject* WorldContextObject, const struct FString& PlayerStartName);
	struct FName STATIC_GetObjectPath(class UObject* Obj);
	void STATIC_GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<struct FString>* NamesOfLoadedLevels);
	struct FLevelStreamInstanceInfo STATIC_GetLevelInstanceInfo(class ULevelStreamingKismet* LevelInstance);
	struct FName STATIC_GetHeadMountedDisplayDeviceType();
	unsigned char STATIC_GetGenericTeamId(class AActor* Target);
	class UUserWidget* STATIC_GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly);
	float STATIC_GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, const struct FVector& Point, struct FVector* ClosestPointOnCollision);
	float STATIC_GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, struct FVector* PointOnSurface1, struct FVector* PointOnSurface2);
	float STATIC_GetCreationTime(class AActor* Target);
	struct FRotator STATIC_GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
	struct FVector STATIC_GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
	struct FString STATIC_GetCommandLine();
	class AActor* STATIC_GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& Center, float Radius, bool* IsValid);
	class AActor* STATIC_GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class UClass* ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid);
	void STATIC_GetBoxContainingWorldPoints(TArray<struct FVector> Points, struct FVector* Center, struct FVector* Extent);
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	int STATIC_GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, const struct FName& StartingBoneName, TArray<struct FName>* BoneNames);
	struct FRotator STATIC_GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor);
	struct FVector STATIC_GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor);
	void STATIC_FlushPressedKeys(class APlayerController* PlayerController);
	void STATIC_FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int MaxFlashCount, int FlashFrequencyMilliseconds);
	bool STATIC_FileIO__SaveStringTextToFile(const struct FString& SaveDirectory, const struct FString& JoyfulFileName, const struct FString& SaveText, bool AllowOverWriting);
	bool STATIC_FileIO__SaveStringArrayToFile(const struct FString& SaveDirectory, const struct FString& JoyfulFileName, TArray<struct FString> SaveText, bool AllowOverWriting);
	bool STATIC_EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	void STATIC_DrawCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int NumPoints, float Thickness, const struct FLinearColor& LineColor, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, bool PersistentLines);
	void STATIC_Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, const struct FVector& EndPoint, const struct FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration);
	void STATIC_Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, const struct FVector& EndPoint, const struct FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration);
	void STATIC_Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, const struct FLinearColor& LineColor, float Thickness, float Duration);
	bool STATIC_DoesMaterialHaveParameter(class UMaterialInterface* Mat, const struct FName& Parameter);
	float STATIC_DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, const struct FVector& TestPoint, struct FVector* ClosestSurfacePoint);
	bool STATIC_Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<struct FVector>* BoneLocations);
	class UTextureRenderTarget2D* STATIC_CreateTextureRenderTarget2D(int Width, int Height, const struct FLinearColor& ClearColor, float Gamma);
	class UPrimitiveComponent* STATIC_CreatePrimitiveComponent(class UObject* WorldContextObject, class UClass* CompClass, const struct FName& Name, const struct FVector& Location, const struct FRotator& Rotation);
	struct FPlane STATIC_CreatePlane(const struct FVector& Center, const struct FVector& Normal);
	class UObject* STATIC_CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass);
	bool STATIC_CreateMD5Hash(const struct FString& FileToHash, const struct FString& FileToStoreHashTo);
	int STATIC_CountOccurrancesOfSubString(const struct FString& Source, const struct FString& SubString, TEnumAsByte<ESearchCase> SearchCase);
	struct FRotator STATIC_Conversions__VectorToRotator(const struct FVector& TheVector);
	void STATIC_Conversions__StringToVector(const struct FString& string, struct FVector* ConvertedVector, bool* IsValid);
	void STATIC_Conversions__StringToRotator(const struct FString& string, struct FRotator* ConvertedRotator, bool* IsValid);
	void STATIC_Conversions__StringToColor(const struct FString& string, struct FLinearColor* ConvertedColor, bool* IsValid);
	struct FVector STATIC_Conversions__RotatorToVector(const struct FRotator& TheRotator);
	void STATIC_Conversions__ColorToString(const struct FLinearColor& Color, struct FString* ColorAsString);
	int STATIC_Conversion__FloatToRoundedInteger(float IN_Float);
	void STATIC_constructRand();
	void STATIC_Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int CinematicTextureGroups);
	bool STATIC_CompareMD5Hash(const struct FString& MD5HashFile1, const struct FString& MD5HashFile2);
	class AStaticMeshActor* STATIC_Clone__StaticMeshActor(class UObject* WorldContextObject, class AStaticMeshActor* ToClone, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, bool* IsValid);
	bool STATIC_ClientWindow__GameWindowIsForeGroundInOS();
	bool STATIC_CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed);
	struct FRotator STATIC_Character__GetControllerRotation(class AActor* TheCharacter);
	bool STATIC_CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const struct FString& ImagePath, const struct FLinearColor& ClearColour);
	bool STATIC_CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	bool STATIC_Capture2D_SaveImage(class ASceneCapture2D* Target, const struct FString& ImagePath, const struct FLinearColor& ClearColour);
	bool STATIC_Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	float STATIC_Calcs__ClosestPointToSourcePoint(const struct FVector& Source, TArray<struct FVector> OtherPoints, struct FVector* ClosestPoint);
	void STATIC_Array_Sort(TArray<int> TargetArray, bool bAscendingOrder, const struct FName& VariableName);
	bool STATIC_Array_IsValidIndex(TArray<int> TargetArray, int Index);
	struct FString STATIC_AppendMultiple(const struct FString& A, const struct FString& B);
	bool STATIC_Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, const struct FRotator& TheRotation, float* Pitch, float* Yaw);
	bool STATIC_Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw);
	void STATIC_AddToStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo);
	void STATIC_AddToActorRotation(class AActor* TheActor, const struct FRotator& AddRot);
	void STATIC_Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int CinematicTextureGroups);
	bool STATIC_Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor);
	void STATIC_Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>* ActorsArray);
	class APlayerController* STATIC_Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid);
	struct FString STATIC_Accessor__GetNameAsString(class UObject* TheObject);
	class USkeletalMeshComponent* STATIC_Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool* IsValid);
};


// Class VictoryBPLibrary.VictoryBPHTML
// 0x0000 (0x0028 - 0x0028)
class UVictoryBPHTML : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VictoryBPLibrary.VictoryBPHTML");
		return ptr;
	}


	void STATIC_VictoryHTML5_SetCursorVisible(bool MakeVisible);
	bool STATIC_IsHTML();
};


// Class VictoryBPLibrary.VictoryISM
// 0x0008 (0x0330 - 0x0328)
class AVictoryISM : public AActor
{
public:
	class UInstancedStaticMeshComponent*               Mesh;                                                     // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VictoryBPLibrary.VictoryISM");
		return ptr;
	}

};


// Class VictoryBPLibrary.VictoryPC
// 0x0000 (0x0678 - 0x0678)
class AVictoryPC : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VictoryBPLibrary.VictoryPC");
		return ptr;
	}


	class UAudioComponent* VictoryPlaySpeechSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	bool VictoryPC_GetMyIP_SendRequest();
	void VictoryPC_GetMyIP_DataReceived(const struct FString& YourIP);
	void Subtitles_CPPDelegate(TArray<struct FSubtitleCue> VictorySubtitles, float CueDuration);
	void OnVictorySubtitlesQueued(TArray<struct FVictorySubtitleCue> VictorySubtitles, float CueDuration);
};


// Class VictoryBPLibrary.VictoryTMapComp
// 0x0230 (0x0320 - 0x00F0)
class UVictoryTMapComp : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x00F0(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VictoryBPLibrary.VictoryTMapComp");
		return ptr;
	}


	void String_Vector__Remove(const struct FString& Key);
	struct FVector String_Vector__Get(const struct FString& Key, bool* IsValid);
	void String_Vector__Clear();
	void String_Vector__AddPair(const struct FString& Key, const struct FVector& Value);
	void String_String__Remove(const struct FString& Key);
	struct FString String_String__Get(const struct FString& Key, bool* IsValid);
	void String_String__Clear();
	void String_String__AddPair(const struct FString& Key, const struct FString& Value);
	void String_Rotator__Remove(const struct FString& Key);
	struct FRotator String_Rotator__Get(const struct FString& Key, bool* IsValid);
	void String_Rotator__Clear();
	void String_Rotator__AddPair(const struct FString& Key, const struct FRotator& Value);
	void String_Int__Remove(const struct FString& Key);
	int String_Int__Get(const struct FString& Key, bool* IsValid);
	void String_Int__Clear();
	void String_Int__AddPair(const struct FString& Key, int Value);
	void String_Actor__Remove(const struct FString& Key);
	class AActor* String_Actor__Get(const struct FString& Key, bool* IsValid);
	void String_Actor__Clear();
	void String_Actor__AddPair(const struct FString& Key, class AActor* Value);
	void Int_Vector__Remove(int Key);
	struct FVector Int_Vector__Get(int Key, bool* IsValid);
	void Int_Vector__Clear();
	void Int_Vector__AddPair(int Key, const struct FVector& Value);
	void Int_Float__Remove(int Key, float Value);
	float Int_Float__Get(int Key, bool* IsValid);
	void Int_Float__Clear();
	void Int_Float__AddPair(int Key, float Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
