/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, NSString;

@interface FBMessagingStoreMessagesRestoreRequest : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMSyncedThreadKey* _history_threadKey;
	long long _history_numberOfMessagesRequested;
	unsigned long long _history_beforeTimestamp;
	FBMSyncedThreadKey* _specificMessage_threadKey;
	NSString* _specificMessage_messageId;

}
+(id)specificMessageWithThreadKey:(id)arg1 messageId:(id)arg2 ;
+(id)historyWithThreadKey:(id)arg1 numberOfMessagesRequested:(long long)arg2 beforeTimestamp:(unsigned long long)arg3 ;
-(void)matchHistory:(/*^block*/id)arg1 specificMessage:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
