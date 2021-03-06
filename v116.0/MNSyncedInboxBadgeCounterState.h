/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSSet;

@interface MNSyncedInboxBadgeCounterState : NSObject <NSCopying, NSCoding> {

	unsigned long long _subtype;
	long long _ignorableServerBadgeCount;
	long long _preferredServerBadgeCount;
	NSSet* _localState_unreadThreadKeys;

}
+(id)localStateWithUnreadThreadKeys:(id)arg1 ;
+(id)ignorableServerBadgeCount:(long long)arg1 ;
+(id)preferredServerBadgeCount:(long long)arg1 ;
-(void)matchIgnorableServerBadgeCount:(/*^block*/id)arg1 preferredServerBadgeCount:(/*^block*/id)arg2 localState:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

