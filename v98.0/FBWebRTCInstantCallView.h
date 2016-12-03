/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/VideoRenderInfoDelegate.h>
#import <Messenger/FBWebRTCButtonPanelDelegate.h>
#import <Messenger/FBWebRTCVideoViewDelegate.h>

@protocol FBWebRTCInstantCallViewDelegate;
@class PABlurView, FBWebRTCInstantPostCallBackgroundView, FBWebRTCInstantCallMainStatusView, UIView, UIImageView, UILabel, FBWebRTCInstantMiniStatusView, CAGradientLayer, FBWebRTCButtonPanel, UITapGestureRecognizer, FBWebRTCStarRatingView, UIButton, UIImage, FBWebRTCPeerVideoView, FBWebRTCVideoView, NSString, FBWebRTCCircleAudioLevelView;

@interface FBWebRTCInstantCallView : UIView <VideoRenderInfoDelegate, FBWebRTCButtonPanelDelegate, FBWebRTCVideoViewDelegate> {

	PABlurView* _peerVideoBlur;
	FBWebRTCInstantPostCallBackgroundView* _backgroundView;
	FBWebRTCInstantCallMainStatusView* _mainStatusView;
	UIView* _contentView;
	UIView* _peerViewContainer;
	UIView* _fullScreenPrompt;
	UIImageView* _fullScreenPromptIcon;
	UILabel* _fullScreenPromptLabel;
	FBWebRTCInstantMiniStatusView* _miniStatusView;
	unsigned long long _miniStatusVisibleStatusViews;
	CAGradientLayer* _gradientLayer;
	FBWebRTCButtonPanel* _buttonPanel;
	UIImageView* _expressionIcon;
	UIView* _selfviewOverlay;
	BOOL _shouldShowExpressionEntry;
	UITapGestureRecognizer* _tapRecognizer;
	UILabel* _videoEndedLabel;
	FBWebRTCStarRatingView* _starRatingView;
	UIButton* _redialButton;
	UIButton* _dismissButton;
	BOOL _fullScreenPromptVisible;
	BOOL _mainStatusVisible;
	BOOL _peerVideoBlurred;
	BOOL _selfVideoTransparent;
	BOOL _expressionEntryPointEnabled;
	id<FBWebRTCInstantCallViewDelegate> _delegate;
	unsigned long long _colorScheme;
	UIImage* _miniStatusProfileImage;
	unsigned long long _videoLayout;
	unsigned long long _selfVideoOverlayStyle;
	FBWebRTCPeerVideoView* _peerVideoView;
	unsigned long long _peerVideoOrientation;
	FBWebRTCVideoView* _selfVideoView;
	unsigned long long _selfVideoOrientation;

}

