/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MNPhotoMaskView, MNProfileImageView, UILabel;

@interface MNGroupMergeCell : UITableViewCell {

	MNPhotoMaskView* _profileImageMaskImageView;
	MNProfileImageView* _profileImageView;
	UILabel* _groupTitleLabel;
	UILabel* _groupSubtitleLabel;

}

@property (nonatomic,__weak,readonly) MNProfileImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * groupTitleLabel;                          //@synthesize groupTitleLabel=_groupTitleLabel - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * groupSubtitleLabel;                       //@synthesize groupSubtitleLabel=_groupSubtitleLabel - In the implementation block
-(MNProfileImageView *)profileImageView;
-(UILabel *)groupTitleLabel;
-(UILabel *)groupSubtitleLabel;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setup;
@end

