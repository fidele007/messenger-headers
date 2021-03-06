/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FB360VideoCameraController.h>

@interface FB360VideoCameraFullScreenController : FB360VideoCameraController {

	GLKQuaternion _slerpPitchStartQuaternion;
	GLKQuaternion _slerpPitchEndQuaternion;
	GLKQuaternion _slerpYawStartQuaternion;
	GLKQuaternion _slerpYawEndQuaternion;
	float _prevLookAtYaw;
	float _prevLookAtPitch;

}
-(void)setInitialViewportWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDefaultOffsetWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDirectionWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)updateSensor:(GLKQuaternion)arg1 ;
-(void)updateDrag:(float)arg1 dy:(float)arg2 ;
-(void)updateSlerp:(float)arg1 ;
-(GLKMatrix4)generateViewMatrix;
-(void)_applyRotationWithYaw:(float)arg1 pitch:(float)arg2 ;
-(id)init;
@end

