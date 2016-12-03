/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNBubbleDisplayConfiguring;
@class MNLoadingIndicator, UIColor, UIView, UIButton, UILabel, UIImageView, UIImage;

@interface MNAudioPlayerControlsView : UIView {

	MNLoadingIndicator* _loadingIndicator;
	MNBubbleViewAttributes _bubbleAttributes;
	UIColor* _themeColor;
	unsigned long long _state;
	double _audioDuration;
	id<MNBubbleDisplayConfiguring> _bubbleDisplayConfigurer;
	UIView* _patternView;
	UIButton* _playButton;
	UILabel* _timerPanelLabel;
	UIImageView* _timerPanelBackground;
	UIImage* _playButtonBackground;
	UIImage* _pauseButtonBackground;
	UIImage* _patternLabelBackground;
	UIImage* _timerPanelBackgroundImage;
	UIColor* _timerTextColor;

}

@property (nonatomic,retain) UIView * patternView;                                                //@synthesize patternView=_patternView - In the implementation block
@property (nonatomic,retain) UIButton * playButton;                                               //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) UILabel * timerPanelLabel;                                           //@synthesize timerPanelLabel=_timerPanelLabel - In the implementation block
@property (nonatomic,retain) UIImageView * timerPanelBackground;                                  //@synthesize timerPanelBackground=_timerPanelBackground - In the implementation block
@property (nonatomic,retain) UIImage * playButtonBackground;                                      //@synthesize playButtonBackground=_playButtonBackground - In the implementation block
@property (nonatomic,retain) UIImage * pauseButtonBackground;                                     //@synthesize pauseButtonBackground=_pauseButtonBackground - In the implementation block
@property (nonatomic,retain) UIImage * patternLabelBackground;                                    //@synthesize patternLabelBackground=_patternLabelBackground - In the implementation block
@property (nonatomic,retain) UIImage * timerPanelBackgroundImage;                                 //@synthesize timerPanelBackgroundImage=_timerPanelBackgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * timerTextColor;                                            //@synthesize timerTextColor=_timerTextColor - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double audioDuration;                                                //@synthesize audioDuration=_audioDuration - In the implementation block
@property (nonatomic,retain) id<MNBubbleDisplayConfiguring> bubbleDisplayConfigurer;              //@synthesize bubbleDisplayConfigurer=_bubbleDisplayConfigurer - In the implementation block
-(id<MNBubbleDisplayConfiguring>)bubbleDisplayConfigurer;
-(void)setAudioDuration:(double)arg1 ;
-(id)_durationLabel;
-(UILabel *)timerPanelLabel;
-(void)setTimerPanelLabel:(UILabel *)arg1 ;
-(UIImage *)playButtonBackground;
-(void)setPlayButtonBackground:(UIImage *)arg1 ;
-(UIImage *)pauseButtonBackground;
-(void)setPauseButtonBackground:(UIImage *)arg1 ;
-(UIImage *)timerPanelBackgroundImage;
-(void)setTimerPanelBackgroundImage:(UIImage *)arg1 ;
-(UIImageView *)timerPanelBackground;
-(void)setTimerPanelBackground:(UIImageView *)arg1 ;
-(void)setBubbleDisplayConfigurer:(id<MNBubbleDisplayConfiguring>)arg1 ;
-(void)setBubbleAttributes:(MNBubbleViewAttributes)arg1 themeColor:(id)arg2 ;
-(double)audioDuration;
-(void)setPatternView:(UIView *)arg1 ;
-(void)_layoutSubiews;
-(void)_cancelLoadingAnimation;
-(void)_startLoadingAnimation;
-(void)setPatternLabelBackground:(UIImage *)arg1 ;
-(UIView *)patternView;
-(void)setTimerTextColor:(UIColor *)arg1 ;
-(void)resizeView;
-(UIImage *)patternLabelBackground;
-(UIColor *)timerTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(UIButton *)playButton;
-(void)setPlayButton:(UIButton *)arg1 ;
@end

