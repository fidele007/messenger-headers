/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBWebRTCDeviceListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationManager, FBWebRTCHandler, FBWebRTCCallStarterDelegate;
@class UIAlertView, MNThreadStore, MNPresenceSubscriptionService, FBMobileConfigContextManager, FBWebRTCDevice, FBExperimentManager, NSString;

@interface FBWebRTCCallStarter : NSObject <UIAlertViewDelegate, FBWebRTCDeviceListener, FBClassProvidable> {

	UIAlertView* _alertView;
	MNThreadStore* _threadStore;
	id<MNAuthenticationManager> _authManager;
	MNPresenceSubscriptionService* _presenceSubscriptionService;
	id<FBWebRTCHandler> _rtcHandler;
	FBMobileConfigContextManager* _mobileConfigContext;
	id<FBWebRTCCallStarterDelegate> _delegate;
	FBWebRTCDevice* _device;
	FBExperimentManager* _experimentManager;

}

@property (nonatomic,retain) FBWebRTCDevice * device;                                      //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) FBExperimentManager * experimentManager;                      //@synthesize experimentManager=_experimentManager - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCCallStarterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBWebRTCCapabilities> callCapabilities; 
@property (nonatomic,readonly) BOOL isCallInProgress; 
@property (nonatomic,readonly) BOOL isCameraInUse; 
@property (nonatomic,readonly) BOOL isCallUIActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBExperimentManager *)experimentManager;
-(void)callWithPromptToUserId:(id)arg1 displayName:(id)arg2 audioCallTrigger:(id)arg3 videoCallTrigger:(id)arg4 ;
-(void)callThreadFbId:(id)arg1 fbidsToRing:(id)arg2 fbidsInGroup:(id)arg3 serverInfoData:(id)arg4 displayName:(id)arg5 directVideo:(BOOL)arg6 callTrigger:(id)arg7 joining:(BOOL)arg8 ;
-(void)callUserId:(id)arg1 displayName:(id)arg2 callTrigger:(id)arg3 isVideoCall:(BOOL)arg4 ;
-(id<FBWebRTCCapabilities>)callCapabilities;
-(BOOL)isVoipEnabledToUser:(id)arg1 ;
-(void)callUserId:(id)arg1 displayName:(id)arg2 callTrigger:(id)arg3 isVideoCall:(BOOL)arg4 analyticsExtra:(id)arg5 ;
-(void)startCustomCallToUserId:(id)arg1 appId:(id)arg2 deviceId:(id)arg3 customCallType:(id)arg4 initialMediaState:(id)arg5 requiresEscalationForVideo:(BOOL)arg6 trigger:(id)arg7 analyticsExtra:(id)arg8 ;
-(void)cancelModalUI;
-(BOOL)canMakeOutboundCall;
-(BOOL)isCallInProgress;
-(BOOL)isCallUIActive;
-(void)deviceCallabilityChanged:(BOOL)arg1 ;
-(void)deviceDidBeginCall;
-(void)deviceDidEndCall;
-(void)deviceDidStartCameraCapture;
-(void)deviceDidEndCameraCapture;
-(void)verifyAndCallThreadFbId:(id)arg1 fbidsToRing:(id)arg2 fbidsInGroup:(id)arg3 serverInfoData:(id)arg4 displayName:(id)arg5 directVideo:(BOOL)arg6 callTrigger:(id)arg7 ;
-(id)initWithVoipDevice:(id)arg1 rtcHandler:(id)arg2 presenceSubscriptionService:(id)arg3 threadStore:(id)arg4 authManager:(id)arg5 mobileConfigContext:(id)arg6 ;
-(void)_makeCallUserId:(id)arg1 displayName:(id)arg2 callTrigger:(id)arg3 isVideoCall:(BOOL)arg4 analyticsExtra:(id)arg5 ;
-(void)showCannotCallAlert:(id)arg1 title:(id)arg2 ;
-(id)_callabilityStatusForUserId:(id)arg1 ;
-(void)callThreadFbId:(id)arg1 fbidsToRing:(id)arg2 fbidsInGroup:(id)arg3 serverInfoData:(id)arg4 displayName:(id)arg5 directVideo:(BOOL)arg6 callTrigger:(id)arg7 joining:(BOOL)arg8 analyticsExtra:(id)arg9 ;
-(BOOL)isCameraInUse;
-(void)startCustomCallToUserId:(id)arg1 customCallType:(id)arg2 initialMediaState:(id)arg3 requiresEscalationForVideo:(BOOL)arg4 trigger:(id)arg5 analyticsExtra:(id)arg6 ;
-(void)setExperimentManager:(FBExperimentManager *)arg1 ;
-(void)setDelegate:(id<FBWebRTCCallStarterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCCallStarterDelegate>)delegate;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)setDevice:(FBWebRTCDevice *)arg1 ;
-(FBWebRTCDevice *)device;
@end

