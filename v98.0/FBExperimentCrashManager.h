/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExperimentManagerPolicy;
@class NSMutableSet, NSNotificationCenter, NSArray, NSTimer, NSSet;

@interface FBExperimentCrashManager : NSObject {

	id<FBExperimentManagerPolicy> _policy;
	NSMutableSet* _experimentNamesThatHaveAskedForColdStart;
	NSMutableSet* _experimentNamesThatRequiredClearCache;
	NSNotificationCenter* _center;
	unsigned long long _crashTask;
	int _requestedKeepAliveCount;
	double _startTime;
	double _managerStartTime;
	BOOL _allowForceConfigRefreshInDebugBuilds;
	NSArray* _experimentNamesThatForcedRestart;
	NSTimer* _crashTimer;

}

@property (retain) NSTimer * crashTimer;                                                           //@synthesize crashTimer=_crashTimer - In the implementation block
@property (nonatomic,copy,readonly) NSSet * experimentNamesThatRequiredClearCache;                 //@synthesize experimentNamesThatRequiredClearCache=_experimentNamesThatRequiredClearCache - In the implementation block
@property (nonatomic,copy,readonly) NSSet * experimentNamesThatHaveAskedForColdStart;              //@synthesize experimentNamesThatHaveAskedForColdStart=_experimentNamesThatHaveAskedForColdStart - In the implementation block
@property (nonatomic,copy,readonly) NSArray * experimentNamesThatForcedRestart;                    //@synthesize experimentNamesThatForcedRestart=_experimentNamesThatForcedRestart - In the implementation block
@property (assign,nonatomic) BOOL allowForceConfigRefreshInDebugBuilds;                            //@synthesize allowForceConfigRefreshInDebugBuilds=_allowForceConfigRefreshInDebugBuilds - In the implementation block
-(void)setAllowForceConfigRefreshInDebugBuilds:(BOOL)arg1 ;
-(id)initWithPolicy:(id)arg1 crashOnNotificationName:(id)arg2 delayCrashOnNotificationName:(id)arg3 notificationCenter:(id)arg4 startTime:(double)arg5 ;
-(void)_logCrashTime;
-(void)_clearCacheIfNeeded;
-(double)_minTimeBeforeExit;
-(void)_flushExperimentsTokeyStore;
-(void)_crashOrScheduleCrash;
-(void)_scheduleCrash;
-(void)_cancelCrash;
-(void)_forceExit;
-(double)_timeDelayUntilCrash;
-(void)_applicationSuspensionHandler;
-(id)initWithPolicy:(id)arg1 startTime:(double)arg2 ;
-(void)_forceFireIfScheduled;
-(id)_scheduledCrashDate;
-(void)requestColdStartForExperimentWithName:(id)arg1 withContextClass:(Class)arg2 ;
-(void)incrementApplicationKeepAliveCount;
-(void)decrementApplicationKeepAliveCount;
-(NSSet *)experimentNamesThatRequiredClearCache;
-(NSSet *)experimentNamesThatHaveAskedForColdStart;
-(NSArray *)experimentNamesThatForcedRestart;
-(BOOL)allowForceConfigRefreshInDebugBuilds;
-(NSTimer *)crashTimer;
-(void)setCrashTimer:(NSTimer *)arg1 ;
-(void)dealloc;
-(BOOL)isBackgrounded;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end

