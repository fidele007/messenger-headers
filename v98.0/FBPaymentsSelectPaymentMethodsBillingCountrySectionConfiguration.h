/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsSelectPaymentMethodsBillingCountrySectionConfiguration : FBValueObject <NSCopying> {

	NSString* _defaultCountry;

}

@property (nonatomic,copy,readonly) NSString * defaultCountry;              //@synthesize defaultCountry=_defaultCountry - In the implementation block
-(NSString *)defaultCountry;
-(id)initWithDefaultCountry:(id)arg1 ;
@end

