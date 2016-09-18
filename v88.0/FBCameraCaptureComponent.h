/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraGenericEvent;
@interface FBCameraCaptureComponent : CKCompositeComponent {

	id<FBCameraGenericEvent> _captureStateChangedToPhotoEvent;
	id<FBCameraGenericEvent> _captureStateChangedToVideoEvent;

}
+(id)newWithCameraMode:(long long)arg1 captureState:(unsigned long long)arg2 angle:(double)arg3 captureStateChangedToPhotoEvent:(id)arg4 captureStateChangedToVideoEvent:(id)arg5 captureButtonDisabled:(BOOL)arg6 overridingAction:(SEL)arg7 toolbox:(id)arg8 options:(FBCameraCaptureComponentOptions)arg9 ;
-(void)didTapCameraPhotoButton;
-(void)didTapCameraVideoButton;
@end
