/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBPaymentsLoggingServiceCollectedData.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSString, FBPaymentsCurrencyQuantity, NSDictionary, NSObject;

@interface FBPaymentsCheckoutFlowCollectedData : FBValueObject <FBPaymentsLoggingServiceCollectedData, NSCopying> {

	BOOL _hasAddedFirstPaymentMethodDuringCheckout;
	NSString* _paymentSessionID;
	NSString* _configurationIdentifier;
	FBPaymentsCurrencyQuantity* _amount;
	NSString* _composerText;
	NSString* _themeFBID;
	NSDictionary* _collectedPurchaseInfo;
	NSObject*<NSCopying> _orderData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentSessionID;                           //@synthesize paymentSessionID=_paymentSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * configurationIdentifier;                    //@synthesize configurationIdentifier=_configurationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * amount;                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) BOOL hasAddedFirstPaymentMethodDuringCheckout;              //@synthesize hasAddedFirstPaymentMethodDuringCheckout=_hasAddedFirstPaymentMethodDuringCheckout - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerText;                               //@synthesize composerText=_composerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * themeFBID;                                  //@synthesize themeFBID=_themeFBID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * collectedPurchaseInfo;                  //@synthesize collectedPurchaseInfo=_collectedPurchaseInfo - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> orderData;                        //@synthesize orderData=_orderData - In the implementation block
-(NSDictionary *)collectedPurchaseInfo;
-(NSString *)themeFBID;
-(NSString *)composerText;
-(BOOL)hasAddedFirstPaymentMethodDuringCheckout;
-(id)initWithPaymentSessionID:(id)arg1 configurationIdentifier:(id)arg2 amount:(id)arg3 hasAddedFirstPaymentMethodDuringCheckout:(BOOL)arg4 composerText:(id)arg5 themeFBID:(id)arg6 collectedPurchaseInfo:(id)arg7 orderData:(id)arg8 ;
-(NSString *)configurationIdentifier;
-(NSString *)paymentSessionID;
-(NSObject*<NSCopying>)orderData;
-(FBPaymentsCurrencyQuantity *)amount;
@end

