/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCaptureSession, AVCaptureConnection, AVCaptureVideoPreviewLayer, NSString, UIView;

@interface CvAbstractCamera : NSObject {

	AVCaptureSession* captureSession;
	AVCaptureConnection* videoCaptureConnection;
	AVCaptureVideoPreviewLayer* captureVideoPreviewLayer;
	long long currentDeviceOrientation;
	BOOL cameraAvailable;
	BOOL captureSessionLoaded;
	BOOL running;
	BOOL useAVCaptureVideoPreviewLayer;
	long long defaultAVCaptureDevicePosition;
	long long defaultAVCaptureVideoOrientation;
	NSString* defaultAVCaptureSessionPreset;
	int defaultFPS;
	UIView* parentView;
	int imageWidth;
	int imageHeight;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * captureVideoPreviewLayer; 
@property (nonatomic,retain) AVCaptureSession * captureSession; 
@property (nonatomic,retain) AVCaptureConnection * videoCaptureConnection; 
@property (nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) BOOL captureSessionLoaded; 
@property (assign,nonatomic) int defaultFPS; 
@property (assign,nonatomic) long long defaultAVCaptureDevicePosition; 
@property (assign,nonatomic) long long defaultAVCaptureVideoOrientation; 
@property (assign,nonatomic) BOOL useAVCaptureVideoPreviewLayer; 
@property (nonatomic,retain) NSString * defaultAVCaptureSessionPreset; 
@property (assign,nonatomic) int imageWidth; 
@property (assign,nonatomic) int imageHeight; 
@property (nonatomic,retain) UIView * parentView; 
-(void)setDefaultAVCaptureDevicePosition:(long long)arg1 ;
-(void)setDefaultAVCaptureVideoOrientation:(long long)arg1 ;
-(void)setDefaultFPS:(int)arg1 ;
-(void)setDefaultAVCaptureSessionPreset:(NSString *)arg1 ;
-(void)setParentView:(UIView *)arg1 ;
-(void)setUseAVCaptureVideoPreviewLayer:(BOOL)arg1 ;
-(void)updateSize;
-(void)setVideoCaptureConnection:(AVCaptureConnection *)arg1 ;
-(long long)defaultAVCaptureDevicePosition;
-(void)updateOrientation;
-(NSString *)defaultAVCaptureSessionPreset;
-(void)setDesiredCameraPosition:(long long)arg1 ;
-(long long)defaultAVCaptureVideoOrientation;
-(UIView *)parentView;
-(BOOL)captureSessionLoaded;
-(void)createCaptureSession;
-(void)createCaptureDevice;
-(void)createCaptureOutput;
-(BOOL)useAVCaptureVideoPreviewLayer;
-(void)createVideoPreviewLayer;
-(void)createCustomVideoPreview;
-(void)switchCameras;
-(void)lockExposure;
-(void)unlockExposure;
-(void)lockBalance;
-(void)unlockBalance;
-(int)defaultFPS;
-(AVCaptureConnection *)videoCaptureConnection;
-(void)lockFocus;
-(void)unlockFocus;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)pause;
-(void)setImageWidth:(int)arg1 ;
-(void)setImageHeight:(int)arg1 ;
-(int)imageWidth;
-(int)imageHeight;
-(BOOL)running;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(void)setCaptureVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(AVCaptureVideoPreviewLayer *)captureVideoPreviewLayer;
-(AVCaptureSession *)captureSession;
-(void)setCaptureSession:(AVCaptureSession *)arg1 ;
-(void)startCaptureSession;
@end
