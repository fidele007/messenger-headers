/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNEventsReminderInterstitialViewDelegate;
@class FBNetworkImageView, UILabel, MNButton, UIButton;

@interface MNEventsReminderInterstitialView : UIView {

	FBNetworkImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	MNButton* _createButton;
	UIButton* _dismissButton;
	id<MNEventsReminderInterstitialViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEventsReminderInterstitialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCreateButton;
-(void)_didTapDismissButton;
-(id)initWithFrame:(CGRect)arg1 imageView:(id)arg2 ;
-(void)setDelegate:(id<MNEventsReminderInterstitialViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNEventsReminderInterstitialViewDelegate>)delegate;
@end
