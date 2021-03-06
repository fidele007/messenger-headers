/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Messenger/FBPaymentsViewModelConfigurable.h>

@class FBNetworkImageView, CAShapeLayer, UILabel, FBPaymentsHistoryTableViewCellViewModel, NSString;

@interface FBPaymentsTransactionTableViewCell : UITableViewCell <FBPaymentsViewModelConfigurable> {

	FBNetworkImageView* _networkImageView;
	CAShapeLayer* _dashedDotLayer;
	UILabel* _amountLabel;
	BOOL _shouldUseRoundImage;
	FBPaymentsHistoryTableViewCellViewModel* _viewModel;

}

@property (assign,nonatomic) BOOL shouldUseRoundImage;                                       //@synthesize shouldUseRoundImage=_shouldUseRoundImage - In the implementation block
@property (nonatomic,copy) FBPaymentsHistoryTableViewCellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureWithViewModel;
-(void)_configureWithEmptyViewModel;
-(void)_configureImageViewWithUIImage:(id)arg1 ;
-(void)_configureImageViewWithImageURL:(id)arg1 ;
-(id)initWithRuseIdentifier:(id)arg1 imageDownloader:(id)arg2 ;
-(BOOL)shouldUseRoundImage;
-(void)setShouldUseRoundImage:(BOOL)arg1 ;
-(void)layoutSubviews;
-(FBPaymentsHistoryTableViewCellViewModel *)viewModel;
-(void)setViewModel:(FBPaymentsHistoryTableViewCellViewModel *)arg1 ;
@end

