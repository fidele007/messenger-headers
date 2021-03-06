/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSyncedInboxServerBadgeCountListening.h>
#import <FBSharedFramework/MNThreadSummarySubscribing.h>
#import <FBSharedFramework/MNThreadSummaryOptimisticCacheUpdateListening.h>
#import <Messenger/MNPushMessageReceivedListening.h>
#import <Messenger/MNInboxTabBadgeCountSourceTracking.h>

@protocol MNThreadSummaryOptimisticCacheUpdateListening;
@class MNBadgeCountSourceAdapter, MNThreadSummarySubscribingAnnouncer, MNThreadSummaryOptimisticCacheUpdateListeningAnnouncer, MNPushMessageReceivedListeningAnnouncer, MNSyncedInboxServerBadgeCounter, FBMMessagingStoreRestoreCompleteDelayer, MNSyncedInboxBadgeCountGenerator, NSString;

@interface MNSyncedInboxBadgeCounter : NSObject <MNSyncedInboxServerBadgeCountListening, MNThreadSummarySubscribing, MNThreadSummaryOptimisticCacheUpdateListening, MNPushMessageReceivedListening, MNInboxTabBadgeCountSourceTracking> {

	MNBadgeCountSourceAdapter* _badgeCountAdapter;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	MNThreadSummaryOptimisticCacheUpdateListeningAnnouncer* _optimisticUpdateAnnouncer;
	MNPushMessageReceivedListeningAnnouncer* _pushMessageReceivedListeningAnnouncer;
	id<MNThreadSummaryOptimisticCacheUpdateListening> _dispatchedOptimisticUpdateListener;
	MNSyncedInboxServerBadgeCounter* _serverBadgeCounter;
	FBMMessagingStoreRestoreCompleteDelayer* _messagingRestoreDelayer;
	BOOL _restoreComplete;
	MNSyncedInboxBadgeCountGenerator* _badgeCountGenerator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBadgeCountGenerator:(id)arg1 threadSummarySubscribingAnnouncer:(id)arg2 optimisticUpdateAnnouncer:(id)arg3 badgeCountUpdateService:(id)arg4 serverBadgeCounter:(id)arg5 pushMessageReceivedListeningAnnouncer:(id)arg6 messagingRestoreDelayer:(id)arg7 foregroundJobScheduler:(id)arg8 ;
-(id)threadKeysIncludedInCount;
-(void)_handleBadgeCountStateRestored:(id)arg1 ;
-(void)_recomputeBadgeStateAfterAllStateRestored;
-(void)didReceiveAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 preparedThreadSummary:(id)arg4 ;
-(void)didReceiveSyncMessage:(id)arg1 ;
-(void)didUpdateServerBadgeCount:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)didUpdateOptimisticStateForAllThreadKeys;
-(void)didUpdateOptimisticStateForThreadKey:(id)arg1 ;
-(void)didRestoreAPNSMessagesFromDiskWithAffectedThreadKeys:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(void)_updateBadgeCount;
-(long long)badgeCount;
@end

