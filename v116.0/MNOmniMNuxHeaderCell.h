/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, UIView, MNOmniMNuxHeaderCellViewModel;

@interface MNOmniMNuxHeaderCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIImageView* _profileImageView;
	UIImageView* _coverImageView;
	UIView* _separatorView;
	MNOmniMNuxHeaderCellViewModel* _viewModel;

}

@property (nonatomic,copy) MNOmniMNuxHeaderCellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(double)cellHeightForViewModel:(id)arg1 boundingSize:(CGSize)arg2 ;
-(void)setupProfileImage:(id)arg1 ;
-(void)setupCoverImage:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(MNOmniMNuxHeaderCellViewModel *)viewModel;
-(void)setViewModel:(MNOmniMNuxHeaderCellViewModel *)arg1 ;
@end

