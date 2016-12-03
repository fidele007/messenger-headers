/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSString, NSObject, FBTimer;

@interface FBCameraStartReliabilityLogger : NSObject {

	NSString* _cameraType;
	double _timeoutForFirstFrameInSecond;
	NSObject*<OS_dispatch_queue> _loggerQueue;
	FBTimer* _timer;
	BOOL _trackingCameraStart;

}
-(void)_logEvent:(ReliabilityEvent)arg1 ;
-(id)initWithCameraType:(id)arg1 timeoutForFirstFrameInSecond:(double)arg2 loggerQueue:(id)arg3 ;
-(void)cameraSessionWillEnd;
-(void)videoDataOutputDidOutputFirstFrame;
-(void)cameraSessionWillStart;
-(void)cameraSessionDidFailToStartWithReason:(id)arg1 ;
-(void)_setupTimerWaitingForFirstFrame;
-(void)_asynchronouslyStopCurrentCameraStartTrackingWithEvent:(ReliabilityEvent)arg1 ;
-(void)_stopCurrentCameraStartTrackingWithEvent:(const ReliabilityEvent*)arg1 ;
-(void)_timeoutWaitingForFirstFrame;
-(void)_invalidateTimer;
@end

