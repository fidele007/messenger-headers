/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNRegistrationPhoneVerificationRequestSenderDelegate.h>
#import <Messenger/MNReactivationPhoneConfirmationPhoneInputViewDelegate.h>
#import <Messenger/MNPhoneNumberTextFieldControllerDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

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
-(void)_logEvent:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_continueButtonPressed;
-(void)phoneNumberTextFieldController:(id)arg1 didChangeCountryTo:(id)arg2 ;
-(id)initWithPhoneReconfirmationOption:(unsigned long long)arg1 phoneInfo:(id)arg2 ;
-(void)_setPhoneNumberTextFieldIfNeccessary;
-(void)_showIncorrectPhoneNumberAlertView;
-(void)_startPhoneVerificationRequest;
-(void)registrationPhoneVerificationRequestSenderDidFinish:(id)arg1 ;
-(void)registrationPhoneVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)phoneReconfirmationPhoneInputViewDidTapContinue:(id)arg1 ;
-(void)setDelegate:(id<MNReactivationPhoneConfirmationPhoneInputViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNReactivationPhoneConfirmationPhoneInputViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
