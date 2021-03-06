/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNSecureBadgeCountThreadInfo : FBValueObject <NSCoding, NSCopying> {

	BOOL _isUnread;
	unsigned long long _timestamp;
	long long _mutedUntil;

}

@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long mutedUntil;                      //@synthesize mutedUntil=_mutedUntil - In the implementation block
@property (nonatomic,readonly) BOOL isUnread;                             //@synthesize isUnread=_isUnread - In the implementation block
-(id)initWithTimestamp:(unsigned long long)arg1 mutedUntil:(long long)arg2 isUnread:(BOOL)arg3 ;
-(long long)mutedUntil;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)isUnread;
@end

