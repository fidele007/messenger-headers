/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNTransactionInvoiceXMAHandling;
@class FBUserSession, MNTransactionInvoiceFooterView, MNInvoiceSingleProductRowView, UITapGestureRecognizer, MNTransactionInvoiceViewModel, NSString;

@interface MNTransactionInvoiceView : UIView <MNAttachmentView> {

	FBUserSession* _session;
	MNTransactionInvoiceFooterView* _footerView;
	MNInvoiceSingleProductRowView* _singleProductView;
	id<MNTransactionInvoiceXMAHandling> _xmaHandler;
	UITapGestureRecognizer* _tapGesture;
	MNTransactionInvoiceViewModel* _viewModel;

}

@property (nonatomic,copy) MNTransactionInvoiceViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_didSelectMessage;
-(id)initWithSession:(id)arg1 xmaHandler:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(MNTransactionInvoiceViewModel *)viewModel;
-(void)setViewModel:(MNTransactionInvoiceViewModel *)arg1 ;
@end

