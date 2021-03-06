

#line 1 "Z:\\Vivecraft\\jopenvr\\scenery-openvr\\openvr\\headers\\openvr_capi.h" 1
//======= Copyright (c) Valve Corporation, All rights reserved. ===============
//
// Purpose: Header for flatted SteamAPI. Use this for binding to other languages.
// This file is auto-generated, do not edit it.
//
//=============================================================================















// OPENVR API export macro

	
	
	
	
	
	
	

	
	
	
	
	

	
	
	
	
	



#line 1 "Z:\\Vivecraft\\jopenvr\\scenery-openvr\\openvr\\headers\\openvr_capi.h" 1

typedef char;
typedef bool;

// OpenVR Constants

static const unsigned int k_unMaxDriverDebugResponseSize = 32768;
static const unsigned int k_unTrackedDeviceIndex_Hmd = 0;
static const unsigned int k_unMaxTrackedDeviceCount = 16;
static const unsigned int k_unTrackedDeviceIndexOther = 4294967294;
static const unsigned int k_unTrackedDeviceIndexInvalid = 4294967295;
static const unsigned int k_unMaxPropertyStringSize = 32768;
static const unsigned int k_unControllerStateAxisCount = 5;
static const unsigned long k_ulOverlayHandleInvalid = 0;
static const unsigned int k_unScreenshotHandleInvalid = 0;
static const char * IVRSystem_Version = "IVRSystem_015";
static const char * IVRExtendedDisplay_Version = "IVRExtendedDisplay_001";
static const char * IVRTrackedCamera_Version = "IVRTrackedCamera_003";
static const unsigned int k_unMaxApplicationKeyLength = 128;
static const char * k_pch_MimeType_HomeApp = "vr/home";
static const char * k_pch_MimeType_GameTheater = "vr/game_theater";
static const char * IVRApplications_Version = "IVRApplications_006";
static const char * IVRChaperone_Version = "IVRChaperone_003";
static const char * IVRChaperoneSetup_Version = "IVRChaperoneSetup_005";
static const char * IVRCompositor_Version = "IVRCompositor_019";
static const unsigned int k_unVROverlayMaxKeyLength = 128;
static const unsigned int k_unVROverlayMaxNameLength = 128;
static const unsigned int k_unMaxOverlayCount = 64;
static const unsigned int k_unMaxOverlayIntersectionMaskPrimitivesCount = 32;
static const char * IVROverlay_Version = "IVROverlay_014";
static const char * k_pch_Controller_Component_GDC2015 = "gdc2015";
static const char * k_pch_Controller_Component_Base = "base";
static const char * k_pch_Controller_Component_Tip = "tip";
static const char * k_pch_Controller_Component_HandGrip = "handgrip";
static const char * k_pch_Controller_Component_Status = "status";
static const char * IVRRenderModels_Version = "IVRRenderModels_005";
static const unsigned int k_unNotificationTextMaxSize = 256;
static const char * IVRNotifications_Version = "IVRNotifications_002";
static const unsigned int k_unMaxSettingsKeyLength = 128;
static const char * IVRSettings_Version = "IVRSettings_002";
static const char * k_pch_SteamVR_Section = "steamvr";
static const char * k_pch_SteamVR_RequireHmd_String = "requireHmd";
static const char * k_pch_SteamVR_ForcedDriverKey_String = "forcedDriver";
static const char * k_pch_SteamVR_ForcedHmdKey_String = "forcedHmd";
static const char * k_pch_SteamVR_DisplayDebug_Bool = "displayDebug";
static const char * k_pch_SteamVR_DebugProcessPipe_String = "debugProcessPipe";
static const char * k_pch_SteamVR_EnableDistortion_Bool = "enableDistortion";
static const char * k_pch_SteamVR_DisplayDebugX_Int32 = "displayDebugX";
static const char * k_pch_SteamVR_DisplayDebugY_Int32 = "displayDebugY";
static const char * k_pch_SteamVR_SendSystemButtonToAllApps_Bool = "sendSystemButtonToAllApps";
static const char * k_pch_SteamVR_LogLevel_Int32 = "loglevel";
static const char * k_pch_SteamVR_IPD_Float = "ipd";
static const char * k_pch_SteamVR_Background_String = "background";
static const char * k_pch_SteamVR_BackgroundUseDomeProjection_Bool = "backgroundUseDomeProjection";
static const char * k_pch_SteamVR_BackgroundCameraHeight_Float = "backgroundCameraHeight";
static const char * k_pch_SteamVR_BackgroundDomeRadius_Float = "backgroundDomeRadius";
static const char * k_pch_SteamVR_GridColor_String = "gridColor";
static const char * k_pch_SteamVR_PlayAreaColor_String = "playAreaColor";
static const char * k_pch_SteamVR_ShowStage_Bool = "showStage";
static const char * k_pch_SteamVR_ActivateMultipleDrivers_Bool = "activateMultipleDrivers";
static const char * k_pch_SteamVR_DirectMode_Bool = "directMode";
static const char * k_pch_SteamVR_DirectModeEdidVid_Int32 = "directModeEdidVid";
static const char * k_pch_SteamVR_DirectModeEdidPid_Int32 = "directModeEdidPid";
static const char * k_pch_SteamVR_UsingSpeakers_Bool = "usingSpeakers";
static const char * k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float = "speakersForwardYawOffsetDegrees";
static const char * k_pch_SteamVR_BaseStationPowerManagement_Bool = "basestationPowerManagement";
static const char * k_pch_SteamVR_NeverKillProcesses_Bool = "neverKillProcesses";
static const char * k_pch_SteamVR_RenderTargetMultiplier_Float = "renderTargetMultiplier";
static const char * k_pch_SteamVR_AllowAsyncReprojection_Bool = "allowAsyncReprojection";
static const char * k_pch_SteamVR_AllowReprojection_Bool = "allowInterleavedReprojection";
static const char * k_pch_SteamVR_ForceReprojection_Bool = "forceReprojection";
static const char * k_pch_SteamVR_ForceFadeOnBadTracking_Bool = "forceFadeOnBadTracking";
static const char * k_pch_SteamVR_DefaultMirrorView_Int32 = "defaultMirrorView";
static const char * k_pch_SteamVR_ShowMirrorView_Bool = "showMirrorView";
static const char * k_pch_SteamVR_MirrorViewGeometry_String = "mirrorViewGeometry";
static const char * k_pch_SteamVR_StartMonitorFromAppLaunch = "startMonitorFromAppLaunch";
static const char * k_pch_SteamVR_StartCompositorFromAppLaunch_Bool = "startCompositorFromAppLaunch";
static const char * k_pch_SteamVR_StartDashboardFromAppLaunch_Bool = "startDashboardFromAppLaunch";
static const char * k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool = "startOverlayAppsFromDashboard";
static const char * k_pch_SteamVR_EnableHomeApp = "enableHomeApp";
static const char * k_pch_SteamVR_SetInitialDefaultHomeApp = "setInitialDefaultHomeApp";
static const char * k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32 = "CycleBackgroundImageTimeSec";
static const char * k_pch_SteamVR_RetailDemo_Bool = "retailDemo";
static const char * k_pch_SteamVR_IpdOffset_Float = "ipdOffset";
static const char * k_pch_Lighthouse_Section = "driver_lighthouse";
static const char * k_pch_Lighthouse_DisableIMU_Bool = "disableimu";
static const char * k_pch_Lighthouse_UseDisambiguation_String = "usedisambiguation";
static const char * k_pch_Lighthouse_DisambiguationDebug_Int32 = "disambiguationdebug";
static const char * k_pch_Lighthouse_PrimaryBasestation_Int32 = "primarybasestation";
static const char * k_pch_Lighthouse_DBHistory_Bool = "dbhistory";
static const char * k_pch_Null_Section = "driver_null";
static const char * k_pch_Null_EnableNullDriver_Bool = "enable";
static const char * k_pch_Null_SerialNumber_String = "serialNumber";
static const char * k_pch_Null_ModelNumber_String = "modelNumber";
static const char * k_pch_Null_WindowX_Int32 = "windowX";
static const char * k_pch_Null_WindowY_Int32 = "windowY";
static const char * k_pch_Null_WindowWidth_Int32 = "windowWidth";
static const char * k_pch_Null_WindowHeight_Int32 = "windowHeight";
static const char * k_pch_Null_RenderWidth_Int32 = "renderWidth";
static const char * k_pch_Null_RenderHeight_Int32 = "renderHeight";
static const char * k_pch_Null_SecondsFromVsyncToPhotons_Float = "secondsFromVsyncToPhotons";
static const char * k_pch_Null_DisplayFrequency_Float = "displayFrequency";
static const char * k_pch_UserInterface_Section = "userinterface";
static const char * k_pch_UserInterface_StatusAlwaysOnTop_Bool = "StatusAlwaysOnTop";
static const char * k_pch_UserInterface_MinimizeToTray_Bool = "MinimizeToTray";
static const char * k_pch_UserInterface_Screenshots_Bool = "screenshots";
static const char * k_pch_UserInterface_ScreenshotType_Int = "screenshotType";
static const char * k_pch_Notifications_Section = "notifications";
static const char * k_pch_Notifications_DoNotDisturb_Bool = "DoNotDisturb";
static const char * k_pch_Keyboard_Section = "keyboard";
static const char * k_pch_Keyboard_TutorialCompletions = "TutorialCompletions";
static const char * k_pch_Keyboard_ScaleX = "ScaleX";
static const char * k_pch_Keyboard_ScaleY = "ScaleY";
static const char * k_pch_Keyboard_OffsetLeftX = "OffsetLeftX";
static const char * k_pch_Keyboard_OffsetRightX = "OffsetRightX";
static const char * k_pch_Keyboard_OffsetY = "OffsetY";
static const char * k_pch_Keyboard_Smoothing = "Smoothing";
static const char * k_pch_Perf_Section = "perfcheck";
static const char * k_pch_Perf_HeuristicActive_Bool = "heuristicActive";
static const char * k_pch_Perf_NotifyInHMD_Bool = "warnInHMD";
static const char * k_pch_Perf_NotifyOnlyOnce_Bool = "warnOnlyOnce";
static const char * k_pch_Perf_AllowTimingStore_Bool = "allowTimingStore";
static const char * k_pch_Perf_SaveTimingsOnExit_Bool = "saveTimingsOnExit";
static const char * k_pch_Perf_TestData_Float = "perfTestData";
static const char * k_pch_CollisionBounds_Section = "collisionBounds";
static const char * k_pch_CollisionBounds_Style_Int32 = "CollisionBoundsStyle";
static const char * k_pch_CollisionBounds_GroundPerimeterOn_Bool = "CollisionBoundsGroundPerimeterOn";
static const char * k_pch_CollisionBounds_CenterMarkerOn_Bool = "CollisionBoundsCenterMarkerOn";
static const char * k_pch_CollisionBounds_PlaySpaceOn_Bool = "CollisionBoundsPlaySpaceOn";
static const char * k_pch_CollisionBounds_FadeDistance_Float = "CollisionBoundsFadeDistance";
static const char * k_pch_CollisionBounds_ColorGammaR_Int32 = "CollisionBoundsColorGammaR";
static const char * k_pch_CollisionBounds_ColorGammaG_Int32 = "CollisionBoundsColorGammaG";
static const char * k_pch_CollisionBounds_ColorGammaB_Int32 = "CollisionBoundsColorGammaB";
static const char * k_pch_CollisionBounds_ColorGammaA_Int32 = "CollisionBoundsColorGammaA";
static const char * k_pch_Camera_Section = "camera";
static const char * k_pch_Camera_EnableCamera_Bool = "enableCamera";
static const char * k_pch_Camera_EnableCameraInDashboard_Bool = "enableCameraInDashboard";
static const char * k_pch_Camera_EnableCameraForCollisionBounds_Bool = "enableCameraForCollisionBounds";
static const char * k_pch_Camera_EnableCameraForRoomView_Bool = "enableCameraForRoomView";
static const char * k_pch_Camera_BoundsColorGammaR_Int32 = "cameraBoundsColorGammaR";
static const char * k_pch_Camera_BoundsColorGammaG_Int32 = "cameraBoundsColorGammaG";
static const char * k_pch_Camera_BoundsColorGammaB_Int32 = "cameraBoundsColorGammaB";
static const char * k_pch_Camera_BoundsColorGammaA_Int32 = "cameraBoundsColorGammaA";
static const char * k_pch_Camera_BoundsStrength_Int32 = "cameraBoundsStrength";
static const char * k_pch_audio_Section = "audio";
static const char * k_pch_audio_OnPlaybackDevice_String = "onPlaybackDevice";
static const char * k_pch_audio_OnRecordDevice_String = "onRecordDevice";
static const char * k_pch_audio_OnPlaybackMirrorDevice_String = "onPlaybackMirrorDevice";
static const char * k_pch_audio_OffPlaybackDevice_String = "offPlaybackDevice";
static const char * k_pch_audio_OffRecordDevice_String = "offRecordDevice";
static const char * k_pch_audio_VIVEHDMIGain = "viveHDMIGain";
static const char * k_pch_Power_Section = "power";
static const char * k_pch_Power_PowerOffOnExit_Bool = "powerOffOnExit";
static const char * k_pch_Power_TurnOffScreensTimeout_Float = "turnOffScreensTimeout";
static const char * k_pch_Power_TurnOffControllersTimeout_Float = "turnOffControllersTimeout";
static const char * k_pch_Power_ReturnToWatchdogTimeout_Float = "returnToWatchdogTimeout";
static const char * k_pch_Power_AutoLaunchSteamVROnButtonPress = "autoLaunchSteamVROnButtonPress";
static const char * k_pch_Dashboard_Section = "dashboard";
static const char * k_pch_Dashboard_EnableDashboard_Bool = "enableDashboard";
static const char * k_pch_Dashboard_ArcadeMode_Bool = "arcadeMode";
static const char * k_pch_modelskin_Section = "modelskins";
static const char * IVRScreenshots_Version = "IVRScreenshots_001";
static const char * IVRResources_Version = "IVRResources_001";

