/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAppEventProcessing.h>

@protocol OS_dispatch_queue;
@class MNAppEventAnalyticsLogger, NSObject, NSMutableArray, NSString;

@interface MNAppEventPerfLogger : NSObject <MNAppEventProcessing> {

	MNAppEventAnalyticsLogger* _logger;
	Class _inboxVCClass;
	Class _placeholderVCClass;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _events;
	long long _startupType;
	long long _processStartTimeInterval;
	long long _startTimeInterval;
	long long _stopTimeInterval;
	long long _lastInForegroundTimeInterval;
	BOOL _isActive;
	BOOL _hasBeenActive;
	BOOL _hasPresentedFirstViewController;
	BOOL _waitingForInboxDisplay;
	BOOL _isStartingUp;
	BOOL _includesLogin;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processEvent:(id)arg1 ;
-(id)initWithAnalyticsLogger:(id)arg1 inboxViewControllerClass:(Class)arg2 placeholderViewControllerClass:(Class)arg3 queue:(id)arg4 ;
-(void)_handleProcessStart:(long long)arg1 ;
-(void)_handleMain:(long long)arg1 ;
-(void)_handleDidBecomeActive:(long long)arg1 ;
-(void)_handleWillEnterForeground:(long long)arg1 ;
-(void)_handleDidEnterBackground:(long long)arg1 ;
-(void)_handleWillResignActive:(long long)arg1 ;
-(void)_handleUserSetupFlowBegin:(long long)arg1 ;
-(void)_handleFirstViewController:(Class)arg1 presented:(long long)arg2 ;
-(void)_handleNavigationFromViewController:(Class)arg1 toViewController:(Class)arg2 timeInterval:(long long)arg3 ;
-(void)_handleThreadListDisplayed:(long long)arg1 ;
-(void)_publishStartupEvent:(long long)arg1 end:(long long)arg2 type:(long long)arg3 logThreadsLoaded:(BOOL)arg4 ;
@end

