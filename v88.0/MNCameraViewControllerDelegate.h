/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCameraViewControllerDelegate <NSObject>
@required
-(void)cameraViewControllerDidBeginCapture:(id)arg1;
-(void)cameraViewController:(id)arg1 didCaptureImage:(id)arg2;
-(void)cameraViewController:(id)arg1 didCaptureVideo:(id)arg2;
-(void)cameraViewController:(id)arg1 didSelectSendImage:(id)arg2 metadata:(id)arg3;
-(void)cameraViewController:(id)arg1 didSelectSendVideo:(id)arg2 thumbnail:(id)arg3 size:(CGSize)arg4 metadata:(id)arg5;
-(void)cameraViewControllerDidCancelCapture:(id)arg1;
-(void)cameraViewControllerDidPressCloseButton:(id)arg1;
-(void)cameraViewControllerDidPressDismissButtonInPermissionView:(id)arg1;
-(void)cameraViewControllerDidPressCollapseButton:(id)arg1;
-(void)cameraViewControllerDidPressExpandButton:(id)arg1;
-(void)cameraViewControllerDidSelectExit:(id)arg1;
-(void)cameraViewControllerDidRotateToLandscape:(id)arg1;
-(void)cameraViewControllerDidChangeCaptureDevice:(id)arg1;
-(void)cameraViewControllerWillAppear:(id)arg1;

@end

