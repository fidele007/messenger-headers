/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCStarRatingViewDelegate;
@class UILabel, UIButton, NSArray, MNStarSliderControl;

@interface FBWebRTCStarRatingView : UIView {

	UILabel* _titleLabel;
	UIButton* _dismissButton;
	NSArray* _starButtons;
	MNStarSliderControl* _starSlider;
	unsigned long long _selectedStarRating;
	double _layoutRatioMultiplier;
	unsigned long long _size;
	unsigned long long _colorScheme;
	UILabel* _ratingLabel;
	UIButton* _submitButton;
	id<FBWebRTCStarRatingViewDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSArray * starButtons;                                    //@synthesize starButtons=_starButtons - In the implementation block
@property (assign,nonatomic) unsigned long long selectedStarRating;                           //@synthesize selectedStarRating=_selectedStarRating - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long colorScheme;                                  //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UILabel * ratingLabel;                                         //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,readonly) UIButton * submitButton;                                       //@synthesize submitButton=_submitButton - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCStarRatingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_initializeSubviews;
-(void)_sliderChanged:(id)arg1 ;
-(void)_didPressSubmit:(id)arg1 ;
-(void)_didPressDismiss:(id)arg1 ;
-(void)_positionDismissButton;
-(id)initWithFrame:(CGRect)arg1 size:(unsigned long long)arg2 ;
-(void)setLayoutRatioMultiplier:(double)arg1 ;
-(id)_surveyTitle;
-(NSArray *)starButtons;
-(unsigned long long)selectedStarRating;
-(void)setSelectedStarRating:(unsigned long long)arg1 ;
-(UIButton *)submitButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)size;
-(void)setDelegate:(id<FBWebRTCStarRatingViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCStarRatingViewDelegate>)delegate;
-(void)_layout;
-(UILabel *)ratingLabel;
-(unsigned long long)colorScheme;
-(void)setColorScheme:(unsigned long long)arg1 ;
@end

