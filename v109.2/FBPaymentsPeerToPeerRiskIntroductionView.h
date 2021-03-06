/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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

