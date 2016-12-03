/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsImage, NSString, FBPaymentsCurrencyQuantity;

@interface FBPaymentsPreconfiguredCartItemInfo : FBValueObject <NSCopying> {

	FBPaymentsImage* _image;
	NSString* _itemID;
	NSString* _title;
	NSString* _subtitle;
	NSString* _subsubtitle;
	NSString* _merchantName;
	unsigned long long _quantityLimit;
	FBPaymentsCurrencyQuantity* _pricePerItem;

}

@property (nonatomic,copy,readonly) FBPaymentsImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemID;                                      //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * subsubtitle;                                 //@synthesize subsubtitle=_subsubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * merchantName;                                //@synthesize merchantName=_merchantName - In the implementation block
@property (nonatomic,readonly) unsigned long long quantityLimit;                            //@synthesize quantityLimit=_quantityLimit - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * pricePerItem;              //@synthesize pricePerItem=_pricePerItem - In the implementation block
-(unsigned long long)quantityLimit;
-(FBPaymentsCurrencyQuantity *)pricePerItem;
-(NSString *)subsubtitle;
-(id)initWithImage:(id)arg1 itemID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 subsubtitle:(id)arg5 merchantName:(id)arg6 quantityLimit:(unsigned long long)arg7 pricePerItem:(id)arg8 ;
-(NSString *)title;
-(FBPaymentsImage *)image;
-(NSString *)subtitle;
-(NSString *)itemID;
-(NSString *)merchantName;
@end
