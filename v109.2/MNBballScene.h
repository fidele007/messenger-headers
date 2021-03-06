/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BballSceneRenderer, BballSceneDelegate;
@class CADisplayLink;

@interface MNBballScene : NSObject {

	double _ballVelocityX;
	double _ballVelocityY;
	double _ballScaleVelocity;
	BOOL _rimCoversBall;
	double _lastUpdateTime;
	double _readyProgress;
	BOOL _isWaitingForShot;
	BOOL _hasCalledShot;
	CADisplayLink* _displayLink;
	id<BballSceneRenderer> _renderer;
	id<BballSceneDelegate> _delegate;
	double _ballX;
	double _ballY;
	double _ballRotation;
	double _ballScale;
	double _rimX;
	double _rimY;
	double _rimXVelocity;
	double _rimYVelocity;
	double _rimYMoveMax;

}

@property (assign,nonatomic,__weak) id<BballSceneRenderer> renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic,__weak) id<BballSceneDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double ballX;                                      //@synthesize ballX=_ballX - In the implementation block
@property (nonatomic,readonly) double ballY;                                      //@synthesize ballY=_ballY - In the implementation block
@property (nonatomic,readonly) double ballRotation;                               //@synthesize ballRotation=_ballRotation - In the implementation block
@property (nonatomic,readonly) double ballScale;                                  //@synthesize ballScale=_ballScale - In the implementation block
@property (nonatomic,readonly) double rimX;                                       //@synthesize rimX=_rimX - In the implementation block
@property (nonatomic,readonly) double rimY;                                       //@synthesize rimY=_rimY - In the implementation block
@property (nonatomic,readonly) double rimXVelocity;                               //@synthesize rimXVelocity=_rimXVelocity - In the implementation block
@property (nonatomic,readonly) double rimYVelocity;                               //@synthesize rimYVelocity=_rimYVelocity - In the implementation block
@property (assign,nonatomic) double rimYMoveMax;                                  //@synthesize rimYMoveMax=_rimYMoveMax - In the implementation block
-(void)readyBall;
-(void)_runUpdateLoop;
-(BOOL)_updateReadyWithTimeInterval:(double)arg1 ;
-(double)ballX;
-(double)ballY;
-(double)ballRotation;
-(void)readyBallAtRandomPosition;
-(void)resetRimMovement;
-(void)setRimXVelocityMagnitude:(double)arg1 ;
-(void)setRimYVelocityMagnitude:(double)arg1 ;
-(void)setRimYMoveMax:(double)arg1 ;
-(void)_readyBallAtPosition:(double)arg1 ;
-(void)_setRimCoversBall:(BOOL)arg1 ;
-(BOOL)_updateThrowWithTimeInterval:(double)arg1 ;
-(void)_updateRimMoveWithTimeInterval:(double)arg1 ;
-(void)_handleCollisions;
-(void)_updateShotCall;
-(double)rimX;
-(void)_collideWithRimEdge:(double)arg1 ;
-(void)flingBallWithXVelocity:(double)arg1 yVelocity:(double)arg2 ;
-(double)ballScale;
-(double)rimY;
-(double)rimXVelocity;
-(double)rimYVelocity;
-(double)rimYMoveMax;
-(id)init;
-(void)setDelegate:(id<BballSceneDelegate>)arg1 ;
-(id<BballSceneDelegate>)delegate;
-(void)update;
-(id<BballSceneRenderer>)renderer;
-(void)setRenderer:(id<BballSceneRenderer>)arg1 ;
@end

