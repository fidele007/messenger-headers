/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMediaAnimator.h>
#import <Messenger/FBKenTurnsObserver.h>
#import <Messenger/FBKenTurnsMotionFilterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, FBKenTurnsMotionFilter, NSString;

@interface FBKenTurnsMediaAnimator : FBMediaAnimator <FBKenTurnsObserver, FBKenTurnsMotionFilterDelegate> {

	NSObject*<OS_dispatch_queue> _motionQueue;
	FBKenTurnsMotionFilter* _motionFilter;
	double _fittedZoomScale;
	CGPoint _startCoordinate;
	CGPoint _endCoordinate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaSize:(CGSize)arg1 ;
-(CGPoint)targetMediaCoordinate;
-(double)targetZoomScale;
-(void)updateForTargetMediaCoordinate:(CGPoint)arg1 targetZoomScale:(double)arg2 ;
-(void)_updateKenTurnsMechanics;
-(void)handleDeviceMotion:(id)arg1 error:(id)arg2 ;
-(void)motionFilterUpdatedYRotation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)stop;
-(void)start;
-(double)progress;
-(void)_didEnterBackground:(id)arg1 ;
-(void)pause;
-(void)setViewportSize:(CGSize)arg1 ;
@end

