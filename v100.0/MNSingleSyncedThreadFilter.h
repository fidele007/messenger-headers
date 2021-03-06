/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSyncedThreadQuery;

@interface MNSingleSyncedThreadFilter : FBValueObject <NSCopying> {

	MNSyncedThreadQuery* _syncedThreadQuery;
	unsigned long long _fulfillmentPolicy;
	unsigned long long _numberOfMessagesRequested;
	unsigned long long _baselineTimestamp;

}

@property (nonatomic,copy,readonly) MNSyncedThreadQuery * syncedThreadQuery;              //@synthesize syncedThreadQuery=_syncedThreadQuery - In the implementation block
@property (nonatomic,readonly) unsigned long long fulfillmentPolicy;                      //@synthesize fulfillmentPolicy=_fulfillmentPolicy - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMessagesRequested;              //@synthesize numberOfMessagesRequested=_numberOfMessagesRequested - In the implementation block
@property (nonatomic,readonly) unsigned long long baselineTimestamp;                      //@synthesize baselineTimestamp=_baselineTimestamp - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithSyncedThreadQuery:(id)arg1 fulfillmentPolicy:(unsigned long long)arg2 numberOfMessagesRequested:(unsigned long long)arg3 baselineTimestamp:(unsigned long long)arg4 ;
-(MNSyncedThreadQuery *)syncedThreadQuery;
-(unsigned long long)baselineTimestamp;
-(unsigned long long)fulfillmentPolicy;
-(unsigned long long)numberOfMessagesRequested;
@end

