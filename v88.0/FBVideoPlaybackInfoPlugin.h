/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(void)videoPlaybackController:(id)arg1 didChangeVideoPlaybackItem:(id)arg2 ;
-(void)videoPlaybackControllerDidMute:(id)arg1 ;
-(void)videoPlaybackControllerDidUnmute:(id)arg1 ;
-(void)videoPlaybackControllerDidRequestPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackControllerIsReady:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didLoadVideoDuration:(double)arg2 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)_didTwoFingerTap;
-(void)_didLongPress:(id)arg1 ;
-(void)setAutoplayReason:(id)arg1 ;
-(void)videoPlaybackControllerDidUnblockDisturbingContent:(id)arg1 ;
-(void)videoPlaybackControllerDidBlockDisturbingContent:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
@end
