/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessageEphemeralTimerViewStatus : NSObject <NSCopying> {

	unsigned long long _subtype;
	double _timerNotSet_messageLifetimeInMilliseconds;
	double _timerSet_expirationTimestampInMillseconds;

}
+(id)timerNotSetWithMessageLifetimeInMilliseconds:(double)arg1 ;
+(id)timerSetWithExpirationTimestampInMillseconds:(double)arg1 ;
+(id)timerExpired;
-(void)matchTimerNotSet:(/*^block*/id)arg1 timerSet:(/*^block*/id)arg2 timerExpired:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
