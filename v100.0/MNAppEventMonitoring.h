/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAppEventMonitoring <FBMAppUserSetupListening,FBMSPDeltaHandlerListener,FBMessagingStoreDatabaseLifetimeEventListening,MNInboxAppearanceEventListener,MNNavigationListener,MNSyncProtocolCoordinatorListener>
@required
-(void)markProcessStartWithPreMainTime:(long long)arg1;
-(void)markMain;
-(void)markDidFinishLaunching;
-(void)markExceptionUploadBegin;
-(void)markExceptionUploadEnd;
-(void)markWillEnterForeground;
-(void)markDidBecomeActive;
-(void)markDidEnterBackground;
-(void)markWillResignActive;
-(void)markTigonDidStart:(id)arg1 identifier:(long long)arg2;
-(void)markTigonDidEndWithSuccess:(BOOL)arg1 identifier:(long long)arg2;
-(void)markNavigationTriggeredByPush;
-(void)markConfigurationSetupBegin;
-(void)markConfigurationSetupEnd;
-(void)markBackgroundServicesBegin;
-(void)markBackgroundServicesEnd;
-(void)markForegroundServicesBegin;
-(void)markForegroundServicesEnd;
-(void)markRestoreStateBegin;
-(void)markRestoreStateEnd;

@end

