/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutPaymentMethodConfiguration.h>

@protocol FBPaymentsCardViewHeaderProviding;
@class NSString, NSArray;

@interface FBPaymentsCheckoutSimplePaymentMethodConfiguration : NSObject <FBPaymentsCheckoutPaymentMethodConfiguration> {

	NSString* _productItemType;
	NSArray* _supportedPaymentMethodOptions;
	id<FBPaymentsCardViewHeaderProviding> _cardViewHeaderProvider;
	BOOL _allowUserToSelectBillingCountry;
	BOOL _shouldUsePickerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldUsePickerView;
-(id)supportedPaymentMethodOptions;
-(id)cardViewHeaderProvider;
-(id)productItemType;
-(BOOL)allowUserToSelectBillingCountry;
-(id)initWithProductItemType:(id)arg1 supportedPaymentMethodOptions:(id)arg2 cardViewHeaderProvider:(id)arg3 allowUserToSelectBillingCountry:(BOOL)arg4 shouldUsePickerView:(BOOL)arg5 ;
@end

