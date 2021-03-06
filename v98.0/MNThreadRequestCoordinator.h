/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadSummaryRequestListener.h>
#import <Messenger/MNThreadMessagingDataRequestListener.h>
#import <Messenger/MNThreadListRequestListener.h>
#import <Messenger/MNJointThreadListRequestListening.h>
#import <Messenger/MNSecureThreadRequestListener.h>
#import <Messenger/MNBatchSecureAndSyncedThreadRequestListening.h>

@protocol MNThreadRequestRunning, MNThreadListRequestRunning, MNJointThreadListRequestRunning;
@class MNAsyncOperationTracker, MNThreadRequestListenerFactory, NSString;

@interface MNThreadRequestCoordinator : NSObject <MNThreadSummaryRequestListener, MNThreadMessagingDataRequestListener, MNThreadListRequestListener, MNJointThreadListRequestListening, MNSecureThreadRequestListener, MNBatchSecureAndSyncedThreadRequestListening> {

	MNAsyncOperationTracker* _requestTracker;
	id<MNThreadRequestRunning> _requestRunner;
	id<MNThreadListRequestRunning> _threadListRequestRunner;
	id<MNJointThreadListRequestRunning> _jointThreadListRequestHandler;
	MNThreadRequestListenerFactory* _requestListenerFactory;
	MNThreadRequestListenerFactory* _requestListenerFactoryForDeprecatedRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)handleSingleThreadSummaryRequest_DEPRECATED:(id)arg1 ;
-(unsigned long long)handleBatchThreadSummaryRequest_DEPRECATED:(id)arg1 ;
-(id)handleThreadListRequest:(id)arg1 ;
-(void)cancelRequest_DEPRECATED:(unsigned long long)arg1 ;
-(unsigned long long)handleSingleThreadMessagingDataRequest_DEPRECATED:(id)arg1 ;
-(id)handleBatchThreadSummaryRequest:(id)arg1 ;
-(unsigned long long)handleSecureAndSyncedThreadListRequest_DEPRECATED:(id)arg1 ;
-(unsigned long long)handleBatchSecureAndSyncedThreadRequest_DEPRECATED:(id)arg1 ;
-(id)handleSingleThreadSummaryRequest:(id)arg1 ;
-(id)handleBatchSecureThreadRequest:(id)arg1 ;
-(unsigned long long)handleBatchThreadMessagingDataRequest_DEPRECATED:(id)arg1 ;
-(unsigned long long)_handleSingleThreadSummaryRequest:(id)arg1 listener:(id)arg2 ;
-(id)_cancelableForRequestId:(unsigned long long)arg1 ;
-(unsigned long long)_handleSingleThreadMessagingDataRequest:(id)arg1 listener:(id)arg2 ;
-(unsigned long long)_handleBatchSecureThreadRequest:(id)arg1 listener:(id)arg2 ;
-(unsigned long long)_handleBatchSecureAndSyncedThreadRequest:(id)arg1 listener:(id)arg2 ;
-(unsigned long long)_handleBatchThreadSummaryRequest:(id)arg1 listener:(id)arg2 ;
-(unsigned long long)_handleBatchThreadMessagingDataRequest:(id)arg1 listener:(id)arg2 ;
-(unsigned long long)_handleThreadListRequest:(id)arg1 listener:(id)arg2 ;
-(unsigned long long)_handleSecureAndSyncedThreadListRequest:(id)arg1 listener:(id)arg2 ;
-(void)_broadcastSingleThreadSummaryRequest:(id)arg1 modelRequestId:(unsigned long long)arg2 didUpdatePreliminaryResult:(id)arg3 longOperationDidBegin:(BOOL)arg4 ;
-(void)_broadcastBatchThreadSummaryRequest:(id)arg1 modelRequestId:(unsigned long long)arg2 didUpdatePreliminaryResult:(id)arg3 longOperationDidBegin:(BOOL)arg4 ;
-(void)_broadcastSingleThreadSummaryRequest:(id)arg1 requestId:(unsigned long long)arg2 didSucceedWithResult:(id)arg3 ;
-(void)_broadcastBatchThreadSummaryRequest:(id)arg1 requestId:(unsigned long long)arg2 didSucceedWithResult:(id)arg3 ;
-(void)_broadcastSingleThreadSummaryRequest:(id)arg1 requestId:(unsigned long long)arg2 didFailWithError:(id)arg3 ;
-(void)_broadcastBatchThreadSummaryRequest:(id)arg1 requestId:(unsigned long long)arg2 didFailWithError:(id)arg3 ;
-(void)_broadcastSingleThreadMessagingDataRequest:(id)arg1 modelRequestId:(unsigned long long)arg2 didUpdatePreliminaryResult:(id)arg3 longOperationDidBegin:(BOOL)arg4 ;
-(void)_broadcastBatchThreadMessagingDataRequest:(id)arg1 modelRequestId:(unsigned long long)arg2 didUpdatePreliminaryResult:(id)arg3 longOperationDidBegin:(BOOL)arg4 ;
-(void)_broadcastSingleThreadMessagingDataRequest:(id)arg1 requestId:(unsigned long long)arg2 didSucceedWithResult:(id)arg3 ;
-(void)_broadcastBatchThreadMessagingDataRequest:(id)arg1 requestId:(unsigned long long)arg2 didSucceedWithResult:(id)arg3 ;
-(void)_broadcastSingleThreadMessagingDataRequest:(id)arg1 requestId:(unsigned long long)arg2 didFailWithError:(id)arg3 ;
-(void)_broadcastBatchThreadMessagingDataRequest:(id)arg1 requestId:(unsigned long long)arg2 didFailWithError:(id)arg3 ;
-(unsigned long long)_handleThreadSummaryRequest:(id)arg1 listener:(id)arg2 ;
-(unsigned long long)_handleThreadMessagingDataRequest:(id)arg1 listener:(id)arg2 ;
-(void)batchThreadSummaryRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)batchThreadSummaryRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)batchThreadSummaryRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)batchThreadDataRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)batchThreadDataRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)batchThreadDataRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)threadListRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)threadListRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)threadListRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)jointThreadListRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)jointThreadListRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)jointThreadListRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)batchSecureThreadRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)batchSecureThreadRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)batchSecureThreadRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)batchSecureAndSyncedThreadRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)batchSecureAndSyncedThreadRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)batchSecureAndSyncedThreadRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(id)initWithThreadRequestHandler:(id)arg1 threadListRequestHandler:(id)arg2 jointThreadListRequestHandler:(id)arg3 queue:(id)arg4 ;
-(id)handleSingleThreadMessagingDataRequest:(id)arg1 ;
-(id)handleBatchSecureAndSyncedThreadRequest:(id)arg1 ;
-(id)handleBatchThreadMessagingDataRequest:(id)arg1 ;
-(id)handleSecureAndSyncedThreadListRequest:(id)arg1 ;
-(unsigned long long)handleBatchSecureThreadRequest_DEPRECATED:(id)arg1 ;
-(unsigned long long)handleThreadListRequest_DEPRECATED:(id)arg1 ;
-(void)_cancelRequest:(unsigned long long)arg1 ;
@end

