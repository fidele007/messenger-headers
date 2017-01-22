/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBReactionPlaceTipIntentTarget : FBIntentTarget {

	NSString* _placeID;
	NSString* _surface;
	NSString* _referrer;

}

@property (nonatomic,copy,readonly) NSString * placeID;               //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * surface;               //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrer;              //@synthesize referrer=_referrer - In the implementation block
+(id)placeTipTargetWithPlaceID:(id)arg1 surface:(id)arg2 referrer:(id)arg3 ;
-(NSString *)referrer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)placeID;
-(NSString *)surface;
@end
