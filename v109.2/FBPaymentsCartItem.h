/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsCartItemInfo, FBPaymentsCurrencyQuantity;

@interface FBPaymentsCartItem : FBValueObject <NSCopying> {

	FBPaymentsCartItemInfo* _cartItemInfo;
	long long _selectedQuantity;
	FBPaymentsCurrencyQuantity* _customizedItemPrice;

}

@property (nonatomic,copy,readonly) FBPaymentsCartItemInfo * cartItemInfo;                         //@synthesize cartItemInfo=_cartItemInfo - In the implementation block
@property (nonatomic,readonly) long long selectedQuantity;                                         //@synthesize selectedQuantity=_selectedQuantity - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * customizedItemPrice;              //@synthesize customizedItemPrice=_customizedItemPrice - In the implementation block
-(FBPaymentsCurrencyQuantity *)customizedItemPrice;
-(long long)selectedQuantity;
-(FBPaymentsCartItemInfo *)cartItemInfo;
-(id)initWithCartItemInfo:(id)arg1 selectedQuantity:(long long)arg2 customizedItemPrice:(id)arg3 ;
@end

