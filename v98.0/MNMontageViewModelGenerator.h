/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAggregatedAppMessageQuerying, MNPendingThreadQuerying, MNThreadSummaryOptimisticStateApplying;
@class MNThreadStore, MNUserStore, FBMLoggedInUserInfoManager, MNMontageViewModelGenerationRequestTracker;

@interface MNMontageViewModelGenerator : NSObject {

	MNThreadStore* _threadStore;
	MNUserStore* _userStore;
	id<MNAggregatedAppMessageQuerying> _messageQuerier;
	id<MNPendingThreadQuerying> _pendingThreadQuerier;
	id<MNThreadSummaryOptimisticStateApplying> _threadSummaryOptimisticStateApplier;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNMontageViewModelGenerationRequestTracker* _requestTracker;

}
-(void)cancelRequestWithId:(unsigned long long)arg1 ;
-(void)_didFailFetchingThreadSummaryWithError:(id)arg1 request:(unsigned long long)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_didFailFetchingUsers:(id)arg1 request:(unsigned long long)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_fetchThreadSummaryForRequest:(unsigned long long)arg1 key:(id)arg2 successBlock:(/*^block*/id)arg3 progressBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)_loadPendingThreadMetadataIfPossibleForRequest:(unsigned long long)arg1 type:(long long)arg2 successBlock:(/*^block*/id)arg3 progressBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)_didFetchThreadSummary:(id)arg1 threadKeyDescriptor:(id)arg2 request:(unsigned long long)arg3 type:(long long)arg4 successBlock:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(void)_loadThreadMetadataForOutgoingMessagesInThreadWithKey:(id)arg1 request:(unsigned long long)arg2 type:(long long)arg3 successBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)_didFetchNonExistenceThreadSummaryForRequest:(unsigned long long)arg1 type:(long long)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)_fetchMessagesForRequest:(unsigned long long)arg1 type:(long long)arg2 threadSummary:(id)arg3 threadKeyDescriptor:(id)arg4 successBlock:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(void)_generateViewModelWithThreadMetadata:(id)arg1 threadKeyDescriptor:(id)arg2 messages:(id)arg3 users:(id)arg4 lastReadActionTimestampByUserId:(id)arg5 type:(long long)arg6 successBlock:(/*^block*/id)arg7 ;
-(id)_indexedMontageMessageViewModelSetFromMessages:(id)arg1 participationInfoCollection:(id)arg2 viewerReadWatermarkTimestamp:(unsigned long long)arg3 isSelfMontage:(BOOL)arg4 ;
-(void)_fetchUsersForRequest:(unsigned long long)arg1 type:(long long)arg2 threadMetadata:(id)arg3 lastReadActionTimestampByUserId:(id)arg4 threadKeyDescriptor:(id)arg5 messages:(id)arg6 successBlock:(/*^block*/id)arg7 progressBlock:(/*^block*/id)arg8 failureBlock:(/*^block*/id)arg9 ;
-(void)_didFailFetchingMessagesWithError:(id)arg1 request:(unsigned long long)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_didFetchMessages:(id)arg1 threadSummary:(id)arg2 threadKeyDescriptor:(id)arg3 request:(unsigned long long)arg4 type:(long long)arg5 successBlock:(/*^block*/id)arg6 progressBlock:(/*^block*/id)arg7 failureBlock:(/*^block*/id)arg8 ;
-(void)_didFetchUsers:(id)arg1 lastReadActionTimestampByUserId:(id)arg2 threadMetadata:(id)arg3 threadKeyDescriptor:(id)arg4 messages:(id)arg5 request:(unsigned long long)arg6 type:(long long)arg7 successBlock:(/*^block*/id)arg8 ;
-(id)initWithMessageQuerier:(id)arg1 pendingThreadQuerier:(id)arg2 threadStore:(id)arg3 userStore:(id)arg4 threadSummaryOptimisticStateApplier:(id)arg5 loggedInUserInfoManager:(id)arg6 ;
-(unsigned long long)generateMontageViewModelWithKey:(id)arg1 successBlock:(/*^block*/id)arg2 progressBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
@end

