/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutRequestHandling.h>
#import <Messenger/FBPaymentsCheckoutConfiguration.h>

@protocol FBPaymentsCheckoutContentConfiguration, FBPaymentsNavigationDelegate;
@class FBUserSession, NSString;

@interface MNMiniAppsCheckoutConfiguration : NSObject <FBPaymentsCheckoutRequestHandling, FBPaymentsCheckoutConfiguration> {

	FBUserSession* _session;
	id<FBPaymentsCheckoutContentConfiguration> _checkoutContentConfiguration;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	/*^block*/id _checkoutRequestBlock;

}

@property (nonatomic,copy) id checkoutRequestBlock;                                                   //@synthesize checkoutRequestBlock=_checkoutRequestBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(id)_contentConfiguration;
-(id)checkoutRequestBlock;
-(void)processPaymentWithPaymentFlowId:(id)arg1 checkoutFlowCollectedData:(id)arg2 checkoutLoggingService:(id)arg3 processingDelegate:(id)arg4 sendingDelegate:(id)arg5 ;
-(void)showConfirmationDialogForFirstPaymentWithViewControllerForPresenting:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)paymentInfo;
-(id)orderStatusController;
-(id)initWithSession:(id)arg1 checkoutContentConfiguration:(id)arg2 ;
-(void)setCheckoutRequestBlock:(id)arg1 ;
-(id)requestHandler;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

