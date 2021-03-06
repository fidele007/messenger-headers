/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutConfirmationViewControllerDelegate.h>
#import <Messenger/FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate.h>
#import <Messenger/FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate.h>
#import <Messenger/FBPaymentsCheckoutPaymentProcessControlling.h>

@protocol FBPaymentsCheckoutRequestHandling, FBPaymentsCheckoutConfirmationConfigurationProviding, FBPaymentsCheckoutPaymentProcessControllingDelegate, FBPaymentsNavigationDelegate;
@class FBUserSession, FBPaymentsTouchIDController, FBPaymentsPINController, FBPaymentsCheckoutConfirmationViewController, NSString;

@interface FBPaymentsCheckoutConfirmationBasedPaymentProcessController : NSObject <FBPaymentsCheckoutConfirmationViewControllerDelegate, FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate, FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate, FBPaymentsCheckoutPaymentProcessControlling> {

	FBUserSession* _session;
	FBPaymentsTouchIDController* _touchIDController;
	FBPaymentsPINController* _paymentsPINController;
	id<FBPaymentsCheckoutRequestHandling> _requestHandler;
	id<FBPaymentsCheckoutConfirmationConfigurationProviding> _confirmationConfigurationProvider;
	FBPaymentsCheckoutConfirmationViewController* _confirmationViewController;
	id<FBPaymentsCheckoutPaymentProcessControllingDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutPaymentProcessControllingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                           //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)paymentsRequestHandler:(id)arg1 didSendPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 checkoutResponse:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didFailSendingPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 error:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didFinishProcessingWithFlowId:(id)arg2 ;
-(void)paymentsRequestHandler:(id)arg1 didFailProcessingWithFlowId:(id)arg2 wasCancelled:(BOOL)arg3 error:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didUpdateLoadingStatusText:(id)arg2 ;
-(void)confirmationViewControllerDidFinish:(id)arg1 ;
-(void)processPaymentWithFlowId:(id)arg1 collectedData:(id)arg2 checkoutLoggingService:(id)arg3 ;
-(id)initWithSession:(id)arg1 requestHandler:(id)arg2 confirmationConfigurationProvider:(id)arg3 paymentsPINController:(id)arg4 touchIDController:(id)arg5 ;
-(void)setDelegate:(id<FBPaymentsCheckoutPaymentProcessControllingDelegate>)arg1 ;
-(id<FBPaymentsCheckoutPaymentProcessControllingDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

