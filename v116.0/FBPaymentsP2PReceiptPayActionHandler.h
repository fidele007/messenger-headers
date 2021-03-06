/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate.h>

@protocol FBPaymentsCheckoutRequestHandling, FBPaymentsPeerToPeerValidator, FBPaymentsCheckoutFlowErrorHandler, FBPaymentsNavigationDelegate, FBPaymentsP2PReceiptPayActionHandlerDelegate;
@class NSString;

@interface FBPaymentsP2PReceiptPayActionHandler : NSObject <FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate> {

	id<FBPaymentsCheckoutRequestHandling> _requestHandler;
	id<FBPaymentsPeerToPeerValidator> _validator;
	id<FBPaymentsCheckoutFlowErrorHandler> _errorHandler;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsP2PReceiptPayActionHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                    //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsP2PReceiptPayActionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequestHandler:(id)arg1 validator:(id)arg2 errorHandler:(id)arg3 ;
-(void)handlePayActionWithFlowID:(id)arg1 collectedData:(id)arg2 ;
-(void)_processPaymentWithFlowID:(id)arg1 collectedData:(id)arg2 ;
-(void)_didCompleteSenderVerification;
-(void)paymentsRequestHandler:(id)arg1 didFinishProcessingWithFlowId:(id)arg2 ;
-(void)paymentsRequestHandler:(id)arg1 didFailProcessingWithFlowId:(id)arg2 wasCancelled:(BOOL)arg3 error:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didUpdateLoadingStatusText:(id)arg2 ;
-(void)setDelegate:(id<FBPaymentsP2PReceiptPayActionHandlerDelegate>)arg1 ;
-(id<FBPaymentsP2PReceiptPayActionHandlerDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

