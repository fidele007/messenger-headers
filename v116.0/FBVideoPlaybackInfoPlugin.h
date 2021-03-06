/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBVideoPluginView.h>

@class FBVideoPlaybackInfoView, FBVideoPlaybackController, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface FBVideoPlaybackInfoPlugin : UIView <FBVideoPluginView> {

	CGRect _videoFrame;
	FBVideoPlaybackInfoView* _playbackInfoView;
	FBVideoPlaybackController* _videoPlaybackController;
	UITapGestureRecognizer* _twoFingerTapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect videoFrame; 
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController; 
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidCancelPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didFailWithError:(id)arg2 ;
-(FBVideoPlaybackController *)videoController;
-(void)videoPlaybackController:(id)arg1 didChangeVideoPlaybackItem:(id)arg2 ;
-(void)videoPlaybackControllerDidMute:(id)arg1 ;
-(void)videoPlaybackControllerDidUnmute:(id)arg1 ;
-(void)videoPlaybackControllerDidBlockDisturbingContent:(id)arg1 ;
-(void)videoPlaybackControllerDidUnblockDisturbingContent:(id)arg1 ;
-(void)videoPlaybackControllerDidRequestPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackControllerIsReady:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didLoadVideoDuration:(double)arg2 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)setAutoplayReason:(id)arg1 ;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(void)_didTwoFingerTap;
-(void)_didLongPress:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
@end

