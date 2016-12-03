/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNVideoControllerDelegate.h>
#import <Messenger/MNMessageVideoViewDelegate.h>
#import <Messenger/MNMessageVideoAttachmentGetterListener.h>
#import <Messenger/FBMMessageSendListening.h>
#import <Messenger/MNVideoOverlayViewDelegate.h>
#import <Messenger/FBVideoAttachmentExportListener.h>
#import <Messenger/FBPickUpAttachmentNodeDelegate.h>
#import <Messenger/FBModalFullscreenControllerDelegate.h>
#import <Messenger/FBModalFullscreenControllerDataSource.h>

@protocol FBMessageOutgoingAttachmentPreparationProgressTracking, FBVideoAttachmentExportListener, MNMessageVideoAttachmentGetterListener, MNMessageVideoViewControllerDelegate, FBOpenableAttachmentNodeObserver, FBModalPresentationSource;
@class MNVideoAnalyticsLogger, MNVideoPlaybackWaterfallAnalyticsLogger, FBMMessageSendListeningAnnouncer, MNVideoPlaybackCoordinator, MNVideoAttachmentGetterCoordinator, MNImageRequester, MNVideoTouchEventListenerAnnouncer, FBVideoAttachmentExportListenerAnnouncer, FBLazyCreator, MNMessageVideoWrapperView, UIView, MNMessageRow, ZRTariffedUxSentry, FBMVideoPlaybackEventListenerAnnouncer, FBUserSession, MNVideoOverlayView, MNMessageVideoControllerMap, MNMessageVideoView, MNVideoViewNode, MNVideoController, NSString;

@interface MNMessageVideoViewController : NSObject <MNVideoControllerDelegate, MNMessageVideoViewDelegate, MNMessageVideoAttachmentGetterListener, FBMMessageSendListening, MNVideoOverlayViewDelegate, FBVideoAttachmentExportListener, FBPickUpAttachmentNodeDelegate, FBModalFullscreenControllerDelegate, FBModalFullscreenControllerDataSource> {

	MNVideoAnalyticsLogger* _videoAnalyticsLogger;
	MNVideoPlaybackWaterfallAnalyticsLogger* _videoPlaybackWaterfallAnalyticsLogger;
	id<FBMessageOutgoingAttachmentPreparationProgressTracking> _attachmentProgressTracker;
	FBMMessageSendListeningAnnouncer* _messageSendAnnouncer;
	MNVideoPlaybackCoordinator* _videoPlaybackCoordinator;
	MNVideoAttachmentGetterCoordinator* _videoAttachmentCoordinator;
	MNImageRequester* _imageRequester;
	MNVideoTouchEventListenerAnnouncer* _videoTouchEventAnnouncer;
	FBVideoAttachmentExportListenerAnnouncer* _videoAttachmentExportAnnouncer;
	id<FBVideoAttachmentExportListener> _exportListenerDispatcher;
	id<MNMessageVideoAttachmentGetterListener> _videoGetterListenerProxy;
	FBLazyCreator* _modalFullscreenControllerCreator;
	MNMessageVideoWrapperView* _videoWrapperView;
	UIView* _touchBlockingUnderlayView;
	BOOL _isVisible;
	double _exportProgress;
	double _uploadProgress;
	id<MNMessageVideoViewControllerDelegate> _delegate;
	id<FBOpenableAttachmentNodeObserver> _attachmentNodeObserver;
	id<FBModalPresentationSource> _modalPresentationSource;
	MNMessageRow* _messageRow;
	ZRTariffedUxSentry* _zeroRatingSentry;
	FBMVideoPlaybackEventListenerAnnouncer* _videoPlaybackEventAnnouncer;
	FBUserSession* _session;
	MNVideoOverlayView* _videoControlsOverlayView;
	unsigned long long _requestedTime;
	MNMessageVideoControllerMap* _videoControllerManager;

}

