/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCameraActionListener.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <Messenger/FBAudioCapturerDelegate.h>
#import <Messenger/FBMPInput.h>

@protocol OS_dispatch_queue, FBOrientationTracking, FBCaptureManagerFilterHandlerProtocol, FBCameraActionListener;
@class NSString, NSDictionary, FBCameraProductionDebugLogger, FBCaptureManagerListenerAnnouncer, NSObject, AVCaptureAudioDataOutput, AVCaptureDeviceInput, FBAudioCapturer, FBCaptureSession, FBMPPreview, AVCaptureStillImageOutput, FBMPPhotoCapturer, AVCaptureVideoDataOutput, FBMPVideoRecorder, FBVideoProcessor, AVCaptureDevice, FBCaptureDevice, FBFramePerformanceTracker, FBCameraFramePerformanceLogger, FBCameraStartReliabilityLogger, FBMPBaseProducerPort, FBCameraActionPerformanceLogger, FBMPLowLightDetector;

@interface FBCaptureManager : NSObject <FBCameraActionListener, AVCaptureVideoDataOutputSampleBufferDelegate, FBAudioCapturerDelegate, FBMPInput> {

	NSString* _analyticsModule;
	NSDictionary* _analyticsAnnotations;
	FBCameraProductionDebugLogger* _debugLogger;
	FBCaptureManagerListenerAnnouncer* _announcer;
	NSObject*<OS_dispatch_queue> _listenerQueue;
	NSObject*<OS_dispatch_queue> _audioBufferQueue;
	AVCaptureAudioDataOutput* _audioDataOutput;
	AVCaptureDeviceInput* _audioDeviceInput;
	FBAudioCapturer* _audioCapturer;
	FBCaptureSession* _captureSession;
	BOOL _isCaptureSessionFinishedLoading;
	FBMPPreview* _capturePreview;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	unsigned long long _state;
	AVCaptureStillImageOutput* _stillImageOutput;
	opaqueCMFormatDescriptionRef _currentVideoBufferFormatDescription;
	FBMPPhotoCapturer* _photoCapturer;
	NSObject*<OS_dispatch_queue> _videoBufferQueue;
	AVCaptureVideoDataOutput* _videoDataOutput;
	AVCaptureDeviceInput* _videoDeviceInput;
	FBMPVideoRecorder* _videoRecorder;
	id<FBOrientationTracking> _orientationTracker;
	FBVideoProcessor* _videoProcessor;
	id<FBCaptureManagerFilterHandlerProtocol> _filterHandler;
	AVCaptureDevice* _currentDevice;
	FBCaptureDevice* _fbCurrentDevice;
	FBCaptureManagerConfiguration _configuration;
	id<FBCameraActionListener> _cameraActionListener;
	FBFramePerformanceTracker* _framePerformanceTracker;
	FBCameraFramePerformanceLogger* _framePerformanceLogger;
	FBCameraStartReliabilityLogger* _startReliabilityLogger;
	NSObject*<OS_dispatch_queue> _loggerQueue;
	int _waitingForFirstFrame;
	FBMPBaseProducerPort* _videoProducerPort;
	FBCameraActionPerformanceLogger* _cameraActionPerformanceLogger;
	FBMPLowLightDetector* _lowLightDetector;
	NSString* _normalLightPreset;

}

