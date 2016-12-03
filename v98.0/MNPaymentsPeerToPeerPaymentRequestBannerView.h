/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, FBPaymentsHorizontalSeparatorView, PABlurView, MNPaymentsPeerToPeerPaymentRequestBannerActionHandler;

@interface MNPaymentsPeerToPeerPaymentRequestBannerView : UIView {

	UIButton* _requestButton;
	FBPaymentsHorizontalSeparatorView* _separatorView;
	PABlurView* _backgroundBar;
	MNPaymentsPeerToPeerPaymentRequestBannerActionHandler* _actionHandler;

}

@property (assign,nonatomic,__weak) MNPaymentsPeerToPeerPaymentRequestBannerActionHandler * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
-(void)didTapActionButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(void)tintColorDidChange;
-(MNPaymentsPeerToPeerPaymentRequestBannerActionHandler *)actionHandler;
-(void)setActionHandler:(MNPaymentsPeerToPeerPaymentRequestBannerActionHandler *)arg1 ;
@end

