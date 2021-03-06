/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class FBAnalytics, NSObject, FBPowerMetricsData, NSString, FBTimer, NSDictionary;

@interface FBPowerMetricsPerSession : NSObject {

	id _observerHandleState;
	id _observerHandleLevel;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _startPeriod;
	long long _appBgTimeSoFar;
	atomic<float> _batteryLevel;
	float _startBatteryLevel;
	int _batteryMAH;
	atomic<bool> _wasCharging;
	atomic<UIDeviceBatteryState> _batteryState;
	int _currentAppState;
	FBPowerMetricsData* _metricsData;
	NSString* _filePathBg;
	FBTimer* _bgTimer;
	NSDictionary* _priorRunLastBGSession;

}
-(id)initWithAnalytics:(id)arg1 ;
-(void)_onBatteryStateChanged;
-(void)_onBatteryLevelChanged;
-(void)restartCountersWithBeginingForeground:(BOOL)arg1 ;
-(id)initWithAnalytics:(id)arg1 andDirectory:(id)arg2 ;
-(void)_writeSnapshotToAFile;
-(void)_sendAnalytics:(BOOL)arg1 ;
-(id)_restartCounters:(BOOL)arg1 ;
-(id)_takeSnapshot:(BOOL)arg1 withUpdateOldValues:(BOOL)arg2 ;
-(id)_internalOnlyReportWithMaxCapacityMAH:(int)arg1 newMAH:(int)arg2 ;
-(void)dealloc;
-(id)init;
@end

