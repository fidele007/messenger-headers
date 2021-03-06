/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutViewControllerDelegate.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class FBUserSession, NSString;

@interface MNMiniAppsPayments : NSObject <FBPaymentsCheckoutViewControllerDelegate, FBPaymentsNavigationDelegate, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	id<FBProvider> _pluginManagerProvider;
	/*^block*/id _collectionFailureBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_navigationService;
-(id)_paymentsPlugin;
-(void)processPaymentWithCurrencyQuantity:(id)arg1 collectedData:(id)arg2 receiverID:(id)arg3 extraData:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)collectDataForPaymentWithPriceDetails:(id)arg1 termsAndPoliciesString:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)checkoutViewController:(id)arg1 didTapCancelWithFlowId:(id)arg2 collectedData:(id)arg3 ;
-(void)checkoutViewController:(id)arg1 didFinishCheckoutWithFlowId:(id)arg2 collectedData:(id)arg3 ;
-(void)checkoutViewController:(id)arg1 hasFatalErrorForFlowId:(id)arg2 error:(id)arg3 ;
-(id)newNavigationController;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)viewControllerForPresenting;
@end

