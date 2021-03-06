/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNAudioComposeViewDelegate.h>
#import <Messenger/MNAudioRecorderDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNAudioComposeViewControllerDelegate;
@class MNUserSettings, MNPermissionsViewController, MNPermissionsWrapperView, MNAudioRecorder, NSString, MNAudioComposeView, FBMessageAudioOutgoingAttachmentContent, NSTimer;

@interface MNAudioComposeViewController : UIViewController <MNAudioComposeViewDelegate, MNAudioRecorderDelegate, FBClassProvidable> {

	BOOL _previousTouchInsideRecordButton;
	MNUserSettings* _userSettings;
	MNPermissionsViewController* _permissionsViewController;
	MNPermissionsWrapperView* _permissionsWrapperView;
	MNAudioRecorder* _audioRecorder;
	NSString* _applicationName;
	id<MNAudioComposeViewControllerDelegate> _delegate;
	double _lastRecordStartTimestamp;
	MNAudioComposeView* _audioComposeView;
	FBMessageAudioOutgoingAttachmentContent* _pendingAttachment;
	NSTimer* _tapToHoldRecordingStatusViewTimer;

}

@property (assign,nonatomic) double lastRecordStartTimestamp;                                        //@synthesize lastRecordStartTimestamp=_lastRecordStartTimestamp - In the implementation block
@property (nonatomic,retain) MNAudioComposeView * audioComposeView;                                  //@synthesize audioComposeView=_audioComposeView - In the implementation block
@property (nonatomic,copy) FBMessageAudioOutgoingAttachmentContent * pendingAttachment;              //@synthesize pendingAttachment=_pendingAttachment - In the implementation block
@property (nonatomic,retain) NSTimer * tapToHoldRecordingStatusViewTimer;                            //@synthesize tapToHoldRecordingStatusViewTimer=_tapToHoldRecordingStatusViewTimer - In the implementation block
@property (assign,nonatomic,__weak) id<MNAudioComposeViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)audioRecorderShouldRecordAsVoicemail:(id)arg1 ;
-(void)audioRecorder:(id)arg1 didRecordAudio:(id)arg2 ;
-(void)audioRecorder:(id)arg1 reachMaxDuration:(id)arg2 ;
-(void)audioRecorder:(id)arg1 updateVolume:(float)arg2 ;
-(void)audioRecorder:(id)arg1 updateTimestamp:(double)arg2 ;
-(void)audioRecorderStartFailed:(id)arg1 ;
-(void)audioRecorderDidStart:(id)arg1 ;
-(void)audioRecorderDidCancel:(id)arg1 ;
-(void)audioRecorderPermissionDenied:(id)arg1 ;
-(void)_initPermissionsViewControllerIfNecessary;
-(void)audioComposeViewDidReceiveTap:(id)arg1 ;
-(void)audioComposeViewDidBeginLongPress:(id)arg1 ;
-(void)audioComposeViewDidMoveInside:(id)arg1 ;
-(void)audioComposeViewDidMoveOutside:(id)arg1 ;
-(void)audioComposeViewDidEndLongPress:(id)arg1 ;
-(void)audioComposeViewDidCancelLongPress:(id)arg1 ;
-(BOOL)_shouldShowCancelText;
-(id)initWithUserSettings:(id)arg1 audioRecorder:(id)arg2 applicationName:(id)arg3 ;
-(void)_cancelWithHoldTooShort;
-(void)_stopAudioPlaybackIfNeeded;
-(void)setPendingAttachment:(FBMessageAudioOutgoingAttachmentContent *)arg1 ;
-(void)_alertCallInProgress;
-(void)setTapToHoldRecordingStatusViewTimer:(NSTimer *)arg1 ;
-(void)_sendAudioAttachment:(id)arg1 ;
-(void)_cancelWithTouchUpOutside;
-(void)_showHoldToTalkPopup;
-(void)_dismissRecordingStatusView;
-(double)lastRecordStartTimestamp;
-(void)setLastRecordStartTimestamp:(double)arg1 ;
-(MNAudioComposeView *)audioComposeView;
-(void)setAudioComposeView:(MNAudioComposeView *)arg1 ;
-(FBMessageAudioOutgoingAttachmentContent *)pendingAttachment;
-(NSTimer *)tapToHoldRecordingStatusViewTimer;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_onApplicationWillResignActive:(id)arg1 ;
-(void)setDelegate:(id<MNAudioComposeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNAudioComposeViewControllerDelegate>)delegate;
-(void)reset;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

