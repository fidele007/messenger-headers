/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol MNJoinableGroupPendingApprovalsCellDelegate;
@class UILabel, MNMaskedProfileImageView, UIButton, UIView, MNTableViewCellStyle, MNProfileImageView;

@interface MNJoinableGroupPendingApprovalsCell : UITableViewCell {

	UILabel* _userDisplayNameLabel;
	UILabel* _mutualFriendsCountLabel;
	MNMaskedProfileImageView* _profileImageMaskView;
	UIButton* _approveButton;
	UIButton* _ignoreButton;
	UIView* _topSeparatorView;
	UIView* _lineSeparatorView;
	double _separatorLeftInset;
	MNTableViewCellStyle* _cellStyle;
	BOOL _disableActionButtons;
	MNProfileImageView* _profileImageView;
	id<MNJoinableGroupPendingApprovalsCellDelegate> _delegate;

}

@property (nonatomic,readonly) MNProfileImageView * profileImageView;                                      //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic) BOOL disableActionButtons;                                                    //@synthesize disableActionButtons=_disableActionButtons - In the implementation block
@property (assign,nonatomic,__weak) id<MNJoinableGroupPendingApprovalsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(MNProfileImageView *)profileImageView;
-(void)_layoutSeparators;
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 avatarImageDecoration:(id)arg3 ;
-(void)configureForPendingApprovalsCellViewModel:(id)arg1 ;
-(void)configureForIndexPath:(id)arg1 totalRowsInSection:(long long)arg2 ;
-(void)setDisableActionButtons:(BOOL)arg1 ;
-(void)didTapAcceptRequestButton;
-(void)didTapIgnoreRequestButton;
-(void)_layoutProfileImage;
-(BOOL)disableActionButtons;
-(void)setDelegate:(id<MNJoinableGroupPendingApprovalsCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNJoinableGroupPendingApprovalsCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)_layoutLabels;
-(void)_layoutButtons;
-(void)setLeftSeparatorInset:(double)arg1 ;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
@end
