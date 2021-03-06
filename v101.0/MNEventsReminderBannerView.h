/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNEvensReminderBannerViewDelegate;
@class UILabel, UIView, PABlurView, UIButton, UITapGestureRecognizer, MNEventsReminderBannerViewModel;

@interface MNEventsReminderBannerView : UIView {

	UILabel* _titleLabel;
	UILabel* _locationLabel;
	UILabel* _rsvpCountLabel;
	UIView* _separatorView;
	PABlurView* _backgroundBar;
	UIButton* _cantGoButton;
	UIButton* _goingButton;
	UITapGestureRecognizer* _tapGestureRecognizer;
	MNEventsReminderBannerViewModel* _viewModel;
	id<MNEvensReminderBannerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEvensReminderBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCantGo;
-(void)_didTapGoing;
-(void)_didTapBanner;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNEvensReminderBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNEvensReminderBannerViewDelegate>)delegate;
-(void)setViewModel:(id)arg1 ;
@end

