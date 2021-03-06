/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class FBImageDownloader, UIImageView, MNBadgedProfileImageView, UILabel, UIView, MNMentionTypeaheadViewCellViewModel;

@interface MNMentionTypeaheadViewCell : UITableViewCell {

	FBImageDownloader* _imageDownloader;
	UIImageView* _iconImageView;
	MNBadgedProfileImageView* _profileImageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIView* _bottomSeparatorView;
	MNMentionTypeaheadViewCellViewModel* _viewModel;

}

@property (nonatomic,copy) MNMentionTypeaheadViewCellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(CGSize)sizeThatFitsWithViewModel:(id)arg1 maxSize:(CGSize)arg2 ;
-(void)_updateProfileImageView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 imageDownloader:(id)arg3 downloaderFactory:(id)arg4 profileImagePlaceholderFactory:(id)arg5 profileImageBadgeFactory:(id)arg6 ;
-(void)_initIconImageView;
-(void)_initProfileImageViewWithDownloaderFactory:(id)arg1 profileImagePlaceholderFactory:(id)arg2 profileImageBadgeFactory:(id)arg3 ;
-(void)_initTitleLabel;
-(void)_initDescriptionLabel;
-(void)_initBottomSeparatorView;
-(void)_updateDescriptionLabel;
-(void)_updateIconImageWithImageDownloaderResponse:(id)arg1 ;
-(void)layoutSubviews;
-(MNMentionTypeaheadViewCellViewModel *)viewModel;
-(void)_updateTitleLabel;
-(void)setViewModel:(MNMentionTypeaheadViewCellViewModel *)arg1 ;
-(void)_updateIconImageView;
@end

