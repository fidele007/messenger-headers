/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, UIButton, MNRideServiceInputViewInfoTableCellViewModel;

@interface MNRideServiceInputViewInfoTableCell : UITableViewCell {

	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIView* _separatorView;
	UIButton* _deleteButton;
	UIImageView* _closeIconView;
	MNRideServiceInputViewInfoTableCellViewModel* _viewModel;

}

@property (nonatomic,copy) MNRideServiceInputViewInfoTableCellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(void)_initDeleteButtonAndImage;
-(void)_didTapDeleteButton;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(MNRideServiceInputViewInfoTableCellViewModel *)viewModel;
-(void)setViewModel:(MNRideServiceInputViewInfoTableCellViewModel *)arg1 ;
@end

