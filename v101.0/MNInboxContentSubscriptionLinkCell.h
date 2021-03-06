/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol MNInboxContentSubscriptionLinkCellDelegate;
@class UIButton, UIImageView, FBFourRoundedCornerView, FBImageLoader, UILabel, MNProfileImageView, MNInboxContentSubscriptionLinkRowViewModel;

@interface MNInboxContentSubscriptionLinkCell : UITableViewCell {

	UIButton* _shareButton;
	UIImageView* _lightningBoltImageView;
	FBFourRoundedCornerView* _contentPreviewMaskView;
	FBImageLoader* _imageLoader;
	UILabel* _contentLinkTitleLabel;
	UILabel* _contentSourceLabel;
	MNProfileImageView* _contentPreviewImageView;
	MNInboxContentSubscriptionLinkRowViewModel* _viewModel;
	id<MNInboxContentSubscriptionLinkCellDelegate> _delegate;

}

@property (nonatomic,retain) MNProfileImageView * contentPreviewImageView;                                //@synthesize contentPreviewImageView=_contentPreviewImageView - In the implementation block
@property (nonatomic,copy) MNInboxContentSubscriptionLinkRowViewModel * viewModel;                        //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNInboxContentSubscriptionLinkCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)cellHeight;
-(void)_updateViews;
-(void)_didTapShareButton:(id)arg1 ;
-(MNProfileImageView *)contentPreviewImageView;
-(void)setContentPreviewImageView:(MNProfileImageView *)arg1 ;
-(void)setDelegate:(id<MNInboxContentSubscriptionLinkCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<MNInboxContentSubscriptionLinkCellDelegate>)delegate;
-(MNInboxContentSubscriptionLinkRowViewModel *)viewModel;
-(void)setViewModel:(MNInboxContentSubscriptionLinkRowViewModel *)arg1 ;
@end

