/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>

@class FBPaymentsSelectPaymentMethodsPaymentMethodCellViewModel, FBNetworkImageView, NSString;

@interface FBPaymentsSelectPaymentMethodsPaymentMethodCell : UITableViewCell <FBPaymentsEdgeInsetsConfigurable> {

	FBPaymentsSelectPaymentMethodsPaymentMethodCellViewModel* _viewModel;
	FBNetworkImageView* _networkImageView;
	UIEdgeInsets _edgeInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;               //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 imageDownloader:(id)arg2 ;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setViewModel:(id)arg1 ;
@end

