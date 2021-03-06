/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBMPSessionErrorDelegate;
#import <Messenger/Messenger-Structs.h>
@class FBMPGraph, NSObject, FBMPSessionContext;

@interface FBMPSession : NSObject {

	FBMPSessionConfig _config;
	FBMPGraph* _graph;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	atomic<bool> _running;
	unordered_map<id, FBMPInternalFilterPerf, FBMPHashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<std::__1::pair<const id, FBMPInternalFilterPerf> > >* _filterPerf;
	FBMPSessionContext* _context;
	id<FBMPSessionErrorDelegate> _errorDelegate;

}

@property (nonatomic,readonly) FBMPSessionContext * sessionContext; 
-(void)replaceInput:(id)arg1 withInput:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectInput:(id)arg1 toOutput:(id)arg2 completion:(/*^block*/id)arg3 ;
-(FBMPSessionContext *)sessionContext;
-(void)disconnectInput:(id)arg1 fromOutput:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithWorkQueue:(id)arg1 callbackQueue:(id)arg2 errorDelegate:(id)arg3 config:(FBMPSessionConfig)arg4 ;
-(void)performOperations:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)filterPerformanceWithCompletion:(/*^block*/id)arg1 ;
-(id)_connect:(id)arg1 ;
-(void)_connectedProducerPort:(id)arg1 ;
-(id)_connectInput:(id)arg1 toOutput:(id)arg2 connectPortBlock:(/*^block*/id)arg3 ;
-(id)_connectInput:(id)arg1 toOutput:(id)arg2 producerPorts:(id)arg3 consumerPorts:(id)arg4 connectPortBlock:(/*^block*/id)arg5 ;
-(void)_disconnectedProducerPort:(id)arg1 ;
-(id)_disconnectInput:(id)arg1 fromOutput:(id)arg2 disconnectPortBlock:(/*^block*/id)arg3 ;
-(BOOL)_disconnectInput:(id)arg1 fromOutput:(id)arg2 producerPorts:(id)arg3 consumerPorts:(id)arg4 ;
-(id)_replaceInput:(id)arg1 withInput:(id)arg2 connectPortBlock:(/*^block*/id)arg3 disconnectPortBlock:(/*^block*/id)arg4 ;
-(id)_removeInput:(id)arg1 disconnectPortBlock:(/*^block*/id)arg2 ;
-(id)_performOperations:(id)arg1 ;
-(BOOL)_connectInput:(id)arg1 toOutput:(id)arg2 ;
-(/*^block*/id)_getProduceBlockForProducerPort:(id)arg1 ;
-(void)_consumeValue:(Either<NSError *, id<FBMPData> >)arg1 metadata:(FBMPDataMetadata)arg2 fromProducerPort:(id)arg3 ;
-(id)_consumerPortsForProducerPort:(id)arg1 stopTracking:(BOOL)arg2 blockStartTime:(unsigned long long)arg3 ;
-(void)_updatePerfForPortConsumerPort:(id)arg1 currentTime:(unsigned long long)arg2 blockStartTime:(unsigned long long)arg3 ;
-(id)_adjacencyList;
-(void)connectInput:(id)arg1 toOutput:(id)arg2 producerPorts:(id)arg3 consumerPorts:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)disconnectInput:(id)arg1 fromOutput:(id)arg2 producerPorts:(id)arg3 consumerPorts:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_disconnectProducerPort:(id)arg1 fromConsumerPort:(id)arg2 disconnectPortBlock:(/*^block*/id)arg3 ;
-(void)adjacencyList:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)isRunning;
-(void)start:(/*^block*/id)arg1 ;
-(void)stop:(/*^block*/id)arg1 ;
@end

