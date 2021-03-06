/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBackgroundEventContributionListener.h>
#import <Messenger/FBUsageTimeTracking.h>

@protocol FBClock, FBKeyValueDataStore, OS_dispatch_queue;
@class UIApplication, FBUsageTimeLogger, FBUsageTimeComparisonLogger, FBPowerMetrics, FBBackgroundEventList, NSMutableDictionary, NSArray, NSDate, NSObject, FBBackgroundTimeState, NSString;

@interface FBUsageTimeTracker : NSObject <FBBackgroundEventContributionListener, FBUsageTimeTracking> {

	id<FBClock> _clock;
	UIApplication* _application;
	id<FBKeyValueDataStore> _preferences;
	FBUsageTimeLogger* _usageTimeLogger;
	FBUsageTimeComparisonLogger* _usageTimeComparisonLogger;
	FBPowerMetrics* _powerMetrics;
	FBBackgroundEventList* _backgroundEventList;
	NSMutableDictionary* _bgTaskIdToNameMap;
	NSArray* _recentBackgroundLoggedIntervals;
	NSDate* _dateWhenBecameActive;
	NSDate* _dateWhenBecameInactive;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastBackgroundTimeActivity;
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
-(void)_restoreDiskValuesIfValid;
-(void)_startInactiveTime;
-(void)_startEventWithKey:(id)arg1 ;
-(void)_endEventWithKey:(id)arg1 ;
-(void)_flushBackgroundTimeStateIfIntervalPassed;
-(void)_endInactiveTime;
-(void)_flushActiveTimeUntilDate:(id)arg1 ;
-(void)_applyContribution:(double)arg1 forEventKey:(id)arg2 ;
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
-(id)initWithClock:(id)arg1 application:(id)arg2 preferences:(id)arg3 usageTimeLogger:(id)arg4 usageTimeComparisonLogger:(id)arg5 powerMetrics:(id)arg6 queue:(id)arg7 ;
-(void)willEnterForeground;
-(void)willResignActive;
-(void)didBecomeActive;
-(void)didEnterBackground;
@end

