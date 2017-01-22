/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPaymentAccountEmail, FBMemPaymentAccountPhone;

@interface FBPaymentsPurchaseInfoContactDataModel : FBValueObject <NSCopying> {

	FBMemPaymentAccountEmail* _contactEmail;
	FBMemPaymentAccountPhone* _contactPhone;

}

@property (nonatomic,copy,readonly) FBMemPaymentAccountEmail * contactEmail;              //@synthesize contactEmail=_contactEmail - In the implementation block
@property (nonatomic,copy,readonly) FBMemPaymentAccountPhone * contactPhone;              //@synthesize contactPhone=_contactPhone - In the implementation block
-(FBMemPaymentAccountPhone *)contactPhone;
-(FBMemPaymentAccountEmail *)contactEmail;
-(id)initWithContactEmail:(id)arg1 contactPhone:(id)arg2 ;
@end
