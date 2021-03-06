/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>

@protocol MNPendingThreadQuerying, MNSecureThreadServiceControlling, MNThreadSummaryOptimisticStateApplying, OS_dispatch_queue;
@class MNThreadStore, FBAnalytics, FBAnalyticsPerfLogger, NSObject, MNBatchThreadRowLoader, NSMutableDictionary, NSString;

@interface MNThreadRowsViewModelLoader_DEPRECATED : NSObject <MNSingleViewModelLoading> {

	long long _threadListType;
	id<MNPendingThreadQuerying> _pendingThreadQuerier;
	MNThreadStore* _threadStore;
	id<MNSecureThreadServiceControlling> _secureMessagingController;
	id<MNThreadSummaryOptimisticStateApplying> _optimisticStateApplier;
	FBAnalytics* _analytics;
	FBAnalyticsPerfLogger* _perfLoger;
	NSObject*<OS_dispatch_queue> _queue;
	MNBatchThreadRowLoader* _batchThreadRowLoader;
	NSMutableDictionary* _requestIdToRequestMap;
	NSMutableDictionary* _requestIdToCancelableMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanUpForRequestId:(unsigned long long)arg1 ;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithThreadRowFactory:(id)arg1 threadListType:(long long)arg2 pendingThreadQuerier:(id)arg3 aggregatedMessageQuerier:(id)arg4 threadSnippetLoader:(id)arg5 threadGenericSnippetsBatchLoader:(id)arg6 threadGenericSnippetDecider:(id)arg7 ctaViewModelGenerator:(id)arg8 userStore:(id)arg9 threadStore:(id)arg10 authManager:(id)arg11 optimisticStateApplier:(id)arg12 threadListFetchConfiguration:(id)arg13 secureMessagingController:(id)arg14 analytics:(id)arg15 queue:(id)arg16 ;
-(void)_beginRequest:(id)arg1 withRequestId:(unsigned long long)arg2 logSecureOpeningFailure:(BOOL)arg3 ;
-(void)_performThreadListQueryWithSyncedFilter:(id)arg1 secureFilter:(id)arg2 forRequestId:(unsigned long long)arg3 ;
-(void)_performAsyncLoadForLocalThreadKeys:(id)arg1 existingViewModel:(id)arg2 requestId:(unsigned long long)arg3 ;
-(void)_handleResponseFromAyncRangeQuery:(id)arg1 usingFilter:(id)arg2 requestId:(unsigned long long)arg3 ;
-(void)_logAndCallFailure:(id)arg1 location:(long long)arg2 loggingData:(id)arg3 forRequestId:(unsigned long long)arg4 ;
-(void)_handleThreadRowLoadProgress:(BOOL)arg1 requestId:(unsigned long long)arg2 ;
-(id)_cancelableForThreadStoreRequest:(unsigned long long)arg1 ;
-(id)_allPendingThreads;
-(void)_loadForThreadSummaries:(id)arg1 pendingThreads:(id)arg2 secureThreads:(id)arg3 requestId:(unsigned long long)arg4 didReachEnd:(BOOL)arg5 trimToNewerThanTimestamp:(unsigned long long)arg6 ;
-(void)_incrementalAsyncLoadCompleted:(id)arg1 pendingThreads:(id)arg2 existingViewModel:(id)arg3 requestId:(unsigned long long)arg4 ;
-(void)_handleThreadRowLoadSuccessWithThreadRows:(id)arg1 requestId:(unsigned long long)arg2 didReachEnd:(BOOL)arg3 ;
-(void)_handleThreadRowLoadFailureWithError:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)_cancelRowLoaderRequestWithId:(unsigned long long)arg1 ;
-(void)_callFailure:(id)arg1 andCleanUpForRequestId:(unsigned long long)arg2 ;
-(void)_cancelThreadStoreRequestWithId:(unsigned long long)arg1 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end

