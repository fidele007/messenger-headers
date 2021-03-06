/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;
@class NSObject, RTCFakeCaptureSessionConfig, NSData;

@interface RTCFakeCaptureSession : NSObject {

	id<AVCaptureVideoDataOutputSampleBufferDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	BOOL _isRunning;
	BOOL _nextFrameDispatched;
	RTCFakeCaptureSessionConfig* _config;
	NSData* _messengerLogoY;
	NSData* _messengerLogoCbcr;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)_dispatchNext;
-(void)_initMessengerLogoYCbCr;
-(void)_generateFrame;
-(void)setWidth:(int)arg1 height:(int)arg2 fps:(int)arg3 ;
-(id)init;
-(void)stopRunning;
-(void)setPortrait:(BOOL)arg1 ;
-(void)startRunning;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
@end

