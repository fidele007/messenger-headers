/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, FBBadgeView, MNInboxMessageRequestUnitViewModel;

@interface MNInboxPendingRequestsContentView : UIView {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	FBBadgeView* _badgeView;
	MNInboxMessageRequestUnitViewModel* _viewModel;

}

@property (nonatomic,retain) MNInboxMessageRequestUnitViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(double)heightForViewModel:(id)arg1 width:(double)arg2 ;
-(void)_updateViewContents;
-(void)_updateTitleText;
-(void)_updateBadgeIfNecessary;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNInboxMessageRequestUnitViewModel *)viewModel;
-(void)setViewModel:(MNInboxMessageRequestUnitViewModel *)arg1 ;
-(void)_updateAccessibility;
-(void)_updateSubtitleText;
@end
