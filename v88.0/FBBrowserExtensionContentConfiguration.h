/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutPayActionContentProviding.h>
#import <Messenger/FBPaymentsCheckoutPaymentProcessLoadingStyleProviding.h>
#import <Messenger/FBPaymentsCheckoutContentConfiguration.h>

@class FBUserSession, NSAttributedString, FBPaymentsPaymentMethodsCoordinator, NSString;

@interface FBBrowserExtensionContentConfiguration : NSObject <FBPaymentsCheckoutPayActionContentProviding, FBPaymentsCheckoutPaymentProcessLoadingStyleProviding, FBPaymentsCheckoutContentConfiguration> {

	FBUserSession* _session;
	long long _checkoutLogoStyle;
	NSAttributedString* _termsAndPoliciesString;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)checkoutLogoStyle;
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)checkoutViewTitle;
-(id)paymentProcessLoadingStyleProvider;
-(id)initWithSession:(id)arg1 checkoutLogoStyle:(long long)arg2 termsAndPoliciesString:(id)arg3 ;
-(id)termsAndPoliciesModel:(id)arg1 ;
-(id)payActionTitleWithCollectedData:(id)arg1 ;
-(long long)paymentProcessLoadingStyleWithCollectedData:(id)arg1 ;
-(void)_loadPaymentMethodsCoordinatorIfNeeded;
@end
