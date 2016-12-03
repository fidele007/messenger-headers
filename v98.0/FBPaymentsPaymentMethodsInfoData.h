/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBPaymentsPaymentMethodsInfoData : FBValueObject <NSCopying> {

	NSArray* _existingPaymentMethods;
	NSArray* _supportedPaymentMethodOptions;
	NSString* _billingCountry;

}

@property (nonatomic,copy,readonly) NSArray * existingPaymentMethods;                     //@synthesize existingPaymentMethods=_existingPaymentMethods - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedPaymentMethodOptions;              //@synthesize supportedPaymentMethodOptions=_supportedPaymentMethodOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * billingCountry;                            //@synthesize billingCountry=_billingCountry - In the implementation block
-(NSArray *)supportedPaymentMethodOptions;
-(NSString *)billingCountry;
-(NSArray *)existingPaymentMethods;
-(id)initWithExistingPaymentMethods:(id)arg1 supportedPaymentMethodOptions:(id)arg2 billingCountry:(id)arg3 ;
@end