// OpenVR Enums

typedef enum EVREye
{
	EVREye_Eye_Left = 0,
	EVREye_Eye_Right = 1,
} EVREye;

typedef enum ETextureType
{
	ETextureType_TextureType_DirectX = 0,
	ETextureType_TextureType_OpenGL = 1,
	ETextureType_TextureType_Vulkan = 2,
} ETextureType;

typedef enum EColorSpace
{
	EColorSpace_ColorSpace_Auto = 0,
	EColorSpace_ColorSpace_Gamma = 1,
	EColorSpace_ColorSpace_Linear = 2,
} EColorSpace;

typedef enum ETrackingResult
{
	ETrackingResult_TrackingResult_Uninitialized = 1,
	ETrackingResult_TrackingResult_Calibrating_InProgress = 100,
	ETrackingResult_TrackingResult_Calibrating_OutOfRange = 101,
	ETrackingResult_TrackingResult_Running_OK = 200,
	ETrackingResult_TrackingResult_Running_OutOfRange = 201,
} ETrackingResult;

typedef enum ETrackedDeviceClass
{
	ETrackedDeviceClass_TrackedDeviceClass_Invalid = 0,
	ETrackedDeviceClass_TrackedDeviceClass_HMD = 1,
	ETrackedDeviceClass_TrackedDeviceClass_Controller = 2,
	ETrackedDeviceClass_TrackedDeviceClass_GenericTracker = 3,
	ETrackedDeviceClass_TrackedDeviceClass_TrackingReference = 4,
} ETrackedDeviceClass;

typedef enum ETrackedControllerRole
{
	ETrackedControllerRole_TrackedControllerRole_Invalid = 0,
	ETrackedControllerRole_TrackedControllerRole_LeftHand = 1,
	ETrackedControllerRole_TrackedControllerRole_RightHand = 2,
} ETrackedControllerRole;

typedef enum ETrackingUniverseOrigin
{
	ETrackingUniverseOrigin_TrackingUniverseSeated = 0,
	ETrackingUniverseOrigin_TrackingUniverseStanding = 1,
	ETrackingUniverseOrigin_TrackingUniverseRawAndUncalibrated = 2,
} ETrackingUniverseOrigin;

typedef enum ETrackedDeviceProperty
{
	ETrackedDeviceProperty_Prop_Invalid = 0,
	ETrackedDeviceProperty_Prop_TrackingSystemName_String = 1000,
	ETrackedDeviceProperty_Prop_ModelNumber_String = 1001,
	ETrackedDeviceProperty_Prop_SerialNumber_String = 1002,
	ETrackedDeviceProperty_Prop_RenderModelName_String = 1003,
	ETrackedDeviceProperty_Prop_WillDriftInYaw_Bool = 1004,
	ETrackedDeviceProperty_Prop_ManufacturerName_String = 1005,
	ETrackedDeviceProperty_Prop_TrackingFirmwareVersion_String = 1006,
	ETrackedDeviceProperty_Prop_HardwareRevision_String = 1007,
	ETrackedDeviceProperty_Prop_AllWirelessDongleDescriptions_String = 1008,
	ETrackedDeviceProperty_Prop_ConnectedWirelessDongle_String = 1009,
	ETrackedDeviceProperty_Prop_DeviceIsWireless_Bool = 1010,
	ETrackedDeviceProperty_Prop_DeviceIsCharging_Bool = 1011,
	ETrackedDeviceProperty_Prop_DeviceBatteryPercentage_Float = 1012,
	ETrackedDeviceProperty_Prop_StatusDisplayTransform_Matrix34 = 1013,
	ETrackedDeviceProperty_Prop_Firmware_UpdateAvailable_Bool = 1014,
	ETrackedDeviceProperty_Prop_Firmware_ManualUpdate_Bool = 1015,
	ETrackedDeviceProperty_Prop_Firmware_ManualUpdateURL_String = 1016,
	ETrackedDeviceProperty_Prop_HardwareRevision_Uint64 = 1017,
	ETrackedDeviceProperty_Prop_FirmwareVersion_Uint64 = 1018,
	ETrackedDeviceProperty_Prop_FPGAVersion_Uint64 = 1019,
	ETrackedDeviceProperty_Prop_VRCVersion_Uint64 = 1020,
	ETrackedDeviceProperty_Prop_RadioVersion_Uint64 = 1021,
	ETrackedDeviceProperty_Prop_DongleVersion_Uint64 = 1022,
	ETrackedDeviceProperty_Prop_BlockServerShutdown_Bool = 1023,
	ETrackedDeviceProperty_Prop_CanUnifyCoordinateSystemWithHmd_Bool = 1024,
	ETrackedDeviceProperty_Prop_ContainsProximitySensor_Bool = 1025,
	ETrackedDeviceProperty_Prop_DeviceProvidesBatteryStatus_Bool = 1026,
	ETrackedDeviceProperty_Prop_DeviceCanPowerOff_Bool = 1027,
	ETrackedDeviceProperty_Prop_Firmware_ProgrammingTarget_String = 1028,
	ETrackedDeviceProperty_Prop_DeviceClass_Int32 = 1029,
	ETrackedDeviceProperty_Prop_HasCamera_Bool = 1030,
	ETrackedDeviceProperty_Prop_DriverVersion_String = 1031,
	ETrackedDeviceProperty_Prop_Firmware_ForceUpdateRequired_Bool = 1032,
	ETrackedDeviceProperty_Prop_ViveSystemButtonFixRequired_Bool = 1033,
	ETrackedDeviceProperty_Prop_ReportsTimeSinceVSync_Bool = 2000,
	ETrackedDeviceProperty_Prop_SecondsFromVsyncToPhotons_Float = 2001,
	ETrackedDeviceProperty_Prop_DisplayFrequency_Float = 2002,
	ETrackedDeviceProperty_Prop_UserIpdMeters_Float = 2003,
	ETrackedDeviceProperty_Prop_CurrentUniverseId_Uint64 = 2004,
	ETrackedDeviceProperty_Prop_PreviousUniverseId_Uint64 = 2005,
	ETrackedDeviceProperty_Prop_DisplayFirmwareVersion_Uint64 = 2006,
	ETrackedDeviceProperty_Prop_IsOnDesktop_Bool = 2007,
	ETrackedDeviceProperty_Prop_DisplayMCType_Int32 = 2008,
	ETrackedDeviceProperty_Prop_DisplayMCOffset_Float = 2009,
	ETrackedDeviceProperty_Prop_DisplayMCScale_Float = 2010,
	ETrackedDeviceProperty_Prop_EdidVendorID_Int32 = 2011,
	ETrackedDeviceProperty_Prop_DisplayMCImageLeft_String = 2012,
	ETrackedDeviceProperty_Prop_DisplayMCImageRight_String = 2013,
	ETrackedDeviceProperty_Prop_DisplayGCBlackClamp_Float = 2014,
	ETrackedDeviceProperty_Prop_EdidProductID_Int32 = 2015,
	ETrackedDeviceProperty_Prop_CameraToHeadTransform_Matrix34 = 2016,
	ETrackedDeviceProperty_Prop_DisplayGCType_Int32 = 2017,
	ETrackedDeviceProperty_Prop_DisplayGCOffset_Float = 2018,
	ETrackedDeviceProperty_Prop_DisplayGCScale_Float = 2019,
	ETrackedDeviceProperty_Prop_DisplayGCPrescale_Float = 2020,
	ETrackedDeviceProperty_Prop_DisplayGCImage_String = 2021,
	ETrackedDeviceProperty_Prop_LensCenterLeftU_Float = 2022,
	ETrackedDeviceProperty_Prop_LensCenterLeftV_Float = 2023,
	ETrackedDeviceProperty_Prop_LensCenterRightU_Float = 2024,
	ETrackedDeviceProperty_Prop_LensCenterRightV_Float = 2025,
	ETrackedDeviceProperty_Prop_UserHeadToEyeDepthMeters_Float = 2026,
	ETrackedDeviceProperty_Prop_CameraFirmwareVersion_Uint64 = 2027,
	ETrackedDeviceProperty_Prop_CameraFirmwareDescription_String = 2028,
	ETrackedDeviceProperty_Prop_DisplayFPGAVersion_Uint64 = 2029,
	ETrackedDeviceProperty_Prop_DisplayBootloaderVersion_Uint64 = 2030,
	ETrackedDeviceProperty_Prop_DisplayHardwareVersion_Uint64 = 2031,
	ETrackedDeviceProperty_Prop_AudioFirmwareVersion_Uint64 = 2032,
	ETrackedDeviceProperty_Prop_CameraCompatibilityMode_Int32 = 2033,
	ETrackedDeviceProperty_Prop_ScreenshotHorizontalFieldOfViewDegrees_Float = 2034,
	ETrackedDeviceProperty_Prop_ScreenshotVerticalFieldOfViewDegrees_Float = 2035,
	ETrackedDeviceProperty_Prop_DisplaySuppressed_Bool = 2036,
	ETrackedDeviceProperty_Prop_DisplayAllowNightMode_Bool = 2037,
	ETrackedDeviceProperty_Prop_AttachedDeviceId_String = 3000,
	ETrackedDeviceProperty_Prop_SupportedButtons_Uint64 = 3001,
	ETrackedDeviceProperty_Prop_Axis0Type_Int32 = 3002,
	ETrackedDeviceProperty_Prop_Axis1Type_Int32 = 3003,
	ETrackedDeviceProperty_Prop_Axis2Type_Int32 = 3004,
	ETrackedDeviceProperty_Prop_Axis3Type_Int32 = 3005,
	ETrackedDeviceProperty_Prop_Axis4Type_Int32 = 3006,
	ETrackedDeviceProperty_Prop_ControllerRoleHint_Int32 = 3007,
	ETrackedDeviceProperty_Prop_FieldOfViewLeftDegrees_Float = 4000,
	ETrackedDeviceProperty_Prop_FieldOfViewRightDegrees_Float = 4001,
	ETrackedDeviceProperty_Prop_FieldOfViewTopDegrees_Float = 4002,
	ETrackedDeviceProperty_Prop_FieldOfViewBottomDegrees_Float = 4003,
	ETrackedDeviceProperty_Prop_TrackingRangeMinimumMeters_Float = 4004,
	ETrackedDeviceProperty_Prop_TrackingRangeMaximumMeters_Float = 4005,
	ETrackedDeviceProperty_Prop_ModeLabel_String = 4006,
	ETrackedDeviceProperty_Prop_IconPathName_String = 5000,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceOff_String = 5001,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceSearching_String = 5002,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceSearchingAlert_String = 5003,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceReady_String = 5004,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceReadyAlert_String = 5005,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceNotReady_String = 5006,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceStandby_String = 5007,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceAlertLow_String = 5008,
	ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_Start = 10000,
	ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_End = 10999,
} ETrackedDeviceProperty;

typedef enum ETrackedPropertyError
{
	ETrackedPropertyError_TrackedProp_Success = 0,
	ETrackedPropertyError_TrackedProp_WrongDataType = 1,
	ETrackedPropertyError_TrackedProp_WrongDeviceClass = 2,
	ETrackedPropertyError_TrackedProp_BufferTooSmall = 3,
	ETrackedPropertyError_TrackedProp_UnknownProperty = 4,
	ETrackedPropertyError_TrackedProp_InvalidDevice = 5,
	ETrackedPropertyError_TrackedProp_CouldNotContactServer = 6,
	ETrackedPropertyError_TrackedProp_ValueNotProvidedByDevice = 7,
	ETrackedPropertyError_TrackedProp_StringExceedsMaximumLength = 8,
	ETrackedPropertyError_TrackedProp_NotYetAvailable = 9,
	ETrackedPropertyError_TrackedProp_PermissionDenied = 10,
} ETrackedPropertyError;

