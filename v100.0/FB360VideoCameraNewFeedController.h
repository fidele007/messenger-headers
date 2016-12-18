/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FB360VideoCameraController.h>

@interface FB360VideoCameraNewFeedController : FB360VideoCameraController {

	float _pitch;
	float _yaw;
	float _slerpPitchStart;
	float _slerpPitchEnd;
	float _slerpYawStart;
	float _slerpYawEnd;
	float _progress;
	BOOL _sensorQuaternionCaptured;
	GLKQuaternion _previousSensorQuaternion;
	GLKQuaternion _adjustedSensorQuaternion;
	SCD_Struct_FB155 _bounds;

}
-(id)initWithSphericalRendererBounds:(SCD_Struct_FB155)arg1 ;
-(void)setInitialViewportWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDefaultOffsetWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDirectionWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)updateSensor:(GLKQuaternion)arg1 ;
-(void)updateDrag:(float)arg1 dy:(float)arg2 ;
-(void)updateSlerp:(float)arg1 ;
-(GLKMatrix4)generateViewMatrix;
-(void)_incrementPitch:(float)arg1 yaw:(float)arg2 ;
-(id)init;
@end
