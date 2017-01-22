/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBNetworkImageView, UILabel, UIView, UIImageView, MNNearbyPlaceCellViewModel;

@interface MNNearbyPlaceCell : UITableViewCell {

	FBNetworkImageView* _thumbnailImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _separatorView;
	UIImageView* _thumbnailMaskImageView;
	MNNearbyPlaceCellViewModel* _viewModel;

}
-(id)initWithReuseIdentifier:(id)arg1 imageDownloader:(id)arg2 ;
-(void)configureCellWithViewModel:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundColor;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
