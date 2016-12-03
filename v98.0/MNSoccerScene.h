/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNKeepUpSceneRenderer, MNKeepUpSceneDelegate;
@class CADisplayLink;

@interface MNSoccerScene : NSObject {

	double _ballX;
	double _ballY;
	double _ballVelocityX;
	double _ballVelocityY;
	double _ballRotation;
	BOOL _isKickRequested;
	double _kickX;
	double _kickY;
	double _readyProgress;
	BOOL _isWaitingForKick;
	BOOL _isBallFalling;
	double _lastUpdateTime;
	double _lastKickTime;
	CADisplayLink* _displayLink;
	id<MNKeepUpSceneRenderer> _renderer;
	id<MNKeepUpSceneDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNKeepUpSceneRenderer> renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic,__weak) id<MNKeepUpSceneDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double ballX;                                         //@synthesize ballX=_ballX - In the implementation block
@property (nonatomic,readonly) double ballY;                                         //@synthesize ballY=_ballY - In the implementation block
@property (nonatomic,readonly) double ballRotation;                                  //@synthesize ballRotation=_ballRotation - In the implementation block
-(void)readyBall;
-(void)_runUpdateLoop;
-(BOOL)_updateReadyWithTimeInterval:(double)arg1 ;
-(BOOL)_updateBallWithTimeInterval:(double)arg1 ;
-(void)_updateKick;
-(void)_updateBallWallBounce;
-(BOOL)_ballHitTestAtX:(double)arg1 y:(double)arg2 ;
-(void)kickBallAtX:(double)arg1 y:(double)arg2 ;
-(double)ballX;
-(double)ballY;
-(double)ballRotation;
-(void)setDelegate:(id<MNKeepUpSceneDelegate>)arg1 ;
-(id<MNKeepUpSceneDelegate>)delegate;
-(void)_update;
-(void)setRenderer:(id<MNKeepUpSceneRenderer>)arg1 ;
-(id<MNKeepUpSceneRenderer>)renderer;
@end

