/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebRTCCallMonitorDelegate.h>
#import <Messenger/RTCVideoCaptureSessionListener.h>
#import <Messenger/FBWebRTCSessionListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBWebRTCHandler.h>

@protocol MNAuthenticationManager;
@class WebRTCLazyEngine, FBMMQTTSender, NSNotificationCenter, FBAnalytics, MNUserStore, MNThreadStore, MNUserSettings, FBProviderMapData, FBMobileConfigContextManager, FBWebRTCNetworkAvailability, FBUserSession, FBWebRTCHandlerListenerAnnouncer, FBWebRTCCallUIController, MNPresenceSubscriptionService, NSString;

@interface FBWebRTCHandlerImpl : NSObject <FBWebRTCCallMonitorDelegate, RTCVideoCaptureSessionListener, FBWebRTCSessionListener, FBViewerContextClassProvidable, FBWebRTCHandler> {

	FBWebRTCConfigWrapper* _configWrapper;
	FBWebRTCMessageWrapper* _messageWrapper;
	FBWebRTCUIWrapper* _uiWrapper;
	FBWebRTCLogWrapper* _logWrapper;
	WebRTCLazyEngine* _lazyEngine;
	FBMMQTTSender* _mqttSender;
	NSNotificationCenter* _notificationCenter;
	id<MNAuthenticationManager> _authManager;
	FBAnalytics* _analytics;
	MNUserStore* _userStore;
	MNThreadStore* _threadStore;
	MNUserSettings* _userSettings;
	FBProviderMapData* _providerMap;
	FBMobileConfigContextManager* _configManager;
	FBWebRTCNetworkAvailability* _networkAvailability;
	FBUserSession* _session;
	FBWebRTCHandlerListenerAnnouncer* _listenerAnnouncer;
	FBWebRTCCallUIController* _callUIController;
	BOOL _persistentConnectionEnabled;
	FBWebRTCCallMonitor* _callMonitor;
	long long _currentCallId;
	double _currentCallStartTime;
	BOOL _engineShouldRun;
	BOOL _videoCaptureSessionActive;
	MNPresenceSubscriptionService* _presenceSubscriptionService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isVoipEnabled,nonatomic,readonly) BOOL voipEnabled; 
@property (getter=isVoipBlockedByCountry,nonatomic,readonly) BOOL voipBlockedByCountry; 
@property (getter=isVideoCallingEnabled,nonatomic,readonly) BOOL videoCallingEnabled; 
@property (getter=isMultiwayCallingEnabled,nonatomic,readonly) BOOL multiwayCallingEnabled; 
@property (getter=isMultiwayVideoCallingEnabled,nonatomic,readonly) BOOL multiwayVideoCallingEnabled; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)isVoipEnabled;
-(BOOL)isVoipBlockedByCountry;
-(BOOL)isVideoCallingEnabled;
-(void)startCustomCallToUserId:(id)arg1 appId:(id)arg2 deviceId:(id)arg3 customCallType:(id)arg4 initialMediaState:(id)arg5 requiresEscalationForVideo:(BOOL)arg6 trigger:(id)arg7 analyticsExtra:(id)arg8 ;
-(BOOL)isCallUIActive;
-(void)startWithGKCheck;
-(void)invalidateUserSession;
-(BOOL)isInACall;
-(void)acceptIncomingCall;
-(void)declineIncomingCall;
-(void)addVideoToCall;
-(void)startCallToUserId:(id)arg1 trigger:(id)arg2 isVideoCall:(BOOL)arg3 preferredCallMode:(unsigned long long)arg4 analyticsExtra:(id)arg5 ;
-(void)callThreadFbId:(id)arg1 fbidsToRing:(id)arg2 fbidsInGroup:(id)arg3 serverInfoData:(id)arg4 isVideoCall:(BOOL)arg5 trigger:(id)arg6 analyticsExtra:(id)arg7 groupCallCountdown:(BOOL)arg8 ;
-(BOOL)isMultiwayCallingEnabled;
-(BOOL)isMultiwayVideoCallingEnabled;
-(void)callStarted:(id)arg1 ;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3 ;
-(void)callEnded:(id)arg1 reason:(unsigned long long)arg2 subreason:(id)arg3 remoteEnded:(BOOL)arg4 callSummary:(id)arg5 ;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1 ;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2 ;
-(void)callUpdatedParticipantsFromState:(id)arg1 toState:(id)arg2 ;
-(void)callUpdatedLoudestParticipant:(id)arg1 ;
-(void)callUpdatedPeerUsersInfoFromState:(id)arg1 toState:(id)arg2 ;
-(void)rtcVideoCaptureSessionStarted;
-(void)rtcVideoCaptureSessionEnded;
-(void)rtcVideoCaptureSessionInterruptionBegan;
-(void)rtcVideoCaptureSessionInterruptionEnded;
-(void)rtcVideoCaptureSessionCameraInterruptionBegan;
-(void)rtcVideoCaptureSessionCameraInterruptionEnded;
-(id)_getAppConfigForIncomingCall:(int)arg1 ;
-(int)_getUploadLogLevel;
-(id)initWithMQTTSender:(id)arg1 notificationCenter:(id)arg2 authManager:(id)arg3 analytics:(id)arg4 userStore:(id)arg5 threadStore:(id)arg6 userSettings:(id)arg7 networkAvailability:(id)arg8 configManager:(id)arg9 userSession:(id)arg10 callUIController:(id)arg11 endToEndEncrypter:(id)arg12 presenceSubscriptionService:(id)arg13 providerMap:(id)arg14 ;
-(void)shutdownWebRTCEngine;
-(BOOL)_shouldEnableWebRTCService;
-(void)startUpWebRTCEngine;
-(void)_fetchUsersForConferenceWithName:(id)arg1 inititator:(id)arg2 incomingCallRingType:(int)arg3 successBlock:(/*^block*/id)arg4 ;
-(BOOL)_shouldUseOneOnOneOverMultiway:(id)arg1 ;
-(void)callDidStart:(long long)arg1 ;
-(void)callDidEnd:(long long)arg1 dataSent:(long long)arg2 dataReceived:(long long)arg3 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(BOOL)isCapturingVideo;
@end

