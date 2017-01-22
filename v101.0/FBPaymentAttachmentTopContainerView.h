/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPaymentsView.h>

@class FBPaymentAttachmentHeaderView, FBPaymentAttachmentAmountAndSubtitleView, FBPaymentsHorizontalSeparatorView, FBPaymentAttachmentStatusView, MNPaymentsPeerToPeerAttachmentViewModel, NSString;

@interface FBPaymentAttachmentTopContainerView : UIView <MNPaymentsView> {

	FBPaymentAttachmentHeaderView* _headerView;
	FBPaymentAttachmentAmountAndSubtitleView* _amountAndSubtitleView;
	FBPaymentsHorizontalSeparatorView* _headerAmountAndSubtitleSeperatorView;
	FBPaymentAttachmentStatusView* _statusView;
	FBPaymentsHorizontalSeparatorView* _subtitleStatusSeperatorView;
	MNPaymentsPeerToPeerAttachmentViewModel* _viewModel;

}

@property (nonatomic,copy) MNPaymentsPeerToPeerAttachmentViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeWithViewModel:(id)arg1 forWidth:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)_updateHeaderView;
-(void)_updateAmountAndSubtitleView;
-(void)_updateStatusView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNPaymentsPeerToPeerAttachmentViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsPeerToPeerAttachmentViewModel *)arg1 ;
@end