@property (nonatomic,readonly) MNMessageVideoView * videoView; 
@property (nonatomic,readonly) MNVideoViewNode * videoViewNode; 
@property (nonatomic,readonly) MNVideoController * associatedVideoController; 
@property (nonatomic,retain) ZRTariffedUxSentry * zeroRatingSentry;                                               //@synthesize zeroRatingSentry=_zeroRatingSentry - In the implementation block
@property (nonatomic,readonly) FBMVideoPlaybackEventListenerAnnouncer * videoPlaybackEventAnnouncer;              //@synthesize videoPlaybackEventAnnouncer=_videoPlaybackEventAnnouncer - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNVideoOverlayView * videoControlsOverlayView;                                     //@synthesize videoControlsOverlayView=_videoControlsOverlayView - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTime;                                                    //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,readonly) MNMessageVideoControllerMap * videoControllerManager;                              //@synthesize videoControllerManager=_videoControllerManager - In the implementation block
@property (assign,nonatomic,__weak) id<MNMessageVideoViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBOpenableAttachmentNodeObserver> attachmentNodeObserver;                  //@synthesize attachmentNodeObserver=_attachmentNodeObserver - In the implementation block
@property (assign,nonatomic,__weak) id<FBModalPresentationSource> modalPresentationSource;                        //@synthesize modalPresentationSource=_modalPresentationSource - In the implementation block
@property (nonatomic,copy,readonly) MNMessageRow * messageRow;                                                    //@synthesize messageRow=_messageRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)handleIntent:(id)arg1 ;
-(id)analyticsExtras;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 ;
-(void)willRetryMessage:(id)arg1 ;
-(void)message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(id)modalPresentationStackManager;
-(id<FBModalPresentationSource>)modalPresentationSource;
-(MNMessageRow *)messageRow;
-(void)didDisppear;
-(MNVideoViewNode *)videoViewNode;
-(void)setAttachmentNodeObserver:(id<FBOpenableAttachmentNodeObserver>)arg1 ;
-(void)setModalPresentationSource:(id<FBModalPresentationSource>)arg1 ;
-(void)awakeWithView:(id)arg1 ;
-(void)updateWithMessageRow:(id)arg1 ;
-(void)cancelSending;
-(void)playWithFullscreen:(BOOL)arg1 muted:(BOOL)arg2 loopPlaybackEnabled:(BOOL)arg3 ;
-(void)retrySending;
-(void)attachmentNodeMayOpen:(id)arg1 ;
-(void)attachmentNodeWillOpen:(id)arg1 animated:(BOOL)arg2 ;
-(void)attachmentNodeDidOpen:(id)arg1 ;
-(void)attachmentNodeMayClose:(id)arg1 ;
-(void)attachmentNodeWillClose:(id)arg1 animated:(BOOL)arg2 ;
-(void)attachmentNodeDidClose:(id)arg1 ;
-(void)messageVideoAttachmentRetrievedForMessageKey:(id)arg1 withURL:(id)arg2 ;
-(void)messageVideoAttachmentFailedRetrieveForMessageKey:(id)arg1 ;
-(void)messageVideoAttachmentRetrievedForMessageKey:(id)arg1 withProgress:(double)arg2 ;
-(void)_updateWithMessageRow:(id)arg1 ;
-(void)_exitFullScreenModeAnimated:(BOOL)arg1 ;
-(void)_stopVideoPlaying;
-(void)_enterFullScreenMode;
-(void)_requestAndPlayVideoIfNeededWithMuteStatus:(BOOL)arg1 loopPlaybackEnabled:(BOOL)arg2 ;
-(void)_setThumbnailImageIntoVideoMessageView:(id)arg1 videoThumbnailPhotoSource:(id)arg2 ;
-(MNVideoController *)associatedVideoController;
-(void)_updateVideoViewNodeWithMessageRow:(id)arg1 ;
-(void)_updateVideoViewWithMessageRow:(id)arg1 associatedVideoController:(id)arg2 ;
-(void)_updateVideoViewStateWithMessageSendState:(unsigned long long)arg1 associatedVideoController:(id)arg2 ;
-(void)_updateVideoThumbnail;
-(void)_message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(void)_setupVideoPlaying;
-(void)videoAttachmentDidStartExport:(id)arg1 ;
-(void)videoAttachment:(id)arg1 didExportWithProgress:(float)arg2 ;
-(void)videoAttachment:(id)arg1 didFailExportWithError:(id)arg2 ;
-(void)videoAttachmentDidFinishExport:(id)arg1 ;
-(void)_updateVideoViewState:(long long)arg1 ;
-(void)_updateVideoViewStateWithPlaying;
-(BOOL)_isVideoViewInPlaybackStates;
-(BOOL)_isVideoViewNodeInFullScreenMode;
-(void)_requestVideo;
-(void)_logVideoController:(id)arg1 changeToState:(long long)arg2 ;
-(void)_createAndAssociateVideoControllerIfNecessaryWithMuteStatus:(BOOL)arg1 loopPlaybackEnabled:(BOOL)arg2 ;
-(void)_resumeOrStart;
-(void)_playVideoAfterFullScreenIfNeeded:(id)arg1 ;
-(void)_handlePlayPauseTap;
-(id<FBOpenableAttachmentNodeObserver>)attachmentNodeObserver;
-(id)existingModalLayerForAttachmentNode:(id)arg1 ;
-(void)_failVideoPlaying;
-(void)_updateVideoTotalCompleteProgress:(double)arg1 state:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_updateVideoSendProgressAndState;
-(void)videoController:(id)arg1 didCreateNewPlayerItemWithPlayer:(id)arg2 ;
-(void)videoController:(id)arg1 disassociatePlayer:(id)arg2 ;
-(void)videoController:(id)arg1 player:(id)arg2 withItem:(id)arg3 didChangeRateFrom:(float)arg4 to:(float)arg5 isAtEndOfVideo:(BOOL)arg6 ;
-(void)videoController:(id)arg1 didChangeState:(long long)arg2 ;
-(void)messageVideoViewTappedOutsidePlayButton:(id)arg1 ;
-(void)messageVideoViewTappedPlayPauseControl:(id)arg1 ;
-(void)messageVideoViewDidTapRetry:(id)arg1 ;
-(void)messageVideoViewDidTapSoundButton:(id)arg1 ;
-(void)videoOverlayViewDidTapPlayPauseButton:(id)arg1 ;
-(double)currentPlaybackTimeForVideoOverlayView:(id)arg1 ;
-(id)modalFullscreenController:(id)arg1 nodeBeforeNode:(id)arg2 ;
-(id)modalFullscreenController:(id)arg1 nodeAfterNode:(id)arg2 ;
-(id)initWithSession:(id)arg1 videoAnalyticsLogger:(id)arg2 videoPlaybackWaterfallAnalyticsLogger:(id)arg3 videoControllerManager:(id)arg4 attachmentProgressTracker:(id)arg5 messageSendAnnouncer:(id)arg6 videoPlaybackCoordinator:(id)arg7 videoAttachmentCoordinator:(id)arg8 imageRequester:(id)arg9 videoAttachmentExportAnnouncer:(id)arg10 underlayViewOpacity:(double)arg11 ;
-(ZRTariffedUxSentry *)zeroRatingSentry;
-(void)setZeroRatingSentry:(ZRTariffedUxSentry *)arg1 ;
-(FBMVideoPlaybackEventListenerAnnouncer *)videoPlaybackEventAnnouncer;
-(MNVideoOverlayView *)videoControlsOverlayView;
-(unsigned long long)requestedTime;
-(void)setRequestedTime:(unsigned long long)arg1 ;
-(MNMessageVideoControllerMap *)videoControllerManager;
-(void)setDelegate:(id<MNMessageVideoViewControllerDelegate>)arg1 ;
-(id<MNMessageVideoViewControllerDelegate>)delegate;
-(void)willAppear;
-(FBUserSession *)session;
-(MNMessageVideoView *)videoView;
@end

