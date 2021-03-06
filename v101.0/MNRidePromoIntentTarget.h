/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface MNRidePromoIntentTarget : FBIntentTarget {

	NSString* _providerName;
	NSString* _promoData;

}

@property (nonatomic,copy,readonly) NSString * providerName;              //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * promoData;                 //@synthesize promoData=_promoData - In the implementation block
+(id)ridePromoIntentTargetWithProviderName:(id)arg1 promoData:(id)arg2 ;
-(NSString *)promoData;
-(id)fallbackURLs;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)providerName;
@end

