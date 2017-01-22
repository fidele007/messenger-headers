/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UILabel, UIButton;


@protocol FBNuxPromotionFooterViewProtocol
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * descriptionLabel; 
@property (nonatomic,readonly) UIButton * primaryButton; 
@property (nonatomic,readonly) UIButton * dismissButton; 
@required
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2;
-(UIButton *)primaryButton;
-(void)unsetImage;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 buttonStyle:(unsigned long long)arg3;
-(id)initWithFrame:(CGRect)arg1;
-(void)setImage:(id)arg1;
-(UILabel *)titleLabel;
-(UIButton *)dismissButton;
-(UILabel *)descriptionLabel;

@end
