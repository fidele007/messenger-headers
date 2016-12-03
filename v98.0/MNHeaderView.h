/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, UIImageView, FBFourRoundedCornerView, UIFont, UIColor;

@interface MNHeaderView : UIView {

	NSString* _title;
	UILabel* _titleLabel;
	NSString* _subtitle;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	FBFourRoundedCornerView* _roundedCornerView;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	double _titleLineHeight;
	double _subtitleLineHeight;
	UIColor* _titleColor;
	UIColor* _subtitleColor;
	double _subtitleTopMargin;
	double _horizontalPaddingRatio;
	unsigned long long _imageViewVerticalPosition;
	double _imageViewTopMargin;
	double _imageViewBottomMargin;

}

@property (nonatomic,retain) UIFont * titleFont;                                        //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFont;                                     //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (assign,nonatomic) double titleLineHeight;                                    //@synthesize titleLineHeight=_titleLineHeight - In the implementation block
@property (assign,nonatomic) double subtitleLineHeight;                                 //@synthesize subtitleLineHeight=_subtitleLineHeight - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                      //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,retain) UIColor * subtitleColor;                                   //@synthesize subtitleColor=_subtitleColor - In the implementation block
@property (assign,nonatomic) double subtitleTopMargin;                                  //@synthesize subtitleTopMargin=_subtitleTopMargin - In the implementation block
@property (assign,nonatomic) double horizontalPaddingRatio;                             //@synthesize horizontalPaddingRatio=_horizontalPaddingRatio - In the implementation block
@property (assign,nonatomic) unsigned long long imageViewVerticalPosition;              //@synthesize imageViewVerticalPosition=_imageViewVerticalPosition - In the implementation block
@property (assign,nonatomic) double imageViewTopMargin;                                 //@synthesize imageViewTopMargin=_imageViewTopMargin - In the implementation block
@property (assign,nonatomic) double imageViewBottomMargin;                              //@synthesize imageViewBottomMargin=_imageViewBottomMargin - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 ;
-(void)setHorizontalPaddingRatio:(double)arg1 ;
-(void)setImageViewBottomMargin:(double)arg1 ;
-(void)setImageViewVerticalPosition:(unsigned long long)arg1 ;
-(void)setSubtitleTopMargin:(double)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)setImage:(id)arg1 withRoundImageBorders:(BOOL)arg2 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 ;
-(void)setImageViewTopMargin:(double)arg1 ;
-(double)_availableWidthWithSize:(CGSize)arg1 ;
-(double)horizontalPaddingRatio;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 roundImageBorders:(BOOL)arg4 ;
-(void)_setTitleLabelAttributedText;
-(void)_setSubtitleLabelAttributedText;
-(void)_layoutImageViewWithYOffset:(double)arg1 ;
-(double)subtitleTopMargin;
-(unsigned long long)imageViewVerticalPosition;
-(double)imageViewTopMargin;
-(double)imageViewBottomMargin;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(UIFont *)titleFont;
-(UIFont *)subtitleFont;
-(void)setSubtitleColor:(UIColor *)arg1 ;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(double)titleLineHeight;
-(double)subtitleLineHeight;
-(void)setSubtitleLineHeight:(double)arg1 ;
-(void)setTitleLineHeight:(double)arg1 ;
-(UIColor *)subtitleColor;
@end

