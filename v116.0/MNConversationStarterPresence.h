/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNConversationStarterPresence : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _notActive_lastActiveTime;

}
+(id)noPresence;
+(id)notActiveWithLastActiveTime:(id)arg1 ;
+(id)active;
-(void)matchActive:(/*^block*/id)arg1 notActive:(/*^block*/id)arg2 noPresence:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

