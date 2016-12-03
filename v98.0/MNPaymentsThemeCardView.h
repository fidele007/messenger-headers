/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPaymentsPeerToPeerCurrencyAndAmountViewDelegate.h>
#import <Messenger/MNPaymentsView.h>

@protocol MNPaymentsThemeCardViewDelegate;
@class FBNetworkImageView, FBImageDownloader, MNPaymentsPeerToPeerCurrencyAndAmountView, FBRichTextView, UIButton, MNPaymentsThemeCardViewModel, NSString;

@interface MNPaymentsThemeCardView : UIView <MNPaymentsPeerToPeerCurrencyAndAmountViewDelegate, MNPaymentsView> {

	FBNetworkImageView* _backgroundImageView;
	FBImageDownloader* _imageDownloader;
	MNPaymentsPeerToPeerCurrencyAndAmountView* _amountView;
	FBRichTextView* _memoRichTextView;
	UIButton* _bottomActionButton;
	UIButton* _closeActionButton;
	MNPaymentsThemeCardViewModel* _viewModel;
	id<MNPaymentsThemeCardViewDelegate> _delegate;

}

@property (nonatomic,copy) MNPaymentsThemeCardViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsThemeCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)didBottomActionButtonTapped:(id)arg1 ;
-(id)currencyAndAmountView:(id)arg1 didInsertText:(id)arg2 ;
-(id)currencyAndAmountViewDidDeleteBackward:(id)arg1 ;
-(BOOL)canBecomeFirstResponderForCurrencyAndAmountView:(id)arg1 ;
-(void)setDelegate:(id<MNPaymentsThemeCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNPaymentsThemeCardViewDelegate>)delegate;
-(MNPaymentsThemeCardViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsThemeCardViewModel *)arg1 ;
@end

