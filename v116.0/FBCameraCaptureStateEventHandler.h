/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCameraGenericEvent, FBCameraComponentModelManager;
@interface FBCameraCaptureStateEventHandler : NSObject {

	id<FBCameraGenericEvent> _captureStateChangedToPhotoEvent;
	id<FBCameraGenericEvent> _captureStateChangedToVideoEvent;
	id<FBCameraComponentModelManager> _modelManager;

}
-(void)_didTapVideoButton;
-(id)initWithCaptureStateChangedToPhotoEvent:(id)arg1 captureStateChangedToVideoEvent:(id)arg2 modelManager:(id)arg3 ;
-(void)_didTapPhotoButton;
@end

