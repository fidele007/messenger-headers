/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBProfServicesBookingDataModel, UILabel;

@interface MNBookingRequestsOverviewCell : UITableViewCell {

	FBProfServicesBookingDataModel* _viewModel;
	UILabel* _dateLabel;
	UILabel* _monthLabel;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _statusLabel;

}
-(void)configureWithViewModel:(id)arg1 cellType:(unsigned long long)arg2 ;
-(void)_configLabelsWithViewModel:(id)arg1 cellType:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

