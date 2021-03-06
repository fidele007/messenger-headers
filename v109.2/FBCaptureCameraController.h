/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCaptureCameraController
@required
-(void)addCaptureManagerListener:(id)arg1;
-(void)performCameraAction:(id)arg1;
-(BOOL)doesCurrentDeviceSupportSessionPreset:(id)arg1;
-(double)maxZoomFactor;
-(BOOL)canZoomToZoomFactor:(double)arg1;
-(void)removeCaptureManagerListener:(id)arg1;
-(BOOL)doesCurrentDeviceSupportTorchMode:(long long)arg1;
-(BOOL)supportsCaptureSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
-(id)currentDevice;

@end

