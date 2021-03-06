/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMontageCaptureInteractionControllerDelegate
@required
-(BOOL)montageCaptureInteractionControllerShouldBeginCapture:(id)arg1;
-(BOOL)montageCaptureInteractionControllerShouldBeginRecording:(id)arg1;
-(void)montageCaptureInteractionControllerDidCaptureImage:(id)arg1;
-(void)montageCaptureInteractionControllerInitiatedRecording:(id)arg1;
-(void)montageCaptureInteractionControllerStartedRecording:(id)arg1;
-(void)montageCaptureInteractionControllerDidCancelRecording:(id)arg1;
-(void)montageCaptureInteractionControllerFinishedRecording:(id)arg1 reachedMaxVideoCaptureLength:(BOOL)arg2;
-(void)montageCaptureInteractionController:(id)arg1 didDragUpFromCameraButton:(double)arg2;
-(void)montageCaptureInteractionControllerDidChangeState:(id)arg1;

@end

