/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBAccelerometerTrackerDelegate;
@class CMMotionManager, FBAccelerometerDataToActivityPredictor, FBMotionActivityLogger, NSObject, NSOperationQueue;

@interface FBAccelerometerTracker : NSObject {

	CMMotionManager* _motionManager;
	FBAccelerometerDataToActivityPredictor* _predictor;
	FBMotionActivityLogger* _logger;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSOperationQueue* _operationQueue;
	id<FBAccelerometerTrackerDelegate> _delegate;
	BOOL _trackerInAction;

}

@property (assign) BOOL trackerInAction;              //@synthesize trackerInAction=_trackerInAction - In the implementation block
-(id)initWithMotionManager:(id)arg1 predictor:(id)arg2 delegate:(id)arg3 logger:(id)arg4 ;
-(void)abandonCurrentTrackingSession;
-(void)startToTrackActivity:(id)arg1 ;
-(void)_startToTrackActivity:(id)arg1 ;
-(void)_reportActivityToDelegate:(id)arg1 error:(id)arg2 ;
-(void)endTrackActivity:(id)arg1 ;
-(void)_endTrackActivity:(id)arg1 ;
-(void)_abandonCurrentTrackingSession;
-(BOOL)trackerInAction;
-(void)setTrackerInAction:(BOOL)arg1 ;
-(void)dealloc;
@end

