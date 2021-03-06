/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMediaTrayViewPhotoCell.h>
#import <Messenger/MNVideoControllerDelegate.h>
#import <Messenger/MNMediaTrayVisibilityListening.h>

@protocol FBCancelable;
@class MNVideoController, UIButton, MNVideoPlayingView, NSURL, NSString;

@interface MNMediaTrayViewVideoCell : MNMediaTrayViewPhotoCell <MNVideoControllerDelegate, MNMediaTrayVisibilityListening> {

	MNVideoController* _videoController;
	UIButton* _videoDurationView;
	MNVideoPlayingView* _videoPlayingView;
	BOOL _mediaTrayVisible;
	id<FBCancelable> _delayedVideoPlay;
	NSURL* _videoURL;

}

@property (nonatomic,retain) NSURL * videoURL;                      //@synthesize videoURL=_videoURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoController:(id)arg1 didCreateNewPlayerItemWithPlayer:(id)arg2 ;
-(void)videoController:(id)arg1 disassociatePlayer:(id)arg2 ;
-(void)videoController:(id)arg1 player:(id)arg2 withItem:(id)arg3 didChangeRateFrom:(float)arg4 to:(float)arg5 isAtEndOfVideo:(BOOL)arg6 ;
-(void)videoController:(id)arg1 didChangeState:(long long)arg2 ;
-(void)_playVideo;
-(void)mediaTrayWillBecomeVisibleToUser;
-(void)mediaTrayDidBecomeInvisibleToUser;
-(void)playVideoDelayed;
-(void)setMediaTrayVisible:(BOOL)arg1 ;
-(void)_initializeVideoCellSubviews;
-(void)_updateVideoPlayingViewVisibility;
-(void)_cancelDelayedVideoPlay;
-(void)_recreateVideoController;
-(void)_initializeVideoControllerIfNeeded;
-(void)_delayedPlayVideoWithURL:(id)arg1 ;
-(BOOL)_shouldInitializeNewVideoController;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoDuration:(double)arg1 ;
-(void)stopVideo;
-(void)_pauseVideo;
@end

