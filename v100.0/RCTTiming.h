/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeModule.h>
#import <Messenger/RCTInvalidating.h>
#import <Messenger/RCTFrameUpdateObserver.h>

@class NSMutableDictionary, NSTimer, RCTBridge, NSString;

@interface RCTTiming : NSObject <RCTBridgeModule, RCTInvalidating, RCTFrameUpdateObserver> {

	NSMutableDictionary* _timers;
	NSTimer* _sleepTimer;
	BOOL _sendIdleEvents;
	BOOL _paused;
	RCTBridge* _bridge;
	/*^block*/id _pauseCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused;                           //@synthesize paused=_paused - In the implementation block
@property (nonatomic,copy) id pauseCallback;                                          //@synthesize pauseCallback=_pauseCallback - In the implementation block
+(id)moduleName;
+(id)__rct_export__2660;
+(id)__rct_export__2952;
+(id)__rct_export__3033;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)startTimers;
-(void)timerDidFire;
-(BOOL)hasPendingTimers;
-(void)scheduleSleepTimer:(id)arg1 ;
-(void)didUpdateFrame:(id)arg1 ;
-(id)pauseCallback;
-(void)setPauseCallback:(id)arg1 ;
-(void)createTimer:(id)arg1 duration:(double)arg2 jsSchedulingTime:(id)arg3 repeats:(BOOL)arg4 ;
-(void)deleteTimer:(id)arg1 ;
-(void)setSendIdleEvents:(BOOL)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)stopTimers;
-(BOOL)isPaused;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

