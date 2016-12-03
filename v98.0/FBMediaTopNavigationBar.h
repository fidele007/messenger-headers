/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/SPTopBar.h>

@protocol FBMediaTopNavigationBarDelegation;
@class UILabel, UIButton, NSString, UIColor;

@interface FBMediaTopNavigationBar : SPTopBar {

	UILabel* _titleLabel;
	BOOL _fbNavigationBarStyle;
	unsigned long long _mediaPickerStyle;
	id<FBMediaTopNavigationBarDelegation> _delegate;
	UIButton* _leftButton;
	UIButton* _rightButton;

}

@property (nonatomic,copy) NSString * leftButtonTitle; 
@property (nonatomic,copy) NSString * rightButtonTitle; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (assign,nonatomic,__weak) id<FBMediaTopNavigationBarDelegation> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;                                            //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * rightButton;                                           //@synthesize rightButton=_rightButton - In the implementation block
+(id)createTopNavigationBarForMediaKitWithMediaPickerStyle:(unsigned long long)arg1 withFBNavigationBarStyle:(BOOL)arg2 ;
-(id)initWithLeftButtonStyle:(int)arg1 rightButtonStyle:(int)arg2 mediaPickerStyle:(unsigned long long)arg3 WithFBNavigationBarStyle:(BOOL)arg4 ;
-(void)didTapLeftButton:(id)arg1 ;
-(void)didTapRightButton:(id)arg1 ;
-(NSString *)leftButtonTitle;
-(NSString *)rightButtonTitle;
-(void)setLeftButtonTitle:(NSString *)arg1 ;
-(void)setRightButtonTitle:(NSString *)arg1 ;
-(void)setDelegate:(id<FBMediaTopNavigationBarDelegation>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBMediaTopNavigationBarDelegation>)delegate;
-(NSString *)title;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
@end