@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) double maxZoomFactor; 
@property (nonatomic,readonly) UIView*<FBMPOutput> capturePreview; 
@property (nonatomic,readonly) id<FBFramePerformanceResultDisplayer> framePerformanceResultDisplayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addCaptureManagerListener:(id)arg1 ;
-(void)performCameraAction:(id)arg1 ;
-(UIView*<FBMPOutput>)capturePreview;
-(id)initWithVideoRecorder:(id)arg1 orientationTracker:(id)arg2 filterHandler:(id)arg3 configuration:(FBCaptureManagerConfiguration)arg4 analyticsModule:(id)arg5 analyticsAnnotations:(id)arg6 listenerQueue:(id)arg7 ;
-(void)_completeVideoCapture:(id)arg1 ;
-(double)maxZoomFactor;
-(BOOL)canZoomToZoomFactor:(double)arg1 ;
-(void)removeCaptureManagerListener:(id)arg1 ;
-(id<FBFramePerformanceResultDisplayer>)framePerformanceResultDisplayer;
-(BOOL)doesCurrentDeviceSupportTorchMode:(long long)arg1 ;
-(void)beginSessionWithCameraActionResult:(id)arg1 ;
-(void)cancelRecordingWithCameraActionResult:(id)arg1 ;
-(void)captureImageWithCameraActionResult:(id)arg1 ;
-(void)endSessionWithCameraActionResult:(id)arg1 ;
-(void)startAudioSessionWithCameraActionResult:(id)arg1 ;
-(void)setCaptureDevicePosition:(long long)arg1 cameraActionResult:(id)arg2 ;
-(void)setFlashMode:(long long)arg1 cameraActionResult:(id)arg2 ;
-(void)setFrameRate:(long long)arg1 cameraActionResult:(id)arg2 ;
-(void)setIsAudioEnabled:(BOOL)arg1 cameraActionResult:(id)arg2 ;
-(void)setIsVideoEnabled:(BOOL)arg1 cameraActionResult:(id)arg2 ;
-(void)setSaveNonFilteredMedia:(BOOL)arg1 cameraActionResult:(id)arg2 ;
-(void)setScaledPoint:(CGPoint)arg1 cameraActionResult:(id)arg2 ;
-(void)setSessionPreset:(id)arg1 cameraActionResult:(id)arg2 ;
-(void)setTorchMode:(long long)arg1 cameraActionResult:(id)arg2 ;
-(void)setZoomFactor:(double)arg1 cameraActionResult:(id)arg2 ;
-(void)startRecordingWithCameraActionResult:(id)arg1 ;
-(void)stopRecordingWithCameraActionResult:(id)arg1 ;
-(void)switchToDeviceWithID:(id)arg1 cameraActionResult:(id)arg2 ;
-(void)setLowLightModeEnabled:(BOOL)arg1 cameraActionResult:(id)arg2 ;
-(void)_lowLightModeDidChange:(long long)arg1 ;
-(void)_announce:(/*^block*/id)arg1 ;
-(void)_setCurrentCaptureDevice:(id)arg1 ;
-(void)_startCaptureAndAudioSessionsWithCameraActionResult:(id)arg1 ;
-(void)_completeStillImageCapturingWithBufferImage:(id)arg1 metatdata:(id)arg2 orientation:(long long)arg3 ;
-(void)_startCaptureStillImageAsynchronouslyWithCameraActionResult:(id)arg1 ;
-(void)_startAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateCurrentDeviceForLowLightMode:(long long)arg1 ;
-(BOOL)_ensureState:(unsigned long long)arg1 ;
-(id)videoDataOutput;
-(CGSize)_videoSizeForTargetOrientation:(long long)arg1 videoOrientation:(long long)arg2 ;
-(void)_updateDefaultVideoOrientationAndMirrorSettings;
-(void)_handleStillDataSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(long long)arg2 error:(id)arg3 ;
-(void)_setUpCaptureConnectionForVideoRecording;
-(void)_handleVideoSampleBufferWithFiltersConsidered:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 filteredBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_finishVideoCaptureWithLoadedAsset:(id)arg1 ;
-(void)_handleVideoRecordFailed;
-(void)_configureInputsAndOutputs;
-(void)_initializeVideoProcessor;
-(void)_startCameraSession;
-(void)_didFinishStartingCaptureAndAudioSessionsWithCameraActionResult:(id)arg1 ;
-(void)_configureCaptureSession;
-(id)audioDataOutput;
-(void)_updateDefaultVideoOrientation;
-(void)_updateConnectionMirrorSettings;
-(BOOL)isAudioEnabledForAudioCapturer:(id)arg1 ;
-(id)producerPorts;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(BOOL)doesCurrentDeviceSupportSessionPreset:(id)arg1 ;
-(void)_announceCapturedVideoAsset:(id)arg1 ;
-(id)currentDevice;
-(void)dealloc;
-(BOOL)isRunning;
-(id)stillImageOutput;
-(id)audioDeviceInput;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end

