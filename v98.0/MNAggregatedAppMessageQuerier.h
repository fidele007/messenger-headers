/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAggregatedAppMessageQuerying.h>

@protocol MNThreadMessageCaching, MNThreadMessageOptimisticStateApplying, MNMessageSendQuerying, MNPendingThreadQuerying, MNAuthenticationManager, OS_dispatch_queue;
@class MNMessageStore, MNAPNSMessageStore, NSObject, NSString;

@interface MNAggregatedAppMessageQuerier : NSObject <MNAggregatedAppMessageQuerying> {

	MNMessageStore* _messageStore;
	MNAPNSMessageStore* _apnsMessageStore;
	id<MNThreadMessageCaching> _messageCache;
	id<MNThreadMessageOptimisticStateApplying> _optimisticStateApplier;
	id<MNMessageSendQuerying> _messageSendQuerier;
	id<MNPendingThreadQuerying> _pendingThreadQuerier;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)queryAggregatedAppMessagesWithQuery:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)queryLatestDisplayableMessageForThreadKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)latestDisplayableMessagesForPendingThreadWithOfflineIdInMemoryCache:(id)arg1 messagesLimitPerThread:(unsigned long long)arg2 ;
-(id)allServerMessagesForThreadKeyInMemoryCache:(id)arg1 ;
-(id)latestOutgoingMessageForSecureThreadWithKey:(id)arg1 ;
-(id)latestDisplayableMessageForThreadKeyInMemoryCache:(id)arg1 ;
-(id)initWithMessageStore:(id)arg1 apnsMessageStore:(id)arg2 messageCache:(id)arg3 optimisticStateApplier:(id)arg4 messageSendQuerier:(id)arg5 pendingThreadQuerier:(id)arg6 authManager:(id)arg7 queue:(id)arg8 ;
-(id)_runServerQuery:(id)arg1 fromOriginalQuery:(id)arg2 foundOutgoingAppMessages:(id)arg3 foundAPNSMessages:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 progressBlock:(/*^block*/id)arg7 ;
-(id)_applyOptimisticUpdatesToMessageSet:(id)arg1 syncedThreadKey:(id)arg2 ;
-(void)_cancelMessageStoreRequest:(unsigned long long)arg1 ;
@end

