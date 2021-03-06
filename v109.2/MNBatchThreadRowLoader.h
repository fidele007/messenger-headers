/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAggregatedAppMessageQuerying, FBMThreadSnippetLoading, MNThreadRowCTAViewModelGenerating, MNAuthenticationManager, OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class MNThreadRowFactory, MNUserStore, MNThreadStore, MNThreadListFetchConfiguration, MNThreadGenericSnippetDecider, MNThreadGenericSnippetsBatchLoader, FBAnalytics, NSObject, MNOperationsTracker, NSMutableDictionary;

@interface MNBatchThreadRowLoader : NSObject {

	MNThreadRowFactory* _threadRowFactory;
	id<MNAggregatedAppMessageQuerying> _aggregatedMessageQuerier;
	id<FBMThreadSnippetLoading> _threadSnippetLoader;
	id<MNThreadRowCTAViewModelGenerating> _ctaViewModelGenerator;
	MNUserStore* _userStore;
	MNThreadStore* _threadStore;
	id<MNAuthenticationManager> _authManager;
	MNThreadListFetchConfiguration* _threadListFetchConfiguration;
	MNThreadGenericSnippetDecider* _threadGenericSnippetDecider;
	MNThreadGenericSnippetsBatchLoader* _threadGenericSnippetsBatchLoader;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;
	MNOperationsTracker* _requestTracker;
	NSMutableDictionary* _requestIdToUserStoreRequestIdMap;

}
-(id)initWithThreadRowFactory:(id)arg1 aggregatedMessageQuerier:(id)arg2 threadSnippetLoader:(id)arg3 threadGenericSnippetsBatchLoader:(id)arg4 threadGenericSnippetDecider:(id)arg5 ctaViewModelGenerator:(id)arg6 userStore:(id)arg7 threadStore:(id)arg8 authManager:(id)arg9 threadListFetchConfiguration:(id)arg10 analytics:(id)arg11 queue:(id)arg12 ;
-(void)_cleanUpForRequestId:(unsigned long long)arg1 ;
-(unsigned long long)loadThreadRowsForThreadSummaries:(id)arg1 pendingThreads:(id)arg2 secureThreads:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 ;
-(void)_loadThreadRowsForThreadSummaries:(id)arg1 pendingThreads:(id)arg2 secureThreads:(id)arg3 requestId:(unsigned long long)arg4 ;
-(void)_handleLoadFailureWithError:(id)arg1 location:(long long)arg2 loggingData:(id)arg3 requestId:(unsigned long long)arg4 ;
-(void)_handleMessagesLoadSuccessWithThreadKeyToMessageMetadataMap:(NSDictionary*)arg1 threadSummaries:(id)arg2 pendingThreads:(id)arg3 secureThreads:(id)arg4 requestId:(unsigned long long)arg5 ;
-(void)_loadMessagesForThreadSummaries:(id)arg1 errorBlock:(/*^block*/id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(void)_logLongOpReceivedForLoadingMessages;
-(void)_handleUsersLoadSuccessWithUsersByUserId:(id)arg1 threadSummaries:(id)arg2 pendingThreads:(id)arg3 secureThreads:(id)arg4 messageMetadataMap:(NSDictionary*)arg5 requestId:(unsigned long long)arg6 ;
-(void)_handleUsersLoadProgress:(BOOL)arg1 requestId:(unsigned long long)arg2 ;
-(id)_offlineIdToLatestDisplayableMessagesMapForPendingThreads:(id)arg1 messagesLimitPerThread:(unsigned long long)arg2 ;
-(void)_handleSnippetsLoadSuccessWithThreadKeyToSnippetMap:(id)arg1 offlineIdToSnippetMap:(id)arg2 threadKeyToGenericSnippetMap:(id)arg3 offlineIdToGenericSnippetMap:(id)arg4 threadKeyToMessageMetadataMap:(NSDictionary*)arg5 threadSummaries:(id)arg6 pendingThreads:(id)arg7 secureThreads:(id)arg8 usersByUserId:(id)arg9 requestId:(unsigned long long)arg10 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end