@property (assign,nonatomic,__weak) id<FBWebRTCInstantCallViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long colorScheme;                                            //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) UIImage * fullBackgroundProfileImage; 
@property (assign,nonatomic) BOOL fullScreenPromptVisible;                                              //@synthesize fullScreenPromptVisible=_fullScreenPromptVisible - In the implementation block
@property (assign,nonatomic) BOOL mainStatusVisible;                                                    //@synthesize mainStatusVisible=_mainStatusVisible - In the implementation block
@property (nonatomic,retain) UIImage * statusProfileImage; 
@property (nonatomic,copy) NSString * primaryStatus; 
@property (nonatomic,copy) NSString * secondaryStatus; 
@property (nonatomic,readonly) FBWebRTCCircleAudioLevelView * outputAudioLevelView; 
@property (assign,nonatomic) double voicemailDuration; 
@property (assign,nonatomic) BOOL voicemailDurationVisible; 
@property (nonatomic,retain) UIImage * miniStatusProfileImage;                                          //@synthesize miniStatusProfileImage=_miniStatusProfileImage - In the implementation block
@property (nonatomic,readonly) unsigned long long videoLayout;                                          //@synthesize videoLayout=_videoLayout - In the implementation block
@property (assign,nonatomic) BOOL peerVideoBlurred;                                                     //@synthesize peerVideoBlurred=_peerVideoBlurred - In the implementation block
@property (assign,nonatomic) unsigned long long selfVideoOverlayStyle;                                  //@synthesize selfVideoOverlayStyle=_selfVideoOverlayStyle - In the implementation block
@property (assign,nonatomic) BOOL selfVideoTransparent;                                                 //@synthesize selfVideoTransparent=_selfVideoTransparent - In the implementation block
@property (assign,nonatomic) long long selfVideoCaptureOrientation; 
@property (nonatomic,readonly) FBWebRTCPeerVideoView * peerVideoView;                                   //@synthesize peerVideoView=_peerVideoView - In the implementation block
@property (nonatomic,readonly) unsigned long long peerVideoOrientation;                                 //@synthesize peerVideoOrientation=_peerVideoOrientation - In the implementation block
@property (nonatomic,readonly) FBWebRTCVideoView * selfVideoView;                                       //@synthesize selfVideoView=_selfVideoView - In the implementation block
@property (nonatomic,readonly) unsigned long long selfVideoOrientation;                                 //@synthesize selfVideoOrientation=_selfVideoOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long buttonCollection; 
@property (assign,getter=areMultipleCamerasEnabled,nonatomic) BOOL multipleCamerasEnabled; 
@property (assign,getter=isLocalVideoEnabled,nonatomic) BOOL localVideoEnabled; 
@property (assign,getter=isRemoteVideoEnabled,nonatomic) BOOL remoteVideoEnabled; 
@property (assign,nonatomic) BOOL sendingVideo; 
@property (assign,nonatomic) BOOL microphoneMuted; 
@property (assign,nonatomic) BOOL expressionEntryPointEnabled;                                          //@synthesize expressionEntryPointEnabled=_expressionEntryPointEnabled - In the implementation block
@property (assign,nonatomic) BOOL speakerOn; 
@property (nonatomic,readonly) UIImageView * expressionIcon;                                            //@synthesize expressionIcon=_expressionIcon - In the implementation block
@property (nonatomic,readonly) UIView * ringingExpressionButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setButtonCollection:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)buttonCollection;
-(void)buttonPanel:(id)arg1 didTapButtonWithTypeCategory:(unsigned long long)arg2 ;
-(BOOL)areMultipleCamerasEnabled;
-(BOOL)isLocalVideoEnabled;
-(BOOL)isRemoteVideoEnabled;
-(void)setButtonCollection:(unsigned long long)arg1 ;
-(void)setLocalVideoEnabled:(BOOL)arg1 ;
-(void)setMultipleCamerasEnabled:(BOOL)arg1 ;
-(void)setRemoteVideoEnabled:(BOOL)arg1 ;
-(void)setExpressionEntryPointEnabled:(BOOL)arg1 ;
-(NSString *)primaryStatus;
-(void)setPrimaryStatus:(NSString *)arg1 ;
-(NSString *)secondaryStatus;
-(void)setSecondaryStatus:(NSString *)arg1 ;
-(void)setVoicemailDurationVisible:(BOOL)arg1 ;
-(void)setVoicemailDuration:(double)arg1 ;
-(double)voicemailDuration;
-(BOOL)voicemailDurationVisible;
-(FBWebRTCCircleAudioLevelView *)outputAudioLevelView;
-(void)didTapOnSelfView;
-(void)_redialTapped;
-(void)_dismissTapped;
-(BOOL)_canShowExpressionEntryPointWithButtonCollection:(unsigned long long)arg1 ;
-(void)_setPeerViewHidden:(BOOL)arg1 ;
-(void)_setSelfViewHidden:(BOOL)arg1 ;
-(void)_setPeerViewFrame:(CGRect)arg1 ;
-(void)_setSelfViewFrame:(CGRect)arg1 ;
-(void)_updateVideoViewVisibility;
-(void)_updateExpressionIconVisibility;
-(void)setFullScreenPromptVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_layoutMiniStatusViewToBounds:(CGRect)arg1 ;
-(void)_layoutMiniStatusViewWithVisibleViews:(unsigned long long)arg1 toBounds:(CGRect)arg2 ;
-(BOOL)expressionEntryPointEnabled;
-(void)setSelfVideoTransparent:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPeerVideoBlurred:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setMainStatusVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_layoutFullScreenPromptToBounds:(CGRect)arg1 ;
-(void)_layoutButtonsToBounds:(CGRect)arg1 ;
-(void)_layoutRedialButtonsToBounds:(CGRect)arg1 ;
-(void)_layoutStarRatingAndLabelToBounds:(CGRect)arg1 ;
-(void)_updatePeerVideoOrientation;
-(void)_updateSelfVideoOrientation;
-(void)videoSizeChangedForInfo:(id)arg1 ;
-(void)videoView:(id)arg1 didChangeVideoOrientation:(long long)arg2 ;
-(long long)selfVideoCaptureOrientation;
-(void)setSelfVideoCaptureOrientation:(long long)arg1 ;
-(void)setVideoLayout:(unsigned long long)arg1 size:(CGSize)arg2 withFutureButtonCollection:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)setFullScreenPromptVisible:(BOOL)arg1 ;
-(UIImage *)fullBackgroundProfileImage;
-(void)setFullBackgroundProfileImage:(UIImage *)arg1 ;
-(UIImage *)statusProfileImage;
-(void)setStatusProfileImage:(UIImage *)arg1 ;
-(UIView *)ringingExpressionButton;
-(id)miniStatusProfielImage;
-(void)setMiniStatusProfileImage:(UIImage *)arg1 ;
-(void)setMiniStatusViews:(unsigned long long)arg1 showBackground:(BOOL)arg2 statusText:(id)arg3 animated:(BOOL)arg4 ;
-(void)showRedialButtons;
-(id)acceptVideoButton;
-(void)showStarRatingForVideo:(BOOL)arg1 withDelegate:(id)arg2 ;
-(void)setSelfVideoOverlayStyle:(unsigned long long)arg1 ;
-(void)setSelfVideoTransparent:(BOOL)arg1 ;
-(void)setPeerVideoBlurred:(BOOL)arg1 ;
-(void)setMainStatusVisible:(BOOL)arg1 ;
-(BOOL)sendingVideo;
-(void)setSendingVideo:(BOOL)arg1 ;
-(BOOL)microphoneMuted;
-(BOOL)speakerOn;
-(void)setSpeakerOn:(BOOL)arg1 ;
-(BOOL)fullScreenPromptVisible;
-(BOOL)mainStatusVisible;
-(UIImage *)miniStatusProfileImage;
-(unsigned long long)videoLayout;
-(BOOL)peerVideoBlurred;
-(unsigned long long)selfVideoOverlayStyle;
-(BOOL)selfVideoTransparent;
-(FBWebRTCPeerVideoView *)peerVideoView;
-(unsigned long long)peerVideoOrientation;
-(FBWebRTCVideoView *)selfVideoView;
-(unsigned long long)selfVideoOrientation;
-(UIImageView *)expressionIcon;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCInstantCallViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCInstantCallViewDelegate>)delegate;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(unsigned long long)colorScheme;
-(void)setColorScheme:(unsigned long long)arg1 ;
@end

