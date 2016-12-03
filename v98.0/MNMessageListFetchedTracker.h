/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNConfirmedMessagingStatusUpdateMappingDelegate.h>
#import <Messenger/MNMessageListFetchedMemoryStateAffirming.h>
#import <Messenger/MNMessageListFetchedDiskStateAffirming.h>

@protocol OS_dispatch_queue;
@class MNConfirmedMessagingStatusStore, NSObject, NSString;

@interface MNMessageListFetchedTracker : NSObject <MNConfirmedMessagingStatusUpdateMappingDelegate, MNMessageListFetchedMemoryStateAffirming, MNMessageListFetchedDiskStateAffirming> {

	MNConfirmedMessagingStatusStore* _store;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)markMessageListNotFullyFetched:(id)arg1 ;
-(BOOL)isMessageWithTimestamp:(unsigned long long)arg1 oldestMessageInThread:(id)arg2 ;
-(void)markMessageListFullyFetched:(id)arg1 withOldestMessageTimestamp:(unsigned long long)arg2 ;
-(id)initWithMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 diskConsistencyAssurer:(id)arg3 queue:(id)arg4 ;
-(BOOL)hasFetchedAndPersistedFullMessageList:(id)arg1 ;
-(id)confirmedMessagingStatusForKey:(id)arg1 status:(NSNumber*)arg2 ;
-(id)_threadKeyToOldestMessageTimestampMap;
-(void)reset;
@end