typedef enum EVRSubmitFlags
{
	EVRSubmitFlags_Submit_Default = 0,
	EVRSubmitFlags_Submit_LensDistortionAlreadyApplied = 1,
	EVRSubmitFlags_Submit_GlRenderBuffer = 2,
	EVRSubmitFlags_Submit_Reserved = 4,
} EVRSubmitFlags;

typedef enum EVRState
{
	EVRState_VRState_Undefined = -1,
	EVRState_VRState_Off = 0,
	EVRState_VRState_Searching = 1,
	EVRState_VRState_Searching_Alert = 2,
	EVRState_VRState_Ready = 3,
	EVRState_VRState_Ready_Alert = 4,
	EVRState_VRState_NotReady = 5,
	EVRState_VRState_Standby = 6,
	EVRState_VRState_Ready_Alert_Low = 7,
} EVRState;

typedef enum EVREventType
{
	EVREventType_VREvent_None = 0,
	EVREventType_VREvent_TrackedDeviceActivated = 100,
	EVREventType_VREvent_TrackedDeviceDeactivated = 101,
	EVREventType_VREvent_TrackedDeviceUpdated = 102,
	EVREventType_VREvent_TrackedDeviceUserInteractionStarted = 103,
	EVREventType_VREvent_TrackedDeviceUserInteractionEnded = 104,
	EVREventType_VREvent_IpdChanged = 105,
	EVREventType_VREvent_EnterStandbyMode = 106,
	EVREventType_VREvent_LeaveStandbyMode = 107,
	EVREventType_VREvent_TrackedDeviceRoleChanged = 108,
	EVREventType_VREvent_WatchdogWakeUpRequested = 109,
	EVREventType_VREvent_LensDistortionChanged = 110,
	EVREventType_VREvent_ButtonPress = 200,
	EVREventType_VREvent_ButtonUnpress = 201,
	EVREventType_VREvent_ButtonTouch = 202,
	EVREventType_VREvent_ButtonUntouch = 203,
	EVREventType_VREvent_MouseMove = 300,
	EVREventType_VREvent_MouseButtonDown = 301,
	EVREventType_VREvent_MouseButtonUp = 302,
	EVREventType_VREvent_FocusEnter = 303,
	EVREventType_VREvent_FocusLeave = 304,
	EVREventType_VREvent_Scroll = 305,
	EVREventType_VREvent_TouchPadMove = 306,
	EVREventType_VREvent_OverlayFocusChanged = 307,
	EVREventType_VREvent_InputFocusCaptured = 400,
	EVREventType_VREvent_InputFocusReleased = 401,
	EVREventType_VREvent_SceneFocusLost = 402,
	EVREventType_VREvent_SceneFocusGained = 403,
	EVREventType_VREvent_SceneApplicationChanged = 404,
	EVREventType_VREvent_SceneFocusChanged = 405,
	EVREventType_VREvent_InputFocusChanged = 406,
	EVREventType_VREvent_SceneApplicationSecondaryRenderingStarted = 407,
	EVREventType_VREvent_HideRenderModels = 410,
	EVREventType_VREvent_ShowRenderModels = 411,
	EVREventType_VREvent_OverlayShown = 500,
	EVREventType_VREvent_OverlayHidden = 501,
	EVREventType_VREvent_DashboardActivated = 502,
	EVREventType_VREvent_DashboardDeactivated = 503,
	EVREventType_VREvent_DashboardThumbSelected = 504,
	EVREventType_VREvent_DashboardRequested = 505,
	EVREventType_VREvent_ResetDashboard = 506,
	EVREventType_VREvent_RenderToast = 507,
	EVREventType_VREvent_ImageLoaded = 508,
	EVREventType_VREvent_ShowKeyboard = 509,
	EVREventType_VREvent_HideKeyboard = 510,
	EVREventType_VREvent_OverlayGamepadFocusGained = 511,
	EVREventType_VREvent_OverlayGamepadFocusLost = 512,
	EVREventType_VREvent_OverlaySharedTextureChanged = 513,
	EVREventType_VREvent_DashboardGuideButtonDown = 514,
	EVREventType_VREvent_DashboardGuideButtonUp = 515,
	EVREventType_VREvent_ScreenshotTriggered = 516,
	EVREventType_VREvent_ImageFailed = 517,
	EVREventType_VREvent_DashboardOverlayCreated = 518,
	EVREventType_VREvent_RequestScreenshot = 520,
	EVREventType_VREvent_ScreenshotTaken = 521,
	EVREventType_VREvent_ScreenshotFailed = 522,
	EVREventType_VREvent_SubmitScreenshotToDashboard = 523,
	EVREventType_VREvent_ScreenshotProgressToDashboard = 524,
	EVREventType_VREvent_Notification_Shown = 600,
	EVREventType_VREvent_Notification_Hidden = 601,
	EVREventType_VREvent_Notification_BeginInteraction = 602,
	EVREventType_VREvent_Notification_Destroyed = 603,
	EVREventType_VREvent_Quit = 700,
	EVREventType_VREvent_ProcessQuit = 701,
	EVREventType_VREvent_QuitAborted_UserPrompt = 702,
	EVREventType_VREvent_QuitAcknowledged = 703,
	EVREventType_VREvent_DriverRequestedQuit = 704,
	EVREventType_VREvent_ChaperoneDataHasChanged = 800,
	EVREventType_VREvent_ChaperoneUniverseHasChanged = 801,
	EVREventType_VREvent_ChaperoneTempDataHasChanged = 802,
	EVREventType_VREvent_ChaperoneSettingsHaveChanged = 803,
	EVREventType_VREvent_SeatedZeroPoseReset = 804,
	EVREventType_VREvent_AudioSettingsHaveChanged = 820,
	EVREventType_VREvent_BackgroundSettingHasChanged = 850,
	EVREventType_VREvent_CameraSettingsHaveChanged = 851,
	EVREventType_VREvent_ReprojectionSettingHasChanged = 852,
	EVREventType_VREvent_ModelSkinSettingsHaveChanged = 853,
	EVREventType_VREvent_EnvironmentSettingsHaveChanged = 854,
	EVREventType_VREvent_PowerSettingsHaveChanged = 855,
	EVREventType_VREvent_StatusUpdate = 900,
	EVREventType_VREvent_MCImageUpdated = 1000,
	EVREventType_VREvent_FirmwareUpdateStarted = 1100,
	EVREventType_VREvent_FirmwareUpdateFinished = 1101,
	EVREventType_VREvent_KeyboardClosed = 1200,
	EVREventType_VREvent_KeyboardCharInput = 1201,
	EVREventType_VREvent_KeyboardDone = 1202,
	EVREventType_VREvent_ApplicationTransitionStarted = 1300,
	EVREventType_VREvent_ApplicationTransitionAborted = 1301,
	EVREventType_VREvent_ApplicationTransitionNewAppStarted = 1302,
	EVREventType_VREvent_ApplicationListUpdated = 1303,
	EVREventType_VREvent_ApplicationMimeTypeLoad = 1304,
	EVREventType_VREvent_Compositor_MirrorWindowShown = 1400,
	EVREventType_VREvent_Compositor_MirrorWindowHidden = 1401,
	EVREventType_VREvent_Compositor_ChaperoneBoundsShown = 1410,
	EVREventType_VREvent_Compositor_ChaperoneBoundsHidden = 1411,
	EVREventType_VREvent_TrackedCamera_StartVideoStream = 1500,
	EVREventType_VREvent_TrackedCamera_StopVideoStream = 1501,
	EVREventType_VREvent_TrackedCamera_PauseVideoStream = 1502,
	EVREventType_VREvent_TrackedCamera_ResumeVideoStream = 1503,
	EVREventType_VREvent_TrackedCamera_EditingSurface = 1550,
	EVREventType_VREvent_PerformanceTest_EnableCapture = 1600,
	EVREventType_VREvent_PerformanceTest_DisableCapture = 1601,
	EVREventType_VREvent_PerformanceTest_FidelityLevel = 1602,
	EVREventType_VREvent_MessageOverlay_Closed = 1650,
	EVREventType_VREvent_VendorSpecific_Reserved_Start = 10000,
	EVREventType_VREvent_VendorSpecific_Reserved_End = 19999,
} EVREventType;

typedef enum EDeviceActivityLevel
{
	EDeviceActivityLevel_k_EDeviceActivityLevel_Unknown = -1,
	EDeviceActivityLevel_k_EDeviceActivityLevel_Idle = 0,
	EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction = 1,
	EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction_Timeout = 2,
	EDeviceActivityLevel_k_EDeviceActivityLevel_Standby = 3,
} EDeviceActivityLevel;

typedef enum EVRButtonId
{
	EVRButtonId_k_EButton_System = 0,
	EVRButtonId_k_EButton_ApplicationMenu = 1,
	EVRButtonId_k_EButton_Grip = 2,
	EVRButtonId_k_EButton_DPad_Left = 3,
	EVRButtonId_k_EButton_DPad_Up = 4,
	EVRButtonId_k_EButton_DPad_Right = 5,
	EVRButtonId_k_EButton_DPad_Down = 6,
	EVRButtonId_k_EButton_A = 7,
	EVRButtonId_k_EButton_ProximitySensor = 31,
	EVRButtonId_k_EButton_Axis0 = 32,
	EVRButtonId_k_EButton_Axis1 = 33,
	EVRButtonId_k_EButton_Axis2 = 34,
	EVRButtonId_k_EButton_Axis3 = 35,
	EVRButtonId_k_EButton_Axis4 = 36,
	EVRButtonId_k_EButton_SteamVR_Touchpad = 32,
	EVRButtonId_k_EButton_SteamVR_Trigger = 33,
	EVRButtonId_k_EButton_Dashboard_Back = 2,
	EVRButtonId_k_EButton_Max = 64,
} EVRButtonId;

typedef enum EVRMouseButton
{
	EVRMouseButton_VRMouseButton_Left = 1,
	EVRMouseButton_VRMouseButton_Right = 2,
	EVRMouseButton_VRMouseButton_Middle = 4,
} EVRMouseButton;

typedef enum EHiddenAreaMeshType
{
	EHiddenAreaMeshType_k_eHiddenAreaMesh_Standard = 0,
	EHiddenAreaMeshType_k_eHiddenAreaMesh_Inverse = 1,
	EHiddenAreaMeshType_k_eHiddenAreaMesh_LineLoop = 2,
} EHiddenAreaMeshType;

typedef enum EVRControllerAxisType
{
	EVRControllerAxisType_k_eControllerAxis_None = 0,
	EVRControllerAxisType_k_eControllerAxis_TrackPad = 1,
	EVRControllerAxisType_k_eControllerAxis_Joystick = 2,
	EVRControllerAxisType_k_eControllerAxis_Trigger = 3,
} EVRControllerAxisType;

typedef enum EVRControllerEventOutputType
{
	EVRControllerEventOutputType_ControllerEventOutput_OSEvents = 0,
	EVRControllerEventOutputType_ControllerEventOutput_VREvents = 1,
} EVRControllerEventOutputType;

typedef enum ECollisionBoundsStyle
{
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_BEGINNER = 0,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_INTERMEDIATE = 1,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_SQUARES = 2,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_ADVANCED = 3,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_NONE = 4,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_COUNT = 5,
} ECollisionBoundsStyle;

typedef enum EVROverlayError
{
	EVROverlayError_VROverlayError_None = 0,
	EVROverlayError_VROverlayError_UnknownOverlay = 10,
	EVROverlayError_VROverlayError_InvalidHandle = 11,
	EVROverlayError_VROverlayError_PermissionDenied = 12,
	EVROverlayError_VROverlayError_OverlayLimitExceeded = 13,
	EVROverlayError_VROverlayError_WrongVisibilityType = 14,
	EVROverlayError_VROverlayError_KeyTooLong = 15,
	EVROverlayError_VROverlayError_NameTooLong = 16,
	EVROverlayError_VROverlayError_KeyInUse = 17,
	EVROverlayError_VROverlayError_WrongTransformType = 18,
	EVROverlayError_VROverlayError_InvalidTrackedDevice = 19,
	EVROverlayError_VROverlayError_InvalidParameter = 20,
	EVROverlayError_VROverlayError_ThumbnailCantBeDestroyed = 21,
	EVROverlayError_VROverlayError_ArrayTooSmall = 22,
	EVROverlayError_VROverlayError_RequestFailed = 23,
	EVROverlayError_VROverlayError_InvalidTexture = 24,
	EVROverlayError_VROverlayError_UnableToLoadFile = 25,
	EVROverlayError_VROverlayError_KeyboardAlreadyInUse = 26,
	EVROverlayError_VROverlayError_NoNeighbor = 27,
	EVROverlayError_VROverlayError_TooManyMaskPrimitives = 29,
	EVROverlayError_VROverlayError_BadMaskPrimitive = 30,
} EVROverlayError;

