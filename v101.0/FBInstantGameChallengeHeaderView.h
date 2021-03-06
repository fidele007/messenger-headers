/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBInstantGameChallengeHeaderViewDelegate;
@class FBInstantGameUIMetrics, UILabel, UIImageView, UIButton, UIView;

@interface FBInstantGameChallengeHeaderView : UIView {

	FBInstantGameUIMetrics* _metrics;
	UILabel* _titleLabel;
	UIImageView* _messengerIconView;
	UIButton* _closeButton;
	UIView* _separatorView;
	BOOL _shouldHideCloseButton;
	id<FBInstantGameChallengeHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameChallengeHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideCloseButton;                                                //@synthesize shouldHideCloseButton=_shouldHideCloseButton - In the implementation block
-(void)_didTapOnCloseButton;
-(BOOL)shouldHideCloseButton;
-(void)setShouldHideCloseButton:(BOOL)arg1 ;
-(void)setDelegate:(id<FBInstantGameChallengeHeaderViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<FBInstantGameChallengeHeaderViewDelegate>)delegate;
@end

