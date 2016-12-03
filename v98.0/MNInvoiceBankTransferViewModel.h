/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemTransactionPaymentOption, NSString;

@interface MNInvoiceBankTransferViewModel : FBValueObject <NSCopying> {

	FBMemTransactionPaymentOption* _paymentOption;
	NSString* _orderNumber;
	NSString* _currency;
	long long _transactionTotalCost;
	NSString* _pageName;

}

@property (nonatomic,copy,readonly) FBMemTransactionPaymentOption * paymentOption;              //@synthesize paymentOption=_paymentOption - In the implementation block
@property (nonatomic,copy,readonly) NSString * orderNumber;                                     //@synthesize orderNumber=_orderNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                                        //@synthesize currency=_currency - In the implementation block
@property (nonatomic,readonly) long long transactionTotalCost;                                  //@synthesize transactionTotalCost=_transactionTotalCost - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                                        //@synthesize pageName=_pageName - In the implementation block
-(NSString *)pageName;
-(FBMemTransactionPaymentOption *)paymentOption;
-(NSString *)orderNumber;
-(long long)transactionTotalCost;
-(id)initWithPaymentOption:(id)arg1 orderNumber:(id)arg2 currency:(id)arg3 transactionTotalCost:(long long)arg4 pageName:(id)arg5 ;
-(NSString *)currency;
@end

