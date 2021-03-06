/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSyncedThreadQuery;

@interface MNSingleThreadSummaryRequestFilter : FBValueObject <NSCopying> {

	MNSyncedThreadQuery* _syncedThreadQuery;
	unsigned long long _fulfillmentPolicy;

}

@property (nonatomic,copy,readonly) MNSyncedThreadQuery * syncedThreadQuery;              //@synthesize syncedThreadQuery=_syncedThreadQuery - In the implementation block
@property (nonatomic,readonly) unsigned long long fulfillmentPolicy;                      //@synthesize fulfillmentPolicy=_fulfillmentPolicy - In the implementation block
-(id)initWithSyncedThreadQuery:(id)arg1 fulfillmentPolicy:(unsigned long long)arg2 ;
-(MNSyncedThreadQuery *)syncedThreadQuery;
-(unsigned long long)fulfillmentPolicy;
@end

