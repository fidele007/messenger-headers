/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBPaymentsCurrencyQuantity;

@interface FBPaymentsCustomCartItemInfo : FBValueObject <NSCopying> {

	NSString* _itemID;
	NSString* _title;
	NSString* _subtitle;
	FBPaymentsCurrencyQuantity* _pricePerItem;

}

@property (nonatomic,copy,readonly) NSString * itemID;                                      //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * pricePerItem;              //@synthesize pricePerItem=_pricePerItem - In the implementation block
-(FBPaymentsCurrencyQuantity *)pricePerItem;
-(id)initWithItemID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 pricePerItem:(id)arg4 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)itemID;
@end
