/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNRegistrationPhoneVerificationRequestSenderDelegate.h>
#import <Messenger/MNReactivationPhoneConfirmationPhoneInputViewDelegate.h>
#import <Messenger/MNPhoneNumberTextFieldControllerDelegate.h>
#import <FBSharedFramework/FBKeyboardObserverDelegate.h>

@protocol MNReactivationPhoneConfirmationPhoneInputViewControllerDelegate;
@class MNPhoneNumberTextFieldController, MNRegistrationPhoneVerificationRequestSender, MNReactivationPhoneConfirmationPhoneInputView, FBKeyboardObserver, FBMUserPhoneInfo, NSString;

@interface MNReactivationPhoneConfirmationPhoneInputViewController : UIViewController <MNRegistrationPhoneVerificationRequestSenderDelegate, MNReactivationPhoneConfirmationPhoneInputViewDelegate, MNPhoneNumberTextFieldControllerDelegate, FBKeyboardObserverDelegate> {

	unsigned long long _phoneReconfirmationOption;
	MNPhoneNumberTextFieldController* _phoneNumberTextFieldController;
	MNRegistrationPhoneVerificationRequestSender* _phoneVerificationRequestSender;
	MNReactivationPhoneConfirmationPhoneInputView* _phoneReconfirmationPhoneInputView;
	FBKeyboardObserver* _keyboardObserver;
	FBMUserPhoneInfo* _phoneInfo;
	id<MNReactivationPhoneConfirmationPhoneInputViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNReactivationPhoneConfirmationPhoneInputViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_continueButtonPressed;
-(void)phoneNumberTextFieldController:(id)arg1 didChangeCountryTo:(id)arg2 ;
-(id)initWithPhoneReconfirmationOption:(unsigned long long)arg1 phoneInfo:(id)arg2 ;
-(void)_setPhoneNumberTextFieldIfNeccessary;
-(void)_showIncorrectPhoneNumberAlertView;
-(void)_startPhoneVerificationRequest;
-(void)phoneReconfirmationPhoneInputViewDidTapContinue:(id)arg1 ;
-(void)registrationPhoneVerificationRequestSenderDidFinish:(id)arg1 ;
-(void)registrationPhoneVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setDelegate:(id<MNReactivationPhoneConfirmationPhoneInputViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNReactivationPhoneConfirmationPhoneInputViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_logEvent:(id)arg1 ;
@end

