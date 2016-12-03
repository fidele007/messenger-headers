/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBNuxStepChainControllerDelegate.h>
#import <Messenger/FBVideoPluginView.h>
#import <Messenger/FBVideoOverlayPluginEventListener.h>

@class FBVideoPlaybackController, FBVideoPlayer360HeadingIndicatorView, UITapGestureRecognizer, CADisplayLink, FBUserSession, FBNuxController, NSDate, FBVideoHeadingIndicatorEventListenerAnnouncer, NSString;

@interface FBVideoPlayer360HeadingIndicatorPlugin : UIView <FBNuxStepChainControllerDelegate, FBVideoPluginView, FBVideoOverlayPluginEventListener> {

	FBVideoPlaybackController* _videoPlaybackController;
	FBVideoPlayer360HeadingIndicatorView* _indicatorView;
	UITapGestureRecognizer* _tapRecognizer;
	CADisplayLink* _displayLink;
	FBUserSession* _session;
	FBNuxController* _guideNuxController;
	FBNuxController* _360AudioNuxController;
	SEL _fullscreenTapped;
	id _targetForFullscreenTapped;
	NSDate* _nuxStartTime;
	double _aspectRatio;
	double _indicatorViewPointY;
	BOOL _needsToDetectSignificantMove;
	BOOL _needsToCaptureRotation;
	BOOL _needsToCaptureDeviceAttitude;
	BOOL _shouldEnableGuideAutomatically;
	BOOL _shouldFixViewportLogging;
	BOOL _isGuideAvailable;
	BOOL _isGuideEnabled;
	BOOL _isFirstPlayback;
	BOOL _mayNeedGuideNux;
	BOOL _mayNeed360AudioNux;
	double _capturedYaw;
	double _capturedPitch;
	double _capturedRoll;
	double _fovY;
	double _yaw;
	double _pitch;
	double _roll;
	SCD_Struct_FB94 _guideEulerAngles;
	GLKQuaternion _capturedDeviceAttitude;
	FBVideoPlaybackController* _videoController;
	FBVideoHeadingIndicatorEventListenerAnnouncer* _announcer;
	CGRect _videoFrame;

}

@property (assign,nonatomic) CGRect videoFrame;                                                        //@synthesize videoFrame=_videoFrame - In the implementation block
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController;                       //@synthesize videoController=_videoController - In the implementation block
@property (nonatomic,readonly) FBVideoHeadingIndicatorEventListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
-(FBVideoHeadingIndicatorEventListenerAnnouncer *)announcer;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidCancelPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didChangeVideoPlaybackItem:(id)arg2 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(void)videoDidHandleGesture:(id)arg1 ;
-(void)videoOverlayPluginView:(id)arg1 updatedChromeHidden:(BOOL)arg2 manually:(BOOL)arg3 ;
-(void)_displayNUX;
-(void)_applicationDidBackground;
-(void)_applicationWillForeground;
-(void)_deactivateDisplayLinkAndTapGesture;
-(void)_activateDisplayLinkAndTapGesture;
-(void)_startSignificantMoveDetection;
-(void)updateIndicatorView;
-(void)_displayLinkCallback:(id)arg1 ;
-(void)_setGuideEnabled:(BOOL)arg1 ;
-(void)_setGuideEnabled:(BOOL)arg1 isAutomatic:(BOOL)arg2 ;
-(void)_maybeExitGuide:(_GLKQuaternion)arg1 ;
-(void)_maybeDisplayNUX;
-(void)_detectSignificantMove;
-(void)maybeSetupForRendering;
-(void)setFullscreenTapped:(SEL)arg1 target:(id)arg2 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
-(void)_handleTap:(id)arg1 ;
@end
