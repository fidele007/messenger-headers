/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAppEventProcessing.h>

@protocol OS_dispatch_queue;
@class NSObject, MNQPLEventLogger, NSArray, NSString;

@interface MNAppEventQPLPerfLogger : NSObject <MNAppEventProcessing> {

	NSObject*<OS_dispatch_queue> _queue;
	MNQPLEventLogger* _startupEventLogger;
	MNQPLEventLogger* _configSetupLogger;
	MNQPLEventLogger* _backgroundServicesLogger;
	MNQPLEventLogger* _foregroundServicesLogger;
	MNQPLEventLogger* _restoreStateLogger;
	MNQPLEventLogger* _forcedTraceLogger;
	NSArray* _incrementalEventLoggers;
	MNQPLEventLogger* _activeTraceLogger;
	long long _startupType;
	Class _firstPresentedViewControllerClass;
	BOOL _isActive;
	BOOL _hasBeenActive;
	Class _inboxVCClass;
	Class _placeholderVCClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setShouldForceTraceOnNextStartupEvent:(BOOL)arg1 ;
+(BOOL)shouldUseQPLPerfLogger;
+(void)setShouldUseQPLPerfLogger:(BOOL)arg1 ;
+(BOOL)shouldForceTraceOnNextStartupEvent;
-(id)initWithQueue:(id)arg1 inboxViewControllerClass:(Class)arg2 placeholderViewControllerClass:(Class)arg3 qplLogger:(id)arg4 ;
-(void)processEvent:(id)arg1 ;
-(void)_handleMain:(long long)arg1 ;
-(void)_handleDidBecomeActive:(long long)arg1 ;
-(void)_handleWillEnterForeground:(long long)arg1 ;
-(void)_handleDidEnterBackground:(long long)arg1 ;
-(void)_handleWillResignActive:(long long)arg1 ;
-(void)_handleUserSetupFlowBegin:(long long)arg1 ;
-(void)_handleFirstViewController:(Class)arg1 presented:(long long)arg2 ;
-(void)_handleNavigationFromViewController:(Class)arg1 toViewController:(Class)arg2 timeInterval:(long long)arg3 ;
-(void)_handleThreadListDisplayed:(long long)arg1 ;
-(BOOL)_isStartingUp;
-(id)_rootEventLogger;
-(void)_addStartupTag:(id)arg1 ;
-(void)_forcedTraceDidEnd;
-(void)_cancelForcedTraceIfNeeded;
-(void)_handleDidFinishLaunching:(long long)arg1 ;
-(void)_handleConfigSetupBegin:(long long)arg1 ;
-(void)_handleConfigSetupEnd:(long long)arg1 ;
-(void)_handleBackgroundServicesBegin:(long long)arg1 ;
-(void)_handleBackgroundServicesEnd:(long long)arg1 ;
-(void)_handleForegroundServicesBegin:(long long)arg1 ;
-(void)_handleForegroundServicesEnd:(long long)arg1 ;
-(void)_handleUserSetupFlowEnd:(long long)arg1 ;
-(void)_handleRestoreStateBegin:(long long)arg1 ;
-(void)_handleRestoreStateEnd:(long long)arg1 ;
-(void)_handleMQTTConnecting:(long long)arg1 ;
-(void)_handleMQTTConnected:(long long)arg1 ;
-(void)_handleMQTTDisconnected:(long long)arg1 ;
-(void)_handleDeltaRequest:(long long)arg1 succeeded:(BOOL)arg2 ;
-(void)_handleQueueCreation:(long long)arg1 succeeded:(BOOL)arg2 ;
-(void)_handleNavigationTriggeredByPushHandler:(long long)arg1 ;
-(void)_handleThreadListLoaded:(long long)arg1 succeeded:(BOOL)arg2 ;
-(void)_beginStartupEventAtTimestamp:(long long)arg1 ;
-(void)_addStartupNote:(int)arg1 timestamp:(long long)arg2 ;
-(void)_endStartupEventAtTimestamp:(long long)arg1 ;
-(void)_cancelStartupEvent;
-(BOOL)_isWaitingForInboxDisplay;
@end

