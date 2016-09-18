/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNConfirmPhoneViewDelegate.h>
#import <Messenger/MNPhoneVerificationRequestSenderDelegate.h>
#import <Messenger/MNPhoneVerificationConfirmationSenderDelegate.h>

@protocol MNConfirmPhoneViewControllerDelegate;
@class MNMatchedSMSBridgeThreadFetcher, MNPhoneVerificationCustomContent, MNConfirmPhoneView, MNPhoneVerificationConfirmationSender, MNPhoneVerificationRequestSender, MNUserSetUpStatePersister, LPPhoneNumber, FBUserSession, MNPhoneEntryStyleExperimentContext, NSString;

@interface MNConfirmPhoneViewController : UIViewController <MNConfirmPhoneViewDelegate, MNPhoneVerificationRequestSenderDelegate, MNPhoneVerificationConfirmationSenderDelegate> {

	MNMatchedSMSBridgeThreadFetcher* _matchedSMSBridgeThreadFetcher;
	BOOL _skippable;
	BOOL _useReconfirmationFlowLogging;
	id<MNConfirmPhoneViewControllerDelegate> _delegate;
	MNPhoneVerificationCustomContent* _customContent;
	MNConfirmPhoneView* _confirmPhoneView;
	MNPhoneVerificationConfirmationSender* _confirmationCodeSender;
	MNPhoneVerificationRequestSender* _confirmationCodeRequest;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	LPPhoneNumber* _phoneNumber;
	FBUserSession* _session;
	MNPhoneEntryStyleExperimentContext* _phoneEntryStyleExperimentContext;

}

@property (nonatomic,retain) MNPhoneVerificationCustomContent * customContent;                                   //@synthesize customContent=_customContent - In the implementation block
@property (nonatomic,retain) MNConfirmPhoneView * confirmPhoneView;                                              //@synthesize confirmPhoneView=_confirmPhoneView - In the implementation block
@property (nonatomic,retain) MNPhoneVerificationConfirmationSender * confirmationCodeSender;                     //@synthesize confirmationCodeSender=_confirmationCodeSender - In the implementation block
@property (nonatomic,retain) MNPhoneVerificationRequestSender * confirmationCodeRequest;                         //@synthesize confirmationCodeRequest=_confirmationCodeRequest - In the implementation block
@property (nonatomic,retain) MNUserSetUpStatePersister * userSetUpStatePersister;                                //@synthesize userSetUpStatePersister=_userSetUpStatePersister - In the implementation block
@property (nonatomic,retain) LPPhoneNumber * phoneNumber;                                                        //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                            //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MNPhoneEntryStyleExperimentContext * phoneEntryStyleExperimentContext;              //@synthesize phoneEntryStyleExperimentContext=_phoneEntryStyleExperimentContext - In the implementation block
@property (assign,nonatomic) BOOL useReconfirmationFlowLogging;                                                  //@synthesize useReconfirmationFlowLogging=_useReconfirmationFlowLogging - In the implementation block
@property (assign,nonatomic,__weak) id<MNConfirmPhoneViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL skippable;                                                                     //@synthesize skippable=_skippable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showAlertViewForError:(id)arg1 ;
+(void)showSMSSentAlertWithNumber:(id)arg1 ;
-(id)analyticsModule;
-(void)changePhoneNumberButtonTapped;
-(void)continueButtonTapped;
-(void)skipThisStepButtonTapped;
-(void)resendCodeButtonTapped;
-(void)_logAnalyticsIfInvalidPhoneNumber:(id)arg1 ;
-(void)_sendConfirmPhoneRequest;
-(void)_completePhoneVerification:(id)arg1 ;
-(void)phoneVerificationRequestSenderDidFinish:(id)arg1 ;
-(void)phoneVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 userSetUpStatePersister:(id)arg2 phoneNumber:(id)arg3 customContent:(id)arg4 phoneEntryStyleExperimentContext:(id)arg5 useReconfirmationFlowLogging:(BOOL)arg6 matchedSMSBridgeThreadFetcher:(id)arg7 ;
-(void)setSkippable:(BOOL)arg1 ;
-(BOOL)skippable;
-(MNConfirmPhoneView *)confirmPhoneView;
-(void)setConfirmPhoneView:(MNConfirmPhoneView *)arg1 ;
-(MNPhoneVerificationConfirmationSender *)confirmationCodeSender;
-(void)setConfirmationCodeSender:(MNPhoneVerificationConfirmationSender *)arg1 ;
-(MNPhoneVerificationRequestSender *)confirmationCodeRequest;
-(void)setConfirmationCodeRequest:(MNPhoneVerificationRequestSender *)arg1 ;
-(void)setUserSetUpStatePersister:(MNUserSetUpStatePersister *)arg1 ;
-(MNPhoneEntryStyleExperimentContext *)phoneEntryStyleExperimentContext;
-(void)setPhoneEntryStyleExperimentContext:(MNPhoneEntryStyleExperimentContext *)arg1 ;
-(BOOL)useReconfirmationFlowLogging;
-(MNPhoneVerificationCustomContent *)customContent;
-(void)setCustomContent:(MNPhoneVerificationCustomContent *)arg1 ;
-(void)setUseReconfirmationFlowLogging:(BOOL)arg1 ;
-(void)phoneVerificationConfirmationSenderDidConfirm:(id)arg1 ;
-(void)phoneVerificationConfirmationSender:(id)arg1 didFailWithError:(id)arg2 ;
-(MNUserSetUpStatePersister *)userSetUpStatePersister;
-(void)setDelegate:(id<MNConfirmPhoneViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNConfirmPhoneViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(LPPhoneNumber *)phoneNumber;
-(void)setPhoneNumber:(LPPhoneNumber *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
