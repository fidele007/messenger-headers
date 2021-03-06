/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageVideoViewController.h>
#import <Messenger/MNVideoPlaybackEventListener.h>
#import <Messenger/FBBackgroundingListener.h>

@class MNAppMessageAttachmentUtils, MNCDNAssetURLResolver, MNVideoAttachmentPrefetcher, FBBackgroundingAnnouncer, FBMVideoStorageManager, MNVideoPlaybackController, NSString;

@interface MNMessageVideoViewFNFController : MNMessageVideoViewController <MNVideoPlaybackEventListener, FBBackgroundingListener> {

	MNAppMessageAttachmentUtils* _attachmentUtils;
	MNCDNAssetURLResolver* _urlResolver;
	MNVideoAttachmentPrefetcher* _videoPrefetcher;
	FBBackgroundingAnnouncer* _backgroundingAnnouncer;
	FBMVideoStorageManager* _videoStorageManager;
	double _lastStartTimePosition;
	MNVideoPlaybackController* _replacingVideoController;
	BOOL _loopPlaybackEnabled;
	unsigned long long _stalledTime;

}

@property (nonatomic,readonly) MNVideoPlaybackController * associatedVideoController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_stopVideoPlaying;
-(MNVideoPlaybackController *)associatedVideoController;
-(void)_setupVideoPlaying;
-(void)_createAndAssociateVideoControllerIfNecessaryWithMuteStatus:(BOOL)arg1 loopPlaybackEnabled:(BOOL)arg2 ;
-(void)_resumeOrStart;
-(void)_failVideoPlaying;
-(void)_setupVideoController;
-(void)_resolveVideoUrlAndForceStart:(BOOL)arg1 ;
-(id)_videoID;
-(void)_startPlayingWithVideoUrl:(id)arg1 ;
-(void)_prepareReplacingVideoControllerWithVideoUrl:(id)arg1 ;
-(BOOL)_isFullVideo;
-(void)_handlePlaybackFinished;
-(void)_handlePlaybackStalled;
-(void)_handleMainControllerIsReadyForDisplay;
-(void)_handleReplacingControllerIsReadyForDisplay;
-(void)_replaceVideoController;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerIsReadyForDisplay:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 wasStoppedAtPlaybackTime:(double)arg2 ;
-(void)videoPlaybackController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)didEnterForeground;
-(id)initWithSession:(id)arg1 videoAnalyticsLogger:(id)arg2 videoPlaybackWaterfallAnalyticsLogger:(id)arg3 videoControllerManager:(id)arg4 attachmentProgressTracker:(id)arg5 messageSendAnnouncer:(id)arg6 videoPlaybackCoordinator:(id)arg7 videoAttachmentCoordinator:(id)arg8 imageRequester:(id)arg9 videoAttachmentExportAnnouncer:(id)arg10 underlayViewOpacity:(double)arg11 attachmentUtils:(id)arg12 cdnAssetURLResolver:(id)arg13 videoPrefetcher:(id)arg14 backgroundingAnnouncer:(id)arg15 videoStorageManager:(id)arg16 ;
-(void)dealloc;
-(void)didEnterBackground;
@end

