/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCaptureManagerListener.h>

@protocol OS_dispatch_group, MNComposerVideoRecordingManagerDelegate;
@class FBLazyCreator, NSString, FBWebRTCDevicePermissionManager, FBTimer, NSObject, MNComposerVideoRecordingResult;

@interface MNComposerVideoRecordingManager : NSObject <FBCaptureManagerListener> {

	FBLazyCreator* _captureControllersLazyCreator;
	NSString* _captureSessionPreset;
	FBWebRTCDevicePermissionManager* _permissionManager;
	FBTimer* _recordingUpdateTimer;
	double _recordingStartTime;
	NSObject*<OS_dispatch_group> _recordingStoppingDispatchGroup;
	MNComposerVideoRecordingResult* _recordingResult;
	BOOL _isRecording;
	id<MNComposerVideoRecordingManagerDelegate> _delegate;
	double _recordingDuration;

}

@property (assign,nonatomic,__weak) id<MNComposerVideoRecordingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isRecording;                                                       //@synthesize isRecording=_isRecording - In the implementation block
@property (nonatomic,readonly) double recordingDuration;                                               //@synthesize recordingDuration=_recordingDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureManagerPreviewDidLoad:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingAudioSession;
-(void)captureManagerDidFailToLoadAudioSessionWithError:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingCaptureSession;
-(void)captureManagerHasEndedCaptureSession;
-(void)captureManagerUpdatedPreviousCaptureDevice:(id)arg1 toCurrentCaptureDevice:(id)arg2 ;
-(void)cancelRecordingIfAny;
-(void)_stopRecordingSession;
-(double)_updateRecordingDuration;
-(void)_startRecordingSession;
-(void)_setIsRecording:(BOOL)arg1 ;
-(void)_startRecordingUpdateTimer;
-(void)_stopRecordingWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopRecordingUpdateTimer;
-(void)_onRecordingUpdate;
-(id)initWithCaptureControllersLazyCreator:(id)arg1 captureSessionPreset:(id)arg2 ;
-(double)getRecordingDuration;
-(void)promptForPermissions;
-(void)initPreview;
-(double)recordingDuration;
-(void)setDelegate:(id<MNComposerVideoRecordingManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNComposerVideoRecordingManagerDelegate>)delegate;
-(void)stopRecording;
-(void)captureImage;
-(BOOL)isRecording;
-(void)startRecording;
@end