typedef enum EVRApplicationType
{
	EVRApplicationType_VRApplication_Other = 0,
	EVRApplicationType_VRApplication_Scene = 1,
	EVRApplicationType_VRApplication_Overlay = 2,
	EVRApplicationType_VRApplication_Background = 3,
	EVRApplicationType_VRApplication_Utility = 4,
	EVRApplicationType_VRApplication_VRMonitor = 5,
	EVRApplicationType_VRApplication_SteamWatchdog = 6,
	EVRApplicationType_VRApplication_Max = 7,
} EVRApplicationType;

typedef enum EVRFirmwareError
{
	EVRFirmwareError_VRFirmwareError_None = 0,
	EVRFirmwareError_VRFirmwareError_Success = 1,
	EVRFirmwareError_VRFirmwareError_Fail = 2,
} EVRFirmwareError;

typedef enum EVRNotificationError
{
	EVRNotificationError_VRNotificationError_OK = 0,
	EVRNotificationError_VRNotificationError_InvalidNotificationId = 100,
	EVRNotificationError_VRNotificationError_NotificationQueueFull = 101,
	EVRNotificationError_VRNotificationError_InvalidOverlayHandle = 102,
	EVRNotificationError_VRNotificationError_SystemWithUserValueAlreadyExists = 103,
} EVRNotificationError;

typedef enum EVRInitError
{
	EVRInitError_VRInitError_None = 0,
	EVRInitError_VRInitError_Unknown = 1,
	EVRInitError_VRInitError_Init_InstallationNotFound = 100,
	EVRInitError_VRInitError_Init_InstallationCorrupt = 101,
	EVRInitError_VRInitError_Init_VRClientDLLNotFound = 102,
	EVRInitError_VRInitError_Init_FileNotFound = 103,
	EVRInitError_VRInitError_Init_FactoryNotFound = 104,
	EVRInitError_VRInitError_Init_InterfaceNotFound = 105,
	EVRInitError_VRInitError_Init_InvalidInterface = 106,
	EVRInitError_VRInitError_Init_UserConfigDirectoryInvalid = 107,
	EVRInitError_VRInitError_Init_HmdNotFound = 108,
	EVRInitError_VRInitError_Init_NotInitialized = 109,
	EVRInitError_VRInitError_Init_PathRegistryNotFound = 110,
	EVRInitError_VRInitError_Init_NoConfigPath = 111,
	EVRInitError_VRInitError_Init_NoLogPath = 112,
	EVRInitError_VRInitError_Init_PathRegistryNotWritable = 113,
	EVRInitError_VRInitError_Init_AppInfoInitFailed = 114,
	EVRInitError_VRInitError_Init_Retry = 115,
	EVRInitError_VRInitError_Init_InitCanceledByUser = 116,
	EVRInitError_VRInitError_Init_AnotherAppLaunching = 117,
	EVRInitError_VRInitError_Init_SettingsInitFailed = 118,
	EVRInitError_VRInitError_Init_ShuttingDown = 119,
	EVRInitError_VRInitError_Init_TooManyObjects = 120,
	EVRInitError_VRInitError_Init_NoServerForBackgroundApp = 121,
	EVRInitError_VRInitError_Init_NotSupportedWithCompositor = 122,
	EVRInitError_VRInitError_Init_NotAvailableToUtilityApps = 123,
	EVRInitError_VRInitError_Init_Internal = 124,
	EVRInitError_VRInitError_Init_HmdDriverIdIsNone = 125,
	EVRInitError_VRInitError_Init_HmdNotFoundPresenceFailed = 126,
	EVRInitError_VRInitError_Init_VRMonitorNotFound = 127,
	EVRInitError_VRInitError_Init_VRMonitorStartupFailed = 128,
	EVRInitError_VRInitError_Init_LowPowerWatchdogNotSupported = 129,
	EVRInitError_VRInitError_Init_InvalidApplicationType = 130,
	EVRInitError_VRInitError_Init_NotAvailableToWatchdogApps = 131,
	EVRInitError_VRInitError_Init_WatchdogDisabledInSettings = 132,
	EVRInitError_VRInitError_Init_VRDashboardNotFound = 133,
	EVRInitError_VRInitError_Init_VRDashboardStartupFailed = 134,
	EVRInitError_VRInitError_Driver_Failed = 200,
	EVRInitError_VRInitError_Driver_Unknown = 201,
	EVRInitError_VRInitError_Driver_HmdUnknown = 202,
	EVRInitError_VRInitError_Driver_NotLoaded = 203,
	EVRInitError_VRInitError_Driver_RuntimeOutOfDate = 204,
	EVRInitError_VRInitError_Driver_HmdInUse = 205,
	EVRInitError_VRInitError_Driver_NotCalibrated = 206,
	EVRInitError_VRInitError_Driver_CalibrationInvalid = 207,
	EVRInitError_VRInitError_Driver_HmdDisplayNotFound = 208,
	EVRInitError_VRInitError_Driver_TrackedDeviceInterfaceUnknown = 209,
	EVRInitError_VRInitError_Driver_HmdDriverIdOutOfBounds = 211,
	EVRInitError_VRInitError_Driver_HmdDisplayMirrored = 212,
	EVRInitError_VRInitError_IPC_ServerInitFailed = 300,
	EVRInitError_VRInitError_IPC_ConnectFailed = 301,
	EVRInitError_VRInitError_IPC_SharedStateInitFailed = 302,
	EVRInitError_VRInitError_IPC_CompositorInitFailed = 303,
	EVRInitError_VRInitError_IPC_MutexInitFailed = 304,
	EVRInitError_VRInitError_IPC_Failed = 305,
	EVRInitError_VRInitError_IPC_CompositorConnectFailed = 306,
	EVRInitError_VRInitError_IPC_CompositorInvalidConnectResponse = 307,
	EVRInitError_VRInitError_IPC_ConnectFailedAfterMultipleAttempts = 308,
	EVRInitError_VRInitError_Compositor_Failed = 400,
	EVRInitError_VRInitError_Compositor_D3D11HardwareRequired = 401,
	EVRInitError_VRInitError_Compositor_FirmwareRequiresUpdate = 402,
	EVRInitError_VRInitError_Compositor_OverlayInitFailed = 403,
	EVRInitError_VRInitError_Compositor_ScreenshotsInitFailed = 404,
	EVRInitError_VRInitError_VendorSpecific_UnableToConnectToOculusRuntime = 1000,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_CantOpenDevice = 1101,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart = 1102,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_NoStoredConfig = 1103,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooBig = 1104,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooSmall = 1105,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToInitZLib = 1106,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion = 1107,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart = 1108,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart = 1109,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext = 1110,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataAddressRange = 1111,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataError = 1112,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck = 1113,
	EVRInitError_VRInitError_Steam_SteamInstallationNotFound = 2000,
} EVRInitError;

typedef enum EVRScreenshotType
{
	EVRScreenshotType_VRScreenshotType_None = 0,
	EVRScreenshotType_VRScreenshotType_Mono = 1,
	EVRScreenshotType_VRScreenshotType_Stereo = 2,
	EVRScreenshotType_VRScreenshotType_Cubemap = 3,
	EVRScreenshotType_VRScreenshotType_MonoPanorama = 4,
	EVRScreenshotType_VRScreenshotType_StereoPanorama = 5,
} EVRScreenshotType;

typedef enum EVRScreenshotPropertyFilenames
{
	EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_Preview = 0,
	EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_VR = 1,
} EVRScreenshotPropertyFilenames;

typedef enum EVRTrackedCameraError
{
	EVRTrackedCameraError_VRTrackedCameraError_None = 0,
	EVRTrackedCameraError_VRTrackedCameraError_OperationFailed = 100,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidHandle = 101,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameHeaderVersion = 102,
	EVRTrackedCameraError_VRTrackedCameraError_OutOfHandles = 103,
	EVRTrackedCameraError_VRTrackedCameraError_IPCFailure = 104,
	EVRTrackedCameraError_VRTrackedCameraError_NotSupportedForThisDevice = 105,
	EVRTrackedCameraError_VRTrackedCameraError_SharedMemoryFailure = 106,
	EVRTrackedCameraError_VRTrackedCameraError_FrameBufferingFailure = 107,
	EVRTrackedCameraError_VRTrackedCameraError_StreamSetupFailure = 108,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidGLTextureId = 109,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidSharedTextureHandle = 110,
	EVRTrackedCameraError_VRTrackedCameraError_FailedToGetGLTextureId = 111,
	EVRTrackedCameraError_VRTrackedCameraError_SharedTextureFailure = 112,
	EVRTrackedCameraError_VRTrackedCameraError_NoFrameAvailable = 113,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidArgument = 114,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameBufferSize = 115,
} EVRTrackedCameraError;

typedef enum EVRTrackedCameraFrameType
{
	EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Distorted = 0,
	EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Undistorted = 1,
	EVRTrackedCameraFrameType_VRTrackedCameraFrameType_MaximumUndistorted = 2,
	EVRTrackedCameraFrameType_MAX_CAMERA_FRAME_TYPES = 3,
} EVRTrackedCameraFrameType;

typedef enum EVRApplicationError
{
	EVRApplicationError_VRApplicationError_None = 0,
	EVRApplicationError_VRApplicationError_AppKeyAlreadyExists = 100,
	EVRApplicationError_VRApplicationError_NoManifest = 101,
	EVRApplicationError_VRApplicationError_NoApplication = 102,
	EVRApplicationError_VRApplicationError_InvalidIndex = 103,
	EVRApplicationError_VRApplicationError_UnknownApplication = 104,
	EVRApplicationError_VRApplicationError_IPCFailed = 105,
	EVRApplicationError_VRApplicationError_ApplicationAlreadyRunning = 106,
	EVRApplicationError_VRApplicationError_InvalidManifest = 107,
	EVRApplicationError_VRApplicationError_InvalidApplication = 108,
	EVRApplicationError_VRApplicationError_LaunchFailed = 109,
	EVRApplicationError_VRApplicationError_ApplicationAlreadyStarting = 110,
	EVRApplicationError_VRApplicationError_LaunchInProgress = 111,
	EVRApplicationError_VRApplicationError_OldApplicationQuitting = 112,
	EVRApplicationError_VRApplicationError_TransitionAborted = 113,
	EVRApplicationError_VRApplicationError_IsTemplate = 114,
	EVRApplicationError_VRApplicationError_BufferTooSmall = 200,
	EVRApplicationError_VRApplicationError_PropertyNotSet = 201,
	EVRApplicationError_VRApplicationError_UnknownProperty = 202,
	EVRApplicationError_VRApplicationError_InvalidParameter = 203,
} EVRApplicationError;

typedef enum EVRApplicationProperty
{
	EVRApplicationProperty_VRApplicationProperty_Name_String = 0,
	EVRApplicationProperty_VRApplicationProperty_LaunchType_String = 11,
	EVRApplicationProperty_VRApplicationProperty_WorkingDirectory_String = 12,
	EVRApplicationProperty_VRApplicationProperty_BinaryPath_String = 13,
	EVRApplicationProperty_VRApplicationProperty_Arguments_String = 14,
	EVRApplicationProperty_VRApplicationProperty_URL_String = 15,
	EVRApplicationProperty_VRApplicationProperty_Description_String = 50,
	EVRApplicationProperty_VRApplicationProperty_NewsURL_String = 51,
	EVRApplicationProperty_VRApplicationProperty_ImagePath_String = 52,
	EVRApplicationProperty_VRApplicationProperty_Source_String = 53,
	EVRApplicationProperty_VRApplicationProperty_IsDashboardOverlay_Bool = 60,
	EVRApplicationProperty_VRApplicationProperty_IsTemplate_Bool = 61,
	EVRApplicationProperty_VRApplicationProperty_IsInstanced_Bool = 62,
	EVRApplicationProperty_VRApplicationProperty_LastLaunchTime_Uint64 = 70,
} EVRApplicationProperty;

typedef enum EVRApplicationTransitionState
{
	EVRApplicationTransitionState_VRApplicationTransition_None = 0,
	EVRApplicationTransitionState_VRApplicationTransition_OldAppQuitSent = 10,
	EVRApplicationTransitionState_VRApplicationTransition_WaitingForExternalLaunch = 11,
	EVRApplicationTransitionState_VRApplicationTransition_NewAppLaunched = 20,
} EVRApplicationTransitionState;

typedef enum ChaperoneCalibrationState
{
	ChaperoneCalibrationState_OK = 1,
	ChaperoneCalibrationState_Warning = 100,
	ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved = 101,
	ChaperoneCalibrationState_Warning_BaseStationRemoved = 102,
	ChaperoneCalibrationState_Warning_SeatedBoundsInvalid = 103,
	ChaperoneCalibrationState_Error = 200,
	ChaperoneCalibrationState_Error_BaseStationUninitialized = 201,
	ChaperoneCalibrationState_Error_BaseStationConflict = 202,
	ChaperoneCalibrationState_Error_PlayAreaInvalid = 203,
	ChaperoneCalibrationState_Error_CollisionBoundsInvalid = 204,
} ChaperoneCalibrationState;

