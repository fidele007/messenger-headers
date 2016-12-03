/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncThreadDeleting.h>

@protocol MNThreadMessageCacheReading, MNMessageListFetchedDiskStateAffirming;
@class MNThreadUpdateService, MNDeletedThreadKeyTracker, NSString;

@interface FBMSyncProtocolThreadDeleter : NSObject <MNMessagesSyncThreadDeleting> {

	MNThreadUpdateService* _threadUpdateService;
	id<MNThreadMessageCacheReading> _messageCache;
	id<MNMessageListFetchedDiskStateAffirming> _messageListFetchedAffirmer;
	MNDeletedThreadKeyTracker* _deletedThreadKeyTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithThreadUpdateService:(id)arg1 messageCache:(id)arg2 messageListFetchedAffirmer:(id)arg3 deletedThreadKeyTracker:(id)arg4 ;
-(void)deleteInMemoryCopiesOfThreadsWithKeys:(id)arg1 andPotentiallyDeleteThreadsWithKeys:(id)arg2 completionBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)_aggregatedThreadKeysToDelete:(id)arg1 threadKeysToPotentiallyDelete:(id)arg2 ;
@end
