/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadSummarySubscribing, MNThreadSummaryOptimisticCacheUpdateListening, MNThreadMessageSubscribing, MNSecureThreadSubscribing, FBMMessageSendListening, MNPendingThreadRequestListening, MNPushMessageReceivedListening, FBMThreadTypingStateTrackerListener, MNMessagesSyncSnapshotListening, FBMSPForcedFetchDeltaHandlerListening, FBFriendChangedMonitorListener, FBMSPFolderCountDeltaHandlerListener, MNEphemeralMessageExpirationTimerStoreListening, MNThreadRowsViewModelEnterForegroundListening;
@class MNThreadRowsViewModelUpdateMonitor, MNThreadListViewModelSubscriptionServiceDependencies;

@interface MNThreadRowsViewModelUpdateMonitorController : NSObject {

	MNThreadRowsViewModelUpdateMonitor* _monitor;
	MNThreadListViewModelSubscriptionServiceDependencies* _dependencies;
	id<MNThreadSummarySubscribing> _threadSummarySubscriber;
	id<MNThreadSummaryOptimisticCacheUpdateListening> _threadSummaryOptimisticUpdateSubscriber;
	id<MNThreadMessageSubscribing> _threadMessageSubscriber;
	id<MNSecureThreadSubscribing> _secureThreadSubscriber;
	id<FBMMessageSendListening> _messageSendListener;
	id<MNPendingThreadRequestListening> _pendingThreadListener;
	id<MNPushMessageReceivedListening> _pushMessageListener;
	id<FBMThreadTypingStateTrackerListener> _threadTypingStateListener;
	id<MNMessagesSyncSnapshotListening> _messagesSyncSnapshotListener;
	id<FBMSPForcedFetchDeltaHandlerListening> _syncProtocolForceFetchListener;
	id<FBFriendChangedMonitorListener> _friendChangedMonitorListener;
	id<FBMSPFolderCountDeltaHandlerListener> _folderCountDeltaHandlerListener;
	id<MNEphemeralMessageExpirationTimerStoreListening> _ephemeralTimerStoreListener;
	id<MNThreadRowsViewModelEnterForegroundListening> _enterForegroundListener;

}
-(id)initWithMonitor:(id)arg1 dependencies:(id)arg2 queue:(id)arg3 ;
-(void)startMonitoring;
-(void)stopMonitoring;
@end

