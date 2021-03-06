/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNFormHeaderView.h>

@class UIImageView, UILabel, UIButton;

@interface MNConfirmPhoneHeaderView : MNFormHeaderView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIButton* _resendCodeButton;

}

@property (nonatomic,readonly) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * resendCodeButton;              //@synthesize resendCodeButton=_resendCodeButton - In the implementation block
-(void)_updateFontSizeForTitleLabelToFitInWidth:(double)arg1 ;
-(UIButton *)resendCodeButton;
-(void)_layoutForState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
@end