typedef enum EChaperoneConfigFile
{
	EChaperoneConfigFile_Live = 1,
	EChaperoneConfigFile_Temp = 2,
} EChaperoneConfigFile;

typedef enum EChaperoneImportFlags
{
	EChaperoneImportFlags_EChaperoneImport_BoundsOnly = 1,
} EChaperoneImportFlags;

typedef enum EVRCompositorError
{
	EVRCompositorError_VRCompositorError_None = 0,
	EVRCompositorError_VRCompositorError_RequestFailed = 1,
	EVRCompositorError_VRCompositorError_IncompatibleVersion = 100,
	EVRCompositorError_VRCompositorError_DoNotHaveFocus = 101,
	EVRCompositorError_VRCompositorError_InvalidTexture = 102,
	EVRCompositorError_VRCompositorError_IsNotSceneApplication = 103,
	EVRCompositorError_VRCompositorError_TextureIsOnWrongDevice = 104,
	EVRCompositorError_VRCompositorError_TextureUsesUnsupportedFormat = 105,
	EVRCompositorError_VRCompositorError_SharedTexturesNotSupported = 106,
	EVRCompositorError_VRCompositorError_IndexOutOfRange = 107,
	EVRCompositorError_VRCompositorError_AlreadySubmitted = 108,
} EVRCompositorError;

typedef enum VROverlayInputMethod
{
	VROverlayInputMethod_None = 0,
	VROverlayInputMethod_Mouse = 1,
} VROverlayInputMethod;

typedef enum VROverlayTransformType
{
	VROverlayTransformType_VROverlayTransform_Absolute = 0,
	VROverlayTransformType_VROverlayTransform_TrackedDeviceRelative = 1,
	VROverlayTransformType_VROverlayTransform_SystemOverlay = 2,
	VROverlayTransformType_VROverlayTransform_TrackedComponent = 3,
} VROverlayTransformType;

typedef enum VROverlayFlags
{
	VROverlayFlags_None = 0,
	VROverlayFlags_Curved = 1,
	VROverlayFlags_RGSS4X = 2,
	VROverlayFlags_NoDashboardTab = 3,
	VROverlayFlags_AcceptsGamepadEvents = 4,
	VROverlayFlags_ShowGamepadFocus = 5,
	VROverlayFlags_SendVRScrollEvents = 6,
	VROverlayFlags_SendVRTouchpadEvents = 7,
	VROverlayFlags_ShowTouchPadScrollWheel = 8,
	VROverlayFlags_TransferOwnershipToInternalProcess = 9,
	VROverlayFlags_SideBySide_Parallel = 10,
	VROverlayFlags_SideBySide_Crossed = 11,
	VROverlayFlags_Panorama = 12,
	VROverlayFlags_StereoPanorama = 13,
	VROverlayFlags_SortWithNonSceneOverlays = 14,
	VROverlayFlags_VisibleInDashboard = 15,
} VROverlayFlags;

typedef enum VRMessageOverlayResponse
{
	VRMessageOverlayResponse_ButtonPress_0 = 0,
	VRMessageOverlayResponse_ButtonPress_1 = 1,
	VRMessageOverlayResponse_ButtonPress_2 = 2,
	VRMessageOverlayResponse_ButtonPress_3 = 3,
	VRMessageOverlayResponse_CouldntFindSystemOverlay = 4,
	VRMessageOverlayResponse_CouldntFindOrCreateClientOverlay = 5,
	VRMessageOverlayResponse_ApplicationQuit = 6,
} VRMessageOverlayResponse;

typedef enum EGamepadTextInputMode
{
	EGamepadTextInputMode_k_EGamepadTextInputModeNormal = 0,
	EGamepadTextInputMode_k_EGamepadTextInputModePassword = 1,
	EGamepadTextInputMode_k_EGamepadTextInputModeSubmit = 2,
} EGamepadTextInputMode;

typedef enum EGamepadTextInputLineMode
{
	EGamepadTextInputLineMode_k_EGamepadTextInputLineModeSingleLine = 0,
	EGamepadTextInputLineMode_k_EGamepadTextInputLineModeMultipleLines = 1,
} EGamepadTextInputLineMode;

typedef enum EOverlayDirection
{
	EOverlayDirection_OverlayDirection_Up = 0,
	EOverlayDirection_OverlayDirection_Down = 1,
	EOverlayDirection_OverlayDirection_Left = 2,
	EOverlayDirection_OverlayDirection_Right = 3,
	EOverlayDirection_OverlayDirection_Count = 4,
} EOverlayDirection;

typedef enum EVROverlayIntersectionMaskPrimitiveType
{
	EVROverlayIntersectionMaskPrimitiveType_OverlayIntersectionPrimitiveType_Rectangle = 0,
	EVROverlayIntersectionMaskPrimitiveType_OverlayIntersectionPrimitiveType_Circle = 1,
} EVROverlayIntersectionMaskPrimitiveType;

typedef enum EVRRenderModelError
{
	EVRRenderModelError_VRRenderModelError_None = 0,
	EVRRenderModelError_VRRenderModelError_Loading = 100,
	EVRRenderModelError_VRRenderModelError_NotSupported = 200,
	EVRRenderModelError_VRRenderModelError_InvalidArg = 300,
	EVRRenderModelError_VRRenderModelError_InvalidModel = 301,
	EVRRenderModelError_VRRenderModelError_NoShapes = 302,
	EVRRenderModelError_VRRenderModelError_MultipleShapes = 303,
	EVRRenderModelError_VRRenderModelError_TooManyVertices = 304,
	EVRRenderModelError_VRRenderModelError_MultipleTextures = 305,
	EVRRenderModelError_VRRenderModelError_BufferTooSmall = 306,
	EVRRenderModelError_VRRenderModelError_NotEnoughNormals = 307,
	EVRRenderModelError_VRRenderModelError_NotEnoughTexCoords = 308,
	EVRRenderModelError_VRRenderModelError_InvalidTexture = 400,
} EVRRenderModelError;

typedef enum EVRComponentProperty
{
	EVRComponentProperty_VRComponentProperty_IsStatic = 1,
	EVRComponentProperty_VRComponentProperty_IsVisible = 2,
	EVRComponentProperty_VRComponentProperty_IsTouched = 4,
	EVRComponentProperty_VRComponentProperty_IsPressed = 8,
	EVRComponentProperty_VRComponentProperty_IsScrolled = 16,
} EVRComponentProperty;

typedef enum EVRNotificationType
{
	EVRNotificationType_Transient = 0,
	EVRNotificationType_Persistent = 1,
	EVRNotificationType_Transient_SystemWithUserValue = 2,
} EVRNotificationType;

typedef enum EVRNotificationStyle
{
	EVRNotificationStyle_None = 0,
	EVRNotificationStyle_Application = 100,
	EVRNotificationStyle_Contact_Disabled = 200,
	EVRNotificationStyle_Contact_Enabled = 201,
	EVRNotificationStyle_Contact_Active = 202,
} EVRNotificationStyle;

typedef enum EVRSettingsError
{
	EVRSettingsError_VRSettingsError_None = 0,
	EVRSettingsError_VRSettingsError_IPCFailed = 1,
	EVRSettingsError_VRSettingsError_WriteFailed = 2,
	EVRSettingsError_VRSettingsError_ReadFailed = 3,
	EVRSettingsError_VRSettingsError_JsonParseFailed = 4,
	EVRSettingsError_VRSettingsError_UnsetSettingHasNoDefault = 5,
} EVRSettingsError;

typedef enum EVRScreenshotError
{
	EVRScreenshotError_VRScreenshotError_None = 0,
	EVRScreenshotError_VRScreenshotError_RequestFailed = 1,
	EVRScreenshotError_VRScreenshotError_IncompatibleVersion = 100,
	EVRScreenshotError_VRScreenshotError_NotFound = 101,
	EVRScreenshotError_VRScreenshotError_BufferTooSmall = 102,
	EVRScreenshotError_VRScreenshotError_ScreenshotAlreadyInProgress = 108,
} EVRScreenshotError;


// OpenVR typedefs

typedef uint32_t TrackedDeviceIndex_t;
typedef uint32_t VRNotificationId;
typedef uint64_t VROverlayHandle_t;
typedef void * glSharedTextureHandle_t;
typedef int32_t glInt_t;
typedef uint32_t glUInt_t;
typedef uint64_t SharedTextureHandle_t;
typedef uint32_t TrackedDeviceIndex_t;
typedef uint64_t VROverlayHandle_t;
typedef uint64_t TrackedCameraHandle_t;
typedef uint32_t ScreenshotHandle_t;
typedef uint32_t VRComponentProperties;
typedef int32_t TextureID_t;
typedef uint32_t VRNotificationId;
typedef EVRInitError HmdError;
typedef EVREye Hmd_Eye;
typedef EColorSpace ColorSpace;
typedef ETrackingResult HmdTrackingResult;
typedef ETrackedDeviceClass TrackedDeviceClass;
typedef ETrackingUniverseOrigin TrackingUniverseOrigin;
typedef ETrackedDeviceProperty TrackedDeviceProperty;
typedef ETrackedPropertyError TrackedPropertyError;
typedef EVRSubmitFlags VRSubmitFlags_t;
typedef EVRState VRState_t;
typedef ECollisionBoundsStyle CollisionBoundsStyle_t;
typedef EVROverlayError VROverlayError;
typedef EVRFirmwareError VRFirmwareError;
typedef EVRCompositorError VRCompositorError;
typedef EVRScreenshotError VRScreenshotsError;

// OpenVR Structs

typedef struct HmdMatrix34_t
{
	float m[3][4]; //float[3][4]
} HmdMatrix34_t;

typedef struct HmdMatrix44_t
{
	float m[4][4]; //float[4][4]
} HmdMatrix44_t;

typedef struct HmdVector3_t
{
	float v[3]; //float[3]
} HmdVector3_t;

typedef struct HmdVector4_t
{
	float v[4]; //float[4]
} HmdVector4_t;

typedef struct HmdVector3d_t
{
	double v[3]; //double[3]
} HmdVector3d_t;

typedef struct HmdVector2_t
{
	float v[2]; //float[2]
} HmdVector2_t;

typedef struct HmdQuaternion_t
{
	double w;
	double x;
	double y;
	double z;
} HmdQuaternion_t;

typedef struct HmdColor_t
{
	float r;
	float g;
	float b;
	float a;
} HmdColor_t;

typedef struct HmdQuad_t
{
	struct HmdVector3_t vCorners[4]; //struct vr::HmdVector3_t[4]
} HmdQuad_t;

typedef struct HmdRect2_t
{
	struct HmdVector2_t vTopLeft;
	struct HmdVector2_t vBottomRight;
} HmdRect2_t;

typedef struct DistortionCoordinates_t
{
	float rfRed[2]; //float[2]
	float rfGreen[2]; //float[2]
	float rfBlue[2]; //float[2]
} DistortionCoordinates_t;

typedef struct Texture_t
{
	void * handle; // void *
	enum ETextureType eType;
	enum EColorSpace eColorSpace;
} Texture_t;

typedef struct TrackedDevicePose_t
{
	struct HmdMatrix34_t mDeviceToAbsoluteTracking;
	struct HmdVector3_t vVelocity;
	struct HmdVector3_t vAngularVelocity;
	enum ETrackingResult eTrackingResult;
	bool bPoseIsValid;
	bool bDeviceIsConnected;
} TrackedDevicePose_t;

typedef struct VRTextureBounds_t
{
	float uMin;
	float vMin;
	float uMax;
	float vMax;
} VRTextureBounds_t;

typedef struct VRVulkanTextureData_t
{
	uint64_t m_nImage;
	struct VkDevice_T * m_pDevice; // struct VkDevice_T *
	struct VkPhysicalDevice_T * m_pPhysicalDevice; // struct VkPhysicalDevice_T *
	struct VkInstance_T * m_pInstance; // struct VkInstance_T *
	struct VkQueue_T * m_pQueue; // struct VkQueue_T *
	uint32_t m_nQueueFamilyIndex;
	uint32_t m_nWidth;
	uint32_t m_nHeight;
	uint32_t m_nFormat;
	uint32_t m_nSampleCount;
} VRVulkanTextureData_t;

typedef struct VREvent_Controller_t
{
	uint32_t button;
} VREvent_Controller_t;

typedef struct VREvent_Mouse_t
{
	float x;
	float y;
	uint32_t button;
} VREvent_Mouse_t;

typedef struct VREvent_Scroll_t
{
	float xdelta;
	float ydelta;
	uint32_t repeatCount;
} VREvent_Scroll_t;

typedef struct VREvent_TouchPadMove_t
{
	bool bFingerDown;
	float flSecondsFingerDown;
	float fValueXFirst;
	float fValueYFirst;
	float fValueXRaw;
	float fValueYRaw;
} VREvent_TouchPadMove_t;

typedef struct VREvent_Notification_t
{
	uint64_t ulUserValue;
	uint32_t notificationId;
} VREvent_Notification_t;

