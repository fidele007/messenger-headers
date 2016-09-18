/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(NSString *)billingCountry;
-(NSArray *)supportedPaymentMethodOptions;
-(NSArray *)existingPaymentMethods;
-(id)initWithExistingPaymentMethods:(id)arg1 supportedPaymentMethodOptions:(id)arg2 billingCountry:(id)arg3 ;
@end
