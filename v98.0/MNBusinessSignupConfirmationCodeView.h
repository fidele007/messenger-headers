/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(MNButton *)resendCodeButton;
-(id)confirmationCodeCharacterTextFields;
-(void)displayKeyboard;
-(void)updateStatusViewWithStatusState:(unsigned long long)arg1 ;
-(void)resetInput;
-(MNStackedContainerView *)stackedContainerView;
-(MNBusinessSignupConfirmationCodeChangePhoneNumberTextView *)changePhoneNumberTextView;
-(MNBusinessSignupConfirmationCodeFormView *)confirmationCodeFormView;
-(id)initWithFrame:(CGRect)arg1 phoneNumber:(id)arg2 ;
-(void)layoutSubviews;
-(void)hideKeyboard;
@end

