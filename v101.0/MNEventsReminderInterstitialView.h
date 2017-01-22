/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
