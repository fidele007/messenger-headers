/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNEnterPhoneViewDelegate.h>
#import <Messenger/MNCountryCodesViewControllerDelegate.h>
#import <Messenger/MNPhoneVerificationRequestSenderDelegate.h>
#import <Messenger/MNConfirmPhoneViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/MNPhoneNumberSearchPrivacyOptionFetcherDelegate.h>
#import <Messenger/MNGroupMergeViewControllerDelegate.h>
#import <Messenger/MNUserSetUpStepViewController.h>

@protocol MNUserSetUpStepCompletion;
@class MNPeopleCellFactory, MNMatchedSMSBridgeThreadFetcher, MNProfileImageViewController, MNThreadParticipantNameFormatter, MNEnterPhoneView, LPPhoneNumberMetadata, LPPhoneNumberFactory, MNPhoneVerificationRequestSender, FBUserSession, MNUserSetUpStatePersister, FBMobileConfigContextManager, LPPhoneNumber, MNConfirmPhoneViewController, FBMLoggedInUserInfoManager, MNPhoneNumberSearchPrivacyOptionFetcher, UIAlertView, NSString;

@interface MNEnterPhoneViewController : UIViewController <MNEnterPhoneViewDelegate, MNCountryCodesViewControllerDelegate, MNPhoneVerificationRequestSenderDelegate, MNConfirmPhoneViewControllerDelegate, UIAlertViewDelegate, MNPhoneNumberSearchPrivacyOptionFetcherDelegate, MNGroupMergeViewControllerDelegate, MNUserSetUpStepViewController> {

	MNPeopleCellFactory* _peopleCellFactory;
	MNMatchedSMSBridgeThreadFetcher* _matchedSMSBridgeThreadFetcher;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadParticipantNameFormatter* _nameFormatter;
	BOOL _shouldEnableSMSActivation;
	BOOL _isDismissable;
	BOOL _canGotoConfirmationScreenIfPreviouslySeen;
	BOOL _skippablePhoneEntry;
	BOOL _skippablePhoneVerification;
	id<MNUserSetUpStepCompletion> completionDelegate;
	MNEnterPhoneView* _enterPhoneView;
	LPPhoneNumberMetadata* _phoneNumberMetadata;
	LPPhoneNumberFactory* _phoneNumberFactory;
	MNPhoneVerificationRequestSender* _confirmationCodeRequest;
	FBUserSession* _session;
	MNUserSetUpStatePersister* _setUpStatePersister;
	FBMobileConfigContextManager* _mobileConfg;
	LPPhoneNumber* _phoneNumberToConfirm;
	MNConfirmPhoneViewController* _confirmPhoneViewController;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManger;
	MNPhoneNumberSearchPrivacyOptionFetcher* _phoneNumberSearchPrivacyOptionFetcher;
	UIAlertView* _enterPhoneAlert;
	UIAlertView* _searchabilityChangedAlert;

}

