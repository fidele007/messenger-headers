/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBRichTextView, FBPaymentsPeerToPeerRiskThirdPartyInfoView, UIButton;

@interface FBPaymentsPeerToPeerRiskIntroductionView : UIView {

	FBRichTextView* _headingTextView;
	FBRichTextView* _descriptionTextView;
	FBPaymentsPeerToPeerRiskThirdPartyInfoView* _thirdPartyInfoView;
	UIButton* _confirmButton;
	UIButton* _learnMoreButton;

}

@property (nonatomic,readonly) UIButton * confirmButton;                //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,readonly) UIButton * learnMoreButton;              //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
-(id)initWithTitle:(id)arg1 descriptionText:(id)arg2 ;
-(void)layoutSubviews;
-(UIButton *)learnMoreButton;
-(UIButton *)confirmButton;
@end
