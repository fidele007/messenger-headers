/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsPaymentMethodOption.h>

@class NSArray, NSString;

@interface FBPaymentsCardOption : NSObject <FBPaymentsPaymentMethodOption> {

	NSArray* _acceptedCardAssociations;
	NSArray* _acceptedCardCategories;
	unsigned long long _isZipVerified;

}

@property (nonatomic,copy,readonly) NSArray * acceptedCardAssociations;              //@synthesize acceptedCardAssociations=_acceptedCardAssociations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * acceptedCardCategories;                //@synthesize acceptedCardCategories=_acceptedCardCategories - In the implementation block
@property (nonatomic,readonly) unsigned long long isZipVerified;                     //@synthesize isZipVerified=_isZipVerified - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType; 
-(NSString *)paymentMethodType;
-(id)initWithAcceptedCardAssociations:(id)arg1 acceptedCardCategories:(id)arg2 isZipVerified:(unsigned long long)arg3 ;
-(unsigned long long)isZipVerified;
-(NSArray *)acceptedCardCategories;
-(BOOL)doesPaymentMethodBelongToThisOption:(id)arg1 ;
-(BOOL)doesCoverOption:(id)arg1 ;
-(BOOL)hasOverlapWithOption:(id)arg1 ;
-(NSArray *)acceptedCardAssociations;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

