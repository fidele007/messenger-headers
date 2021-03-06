/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNCommerceItemViewModel, NSDecimalNumber;

@interface MNAgentSuggestedItemViewModel : FBValueObject <NSCopying> {

	BOOL _purchased;
	NSString* _itemSuggestionId;
	NSString* _bubbleStyle;
	MNCommerceItemViewModel* _item;
	NSDecimalNumber* _priceAmount;
	NSString* _priceCurrency;
	NSString* _formattedPrice;

}

@property (nonatomic,copy,readonly) NSString * itemSuggestionId;                 //@synthesize itemSuggestionId=_itemSuggestionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * bubbleStyle;                      //@synthesize bubbleStyle=_bubbleStyle - In the implementation block
@property (nonatomic,copy,readonly) MNCommerceItemViewModel * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * priceAmount;               //@synthesize priceAmount=_priceAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * priceCurrency;                    //@synthesize priceCurrency=_priceCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSString * formattedPrice;                   //@synthesize formattedPrice=_formattedPrice - In the implementation block
@property (nonatomic,readonly) BOOL purchased;                                   //@synthesize purchased=_purchased - In the implementation block
-(NSString *)bubbleStyle;
-(id)initWithItemSuggestionId:(id)arg1 bubbleStyle:(id)arg2 item:(id)arg3 priceAmount:(id)arg4 priceCurrency:(id)arg5 formattedPrice:(id)arg6 purchased:(BOOL)arg7 ;
-(NSString *)itemSuggestionId;
-(NSDecimalNumber *)priceAmount;
-(NSString *)priceCurrency;
-(BOOL)purchased;
-(MNCommerceItemViewModel *)item;
-(NSString *)formattedPrice;
@end

