/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNConfirmedMessagingStatusUpdateMappingDelegate.h>
#import <Messenger/MNThreadDeletedAffirming.h>

@protocol OS_dispatch_queue;
@class MNConfirmedMessagingStatusStore, MNFetchedThreadKeyTracker, MNMessageListFetchedTracker, NSObject, NSString;

@interface MNDeletedThreadKeyTracker : NSObject <MNConfirmedMessagingStatusUpdateMappingDelegate, MNThreadDeletedAffirming> {

	MNConfirmedMessagingStatusStore* _store;
	MNFetchedThreadKeyTracker* _fetchedThreadKeyTracker;
	MNMessageListFetchedTracker* _messageListFetchedTracker;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)markThreadAsDeleted:(id)arg1 ;
-(BOOL)isThreadDeleted:(id)arg1 ;
-(id)initWithMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 diskConsistencyAssurer:(id)arg3 fetchedThreadKeyTracker:(id)arg4 messageListFetchedTracker:(id)arg5 queue:(id)arg6 ;
-(void)markThreadAsNotDeleted:(id)arg1 ;
-(id)confirmedMessagingStatusForKey:(id)arg1 status:(id)arg2 ;
-(void)reset;
@end

