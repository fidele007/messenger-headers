/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPhoneNumberTextFieldControllerDelegate.h>
#import <Messenger/MNRegistrationPhoneNumberViewDelegate.h>
#import <Messenger/MNCountryCodesViewControllerDelegate.h>
#import <Messenger/MNRegistrationLegalTextViewDelegate.h>
#import <Messenger/MNRegistrationPhoneVerificationRequestSenderDelegate.h>

@protocol MNRegistrationPhoneNumberViewControllerDelegate;
@class MNRegistrationPhoneNumberView, MNStackedContainerController, MNPhoneNumberTextFieldController, FBLocaleMap, LPPhoneNumberFactory, MNRegistrationPhoneVerificationRequestSender, FBAnalytics, NSString;

@interface MNRegistrationPhoneNumberViewController : UIViewController <MNPhoneNumberTextFieldControllerDelegate, MNRegistrationPhoneNumberViewDelegate, MNCountryCodesViewControllerDelegate, MNRegistrationLegalTextViewDelegate, MNRegistrationPhoneVerificationRequestSenderDelegate> {

	MNRegistrationPhoneNumberView* _registrationPhoneNumberView;
	MNStackedContainerController* _stackedContainerController;
	MNPhoneNumberTextFieldController* _phoneNumberTextFieldController;
	FBLocaleMap* _localeMap;
	LPPhoneNumberFactory* _phoneNumberFactory;
	MNRegistrationPhoneVerificationRequestSender* _phoneVerificationRequestSender;
	FBAnalytics* _analytics;
	id<MNRegistrationPhoneNumberViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRegistrationPhoneNumberViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_continueButtonPressed;
-(void)phoneNumberTextFieldController:(id)arg1 didChangeCountryTo:(id)arg2 ;
-(void)didSelectCountryCode:(id)arg1 countryName:(id)arg2 ;
-(void)registrationPhoneVerificationRequestSenderDidFinish:(id)arg1 ;
-(void)registrationPhoneVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithLocaleMap:(id)arg1 analytics:(id)arg2 ;
-(void)registrationLegalTextView:(id)arg1 didTapPrivacyPoliyLink:(id)arg2 ;
-(void)registrationLegalTextView:(id)arg1 didTapTermsOfServiceLink:(id)arg2 ;
-(void)registrationPhoneNumberViewDidTapCountryCodeButton:(id)arg1 ;
-(void)registrationPhoneNumberViewDidPressKeyboardReturnButton:(id)arg1 ;
-(void)registrationPhoneNumberViewDidTapLoginWithFacebookButton:(id)arg1 ;
-(void)_setLegalTextViewURLs;
-(void)setDelegate:(id<MNRegistrationPhoneNumberViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRegistrationPhoneNumberViewControllerDelegate>)delegate;
-(void)_openURL:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

