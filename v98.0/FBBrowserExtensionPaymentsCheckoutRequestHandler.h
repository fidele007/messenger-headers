/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate.h>
#import <Messenger/FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate.h>
#import <Messenger/FBPaymentsCheckoutRequestHandling.h>

@protocol FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate, FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate, FBPaymentsCheckoutRequestHandling, FBBrowserExtensionPaymentsCheckoutProcessingDelegate, FBPaymentsNavigationDelegate;
@class FBUserSession, NSString;

@interface FBBrowserExtensionPaymentsCheckoutRequestHandler : NSObject <FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate, FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate, FBPaymentsCheckoutRequestHandling> {

	FBUserSession* _session;
	id<FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate> _processingDelegate;
	id<FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate> _sendingDelegate;
	id<FBPaymentsCheckoutRequestHandling> _baseRequestHandler;
	id<FBBrowserExtensionPaymentsCheckoutProcessingDelegate> _jsDelegate;
	/*^block*/id _onChargeConfirm;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)paymentsRequestHandler:(id)arg1 didSendPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 checkoutResponse:(id)arg4 ;
-(void)processPaymentWithPaymentFlowId:(id)arg1 checkoutFlowCollectedData:(id)arg2 checkoutLoggingService:(id)arg3 processingDelegate:(id)arg4 sendingDelegate:(id)arg5 ;
-(void)showConfirmationDialogForFirstPaymentWithViewControllerForPresenting:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)paymentsRequestHandler:(id)arg1 didFinishProcessingWithFlowId:(id)arg2 ;
-(void)paymentsRequestHandler:(id)arg1 didFailSendingPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 error:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didFailProcessingWithFlowId:(id)arg2 wasCancelled:(BOOL)arg3 error:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didUpdateLoadingStatusText:(id)arg2 ;
-(id)initWithSession:(id)arg1 baseRequestHadler:(id)arg2 jsDelegate:(id)arg3 ;
-(void)chargeResultWithError:(id)arg1 paymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 checkoutResponse:(id)arg4 ;
-(id)_chargeBTCallbackResultParamsForToken:(id)arg1 collectedData:(id)arg2 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

