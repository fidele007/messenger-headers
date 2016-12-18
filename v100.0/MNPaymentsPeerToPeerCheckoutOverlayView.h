/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPaymentsBannerViewDelegate.h>
#import <Messenger/FBPaymentsCheckoutFlowOverlayView.h>

@protocol FBPaymentsCheckoutFlowOverlayViewDelegate;
@class MNPaymentsBannerView, MNPaymentsBannerViewModel, NSString;

@interface MNPaymentsPeerToPeerCheckoutOverlayView : UIView <MNPaymentsBannerViewDelegate, FBPaymentsCheckoutFlowOverlayView> {

	MNPaymentsBannerView* _bannerView;
	MNPaymentsBannerViewModel* _viewModel;
	id<FBPaymentsCheckoutFlowOverlayViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel;                                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutFlowOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)bannerViewDidTapDismissButton:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsCheckoutFlowOverlayViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(id<FBPaymentsCheckoutFlowOverlayViewDelegate>)delegate;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end
