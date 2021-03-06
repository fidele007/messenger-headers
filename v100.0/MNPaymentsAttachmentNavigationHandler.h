/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/FBPaymentsPeerToPeerCardFlowControllerDelegate.h>
#import <Messenger/FBPaymentsCheckoutOtherButtonHandlingDelegate.h>
#import <Messenger/FBPaymentAttachmentViewDelegate.h>

@protocol FBPaymentsConnectionStatusProviding, MNNavigationPluginService;
@class FBUserSession, MNPaymentsRecipientNuxEventCoordinator, NSString, FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPaymentMethodsCoordinator, FBPaymentsPINController, FBPaymentsPasscodeWorkflowController, FBPaymentsPasscodeWorkflowLogger, FBPaymentsPeerToPeerRiskVerificationController, FBPaymentsTouchIDController, FBPaymentsPeerToPeerCardFlowController, MNPaymentsFlowSessionController, MNPaymentsPeerToPeerDeclineRequestActionButtonHandler, MNPaymentsDefaultCardManager, FBPaymentsCardViewControllerLogger;

@interface MNPaymentsAttachmentNavigationHandler : NSObject <FBPaymentsNavigationDelegate, FBPaymentsPeerToPeerCardFlowControllerDelegate, FBPaymentsCheckoutOtherButtonHandlingDelegate, FBPaymentAttachmentViewDelegate> {

	FBUserSession* _session;
	MNPaymentsRecipientNuxEventCoordinator* _eventCoordinator;
	NSString* _currentPaymentFBID;
	FBPaymentsPeerToPeerNavigationCoordinator* _navigationCoordinator;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodCoordinator;
	FBPaymentsPINController* _paymentPinController;
	FBPaymentsPasscodeWorkflowController* _passcodeWorkflowController;
	FBPaymentsPasscodeWorkflowLogger* _passcodeWorkflowLogger;
	FBPaymentsPeerToPeerRiskVerificationController* _riskVerificationController;
	FBPaymentsTouchIDController* _touchIDController;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	FBPaymentsPeerToPeerCardFlowController* _cardFlowController;
	id<MNNavigationPluginService> _navigationService;
	MNPaymentsFlowSessionController* _flowSessionController;
	MNPaymentsPeerToPeerDeclineRequestActionButtonHandler* _declineRequestHandler;
	MNPaymentsDefaultCardManager* _defaultCardManager;
	FBPaymentsCardViewControllerLogger* _cardViewLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_openWebViewWithURL:(id)arg1 ;
-(id)newNavigationController;
-(void)cardFlowController:(id)arg1 didCancelCardFlowWithError:(id)arg2 forAnalyticsUUID:(id)arg3 ;
-(void)cardFlowController:(id)arg1 didAddCard:(id)arg2 forAnalyticsUUID:(id)arg3 ;
-(void)cardFlowController:(id)arg1 didUpdateCard:(id)arg2 ;
-(id)initWithSession:(id)arg1 connectionStatusProvider:(id)arg2 attachmentEventCoordinator:(id)arg3 navigationCoordinator:(id)arg4 paymentMethodCoordinator:(id)arg5 paymentPinController:(id)arg6 riskVerificationController:(id)arg7 touchIDController:(id)arg8 cardFlowController:(id)arg9 navigationService:(id)arg10 flowSessionController:(id)arg11 defaultCardManager:(id)arg12 ;
-(void)paymentAttachmentViewDidTapAction:(id)arg1 ;
-(void)paymentAttachmentViewDidTapOtherButton:(id)arg1 ;
-(void)paymentAttachmentViewDidTap:(id)arg1 ;
-(void)_enterCheckoutFlowWithViewModel:(id)arg1 ;
-(void)_showReceiptForAttachmentViewModel:(id)arg1 ;
-(void)_showFullScreenThemeCardForAttachmentViewModel:(id)arg1 ;
-(void)_handlePaymentAttachmentAction:(id)arg1 ;
-(void)_addNewCardWithCurrentPaymentFBID:(id)arg1 ;
-(void)_handlePrimaryActionForRiskVerificationWithViewModel:(id)arg1 ;
-(void)_showPushFailureActionSheetWithViewModel:(id)arg1 ;
-(void)_setDefaultCardWithConfirmationAlertView:(id)arg1 transferFBID:(id)arg2 ;
-(void)_postAddingCard;
-(void)_goToSettingsPage;
-(void)_enterAddNewCardFlowWithFlowId:(id)arg1 ;
-(id)_createPrimaryAction;
-(void)paymentsCheckoutOtherButtonActionHandler:(id)arg1 didFinishHandlingActionWithObjectFBID:(id)arg2 ;
-(void)paymentsCheckoutOtherButtonActionHandler:(id)arg1 didFailHandlingActionWithObjectFBID:(id)arg2 ;
-(void)paymentsCheckoutOtherButtonActionHandler:(id)arg1 willHandleActionWithObjectFBID:(id)arg2 ;
-(id)viewControllerForPresenting;
@end

