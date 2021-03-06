/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

