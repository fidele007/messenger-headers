/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CvAbstractCamera.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue, CvVideoCameraDelegate;
@class AVCaptureVideoDataOutput, NSObject, CALayer, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter, NSString;

@interface CvVideoCamera : CvAbstractCamera <AVCaptureVideoDataOutputSampleBufferDelegate> {

	AVCaptureVideoDataOutput* videoDataOutput;
	NSObject*<OS_dispatch_queue> videoDataOutputQueue;
	CALayer* customPreviewLayer;
	BOOL grayscaleMode;
	BOOL recordVideo;
	BOOL rotateVideo;
	AVAssetWriterInput* recordAssetWriterInput;
	AVAssetWriterInputPixelBufferAdaptor* recordPixelBufferAdaptor;
	AVAssetWriter* recordAssetWriter;
	SCD_Struct_FB25 lastSampleTime;
	int recordingCountDown;
	id<CvVideoCameraDelegate> delegate;

}

@property (nonatomic,retain) CALayer * customPreviewLayer; 
@property (nonatomic,retain) AVCaptureVideoDataOutput * videoDataOutput; 
@property (assign,nonatomic) id<CvVideoCameraDelegate> delegate; 
@property (assign,nonatomic) BOOL grayscaleMode; 
@property (assign,nonatomic) BOOL recordVideo; 
@property (assign,nonatomic) BOOL rotateVideo; 
@property (nonatomic,retain) AVAssetWriterInput * recordAssetWriterInput; 
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor * recordPixelBufferAdaptor; 
@property (nonatomic,retain) AVAssetWriter * recordAssetWriter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVCaptureVideoDataOutput *)videoDataOutput;
-(void)updateOrientation;
-(void)createCaptureOutput;
-(void)createCustomVideoPreview;
-(void)setRecordVideo:(BOOL)arg1 ;
-(void)setRotateVideo:(BOOL)arg1 ;
-(BOOL)recordVideo;
-(id)videoFileString;
-(void)setVideoDataOutput:(AVCaptureVideoDataOutput *)arg1 ;
-(AVAssetWriter *)recordAssetWriter;
-(void)setRecordAssetWriter:(AVAssetWriter *)arg1 ;
-(void)setRecordAssetWriterInput:(AVAssetWriterInput *)arg1 ;
-(void)setRecordPixelBufferAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
-(CALayer *)customPreviewLayer;
-(void)setCustomPreviewLayer:(CALayer *)arg1 ;
-(BOOL)grayscaleMode;
-(void)layoutPreviewLayer;
-(AVAssetWriterInput *)recordAssetWriterInput;
-(void)createVideoDataOutput;
-(void)createVideoFileOutput;
-(CVBufferRef)pixelBufferFromCGImage:(CGImageRef)arg1 ;
-(AVAssetWriterInputPixelBufferAdaptor *)recordPixelBufferAdaptor;
-(BOOL)rotateVideo;
-(void)adjustLayoutToInterfaceOrientation:(long long)arg1 ;
-(void)saveVideo;
-(void)setGrayscaleMode:(BOOL)arg1 ;
-(void)setDelegate:(id<CvVideoCameraDelegate>)arg1 ;
-(id<CvVideoCameraDelegate>)delegate;
-(void)stop;
-(void)start;
-(id)videoFileURL;
-(id)initWithParentView:(id)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end

