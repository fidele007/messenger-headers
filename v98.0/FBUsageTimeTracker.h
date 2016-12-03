/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBackgroundEventContributionListener.h>
#import <Messenger/FBUsageTimeTracking.h>

@protocol FBClock, FBDeviceClock, FBKeyValueDataStore, FBCancelable, OS_dispatch_queue;
@class UIApplication, FBUsageTimeLogger, FBUsageTimeComparisonLogger, FBPowerMetrics, FBBackgroundEventList, NSMutableDictionary, NSArray, NSObject, FBBackgroundTimeState, NSString;

@interface FBUsageTimeTracker : NSObject <FBBackgroundEventContributionListener, FBUsageTimeTracking> {

	id<FBClock> _clock;
	id<FBDeviceClock> _deviceClock;
	UIApplication* _application;
	id<FBKeyValueDataStore> _preferences;
	FBUsageTimeLogger* _usageTimeLogger;
	FBUsageTimeComparisonLogger* _usageTimeComparisonLogger;
	FBPowerMetrics* _powerMetrics;
	FBBackgroundEventList* _backgroundEventList;
	NSMutableDictionary* _bgTaskIdToNameMap;
	NSArray* _recentBackgroundLoggedIntervals;
	id<FBCancelable> _activeDrainToken;
	double _monotonicTimeWhenBecameActive;
	double _monotonicTimeWhenBecameInactive;
	NSObject*<OS_dispatch_queue> _queue;
	double _lastBackgroundActivityMonotonicTime;
	long long _heartbeatCounter;
	FBBackgroundTimeState* _backgroundTimeState;

}

@property (nonatomic,readonly) FBBackgroundTimeState * backgroundTimeState;              //@synthesize backgroundTimeState=_backgroundTimeState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didStartHandlingBackgroundNetworkResponseWithIdentifier:(id)arg1 ;
-(void)didEndHandlingBackgroundNetworkResponseWithIdentifier:(id)arg1 ;
-(void)didExpireBackgroundTaskWithIdentifier:(unsigned long long)arg1 ;
-(void)didStartBackgroundTaskWithIdentifier:(unsigned long long)arg1 taskName:(id)arg2 ;
-(void)didFinishBackgroundTaskWithIdentifier:(unsigned long long)arg1 ;
-(void)applyHeartbeatContribution:(double)arg1 forEventKey:(id)arg2 ;
-(FBBackgroundTimeState *)backgroundTimeState;
-(id)initWithClock:(id)arg1 deviceClock:(id)arg2 application:(id)arg3 preferences:(id)arg4 usageTimeLogger:(id)arg5 usageTimeComparisonLogger:(id)arg6 powerMetrics:(id)arg7 queue:(id)arg8 ;
-(void)willStartAPNSWithToken:(id)arg1 ;
-(void)didFinishAPNSWithToken:(id)arg1 ;
-(void)willStartBackgroundFetch;
-(void)willEndBackgroundFetch;
-(void)willStartPassiveLocationFetch:(id)arg1 ;
-(void)willEndPassiveLocationFetch:(id)arg1 ;
-(void)didStartActiveAudioSession;
-(void)didEndActiveAudioSession;
-(void)didReceivePushKitPayload;
-(void)heartbeatTimerDidFireAfter:(double)arg1 ;
-(void)inForegroundAndIdle;
-(void)willTerminate;
-(void)_restoreDiskValuesIfValid;
-(void)_startInactiveTime;
-(void)_startEventWithKey:(id)arg1 ;
-(void)_endEventWithKey:(id)arg1 ;
-(void)_flushBackgroundTimeStateIfIntervalPassed;
-(void)_endInactiveTime;
-(void)_flushActiveTime;
-(void)_flushBackgroundTimeState;
-(void)_applyContribution:(double)arg1 forEventKey:(id)arg2 ;
-(void)willEnterForeground;
-(void)willResignActive;
-(void)didBecomeActive;
-(void)didEnterBackground;
@end

