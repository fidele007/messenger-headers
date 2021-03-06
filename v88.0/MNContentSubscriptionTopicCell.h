/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol MNContentSubscriptionTopicCellDelegate;
@class UILabel, UIButton, UIImageView, MNPhotoMaskView, MNProfileImageView, MNContentSubscriptionStationViewModel;

@interface MNContentSubscriptionTopicCell : UITableViewCell {

	UILabel* _nameLabel;
	UILabel* _topicDescriptionLabel;
	UIButton* _subscribeButton;
	UIImageView* _chevronImageView;
	MNPhotoMaskView* _profilePicMaskView;
	id<MNContentSubscriptionTopicCellDelegate> _delegate;
	MNProfileImageView* _profileImageView;
	MNContentSubscriptionStationViewModel* _viewModel;
	long long _layoutStyle;

}

@property (assign,nonatomic,__weak) id<MNContentSubscriptionTopicCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * profileImageView;                                 //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,copy) MNContentSubscriptionStationViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                   //@synthesize layoutStyle=_layoutStyle - In the implementation block
+(double)heightThatFits:(CGSize)arg1 forLayoutStyle:(long long)arg2 ;
-(MNProfileImageView *)profileImageView;
-(void)_toggleSubscription:(id)arg1 ;
-(void)setDelegate:(id<MNContentSubscriptionTopicCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<MNContentSubscriptionTopicCellDelegate>)delegate;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(MNContentSubscriptionStationViewModel *)viewModel;
-(void)setViewModel:(MNContentSubscriptionStationViewModel *)arg1 ;
@end

