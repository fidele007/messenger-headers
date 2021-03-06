/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNRoomsTabUpdateClientExpirationData;

@interface MNRoomsTabUpdateClientInfo : FBValueObject <NSCopying> {

	unsigned long long _clientStatus;
	MNRoomsTabUpdateClientExpirationData* _expirationData;

}

@property (nonatomic,readonly) unsigned long long clientStatus;                                         //@synthesize clientStatus=_clientStatus - In the implementation block
@property (nonatomic,copy,readonly) MNRoomsTabUpdateClientExpirationData * expirationData;              //@synthesize expirationData=_expirationData - In the implementation block
-(id)initWithClientStatus:(unsigned long long)arg1 expirationData:(id)arg2 ;
-(MNRoomsTabUpdateClientExpirationData *)expirationData;
-(unsigned long long)clientStatus;
@end

