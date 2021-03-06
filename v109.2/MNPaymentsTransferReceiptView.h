/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol MNPaymentsView;
@class MNPaymentsActorsHeaderView, FBPaymentsPeerToPeerTransferReceiptBodyView, MNPaymentsTransferReceiptPaymentIdView, MNPaymentsHorizontalActorsListView, UIView;

@interface MNPaymentsTransferReceiptView : UIScrollView {

	MNPaymentsActorsHeaderView* _headerView;
	FBPaymentsPeerToPeerTransferReceiptBodyView* _bodyView;
	MNPaymentsTransferReceiptPaymentIdView* _paymentIdView;
	MNPaymentsHorizontalActorsListView* _actorsListView;
	UIView* _topExtraInfoSeperatorView;
	UIView*<MNPaymentsView> _extraInfoView;

}

@property (nonatomic,retain) UIView*<MNPaymentsView> extraInfoView;              //@synthesize extraInfoView=_extraInfoView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 receiptHeaderView:(id)arg2 receiptBodyView:(id)arg3 extraInfoView:(id)arg4 paymentIdView:(id)arg5 actorsListView:(id)arg6 ;
-(void)presentWithHeaderViewModel:(id)arg1 bodyViewModel:(id)arg2 extraInfoViewModel:(id)arg3 paymentIdViewModel:(id)arg4 actors:(id)arg5 ;
-(void)setExtraInfoView:(UIView*<MNPaymentsView>)arg1 ;
-(UIView*<MNPaymentsView>)extraInfoView;
-(void)layoutSubviews;
-(void)_updateContentSize;
@end

