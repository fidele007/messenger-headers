/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MNThreadRequestListener;
@class NSObject, MNThreadRequestCoordinator, MNRequestHandlerChainManager;

@interface MNThreadStore : NSObject {

	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	id<MNThreadRequestListener> _responderChainDispatcher;
	MNThreadRequestCoordinator* _requestCoordinator;
	MNRequestHandlerChainManager* _requestHandlerChainManager;

}
-(id)initWithHandlerChainManager:(id)arg1 ;
-(unsigned long long)handleBatchThreadSummaryRequest_DEPRECATED:(id)arg1 ;
-(id)handleSingleSyncedThreadRequest:(id)arg1 ;
-(id)handleThreadListRequest:(id)arg1 ;
-(void)startWithQueue:(id)arg1 ;
-(void)cancelRequest_DEPRECATED:(unsigned long long)arg1 ;
-(unsigned long long)handleSingleThreadSummaryRequest_DEPRECATED:(id)arg1 ;
-(unsigned long long)handleSingleThreadMessagingDataRequest_DEPRECATED:(id)arg1 ;
-(id)handleBatchThreadSummaryRequest:(id)arg1 ;
-(unsigned long long)handleSecureAndSyncedThreadListRequest_DEPRECATED:(id)arg1 ;
-(unsigned long long)handleBatchSecureAndSyncedThreadRequest_DEPRECATED:(id)arg1 ;
-(id)handleSingleThreadSummaryRequest:(id)arg1 ;
-(unsigned long long)handleBatchThreadMessagingDataRequest_DEPRECATED:(id)arg1 ;
-(id)handleBatchSecureThreadRequest:(id)arg1 ;
-(id)handleBatchSecureAndSyncedThreadRequest:(id)arg1 ;
-(id)handleSecureAndSyncedThreadListRequest:(id)arg1 ;
-(unsigned long long)handleBatchSecureThreadRequest_DEPRECATED:(id)arg1 ;
-(unsigned long long)handleThreadListRequest_DEPRECATED:(id)arg1 ;
-(void)_cleanUpStartedState;
-(id)handleBatchSyncedThreadRequest:(id)arg1 ;
-(void)dealloc;
-(void)stop;
@end

