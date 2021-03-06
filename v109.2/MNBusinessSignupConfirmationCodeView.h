/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNHeaderView, MNBusinessSignupConfirmationCodeStatusView, UIScrollView, MNStackedContainerView, MNButton, MNBusinessSignupConfirmationCodeChangePhoneNumberTextView, MNBusinessSignupConfirmationCodeFormView;

@interface MNBusinessSignupConfirmationCodeView : UIView {

	MNHeaderView* _headerView;
	MNBusinessSignupConfirmationCodeStatusView* _statusView;
	UIScrollView* _scrollView;
	MNStackedContainerView* _stackedContainerView;
	MNButton* _resendCodeButton;
	MNBusinessSignupConfirmationCodeChangePhoneNumberTextView* _changePhoneNumberTextView;
	MNBusinessSignupConfirmationCodeFormView* _confirmationCodeFormView;

}

@property (nonatomic,readonly) MNStackedContainerView * stackedContainerView;                                                      //@synthesize stackedContainerView=_stackedContainerView - In the implementation block
@property (nonatomic,readonly) MNButton * resendCodeButton;                                                                        //@synthesize resendCodeButton=_resendCodeButton - In the implementation block
@property (nonatomic,readonly) MNBusinessSignupConfirmationCodeChangePhoneNumberTextView * changePhoneNumberTextView;              //@synthesize changePhoneNumberTextView=_changePhoneNumberTextView - In the implementation block
@property (nonatomic,readonly) MNBusinessSignupConfirmationCodeFormView * confirmationCodeFormView;                                //@synthesize confirmationCodeFormView=_confirmationCodeFormView - In the implementation block
-(MNStackedContainerView *)stackedContainerView;
-(MNBusinessSignupConfirmationCodeFormView *)confirmationCodeFormView;
-(MNButton *)resendCodeButton;
-(id)confirmationCodeCharacterTextFields;
-(void)updateStatusViewWithStatusState:(unsigned long long)arg1 ;
-(void)resetInput;
-(MNBusinessSignupConfirmationCodeChangePhoneNumberTextView *)changePhoneNumberTextView;
-(void)displayKeyboard;
-(id)initWithFrame:(CGRect)arg1 phoneNumber:(id)arg2 ;
-(void)layoutSubviews;
-(void)hideKeyboard;
@end

