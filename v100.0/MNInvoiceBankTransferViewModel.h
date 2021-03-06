/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBPaymentsCurrencyQuantity;

@interface MNInvoiceBankTransferViewModel : FBValueObject <NSCopying> {

	NSString* _titleText;
	NSString* _descriptionText;
	NSString* _orderNumber;
	FBPaymentsCurrencyQuantity* _totalPrice;
	NSString* _pageName;

}

@property (nonatomic,copy,readonly) NSString * titleText;                                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                           //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * orderNumber;                               //@synthesize orderNumber=_orderNumber - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * totalPrice;              //@synthesize totalPrice=_totalPrice - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                                  //@synthesize pageName=_pageName - In the implementation block
-(NSString *)pageName;
-(NSString *)orderNumber;
-(FBPaymentsCurrencyQuantity *)totalPrice;
-(id)initWithTitleText:(id)arg1 descriptionText:(id)arg2 orderNumber:(id)arg3 totalPrice:(id)arg4 pageName:(id)arg5 ;
-(NSString *)descriptionText;
-(NSString *)titleText;
@end

