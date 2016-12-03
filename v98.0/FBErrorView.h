/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImage, FBButton, UILabel, NSString;

@interface FBErrorView : UIView {

	UIView* _imageView;
	int _buttonIcon;
	UIImage* _image;
	FBButton* _button;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	double _textMarginX;
	double _titleOffsetY;
	double _buttonOffsetY;
	double _moveOffsetY;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (assign,nonatomic) int buttonIcon; 
@property (nonatomic,copy) NSString * buttonText; 
@property (nonatomic,retain,readonly) FBButton * button;                    //@synthesize button=_button - In the implementation block
@property (nonatomic,retain,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain,readonly) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) double textMarginX;                            //@synthesize textMarginX=_textMarginX - In the implementation block
@property (assign,nonatomic) double titleOffsetY;                           //@synthesize titleOffsetY=_titleOffsetY - In the implementation block
@property (assign,nonatomic) double buttonOffsetY;                          //@synthesize buttonOffsetY=_buttonOffsetY - In the implementation block
@property (assign,nonatomic) double moveOffsetY;                            //@synthesize moveOffsetY=_moveOffsetY - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                              //@synthesize imageSize=_imageSize - In the implementation block
-(BOOL)_showButton;
-(double)_subtitlePadding;
-(int)buttonIcon;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 title:(id)arg3 subtitle:(id)arg4 ;
-(double)textMarginX;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 title:(id)arg3 subtitle:(id)arg4 buttonIcon:(int)arg5 buttonText:(id)arg6 ;
-(void)setTextMarginX:(double)arg1 ;
-(void)setTitleOffsetY:(double)arg1 ;
-(void)setButtonIcon:(int)arg1 ;
-(void)setButtonOffsetY:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 imageView:(id)arg2 imageSize:(CGSize)arg3 title:(id)arg4 subtitle:(id)arg5 buttonIcon:(int)arg6 buttonText:(id)arg7 ;
-(void)_getSizesForWidth:(double)arg1 titleLabelSize:(out CGSize*)arg2 subtitleLabelSize:(out CGSize*)arg3 imageViewSize:(out CGSize*)arg4 buttonSize:(out CGSize*)arg5 ;
-(double)_heightForImageHeight:(double)arg1 titleHeight:(double)arg2 subtitleHeight:(double)arg3 buttonHeight:(double)arg4 ;
-(double)titleOffsetY;
-(double)_buttonPaddingAndHeightForButtonHeight:(double)arg1 ;
-(double)buttonOffsetY;
-(double)moveOffsetY;
-(void)setMoveOffsetY:(double)arg1 ;
-(FBButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(CGSize)imageSize;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end

