/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBRichTextView, FBPaymentsFormTextFieldView;

@interface FBPaymentsPeerToPeerRiskCVVBodyView : UIView {

	UIView* _separatorView;
	FBRichTextView* _cardNumbersLabelView;
	FBRichTextView* _cardNumberTextView;
	FBRichTextView* _cvvLabelView;
	FBPaymentsFormTextFieldView* _cvvInputView;

}

@property (nonatomic,readonly) FBPaymentsFormTextFieldView * cvvInputView;              //@synthesize cvvInputView=_cvvInputView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 cardLastFourDigits:(id)arg2 ;
-(FBPaymentsFormTextFieldView *)cvvInputView;
-(void)layoutSubviews;
@end

