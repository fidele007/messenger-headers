/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNHeaderView, MNRegistrationConfirmationCodeStatusView, MNStackedContainerView, MNButton, MNRegistrationConfirmationCodeChangePhoneNumberTextView, MNConfirmationCodeFormView;

@interface MNRegistrationConfirmationCodeView : UIView {

	MNHeaderView* _headerView;
	MNRegistrationConfirmationCodeStatusView* _statusView;
	MNStackedContainerView* _stackedContainerView;
	MNButton* _resendCodeButton;
	MNRegistrationConfirmationCodeChangePhoneNumberTextView* _changePhoneNumberTextView;
	MNConfirmationCodeFormView* _confirmationCodeFormView;

}

@property (nonatomic,readonly) MNStackedContainerView * stackedContainerView;                                                    //@synthesize stackedContainerView=_stackedContainerView - In the implementation block
@property (nonatomic,readonly) MNButton * resendCodeButton;                                                                      //@synthesize resendCodeButton=_resendCodeButton - In the implementation block
@property (nonatomic,readonly) MNRegistrationConfirmationCodeChangePhoneNumberTextView * changePhoneNumberTextView;              //@synthesize changePhoneNumberTextView=_changePhoneNumberTextView - In the implementation block
@property (nonatomic,readonly) MNConfirmationCodeFormView * confirmationCodeFormView;                                            //@synthesize confirmationCodeFormView=_confirmationCodeFormView - In the implementation block
-(MNStackedContainerView *)stackedContainerView;
-(MNConfirmationCodeFormView *)confirmationCodeFormView;
-(MNButton *)resendCodeButton;
-(id)initWithFrame:(CGRect)arg1 phoneNumber:(id)arg2 shouldShowChangePhoneNumberButton:(BOOL)arg3 ;
-(id)confirmationCodeCharacterTextFields;
-(void)displayKeyboard;
-(void)updateStatusViewWithStatusState:(unsigned long long)arg1 ;
-(void)resetInput;
-(MNRegistrationConfirmationCodeChangePhoneNumberTextView *)changePhoneNumberTextView;
-(void)layoutSubviews;
-(void)hideKeyboard;
@end

