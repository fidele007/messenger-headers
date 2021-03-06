/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMUser;

@interface MNPaymentsContact : FBValueObject <NSCopying> {

	BOOL _isPaymentEligible;
	FBMUser* _user;

}

@property (nonatomic,copy,readonly) FBMUser * user;                 //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) BOOL isPaymentEligible;              //@synthesize isPaymentEligible=_isPaymentEligible - In the implementation block
-(BOOL)isPaymentEligible;
-(id)initWithUser:(id)arg1 isPaymentEligible:(BOOL)arg2 ;
-(FBMUser *)user;
@end