typedef struct VREvent_Process_t
{
	uint32_t pid;
	uint32_t oldPid;
	bool bForced;
} VREvent_Process_t;

typedef struct VREvent_Overlay_t
{
	uint64_t overlayHandle;
} VREvent_Overlay_t;

typedef struct VREvent_Status_t
{
	uint32_t statusState;
} VREvent_Status_t;

typedef struct VREvent_Keyboard_t
{
	char * cNewInput[8]; //char[8]
	uint64_t uUserValue;
} VREvent_Keyboard_t;

typedef struct VREvent_Ipd_t
{
	float ipdMeters;
} VREvent_Ipd_t;

typedef struct VREvent_Chaperone_t
{
	uint64_t m_nPreviousUniverse;
	uint64_t m_nCurrentUniverse;
} VREvent_Chaperone_t;

typedef struct VREvent_Reserved_t
{
	uint64_t reserved0;
	uint64_t reserved1;
} VREvent_Reserved_t;

typedef struct VREvent_PerformanceTest_t
{
	uint32_t m_nFidelityLevel;
} VREvent_PerformanceTest_t;

typedef struct VREvent_SeatedZeroPoseReset_t
{
	bool bResetBySystemMenu;
} VREvent_SeatedZeroPoseReset_t;

typedef struct VREvent_Screenshot_t
{
	uint32_t handle;
	uint32_t type;
} VREvent_Screenshot_t;

typedef struct VREvent_ScreenshotProgress_t
{
	float progress;
} VREvent_ScreenshotProgress_t;

typedef struct VREvent_ApplicationLaunch_t
{
	uint32_t pid;
	uint32_t unArgsHandle;
} VREvent_ApplicationLaunch_t;

typedef struct VREvent_EditingCameraSurface_t
{
	uint64_t overlayHandle;
	uint32_t nVisualMode;
} VREvent_EditingCameraSurface_t;

typedef struct VREvent_MessageOverlay_t
{
	uint32_t unVRMessageOverlayResponse;
} VREvent_MessageOverlay_t;

typedef struct HiddenAreaMesh_t
{
	struct HmdVector2_t * pVertexData; // const struct vr::HmdVector2_t *
	uint32_t unTriangleCount;
} HiddenAreaMesh_t;

typedef struct VRControllerAxis_t
{
	float x;
	float y;
} VRControllerAxis_t;

typedef struct VRControllerState_t
{
	uint32_t unPacketNum;
	uint64_t ulButtonPressed;
	uint64_t ulButtonTouched;
	struct VRControllerAxis_t rAxis[5]; //struct vr::VRControllerAxis_t[5]
} VRControllerState_t;

typedef struct Compositor_OverlaySettings
{
	uint32_t size;
	bool curved;
	bool antialias;
	float scale;
	float distance;
	float alpha;
	float uOffset;
	float vOffset;
	float uScale;
	float vScale;
	float gridDivs;
	float gridWidth;
	float gridScale;
	struct HmdMatrix44_t transform;
} Compositor_OverlaySettings;

typedef struct CameraVideoStreamFrameHeader_t
{
	enum EVRTrackedCameraFrameType eFrameType;
	uint32_t nWidth;
	uint32_t nHeight;
	uint32_t nBytesPerPixel;
	uint32_t nFrameSequence;
	struct TrackedDevicePose_t standingTrackedDevicePose;
} CameraVideoStreamFrameHeader_t;

typedef struct AppOverrideKeys_t
{
	char * pchKey; // const char *
	char * pchValue; // const char *
} AppOverrideKeys_t;

typedef struct Compositor_FrameTiming
{
	uint32_t m_nSize;
	uint32_t m_nFrameIndex;
	uint32_t m_nNumFramePresents;
	uint32_t m_nNumMisPresented;
	uint32_t m_nNumDroppedFrames;
	uint32_t m_nReprojectionFlags;
	double m_flSystemTimeInSeconds;
	float m_flPreSubmitGpuMs;
	float m_flPostSubmitGpuMs;
	float m_flTotalRenderGpuMs;
	float m_flCompositorRenderGpuMs;
	float m_flCompositorRenderCpuMs;
	float m_flCompositorIdleCpuMs;
	float m_flClientFrameIntervalMs;
	float m_flPresentCallCpuMs;
	float m_flWaitForPresentCpuMs;
	float m_flSubmitFrameMs;
	float m_flWaitGetPosesCalledMs;
	float m_flNewPosesReadyMs;
	float m_flNewFrameReadyMs;
	float m_flCompositorUpdateStartMs;
	float m_flCompositorUpdateEndMs;
	float m_flCompositorRenderStartMs;
	TrackedDevicePose_t m_HmdPose;
} Compositor_FrameTiming;

typedef struct Compositor_CumulativeStats
{
	uint32_t m_nPid;
	uint32_t m_nNumFramePresents;
	uint32_t m_nNumDroppedFrames;
	uint32_t m_nNumReprojectedFrames;
	uint32_t m_nNumFramePresentsOnStartup;
	uint32_t m_nNumDroppedFramesOnStartup;
	uint32_t m_nNumReprojectedFramesOnStartup;
	uint32_t m_nNumLoading;
	uint32_t m_nNumFramePresentsLoading;
	uint32_t m_nNumDroppedFramesLoading;
	uint32_t m_nNumReprojectedFramesLoading;
	uint32_t m_nNumTimedOut;
	uint32_t m_nNumFramePresentsTimedOut;
	uint32_t m_nNumDroppedFramesTimedOut;
	uint32_t m_nNumReprojectedFramesTimedOut;
} Compositor_CumulativeStats;

typedef struct VROverlayIntersectionParams_t
{
	struct HmdVector3_t vSource;
	struct HmdVector3_t vDirection;
	enum ETrackingUniverseOrigin eOrigin;
} VROverlayIntersectionParams_t;

typedef struct VROverlayIntersectionResults_t
{
	struct HmdVector3_t vPoint;
	struct HmdVector3_t vNormal;
	struct HmdVector2_t vUVs;
	float fDistance;
} VROverlayIntersectionResults_t;

typedef struct IntersectionMaskRectangle_t
{
	float m_flTopLeftX;
	float m_flTopLeftY;
	float m_flWidth;
	float m_flHeight;
} IntersectionMaskRectangle_t;

typedef struct IntersectionMaskCircle_t
{
	float m_flCenterX;
	float m_flCenterY;
	float m_flRadius;
} IntersectionMaskCircle_t;

typedef struct RenderModel_ComponentState_t
{
	struct HmdMatrix34_t mTrackingToComponentRenderModel;
	struct HmdMatrix34_t mTrackingToComponentLocal;
	VRComponentProperties uProperties;
} RenderModel_ComponentState_t;

typedef struct RenderModel_Vertex_t
{
	struct HmdVector3_t vPosition;
	struct HmdVector3_t vNormal;
	float rfTextureCoord[2]; //float[2]
} RenderModel_Vertex_t;

typedef struct RenderModel_TextureMap_t
{
	uint16_t unWidth;
	uint16_t unHeight;
	uint8_t * rubTextureMapData; // const uint8_t *
} RenderModel_TextureMap_t;

typedef struct RenderModel_t
{
	struct RenderModel_Vertex_t * rVertexData; // const struct vr::RenderModel_Vertex_t *
	uint32_t unVertexCount;
	uint16_t * rIndexData; // const uint16_t *
	uint32_t unTriangleCount;
	TextureID_t diffuseTextureId;
} RenderModel_t;

typedef struct RenderModel_ControllerMode_State_t
{
	bool bScrollWheelVisible;
} RenderModel_ControllerMode_State_t;

typedef struct NotificationBitmap_t
{
	void * m_pImageData; // void *
	int32_t m_nWidth;
	int32_t m_nHeight;
	int32_t m_nBytesPerPixel;
} NotificationBitmap_t;

typedef struct COpenVRContext
{
	intptr_t m_pVRSystem; // class vr::IVRSystem *
	intptr_t m_pVRChaperone; // class vr::IVRChaperone *
	intptr_t m_pVRChaperoneSetup; // class vr::IVRChaperoneSetup *
	intptr_t m_pVRCompositor; // class vr::IVRCompositor *
	intptr_t m_pVROverlay; // class vr::IVROverlay *
	intptr_t m_pVRResources; // class vr::IVRResources *
	intptr_t m_pVRRenderModels; // class vr::IVRRenderModels *
	intptr_t m_pVRExtendedDisplay; // class vr::IVRExtendedDisplay *
	intptr_t m_pVRSettings; // class vr::IVRSettings *
	intptr_t m_pVRApplications; // class vr::IVRApplications *
	intptr_t m_pVRTrackedCamera; // class vr::IVRTrackedCamera *
	intptr_t m_pVRScreenshots; // class vr::IVRScreenshots *
} COpenVRContext;


typedef union
{
	VREvent_Reserved_t reserved;
	VREvent_Controller_t controller;
	VREvent_Mouse_t mouse;
	VREvent_Scroll_t scroll;
	VREvent_Process_t process;
	VREvent_Notification_t notification;
	VREvent_Overlay_t overlay;
	VREvent_Status_t status;
	VREvent_Keyboard_t keyboard;
	VREvent_Ipd_t ipd;
	VREvent_Chaperone_t chaperone;
	VREvent_PerformanceTest_t performanceTest;
	VREvent_TouchPadMove_t touchPadMove;
	VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
} VREvent_Data_t;

/** An event posted by the server to all running applications */
struct VREvent_t
{
	uint32_t eventType; // EVREventType enum
	TrackedDeviceIndex_t trackedDeviceIndex;
	float eventAgeSeconds;
	// event data must be the end of the struct as its size is variable
	VREvent_Data_t data;
};


typedef union
{
	IntersectionMaskRectangle_t m_Rectangle;
	IntersectionMaskCircle_t m_Circle;
} VROverlayIntersectionMaskPrimitive_Data_t;

struct VROverlayIntersectionMaskPrimitive_t
{
	EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType;
	VROverlayIntersectionMaskPrimitive_Data_t m_Primitive;
};


// OpenVR Function Pointer Tables

struct VR_IVRSystem_FnTable
{
	void (__stdcall *GetRecommendedRenderTargetSize)(uint32_t * pnWidth, uint32_t * pnHeight);
	struct HmdMatrix44_t (__stdcall *GetProjectionMatrix)(EVREye eEye, float fNearZ, float fFarZ);
	void (__stdcall *GetProjectionRaw)(EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom);
	bool (__stdcall *ComputeDistortion)(EVREye eEye, float fU, float fV, struct DistortionCoordinates_t * pDistortionCoordinates);
	struct HmdMatrix34_t (__stdcall *GetEyeToHeadTransform)(EVREye eEye);
	bool (__stdcall *GetTimeSinceLastVsync)(float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter);
	int32_t (__stdcall *GetD3D9AdapterIndex)();
	void (__stdcall *GetDXGIOutputInfo)(int32_t * pnAdapterIndex);
	bool (__stdcall *IsDisplayOnDesktop)();
	bool (__stdcall *SetDisplayVisibility)(bool bIsVisibleOnDesktop);
	void (__stdcall *GetDeviceToAbsoluteTrackingPose)(ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, struct TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount);
	void (__stdcall *ResetSeatedZeroPose)();
	struct HmdMatrix34_t (__stdcall *GetSeatedZeroPoseToStandingAbsoluteTrackingPose)();
	struct HmdMatrix34_t (__stdcall *GetRawZeroPoseToStandingAbsoluteTrackingPose)();
	uint32_t (__stdcall *GetSortedTrackedDeviceIndicesOfClass)(ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex);
	EDeviceActivityLevel (__stdcall *GetTrackedDeviceActivityLevel)(TrackedDeviceIndex_t unDeviceId);
	void (__stdcall *ApplyTransform)(struct TrackedDevicePose_t * pOutputPose, struct TrackedDevicePose_t * pTrackedDevicePose, struct HmdMatrix34_t * pTransform);
	TrackedDeviceIndex_t (__stdcall *GetTrackedDeviceIndexForControllerRole)(ETrackedControllerRole unDeviceType);
	ETrackedControllerRole (__stdcall *GetControllerRoleForTrackedDeviceIndex)(TrackedDeviceIndex_t unDeviceIndex);
	ETrackedDeviceClass (__stdcall *GetTrackedDeviceClass)(TrackedDeviceIndex_t unDeviceIndex);
	bool (__stdcall *IsTrackedDeviceConnected)(TrackedDeviceIndex_t unDeviceIndex);
	bool (__stdcall *GetBoolTrackedDeviceProperty)(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError);
	float (__stdcall *GetFloatTrackedDeviceProperty)(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError);
	int32_t (__stdcall *GetInt32TrackedDeviceProperty)(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError);
	uint64_t (__stdcall *GetUint64TrackedDeviceProperty)(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError);
	struct HmdMatrix34_t (__stdcall *GetMatrix34TrackedDeviceProperty)(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError);
	uint32_t (__stdcall *GetStringTrackedDeviceProperty)(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError);
	char * (__stdcall *GetPropErrorNameFromEnum)(ETrackedPropertyError error);
	bool (__stdcall *PollNextEvent)(struct VREvent_t * pEvent, uint32_t uncbVREvent);
	bool (__stdcall *PollNextEventWithPose)(ETrackingUniverseOrigin eOrigin, struct VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose);
	char * (__stdcall *GetEventTypeNameFromEnum)(EVREventType eType);
	struct HiddenAreaMesh_t (__stdcall *GetHiddenAreaMesh)(EVREye eEye, EHiddenAreaMeshType type);
	bool (__stdcall *GetControllerState)(TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize);
	bool (__stdcall *GetControllerStateWithPose)(ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, struct TrackedDevicePose_t * pTrackedDevicePose);
	void (__stdcall *TriggerHapticPulse)(TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec);
	char * (__stdcall *GetButtonIdNameFromEnum)(EVRButtonId eButtonId);
	char * (__stdcall *GetControllerAxisTypeNameFromEnum)(EVRControllerAxisType eAxisType);
	bool (__stdcall *CaptureInputFocus)();
	void (__stdcall *ReleaseInputFocus)();
	bool (__stdcall *IsInputFocusCapturedByAnotherProcess)();
	uint32_t (__stdcall *DriverDebugRequest)(TrackedDeviceIndex_t unDeviceIndex, char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize);
	EVRFirmwareError (__stdcall *PerformFirmwareUpdate)(TrackedDeviceIndex_t unDeviceIndex);
	void (__stdcall *AcknowledgeQuit_Exiting)();
	void (__stdcall *AcknowledgeQuit_UserPrompt)();
};

