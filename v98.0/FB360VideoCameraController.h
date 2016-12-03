/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
	float _lowPassAlpha;
	GLKQuaternion _pitchQuaternion;
	GLKQuaternion _yawQuaternion;
	GLKQuaternion _horizonQuaternion;
	GLKMatrix4 _sensorMatrix;

}

@property (assign,nonatomic) GLKMatrix4 sensorMatrix;                      //@synthesize sensorMatrix=_sensorMatrix - In the implementation block
@property (assign,nonatomic) GLKQuaternion pitchQuaternion;                //@synthesize pitchQuaternion=_pitchQuaternion - In the implementation block
@property (assign,nonatomic) GLKQuaternion yawQuaternion;                  //@synthesize yawQuaternion=_yawQuaternion - In the implementation block
@property (assign,nonatomic) GLKQuaternion horizonQuaternion;              //@synthesize horizonQuaternion=_horizonQuaternion - In the implementation block
@property (assign,nonatomic) float initialYaw;                             //@synthesize initialYaw=_initialYaw - In the implementation block
@property (assign,nonatomic) float initialPitch;                           //@synthesize initialPitch=_initialPitch - In the implementation block
@property (assign,nonatomic) float defaultYawOffset;                       //@synthesize defaultYawOffset=_defaultYawOffset - In the implementation block
@property (assign,nonatomic) float defaultPitchOffset;                     //@synthesize defaultPitchOffset=_defaultPitchOffset - In the implementation block
@property (assign,nonatomic) float poiYaw;                                 //@synthesize poiYaw=_poiYaw - In the implementation block
@property (assign,nonatomic) float poiPitch;                               //@synthesize poiPitch=_poiPitch - In the implementation block
@property (assign,nonatomic) float lowPassAlpha;                           //@synthesize lowPassAlpha=_lowPassAlpha - In the implementation block
@property (assign,nonatomic) BOOL guidedTourEnabled;                       //@synthesize guidedTourEnabled=_guidedTourEnabled - In the implementation block
-(float)initialPitch;
-(float)initialYaw;
-(void)setLowPassAlpha:(float)arg1 ;
-(void)setInitialViewportWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDefaultOffsetWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setGuidedEnabled:(BOOL)arg1 ;
-(void)setDirectionWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)updateSensor:(GLKQuaternion)arg1 ;
-(void)updateDrag:(float)arg1 dy:(float)arg2 ;
-(float)poiYaw;
-(float)poiPitch;
-(void)updateSlerp:(float)arg1 ;
-(GLKMatrix4)generateViewMatrix;
-(GLKMatrix4)sensorMatrix;
-(void)setSensorMatrix:(GLKMatrix4)arg1 ;
-(GLKQuaternion)pitchQuaternion;
-(void)setPitchQuaternion:(GLKQuaternion)arg1 ;
-(GLKQuaternion)yawQuaternion;
-(void)setYawQuaternion:(GLKQuaternion)arg1 ;
-(GLKQuaternion)horizonQuaternion;
-(void)setHorizonQuaternion:(GLKQuaternion)arg1 ;
-(void)setInitialYaw:(float)arg1 ;
-(void)setInitialPitch:(float)arg1 ;
-(float)defaultYawOffset;
-(void)setDefaultYawOffset:(float)arg1 ;
-(float)defaultPitchOffset;
-(void)setDefaultPitchOffset:(float)arg1 ;
-(void)setPoiYaw:(float)arg1 ;
-(void)setPoiPitch:(float)arg1 ;
-(float)lowPassAlpha;
-(BOOL)guidedTourEnabled;
-(void)setGuidedTourEnabled:(BOOL)arg1 ;
-(id)init;
@end

