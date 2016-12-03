/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSyncedThreadQuery, MNMessagingDataHistoryRangeQuery;

@interface MNMessageRangeQuery : FBValueObject <NSCopying> {

	MNSyncedThreadQuery* _syncedThreadQuery;
	MNMessagingDataHistoryRangeQuery* _messagesRange;
	unsigned long long _fulfillmentPolicy;

}

@property (nonatomic,copy,readonly) MNSyncedThreadQuery * syncedThreadQuery;                       //@synthesize syncedThreadQuery=_syncedThreadQuery - In the implementation block
@property (nonatomic,copy,readonly) MNMessagingDataHistoryRangeQuery * messagesRange;              //@synthesize messagesRange=_messagesRange - In the implementation block
@property (nonatomic,readonly) unsigned long long fulfillmentPolicy;                               //@synthesize fulfillmentPolicy=_fulfillmentPolicy - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithSyncedThreadQuery:(id)arg1 messagesRange:(id)arg2 fulfillmentPolicy:(unsigned long long)arg3 ;
-(MNSyncedThreadQuery *)syncedThreadQuery;
-(MNMessagingDataHistoryRangeQuery *)messagesRange;
-(unsigned long long)fulfillmentPolicy;
@end

