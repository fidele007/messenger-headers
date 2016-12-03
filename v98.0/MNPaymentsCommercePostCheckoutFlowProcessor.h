/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutRequestHandling.h>

@protocol FBPaymentsNavigationDelegate;
@class FBUserSession, NSString;

@interface MNPaymentsCommercePostCheckoutFlowProcessor : NSObject <FBPaymentsCheckoutRequestHandling> {

	FBUserSession* _session;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)processPaymentWithPaymentFlowId:(id)arg1 checkoutFlowCollectedData:(id)arg2 checkoutLoggingService:(id)arg3 processingDelegate:(id)arg4 sendingDelegate:(id)arg5 ;
-(void)showConfirmationDialogForFirstPaymentWithViewControllerForPresenting:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

