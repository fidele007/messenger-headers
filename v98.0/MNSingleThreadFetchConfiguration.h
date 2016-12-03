/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSyncedThreadQuery;

@interface MNSingleThreadFetchConfiguration : FBValueObject <NSCopying> {

	BOOL _isQueryingOnlyForMessages;
	MNSyncedThreadQuery* _syncedThreadQuery;
	unsigned long long _numberOfMessagesToQuery;
	unsigned long long _baselineTimestamp;

}

@property (nonatomic,copy,readonly) MNSyncedThreadQuery * syncedThreadQuery;              //@synthesize syncedThreadQuery=_syncedThreadQuery - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMessagesToQuery;                //@synthesize numberOfMessagesToQuery=_numberOfMessagesToQuery - In the implementation block
@property (nonatomic,readonly) unsigned long long baselineTimestamp;                      //@synthesize baselineTimestamp=_baselineTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL isQueryingOnlyForMessages;                            //@synthesize isQueryingOnlyForMessages=_isQueryingOnlyForMessages - In the implementation block
-(MNSyncedThreadQuery *)syncedThreadQuery;
-(BOOL)isQueryingOnlyForMessages;
-(unsigned long long)numberOfMessagesToQuery;
-(unsigned long long)baselineTimestamp;
-(id)initWithSyncedThreadQuery:(id)arg1 numberOfMessagesToQuery:(unsigned long long)arg2 baselineTimestamp:(unsigned long long)arg3 isQueryingOnlyForMessages:(BOOL)arg4 ;
@end

