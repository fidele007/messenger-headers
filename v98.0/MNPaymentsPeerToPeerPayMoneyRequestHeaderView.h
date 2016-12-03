/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsViewModelConfigurable.h>

@class MNPaymentsActorProfileView, MNPaymentsTransferReceiptItemView, FBPaymentsHorizontalSeparatorView, MNPaymentsPeerToPeerPayMoneyRequestHeaderViewModel, NSString;

@interface MNPaymentsPeerToPeerPayMoneyRequestHeaderView : UIView <FBPaymentsViewModelConfigurable> {

	MNPaymentsActorProfileView* _receiverView;
	MNPaymentsTransferReceiptItemView* _itemView;
	FBPaymentsHorizontalSeparatorView* _separatorView;
	MNPaymentsPeerToPeerPayMoneyRequestHeaderViewModel* _viewModel;

}

@property (nonatomic,copy) MNPaymentsPeerToPeerPayMoneyRequestHeaderViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageDownloader:(id)arg1 profileImageDownloader:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNPaymentsPeerToPeerPayMoneyRequestHeaderViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsPeerToPeerPayMoneyRequestHeaderViewModel *)arg1 ;
@end

