/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraGenericEvent;
@interface FBCameraCaptureComponent : CKCompositeComponent {

	id<FBCameraGenericEvent> _captureStateChangedToPhotoEvent;
	id<FBCameraGenericEvent> _captureStateChangedToVideoEvent;

}
+(id)newWithCameraMode:(long long)arg1 captureState:(unsigned long long)arg2 angle:(double)arg3 captureStateChangedToPhotoEvent:(id)arg4 captureStateChangedToVideoEvent:(id)arg5 captureButtonDisabled:(BOOL)arg6 overridingAction:(CKTypedComponentAction<>)arg7 appearanceProvider:(id)arg8 captureEvent:(id)arg9 options:(FBCameraCaptureComponentOptions)arg10 ;
-(void)didTapCameraPhotoButton;
-(void)didTapCameraVideoButton;
@end

