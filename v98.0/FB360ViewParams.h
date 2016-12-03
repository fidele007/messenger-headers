/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSDate;

@interface FB360ViewParams : NSObject {

	double _cameraYaw;
	double _cameraPitch;
	double _cameraRoll;
	double _panningYaw;
	double _panningPitch;
	double _rotatingRoll;
	double _initialYaw;
	double _initialPitch;
	double _initialRoll;
	double _preferredFovY;
	double _fovY;
	double _fovYScale;
	NSDate* _lastPanningTime;

}

@property (assign,nonatomic) double cameraYaw;                      //@synthesize cameraYaw=_cameraYaw - In the implementation block
@property (assign,nonatomic) double cameraPitch;                    //@synthesize cameraPitch=_cameraPitch - In the implementation block
@property (assign,nonatomic) double cameraRoll;                     //@synthesize cameraRoll=_cameraRoll - In the implementation block
@property (assign,nonatomic) double panningYaw;                     //@synthesize panningYaw=_panningYaw - In the implementation block
@property (assign,nonatomic) double panningPitch;                   //@synthesize panningPitch=_panningPitch - In the implementation block
@property (assign,nonatomic) double rotatingRoll;                   //@synthesize rotatingRoll=_rotatingRoll - In the implementation block
@property (nonatomic,readonly) double initialYaw;                   //@synthesize initialYaw=_initialYaw - In the implementation block
@property (nonatomic,readonly) double initialPitch;                 //@synthesize initialPitch=_initialPitch - In the implementation block
@property (nonatomic,readonly) double initialRoll;                  //@synthesize initialRoll=_initialRoll - In the implementation block
@property (nonatomic,readonly) double preferredFovY;                //@synthesize preferredFovY=_preferredFovY - In the implementation block
@property (nonatomic,readonly) double fovY;                         //@synthesize fovY=_fovY - In the implementation block
@property (assign,nonatomic) double fovYScale;                      //@synthesize fovYScale=_fovYScale - In the implementation block
@property (nonatomic,retain) NSDate * lastPanningTime;              //@synthesize lastPanningTime=_lastPanningTime - In the implementation block
-(void)panWithViewDelta:(CGPoint)arg1 viewSize:(CGSize)arg2 ;
-(void)animatePanningInertiaWithViewVelocity:(CGPoint)arg1 viewSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateScalingInertiaWithVelocity:(double)arg1 completion:(/*^block*/id)arg2 ;
-(double)initialPitch;
-(void)reorientAnimated:(BOOL)arg1 ;
-(double)fovY;
-(NSDate *)lastPanningTime;
-(void)setInitialYaw:(double)arg1 initialPitch:(double)arg2 initialRoll:(double)arg3 preferredFovY:(double)arg4 ;
-(double)initialYaw;
-(double)totalYaw;
-(double)totalPitch;
-(void)setCameraYaw:(double)arg1 ;
-(void)setCameraPitch:(double)arg1 ;
-(double)cameraYaw;
-(double)cameraPitch;
-(double)cameraRoll;
-(void)cancelAnimation;
-(void)setFovYScale:(double)arg1 ;
-(double)fovYScale;
-(double)rotatingRoll;
-(void)setRotatingRoll:(double)arg1 ;
-(_GLKMatrix4)modelViewMatrix:(double)arg1 ;
-(CGPoint)_translateViewDeltaToCamera:(CGPoint)arg1 ;
-(double)panningYaw;
-(void)setPanningYaw:(double)arg1 ;
-(double)panningPitch;
-(void)setPanningPitch:(double)arg1 ;
-(void)setLastPanningTime:(NSDate *)arg1 ;
-(double)totalRoll;
-(void)_animateDefaultPanningIntertiaWithViewVelocity:(CGPoint)arg1 viewSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)reorientAnimated;
-(void)reorient;
-(void)setCameraRoll:(double)arg1 ;
-(double)initialRoll;
-(double)preferredFovY;
-(id)init;
@end
