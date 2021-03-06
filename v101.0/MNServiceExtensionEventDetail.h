/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNServiceExtensionFallbackDetail;

@interface MNServiceExtensionEventDetail : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSString* _receivedNotification_messageId;
	MNServiceExtensionFallbackDetail* _postedFallback;

}
+(id)failedToFindBadgeCountFieldInPayloadForBadgeCountComputation;
+(id)failedToLoadAppDiskStateForBadgeCountComputation;
+(id)loadedHandlerCold;
+(id)loadedHandlerWithWarmConnection;
+(id)postedFallback:(id)arg1 ;
+(id)postedNotificationForSyncedMessage;
+(id)receivedNotificationWithMessageId:(id)arg1 ;
-(void)matchReceivedNotification:(/*^block*/id)arg1 loadedHandlerCold:(/*^block*/id)arg2 loadedHandlerWithWarmConnection:(/*^block*/id)arg3 failedToLoadAppDiskStateForBadgeCountComputation:(/*^block*/id)arg4 failedToFindBadgeCountFieldInPayloadForBadgeCountComputation:(/*^block*/id)arg5 postedNotificationForSyncedMessage:(/*^block*/id)arg6 postedFallback:(/*^block*/id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

