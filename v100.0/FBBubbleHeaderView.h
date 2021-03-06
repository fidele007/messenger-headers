/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIButton, UILabel;

@interface FBBubbleHeaderView : UIView {

	UIView* _headerSeparatorView;
	UIButton* _doneButton;
	UIButton* _backButton;
	BOOL _shouldShowDoneButton;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton; 
@property (nonatomic,readonly) UIButton * backButton; 
@property (assign,nonatomic) BOOL shouldShowDoneButton;              //@synthesize shouldShowDoneButton=_shouldShowDoneButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)doneButton;
-(UIButton *)backButton;
-(void)setShouldShowDoneButton:(BOOL)arg1 ;
-(BOOL)shouldShowDoneButton;
@end

