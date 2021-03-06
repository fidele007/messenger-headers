/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FB360VideoCameraController : NSObject {

	BOOL _guidedTourEnabled;
	float _initialYaw;
	float _initialPitch;
	float _defaultYawOffset;
	float _defaultPitchOffset;
	float _poiYaw;
	float _poiPitch;
	float _currentYaw;
	float _currentPitch;
	float _lowPassAlpha;
	GLKQuaternion _pitchQuaternion;
	GLKQuaternion _yawQuaternion;
	GLKQuaternion _horizonQuaternion;
	GLKQuaternion _screenRotationQuaternion;
	GLKMatrix4 _sensorMatrix;

}

@property (assign,nonatomic) GLKMatrix4 sensorMatrix;                             //@synthesize sensorMatrix=_sensorMatrix - In the implementation block
@property (assign,nonatomic) GLKQuaternion pitchQuaternion;                       //@synthesize pitchQuaternion=_pitchQuaternion - In the implementation block
@property (assign,nonatomic) GLKQuaternion yawQuaternion;                         //@synthesize yawQuaternion=_yawQuaternion - In the implementation block
@property (assign,nonatomic) GLKQuaternion horizonQuaternion;                     //@synthesize horizonQuaternion=_horizonQuaternion - In the implementation block
@property (assign,nonatomic) GLKQuaternion screenRotationQuaternion;              //@synthesize screenRotationQuaternion=_screenRotationQuaternion - In the implementation block
@property (assign,nonatomic) float initialYaw;                                    //@synthesize initialYaw=_initialYaw - In the implementation block
@property (assign,nonatomic) float initialPitch;                                  //@synthesize initialPitch=_initialPitch - In the implementation block
@property (assign,nonatomic) float defaultYawOffset;                              //@synthesize defaultYawOffset=_defaultYawOffset - In the implementation block
@property (assign,nonatomic) float defaultPitchOffset;                            //@synthesize defaultPitchOffset=_defaultPitchOffset - In the implementation block
@property (assign,nonatomic) float poiYaw;                                        //@synthesize poiYaw=_poiYaw - In the implementation block
@property (assign,nonatomic) float poiPitch;                                      //@synthesize poiPitch=_poiPitch - In the implementation block
@property (nonatomic,readonly) float currentYaw;                                  //@synthesize currentYaw=_currentYaw - In the implementation block
@property (nonatomic,readonly) float currentPitch;                                //@synthesize currentPitch=_currentPitch - In the implementation block
@property (assign,nonatomic) float lowPassAlpha;                                  //@synthesize lowPassAlpha=_lowPassAlpha - In the implementation block
@property (assign,nonatomic) BOOL guidedTourEnabled;                              //@synthesize guidedTourEnabled=_guidedTourEnabled - In the implementation block
-(void)setLowPassAlpha:(float)arg1 ;
-(void)setInitialViewportWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDefaultOffsetWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)updateSensor:(GLKQuaternion)arg1 ;
-(float)currentYaw;
-(float)currentPitch;
-(void)setDirectionWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)updateSlerp:(float)arg1 ;
-(float)poiYaw;
-(void)setPoiYaw:(float)arg1 ;
-(float)poiPitch;
-(void)setPoiPitch:(float)arg1 ;
-(void)setGuidedEnabled:(BOOL)arg1 ;
-(void)updateDrag:(float)arg1 dy:(float)arg2 ;
-(GLKMatrix4)generateViewMatrix;
-(void)setScreenRotationQuaternion:(GLKQuaternion)arg1 ;
-(void)setInitialYaw:(float)arg1 ;
-(void)setInitialPitch:(float)arg1 ;
-(void)setDefaultYawOffset:(float)arg1 ;
-(float)defaultPitchOffset;
-(void)setDefaultPitchOffset:(float)arg1 ;
-(void)setGuidedTourEnabled:(BOOL)arg1 ;
-(float)lowPassAlpha;
-(GLKMatrix4)sensorMatrix;
-(void)setSensorMatrix:(GLKMatrix4)arg1 ;
-(BOOL)guidedTourEnabled;
-(float)defaultYawOffset;
-(GLKQuaternion)horizonQuaternion;
-(void)setHorizonQuaternion:(GLKQuaternion)arg1 ;
-(GLKQuaternion)pitchQuaternion;
-(GLKQuaternion)yawQuaternion;
-(void)setPitchQuaternion:(GLKQuaternion)arg1 ;
-(void)setYawQuaternion:(GLKQuaternion)arg1 ;
-(GLKQuaternion)screenRotationQuaternion;
-(void)updateScreenRotation;
-(float)initialPitch;
-(float)initialYaw;
-(id)init;
@end