struct VR_IVRExtendedDisplay_FnTable
{
	void (__stdcall *GetWindowBounds)(int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight);
	void (__stdcall *GetEyeOutputViewport)(EVREye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight);
	void (__stdcall *GetDXGIOutputInfo)(int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex);
};

struct VR_IVRTrackedCamera_FnTable
{
	char * (__stdcall *GetCameraErrorNameFromEnum)(EVRTrackedCameraError eCameraError);
	EVRTrackedCameraError (__stdcall *HasCamera)(TrackedDeviceIndex_t nDeviceIndex, bool * pHasCamera);
	EVRTrackedCameraError (__stdcall *GetCameraFrameSize)(TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize);
	EVRTrackedCameraError (__stdcall *GetCameraIntrinsics)(TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter);
	EVRTrackedCameraError (__stdcall *GetCameraProjection)(TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection);
	EVRTrackedCameraError (__stdcall *AcquireVideoStreamingService)(TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t * pHandle);
	EVRTrackedCameraError (__stdcall *ReleaseVideoStreamingService)(TrackedCameraHandle_t hTrackedCamera);
	EVRTrackedCameraError (__stdcall *GetVideoStreamFrameBuffer)(TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize);
	EVRTrackedCameraError (__stdcall *GetVideoStreamTextureSize)(TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight);
	EVRTrackedCameraError (__stdcall *GetVideoStreamTextureD3D11)(TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize);
	EVRTrackedCameraError (__stdcall *GetVideoStreamTextureGL)(TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t * pglTextureId, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize);
	EVRTrackedCameraError (__stdcall *ReleaseVideoStreamTextureGL)(TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId);
};