@property (nonatomic,retain) MNEnterPhoneView * enterPhoneView;                                                            //@synthesize enterPhoneView=_enterPhoneView - In the implementation block
@property (nonatomic,retain) LPPhoneNumberMetadata * phoneNumberMetadata;                                                  //@synthesize phoneNumberMetadata=_phoneNumberMetadata - In the implementation block
@property (nonatomic,retain) LPPhoneNumberFactory * phoneNumberFactory;                                                    //@synthesize phoneNumberFactory=_phoneNumberFactory - In the implementation block
@property (nonatomic,retain) MNPhoneVerificationRequestSender * confirmationCodeRequest;                                   //@synthesize confirmationCodeRequest=_confirmationCodeRequest - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MNUserSetUpStatePersister * setUpStatePersister;                                              //@synthesize setUpStatePersister=_setUpStatePersister - In the implementation block
@property (nonatomic,retain) FBMobileConfigContextManager * mobileConfg;                                                   //@synthesize mobileConfg=_mobileConfg - In the implementation block
@property (nonatomic,retain) LPPhoneNumber * phoneNumberToConfirm;                                                         //@synthesize phoneNumberToConfirm=_phoneNumberToConfirm - In the implementation block
@property (nonatomic,retain) MNConfirmPhoneViewController * confirmPhoneViewController;                                    //@synthesize confirmPhoneViewController=_confirmPhoneViewController - In the implementation block
@property (nonatomic,retain) FBMLoggedInUserInfoManager * loggedInUserInfoManger;                                          //@synthesize loggedInUserInfoManger=_loggedInUserInfoManger - In the implementation block
@property (nonatomic,retain) MNPhoneNumberSearchPrivacyOptionFetcher * phoneNumberSearchPrivacyOptionFetcher;              //@synthesize phoneNumberSearchPrivacyOptionFetcher=_phoneNumberSearchPrivacyOptionFetcher - In the implementation block
@property (assign,nonatomic) BOOL skippablePhoneEntry;                                                                     //@synthesize skippablePhoneEntry=_skippablePhoneEntry - In the implementation block
@property (assign,nonatomic) BOOL skippablePhoneVerification;                                                              //@synthesize skippablePhoneVerification=_skippablePhoneVerification - In the implementation block
@property (nonatomic,retain) UIAlertView * enterPhoneAlert;                                                                //@synthesize enterPhoneAlert=_enterPhoneAlert - In the implementation block
@property (nonatomic,retain) UIAlertView * searchabilityChangedAlert;                                                      //@synthesize searchabilityChangedAlert=_searchabilityChangedAlert - In the implementation block
@property (assign,nonatomic) BOOL isDismissable;                                                                           //@synthesize isDismissable=_isDismissable - In the implementation block
@property (assign,nonatomic) BOOL canGotoConfirmationScreenIfPreviouslySeen;                                               //@synthesize canGotoConfirmationScreenIfPreviouslySeen=_canGotoConfirmationScreenIfPreviouslySeen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNUserSetUpStepCompletion> completionDelegate; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(unsigned long long)preferredTransitionType;
-(MNUserSetUpStatePersister *)setUpStatePersister;
-(LPPhoneNumberFactory *)phoneNumberFactory;
-(void)setPhoneNumberFactory:(LPPhoneNumberFactory *)arg1 ;
-(LPPhoneNumberMetadata *)phoneNumberMetadata;
-(void)setPhoneNumberMetadata:(LPPhoneNumberMetadata *)arg1 ;
-(void)confirmPhoneViewControllerDidTapSkipButton:(id)arg1 ;
-(void)confirmPhoneViewController:(id)arg1 didVerifyPhoneNumber:(id)arg2 withBridgeThreadInfo:(id)arg3 ;
-(void)phoneVerificationRequestSenderDidFinish:(id)arg1 ;
-(void)phoneVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(MNPhoneVerificationRequestSender *)confirmationCodeRequest;
-(void)setConfirmationCodeRequest:(MNPhoneVerificationRequestSender *)arg1 ;
-(void)didSelectCountryCode:(id)arg1 countryName:(id)arg2 ;
-(void)enterPhoneViewDidTapPhoneTextField:(id)arg1 ;
-(void)enterPhoneViewDidTapContinueButton:(id)arg1 ;
-(void)enterPhoneViewDidTapSkipButton:(id)arg1 ;
-(void)enterPhoneViewDidTapSelectCountryButton:(id)arg1 ;
-(id)initWithUserSetUpStatePersister:(id)arg1 loggedInUserInfoManager:(id)arg2 peopleCellFactory:(id)arg3 matchedSMSBridgeThreadFetcher:(id)arg4 profileImageViewController:(id)arg5 session:(id)arg6 nameFormatter:(id)arg7 ;
-(void)setSkippablePhoneEntry:(BOOL)arg1 ;
-(void)setSkippablePhoneVerification:(BOOL)arg1 ;
-(void)setEnterPhoneAlert:(UIAlertView *)arg1 ;
-(void)setSearchabilityChangedAlert:(UIAlertView *)arg1 ;
-(void)_clearSearchPrivacyOptionFetcher;
-(void)_loadEnterPhoneView;
-(BOOL)_shouldShowConfirmationScreenOnViewAppear;
-(LPPhoneNumber *)phoneNumberToConfirm;
-(void)setPhoneNumberToConfirm:(LPPhoneNumber *)arg1 ;
-(void)_gotoConfirmPhoneAnimated:(BOOL)arg1 ;
-(id)_getPrefillPhoneInfo;
-(id)_defaultEmptyPhoneNumber;
-(void)_updateSkipButton;
-(void)setPhoneNumberSearchPrivacyOptionFetcher:(MNPhoneNumberSearchPrivacyOptionFetcher *)arg1 ;
-(void)_skipEnterPhone;
-(void)_sendConfirmationCodeRequest;
-(void)_showEnterPhoneAlert;
-(void)_phoneEntryStepEndedWithPhoneNumber:(id)arg1 isVerified:(BOOL)arg2 smsBridgeThreadInfo:(id)arg3 ;
-(id)_numberWithoutInternationalCode:(id)arg1 ;
-(id)_trimPlusFromString:(id)arg1 ;
-(void)_startSearchPrivacyOptionFetcher;
-(void)_savePhoneNumberToConfirm:(id)arg1 ;
-(void)_showSearchabilityChangedAlert;
-(BOOL)_tryToSavePhoneNumber:(id)arg1 verified:(BOOL)arg2 ;
-(BOOL)_canShowGroupMerge;
-(void)_presentGroupMergeViewControllerWithVerifiedNumber:(id)arg1 bridgeThreadInfo:(id)arg2 ;
-(void)setConfirmPhoneViewController:(MNConfirmPhoneViewController *)arg1 ;
-(void)phoneNumberSearchPrivacyOptionFetcher:(id)arg1 didFetchOption:(unsigned long long)arg2 ;
-(void)phoneNumberSearchPrivacyOptionFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(void)groupMergeViewControllerDidComplete:(id)arg1 ;
-(void)setIsDismissable:(BOOL)arg1 ;
-(BOOL)canGotoConfirmationScreenIfPreviouslySeen;
-(void)setCanGotoConfirmationScreenIfPreviouslySeen:(BOOL)arg1 ;
-(MNEnterPhoneView *)enterPhoneView;
-(void)setEnterPhoneView:(MNEnterPhoneView *)arg1 ;
-(void)setSetUpStatePersister:(MNUserSetUpStatePersister *)arg1 ;
-(FBMobileConfigContextManager *)mobileConfg;
-(void)setMobileConfg:(FBMobileConfigContextManager *)arg1 ;
-(MNConfirmPhoneViewController *)confirmPhoneViewController;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManger;
-(void)setLoggedInUserInfoManger:(FBMLoggedInUserInfoManager *)arg1 ;
-(MNPhoneNumberSearchPrivacyOptionFetcher *)phoneNumberSearchPrivacyOptionFetcher;
-(BOOL)skippablePhoneEntry;
-(BOOL)skippablePhoneVerification;
-(UIAlertView *)enterPhoneAlert;
-(UIAlertView *)searchabilityChangedAlert;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isDismissable;
-(FBUserSession *)session;
-(id<MNUserSetUpStepCompletion>)completionDelegate;
-(void)setCompletionDelegate:(id<MNUserSetUpStepCompletion>)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
@end

