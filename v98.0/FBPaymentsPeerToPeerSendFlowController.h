/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/MNPaymentsSendMoneyViewControllerDelegate.h>
#import <Messenger/FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate.h>
#import <Messenger/MNPaymentsFullScreenIntroductionViewControllerDelegate.h>

@protocol FBPaymentsConnectionStatusProviding, MNSoundPluginService, FBPaymentsNavigationDelegate;
@class FBUserSession, FBPaymentsPeerToPeerFetchController, FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPINController, FBPaymentsPasscodeWorkflowController, FBPaymentsPasscodeWorkflowLogger, FBPaymentsTouchIDController, FBPaymentsPaymentMethodsCoordinator, MNPaymentsThemeCoordinator, FBPaymentsPeerToPeerFeatureGatingController, FBPaymentsPeerToPeerCardFlowController, MNPaymentsExtensibleFlowMap, MNPaymentsFlowSessionController, FBPaymentsPaymentProcessingLock, FBLazyCreator, NSMutableDictionary, MNUserStore, FBDelayer, NSString;

@interface FBPaymentsPeerToPeerSendFlowController : NSObject <FBPaymentsNavigationDelegate, MNPaymentsSendMoneyViewControllerDelegate, FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate, MNPaymentsFullScreenIntroductionViewControllerDelegate> {

	FBUserSession* _session;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	FBPaymentsPeerToPeerNavigationCoordinator* _peerToPeerNavigationCoordinator;
	FBPaymentsPINController* _paymentPinController;
	FBPaymentsPasscodeWorkflowController* _passcodeWorkflowController;
	FBPaymentsPasscodeWorkflowLogger* _passcodeWorkflowLogger;
	FBPaymentsTouchIDController* _touchIDController;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodCoordinator;
	MNPaymentsThemeCoordinator* _paymentsThemeCoordinator;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	id<MNSoundPluginService> _soundService;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	FBPaymentsPeerToPeerCardFlowController* _cardFlowController;
	MNPaymentsExtensibleFlowMap* _extensibleFlowMap;
	MNPaymentsFlowSessionController* _flowSessionController;
	FBPaymentsPaymentProcessingLock* _paymentProcessingLock;
	FBLazyCreator* _expandableNavigationAdapterLazyCreator;
	NSMutableDictionary* _contextForAttachment;
	NSMutableDictionary* _validatorForFlowId;
	NSMutableDictionary* _flowEndingIdentifier;
	MNUserStore* _userStore;
	BOOL _isDismissing;
	FBDelayer* _errorHandlingDelayer;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentPaymentsCheckoutFlowWithPayableDataModel:(id)arg1 flowId:(id)arg2 delegate:(id)arg3 presentingStyle:(long long)arg4 dismissingStyle:(long long)arg5 toNavigationController:(id)arg6 tintColor:(id)arg7 ;
-(void)paymentsRequestHandler:(id)arg1 didSendPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 checkoutResponse:(id)arg4 ;
-(id)newNavigationController;
-(void)paymentsRequestHandler:(id)arg1 didFailSendingPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 error:(id)arg4 ;
-(id)initWithSession:(id)arg1 fetchController:(id)arg2 peerToPeerNavigationCoordinator:(id)arg3 paymentPinController:(id)arg4 touchIDController:(id)arg5 paymentMethodCoordinator:(id)arg6 paymentsThemeCoordinator:(id)arg7 connectionStatusProvider:(id)arg8 soundService:(id)arg9 featureGatingController:(id)arg10 cardFlowController:(id)arg11 extensibleFlowMap:(id)arg12 flowSessionController:(id)arg13 userStore:(id)arg14 ;
-(void)didTapCancelForFullScreenIntroductionViewController:(id)arg1 ;
-(void)didTapActionButtonForFullScreenIntroductionViewController:(id)arg1 ;
-(void)_dismissCheckoutViewController:(id)arg1 flowId:(id)arg2 checkoutFlowContext:(id)arg3 isSendFlowCompleted:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_releaseDismissalSignal;
-(void)_removeFlowWithId:(id)arg1 ;
-(void)_dispatchCancelEventForFlowId:(id)arg1 collectedData:(id)arg2 delegate:(id)arg3 ;
-(void)_registerPaymentForFlowId:(id)arg1 ;
-(void)_flowDidConfirmSendWithFlowId:(id)arg1 collectedData:(id)arg2 requestHandlerProcessingDelegate:(id)arg3 ;
-(void)_cleanupFlowIfPossibleWithId:(id)arg1 withCompletionIdentifier:(unsigned long long)arg2 collectedData:(id)arg3 ;
-(void)_presentUnableToProceedAlertView;
-(void)_handlerErrorWithFlowId:(id)arg1 collectedData:(id)arg2 error:(id)arg3 errorHandler:(id)arg4 ;
-(void)sendMoneyViewController:(id)arg1 didTapCancelWithFlowId:(id)arg2 collectedData:(id)arg3 ;
-(void)sendMoneyViewController:(id)arg1 shouldProcessPaymentWithFlowId:(id)arg2 collectedData:(id)arg3 ;
-(void)sendMoneyViewController:(id)arg1 didFinishCheckoutWithFlowId:(id)arg2 collectedData:(id)arg3 ;
-(void)sendMoneyViewController:(id)arg1 didExitCheckoutWithFlowId:(id)arg2 collectedData:(id)arg3 ;
-(void)sendMoneyViewController:(id)arg1 didFailProcessingWithFlowId:(id)arg2 collectedData:(id)arg3 error:(id)arg4 ;
-(void)sendMoneyViewController:(id)arg1 hasFatalErrorForFlowId:(id)arg2 error:(id)arg3 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

