/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBatchRequestMergeResultPropagating;
@class NSMutableDictionary;

@interface MNBatchRequestMerger : NSObject {

	NSMutableDictionary* _trackedQueryToRequestIdMap;
	NSMutableDictionary* _requestIdToMergeInfo;
	id<MNBatchRequestMergeResultPropagating> _mergerHandler;

}
-(id)initWithMergeHander:(id)arg1 ;
-(void)handleBatchRequestId:(unsigned long long)arg1 requestQueryDefination:(id)arg2 originalRequestBlock:(/*^block*/id)arg3 newRequestBlock:(/*^block*/id)arg4 isRequestPolicyRemoteOnlyBlock:(/*^block*/id)arg5 ;
-(void)propagateBatchRequestWithRequestId:(unsigned long long)arg1 asHandled:(id)arg2 ;
-(void)propagateBatchRequestWithRequestId:(unsigned long long)arg1 wasNotHandled:(id)arg2 ;
-(void)propagateBatchRequestWithRequestId:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(id)_newlyTrackedQueriesForRequestId:(unsigned long long)arg1 queries:(id)arg2 isRequestPolicyRemoteOnlyBlock:(/*^block*/id)arg3 ;
-(void)_clearCompletedRequests;
-(void)_trackQueries:(id)arg1 mergeInfo:(id)arg2 ;
-(void)handleBatchRequestId:(unsigned long long)arg1 requestQueryDefination:(id)arg2 originalRequestBlock:(/*^block*/id)arg3 newRequestBlock:(/*^block*/id)arg4 ;
@end

