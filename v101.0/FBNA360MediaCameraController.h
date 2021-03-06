/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBNA360MediaMotionObserver.h>

@protocol FBNA360MediaCameraControllerDelegate;
@class UIView, UIPanGestureRecognizer, UIPinchGestureRecognizer, FBNA360MediaMotionManager, NSString;

@interface FBNA360MediaCameraController : NSObject <UIGestureRecognizerDelegate, FBNA360MediaMotionObserver> {

	UIView* _scene;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	FBNA360MediaMotionManager* _motionManager;
	BOOL _motionEnabled;
	id<FBNA360MediaCameraControllerDelegate> _delegate;
	double _initialHeading;
	double _initialPitch;
	double _preferredFovy;
	double _zoomScale;
	double _yawModification;
	double _pitchModification;

}

@property (nonatomic,readonly) BOOL upsideDown; 
@property (assign,nonatomic) double yawModification;                                                //@synthesize yawModification=_yawModification - In the implementation block
@property (assign,nonatomic) double pitchModification;                                              //@synthesize pitchModification=_pitchModification - In the implementation block
@property (assign,nonatomic,__weak) id<FBNA360MediaCameraControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double initialHeading;                                               //@synthesize initialHeading=_initialHeading - In the implementation block
@property (nonatomic,readonly) double initialPitch;                                                 //@synthesize initialPitch=_initialPitch - In the implementation block
@property (assign,nonatomic) double preferredFovy;                                                  //@synthesize preferredFovy=_preferredFovy - In the implementation block
@property (assign,nonatomic) BOOL motionEnabled;                                                    //@synthesize motionEnabled=_motionEnabled - In the implementation block
@property (nonatomic,readonly) _GLKQuaternion cameraOrientation; 
@property (nonatomic,readonly) double fovy; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double zoomScale;                                                    //@synthesize zoomScale=_zoomScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handlePan;
-(void)_handlePinch;
-(CGPoint)_spherePointForScreenPoint:(CGPoint)arg1 ;
-(double)yawModification;
-(double)pitchModification;
-(void)setYawModification:(double)arg1 ;
-(void)setPitchModification:(double)arg1 ;
-(BOOL)upsideDown;
-(CGPoint)_angularVelocityForPanVelocity:(CGPoint)arg1 atPoint:(CGPoint)arg2 ;
-(void)handleDeviceAttitudeUpdate:(_GLKQuaternion)arg1 ;
-(double)initialHeading;
-(double)initialPitch;
-(double)fovy;
-(void)resetZoomScaleAnimated:(BOOL)arg1 ;
-(id)initWithScene:(id)arg1 motionManager:(id)arg2 initialHeading:(double)arg3 initialPitch:(double)arg4 preferredFovy:(double)arg5 ;
-(void)setHeading:(double)arg1 pitch:(double)arg2 animated:(BOOL)arg3 ;
-(void)setPreferredFovy:(double)arg1 ;
-(double)preferredFovy;
-(void)setDelegate:(id<FBNA360MediaCameraControllerDelegate>)arg1 ;
-(id<FBNA360MediaCameraControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(double)zoomScale;
-(double)heading;
-(double)pitch;
-(BOOL)motionEnabled;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(_GLKQuaternion)cameraOrientation;
@end

