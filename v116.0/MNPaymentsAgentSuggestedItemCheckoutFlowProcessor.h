/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutRequestHandling.h>

@protocol FBPaymentsNavigationDelegate;
@class FBUserSession, MNAgentSuggestedItemCheckoutDataModel, NSString;

@interface MNPaymentsAgentSuggestedItemCheckoutFlowProcessor : NSObject <FBPaymentsCheckoutRequestHandling> {

	FBUserSession* _session;
	MNAgentSuggestedItemCheckoutDataModel* _checkoutDataModel;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)processPaymentWithPaymentFlowId:(id)arg1 checkoutFlowCollectedData:(id)arg2 checkoutLoggingService:(id)arg3 processingDelegate:(id)arg4 sendingDelegate:(id)arg5 ;
-(void)showConfirmationDialogForFirstPaymentWithViewControllerForPresenting:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 checkoutDataModel:(id)arg2 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