struct VR_IVRApplications_FnTable
{
	EVRApplicationError (__stdcall *AddApplicationManifest)(char * pchApplicationManifestFullPath, bool bTemporary);
	EVRApplicationError (__stdcall *RemoveApplicationManifest)(char * pchApplicationManifestFullPath);
	bool (__stdcall *IsApplicationInstalled)(char * pchAppKey);
	uint32_t (__stdcall *GetApplicationCount)();
	EVRApplicationError (__stdcall *GetApplicationKeyByIndex)(uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
	EVRApplicationError (__stdcall *GetApplicationKeyByProcessId)(uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
	EVRApplicationError (__stdcall *LaunchApplication)(char * pchAppKey);
	EVRApplicationError (__stdcall *LaunchTemplateApplication)(char * pchTemplateAppKey, char * pchNewAppKey, struct AppOverrideKeys_t * pKeys, uint32_t unKeys);
	EVRApplicationError (__stdcall *LaunchApplicationFromMimeType)(char * pchMimeType, char * pchArgs);
	EVRApplicationError (__stdcall *LaunchDashboardOverlay)(char * pchAppKey);
	bool (__stdcall *CancelApplicationLaunch)(char * pchAppKey);
	EVRApplicationError (__stdcall *IdentifyApplication)(uint32_t unProcessId, char * pchAppKey);
	uint32_t (__stdcall *GetApplicationProcessId)(char * pchAppKey);
	char * (__stdcall *GetApplicationsErrorNameFromEnum)(EVRApplicationError error);
	uint32_t (__stdcall *GetApplicationPropertyString)(char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError);
	bool (__stdcall *GetApplicationPropertyBool)(char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError);
	uint64_t (__stdcall *GetApplicationPropertyUint64)(char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError);
	EVRApplicationError (__stdcall *SetApplicationAutoLaunch)(char * pchAppKey, bool bAutoLaunch);
	bool (__stdcall *GetApplicationAutoLaunch)(char * pchAppKey);
	EVRApplicationError (__stdcall *SetDefaultApplicationForMimeType)(char * pchAppKey, char * pchMimeType);
	bool (__stdcall *GetDefaultApplicationForMimeType)(char * pchMimeType, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
	bool (__stdcall *GetApplicationSupportedMimeTypes)(char * pchAppKey, char * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer);
	uint32_t (__stdcall *GetApplicationsThatSupportMimeType)(char * pchMimeType, char * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer);
	uint32_t (__stdcall *GetApplicationLaunchArguments)(uint32_t unHandle, char * pchArgs, uint32_t unArgs);
	EVRApplicationError (__stdcall *GetStartingApplication)(char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
	EVRApplicationTransitionState (__stdcall *GetTransitionState)();
	EVRApplicationError (__stdcall *PerformApplicationPrelaunchCheck)(char * pchAppKey);
	char * (__stdcall *GetApplicationsTransitionStateNameFromEnum)(EVRApplicationTransitionState state);
	bool (__stdcall *IsQuitUserPromptRequested)();
	EVRApplicationError (__stdcall *LaunchInternalProcess)(char * pchBinaryPath, char * pchArguments, char * pchWorkingDirectory);
};

struct VR_IVRChaperone_FnTable
{
	ChaperoneCalibrationState (__stdcall *GetCalibrationState)();
	bool (__stdcall *GetPlayAreaSize)(float * pSizeX, float * pSizeZ);
	bool (__stdcall *GetPlayAreaRect)(struct HmdQuad_t * rect);
	void (__stdcall *ReloadInfo)();
	void (__stdcall *SetSceneColor)(struct HmdColor_t color);
	void (__stdcall *GetBoundsColor)(struct HmdColor_t * pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, struct HmdColor_t * pOutputCameraColor);
	bool (__stdcall *AreBoundsVisible)();
	void (__stdcall *ForceBoundsVisible)(bool bForce);
};

struct VR_IVRChaperoneSetup_FnTable
{
	bool (__stdcall *CommitWorkingCopy)(EChaperoneConfigFile configFile);
	void (__stdcall *RevertWorkingCopy)();
	bool (__stdcall *GetWorkingPlayAreaSize)(float * pSizeX, float * pSizeZ);
	bool (__stdcall *GetWorkingPlayAreaRect)(struct HmdQuad_t * rect);
	bool (__stdcall *GetWorkingCollisionBoundsInfo)(struct HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount);
	bool (__stdcall *GetLiveCollisionBoundsInfo)(struct HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount);
	bool (__stdcall *GetWorkingSeatedZeroPoseToRawTrackingPose)(struct HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose);
	bool (__stdcall *GetWorkingStandingZeroPoseToRawTrackingPose)(struct HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose);
	void (__stdcall *SetWorkingPlayAreaSize)(float sizeX, float sizeZ);
	void (__stdcall *SetWorkingCollisionBoundsInfo)(struct HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount);
	void (__stdcall *SetWorkingSeatedZeroPoseToRawTrackingPose)(struct HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose);
	void (__stdcall *SetWorkingStandingZeroPoseToRawTrackingPose)(struct HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose);
	void (__stdcall *ReloadFromDisk)(EChaperoneConfigFile configFile);
	bool (__stdcall *GetLiveSeatedZeroPoseToRawTrackingPose)(struct HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose);
	void (__stdcall *SetWorkingCollisionBoundsTagsInfo)(uint8_t * pTagsBuffer, uint32_t unTagCount);
	bool (__stdcall *GetLiveCollisionBoundsTagsInfo)(uint8_t * pTagsBuffer, uint32_t * punTagCount);
	bool (__stdcall *SetWorkingPhysicalBoundsInfo)(struct HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount);
	bool (__stdcall *GetLivePhysicalBoundsInfo)(struct HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount);
	bool (__stdcall *ExportLiveToBuffer)(char * pBuffer, uint32_t * pnBufferLength);
	bool (__stdcall *ImportFromBufferToWorking)(char * pBuffer, uint32_t nImportFlags);
};

struct VR_IVRCompositor_FnTable
{
	void (__stdcall *SetTrackingSpace)(ETrackingUniverseOrigin eOrigin);
	ETrackingUniverseOrigin (__stdcall *GetTrackingSpace)();
	EVRCompositorError (__stdcall *WaitGetPoses)(struct TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, struct TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount);
	EVRCompositorError (__stdcall *GetLastPoses)(struct TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, struct TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount);
	EVRCompositorError (__stdcall *GetLastPoseForTrackedDeviceIndex)(TrackedDeviceIndex_t unDeviceIndex, struct TrackedDevicePose_t * pOutputPose, struct TrackedDevicePose_t * pOutputGamePose);
	EVRCompositorError (__stdcall *Submit)(EVREye eEye, struct Texture_t * pTexture, struct VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags);
	void (__stdcall *ClearLastSubmittedFrame)();
	void (__stdcall *PostPresentHandoff)();
	bool (__stdcall *GetFrameTiming)(struct Compositor_FrameTiming * pTiming, uint32_t unFramesAgo);
	uint32_t (__stdcall *GetFrameTimings)(struct Compositor_FrameTiming * pTiming, uint32_t nFrames);
	float (__stdcall *GetFrameTimeRemaining)();
	void (__stdcall *GetCumulativeStats)(struct Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes);
	void (__stdcall *FadeToColor)(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground);
	struct HmdColor_t (__stdcall *GetCurrentFadeColor)(bool bBackground);
	void (__stdcall *FadeGrid)(float fSeconds, bool bFadeIn);
	float (__stdcall *GetCurrentGridAlpha)();
	EVRCompositorError (__stdcall *SetSkyboxOverride)(struct Texture_t * pTextures, uint32_t unTextureCount);
	void (__stdcall *ClearSkyboxOverride)();
	void (__stdcall *CompositorBringToFront)();
	void (__stdcall *CompositorGoToBack)();
	void (__stdcall *CompositorQuit)();
	bool (__stdcall *IsFullscreen)();
	uint32_t (__stdcall *GetCurrentSceneFocusProcess)();
	uint32_t (__stdcall *GetLastFrameRenderer)();
	bool (__stdcall *CanRenderScene)();
	void (__stdcall *ShowMirrorWindow)();
	void (__stdcall *HideMirrorWindow)();
	bool (__stdcall *IsMirrorWindowVisible)();
	void (__stdcall *CompositorDumpImages)();
	bool (__stdcall *ShouldAppRenderWithLowResources)();
	void (__stdcall *ForceInterleavedReprojectionOn)(bool bOverride);
	void (__stdcall *ForceReconnectProcess)();
	void (__stdcall *SuspendRendering)(bool bSuspend);
	EVRCompositorError (__stdcall *GetMirrorTextureD3D11)(EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView);
	EVRCompositorError (__stdcall *GetMirrorTextureGL)(EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle);
	bool (__stdcall *ReleaseSharedGLTexture)(glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle);
	void (__stdcall *LockGLSharedTextureForAccess)(glSharedTextureHandle_t glSharedTextureHandle);
	void (__stdcall *UnlockGLSharedTextureForAccess)(glSharedTextureHandle_t glSharedTextureHandle);
	uint32_t (__stdcall *GetVulkanInstanceExtensionsRequired)(char * pchValue, uint32_t unBufferSize);
	uint32_t (__stdcall *GetVulkanDeviceExtensionsRequired)(struct VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize);
};

struct VR_IVROverlay_FnTable
{
	EVROverlayError (__stdcall *FindOverlay)(char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle);
	EVROverlayError (__stdcall *CreateOverlay)(char * pchOverlayKey, char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle);
	EVROverlayError (__stdcall *DestroyOverlay)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (__stdcall *SetHighQualityOverlay)(VROverlayHandle_t ulOverlayHandle);
	VROverlayHandle_t (__stdcall *GetHighQualityOverlay)();
	uint32_t (__stdcall *GetOverlayKey)(VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError);
	uint32_t (__stdcall *GetOverlayName)(VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError);
	EVROverlayError (__stdcall *GetOverlayImageData)(VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight);
	char * (__stdcall *GetOverlayErrorNameFromEnum)(EVROverlayError error);
	EVROverlayError (__stdcall *SetOverlayRenderingPid)(VROverlayHandle_t ulOverlayHandle, uint32_t unPID);
	uint32_t (__stdcall *GetOverlayRenderingPid)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (__stdcall *SetOverlayFlag)(VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled);
	EVROverlayError (__stdcall *GetOverlayFlag)(VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled);
	EVROverlayError (__stdcall *SetOverlayColor)(VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue);
	EVROverlayError (__stdcall *GetOverlayColor)(VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue);
	EVROverlayError (__stdcall *SetOverlayAlpha)(VROverlayHandle_t ulOverlayHandle, float fAlpha);
	EVROverlayError (__stdcall *GetOverlayAlpha)(VROverlayHandle_t ulOverlayHandle, float * pfAlpha);
	EVROverlayError (__stdcall *SetOverlayTexelAspect)(VROverlayHandle_t ulOverlayHandle, float fTexelAspect);
	EVROverlayError (__stdcall *GetOverlayTexelAspect)(VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect);
	EVROverlayError (__stdcall *SetOverlaySortOrder)(VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder);
	EVROverlayError (__stdcall *GetOverlaySortOrder)(VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder);
	EVROverlayError (__stdcall *SetOverlayWidthInMeters)(VROverlayHandle_t ulOverlayHandle, float fWidthInMeters);
	EVROverlayError (__stdcall *GetOverlayWidthInMeters)(VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters);
	EVROverlayError (__stdcall *SetOverlayAutoCurveDistanceRangeInMeters)(VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters);
	EVROverlayError (__stdcall *GetOverlayAutoCurveDistanceRangeInMeters)(VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters);
	EVROverlayError (__stdcall *SetOverlayTextureColorSpace)(VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace);
	EVROverlayError (__stdcall *GetOverlayTextureColorSpace)(VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace);
	EVROverlayError (__stdcall *SetOverlayTextureBounds)(VROverlayHandle_t ulOverlayHandle, struct VRTextureBounds_t * pOverlayTextureBounds);
	EVROverlayError (__stdcall *GetOverlayTextureBounds)(VROverlayHandle_t ulOverlayHandle, struct VRTextureBounds_t * pOverlayTextureBounds);
	EVROverlayError (__stdcall *GetOverlayTransformType)(VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType);
	EVROverlayError (__stdcall *SetOverlayTransformAbsolute)(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, struct HmdMatrix34_t * pmatTrackingOriginToOverlayTransform);
	EVROverlayError (__stdcall *GetOverlayTransformAbsolute)(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, struct HmdMatrix34_t * pmatTrackingOriginToOverlayTransform);
	EVROverlayError (__stdcall *SetOverlayTransformTrackedDeviceRelative)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, struct HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform);
	EVROverlayError (__stdcall *GetOverlayTransformTrackedDeviceRelative)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, struct HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform);
	EVROverlayError (__stdcall *SetOverlayTransformTrackedDeviceComponent)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, char * pchComponentName);
	EVROverlayError (__stdcall *GetOverlayTransformTrackedDeviceComponent)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize);
	EVROverlayError (__stdcall *ShowOverlay)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (__stdcall *HideOverlay)(VROverlayHandle_t ulOverlayHandle);
	bool (__stdcall *IsOverlayVisible)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (__stdcall *GetTransformForOverlayCoordinates)(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, struct HmdVector2_t coordinatesInOverlay, struct HmdMatrix34_t * pmatTransform);
	bool (__stdcall *PollNextOverlayEvent)(VROverlayHandle_t ulOverlayHandle, struct VREvent_t * pEvent, uint32_t uncbVREvent);
	EVROverlayError (__stdcall *GetOverlayInputMethod)(VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod);
	EVROverlayError (__stdcall *SetOverlayInputMethod)(VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod);
	EVROverlayError (__stdcall *GetOverlayMouseScale)(VROverlayHandle_t ulOverlayHandle, struct HmdVector2_t * pvecMouseScale);
	EVROverlayError (__stdcall *SetOverlayMouseScale)(VROverlayHandle_t ulOverlayHandle, struct HmdVector2_t * pvecMouseScale);
	bool (__stdcall *ComputeOverlayIntersection)(VROverlayHandle_t ulOverlayHandle, struct VROverlayIntersectionParams_t * pParams, struct VROverlayIntersectionResults_t * pResults);
	bool (__stdcall *HandleControllerOverlayInteractionAsMouse)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex);
	bool (__stdcall *IsHoverTargetOverlay)(VROverlayHandle_t ulOverlayHandle);
	VROverlayHandle_t (__stdcall *GetGamepadFocusOverlay)();
	EVROverlayError (__stdcall *SetGamepadFocusOverlay)(VROverlayHandle_t ulNewFocusOverlay);
	EVROverlayError (__stdcall *SetOverlayNeighbor)(EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo);
	EVROverlayError (__stdcall *MoveGamepadFocusToNeighbor)(EOverlayDirection eDirection, VROverlayHandle_t ulFrom);
	EVROverlayError (__stdcall *SetOverlayTexture)(VROverlayHandle_t ulOverlayHandle, struct Texture_t * pTexture);
	EVROverlayError (__stdcall *ClearOverlayTexture)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (__stdcall *SetOverlayRaw)(VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);
	EVROverlayError (__stdcall *SetOverlayFromFile)(VROverlayHandle_t ulOverlayHandle, char * pchFilePath);
	EVROverlayError (__stdcall *GetOverlayTexture)(VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, struct VRTextureBounds_t * pTextureBounds);
	EVROverlayError (__stdcall *ReleaseNativeOverlayHandle)(VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle);
	EVROverlayError (__stdcall *GetOverlayTextureSize)(VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight);
	EVROverlayError (__stdcall *CreateDashboardOverlay)(char * pchOverlayKey, char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle);
	bool (__stdcall *IsDashboardVisible)();
	bool (__stdcall *IsActiveDashboardOverlay)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (__stdcall *SetDashboardOverlaySceneProcess)(VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId);
	EVROverlayError (__stdcall *GetDashboardOverlaySceneProcess)(VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId);
	void (__stdcall *ShowDashboard)(char * pchOverlayToShow);
	TrackedDeviceIndex_t (__stdcall *GetPrimaryDashboardDevice)();
	EVROverlayError (__stdcall *ShowKeyboard)(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, char * pchDescription, uint32_t unCharMax, char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
	EVROverlayError (__stdcall *ShowKeyboardForOverlay)(VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, char * pchDescription, uint32_t unCharMax, char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
	uint32_t (__stdcall *GetKeyboardText)(char * pchText, uint32_t cchText);
	void (__stdcall *HideKeyboard)();
	void (__stdcall *SetKeyboardTransformAbsolute)(ETrackingUniverseOrigin eTrackingOrigin, struct HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform);
	void (__stdcall *SetKeyboardPositionForOverlay)(VROverlayHandle_t ulOverlayHandle, struct HmdRect2_t avoidRect);
	EVROverlayError (__stdcall *SetOverlayIntersectionMask)(VROverlayHandle_t ulOverlayHandle, struct VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize);
	EVROverlayError (__stdcall *GetOverlayFlags)(VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags);
	VRMessageOverlayResponse (__stdcall *ShowMessageOverlay)(char * pchText, char * pchCaption, char * pchButton0Text, char * pchButton1Text, char * pchButton2Text, char * pchButton3Text);
};

struct VR_IVRRenderModels_FnTable
{
	EVRRenderModelError (__stdcall *LoadRenderModel_Async)(char * pchRenderModelName, struct RenderModel_t ** ppRenderModel);
	void (__stdcall *FreeRenderModel)(struct RenderModel_t * pRenderModel);
	EVRRenderModelError (__stdcall *LoadTexture_Async)(TextureID_t textureId, struct RenderModel_TextureMap_t ** ppTexture);
	void (__stdcall *FreeTexture)(struct RenderModel_TextureMap_t * pTexture);
	EVRRenderModelError (__stdcall *LoadTextureD3D11_Async)(TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D);
	EVRRenderModelError (__stdcall *LoadIntoTextureD3D11_Async)(TextureID_t textureId, void * pDstTexture);
	void (__stdcall *FreeTextureD3D11)(void * pD3D11Texture2D);
	uint32_t (__stdcall *GetRenderModelName)(uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen);
	uint32_t (__stdcall *GetRenderModelCount)();
	uint32_t (__stdcall *GetComponentCount)(char * pchRenderModelName);
	uint32_t (__stdcall *GetComponentName)(char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen);
	uint64_t (__stdcall *GetComponentButtonMask)(char * pchRenderModelName, char * pchComponentName);
	uint32_t (__stdcall *GetComponentRenderModelName)(char * pchRenderModelName, char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen);
	bool (__stdcall *GetComponentState)(char * pchRenderModelName, char * pchComponentName, VRControllerState_t * pControllerState, struct RenderModel_ControllerMode_State_t * pState, struct RenderModel_ComponentState_t * pComponentState);
	bool (__stdcall *RenderModelHasComponent)(char * pchRenderModelName, char * pchComponentName);
	uint32_t (__stdcall *GetRenderModelThumbnailURL)(char * pchRenderModelName, char * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError * peError);
	uint32_t (__stdcall *GetRenderModelOriginalPath)(char * pchRenderModelName, char * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError * peError);
	char * (__stdcall *GetRenderModelErrorNameFromEnum)(EVRRenderModelError error);
};

struct VR_IVRNotifications_FnTable
{
	EVRNotificationError (__stdcall *CreateNotification)(VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType type, char * pchText, EVRNotificationStyle style, struct NotificationBitmap_t * pImage, VRNotificationId * pNotificationId);
	EVRNotificationError (__stdcall *RemoveNotification)(VRNotificationId notificationId);
};

struct VR_IVRSettings_FnTable
{
	char * (__stdcall *GetSettingsErrorNameFromEnum)(EVRSettingsError eError);
	bool (__stdcall *Sync)(bool bForce, EVRSettingsError * peError);
	void (__stdcall *SetBool)(char * pchSection, char * pchSettingsKey, bool bValue, EVRSettingsError * peError);
	void (__stdcall *SetInt32)(char * pchSection, char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError);
	void (__stdcall *SetFloat)(char * pchSection, char * pchSettingsKey, float flValue, EVRSettingsError * peError);
	void (__stdcall *SetString)(char * pchSection, char * pchSettingsKey, char * pchValue, EVRSettingsError * peError);
	bool (__stdcall *GetBool)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
	int32_t (__stdcall *GetInt32)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
	float (__stdcall *GetFloat)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
	void (__stdcall *GetString)(char * pchSection, char * pchSettingsKey, char * pchValue, uint32_t unValueLen, EVRSettingsError * peError);
	void (__stdcall *RemoveSection)(char * pchSection, EVRSettingsError * peError);
	void (__stdcall *RemoveKeyInSection)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
};

struct VR_IVRScreenshots_FnTable
{
	EVRScreenshotError (__stdcall *RequestScreenshot)(ScreenshotHandle_t * pOutScreenshotHandle, EVRScreenshotType type, char * pchPreviewFilename, char * pchVRFilename);
	EVRScreenshotError (__stdcall *HookScreenshot)(EVRScreenshotType * pSupportedTypes, int numTypes);
	EVRScreenshotType (__stdcall *GetScreenshotPropertyType)(ScreenshotHandle_t screenshotHandle, EVRScreenshotError * pError);
	uint32_t (__stdcall *GetScreenshotPropertyFilename)(ScreenshotHandle_t screenshotHandle, EVRScreenshotPropertyFilenames filenameType, char * pchFilename, uint32_t cchFilename, EVRScreenshotError * pError);
	EVRScreenshotError (__stdcall *UpdateScreenshotProgress)(ScreenshotHandle_t screenshotHandle, float flProgress);
	EVRScreenshotError (__stdcall *TakeStereoScreenshot)(ScreenshotHandle_t * pOutScreenshotHandle, char * pchPreviewFilename, char * pchVRFilename);
	EVRScreenshotError (__stdcall *SubmitScreenshot)(ScreenshotHandle_t screenshotHandle, EVRScreenshotType type, char * pchSourcePreviewFilename, char * pchSourceVRFilename);
};

struct VR_IVRResources_FnTable
{
	uint32_t (__stdcall *LoadSharedResource)(char * pchResourceName, char * pchBuffer, uint32_t unBufferLen);
	uint32_t (__stdcall *GetResourceFullPath)(char * pchResourceName, char * pchResourceTypeDirectory, char * pchPathBuffer, uint32_t unBufferLen);
};
















