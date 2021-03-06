/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBNuxPromotionFooterViewProtocol.h>

@class FBUserSession, UIButton, UILabel, FBNetworkImageView, UIImageView;

@interface FBNuxPromotionVerticalFooterView : UIView <FBNuxPromotionFooterViewProtocol> {

	FBUserSession* _session;
	CGSize _dismissButtonSize;
	CGSize _imageSize;
	CGSize _titleLabelSize;
	CGSize _descriptionLabelSize;
	CGSize _buttonSize;
	UIButton* _dismissButton;
	UIButton* _primaryButton;
	UILabel* _descriptionLabel;
	UILabel* _titleLabel;
	FBNetworkImageView* _networkImageView;
	UIImageView* _imageView;

}

@property (nonatomic,retain) FBNetworkImageView * networkImageView;              //@synthesize networkImageView=_networkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * primaryButton;                         //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                         //@synthesize dismissButton=_dismissButton - In the implementation block
-(void)setNetworkImageView:(FBNetworkImageView *)arg1 ;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)unsetImage;
-(id)_networkImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(id)_animatedImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(FBNetworkImageView *)networkImageView;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 buttonStyle:(unsigned long long)arg3 ;
-(CGRect)_calculateImageFrameForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIButton *)dismissButton;
-(UIButton *)primaryButton;
-(UILabel *)descriptionLabel;
@end

