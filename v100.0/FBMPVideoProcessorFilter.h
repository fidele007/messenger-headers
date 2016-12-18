/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMPFilter.h>
#import <Messenger/FBMPPermissiveOutput.h>
#import <Messenger/FBMPGraphMoveTrackingFilter.h>
#import <Messenger/FBMPFilterToVideoEditsFilterConfig.h>

@protocol OS_dispatch_queue, FBMPConsumerPort;
@class FBVideoProcessorFilterConfig, FBMPBaseConsumerPort, FBMPBaseProducerPort, NSObject, FBVideoProcessor, NSString;

@interface FBMPVideoProcessorFilter : NSObject <FBMPFilter, FBMPPermissiveOutput, FBMPGraphMoveTrackingFilter, FBMPFilterToVideoEditsFilterConfig> {

	FBVideoProcessorFilterConfig* _config;
	unsigned long long _filterIndex;
	FBMPBaseConsumerPort* _videoDataPort;
	FBMPBaseProducerPort* _producerPort;
	mutex _mutex;
	NSObject*<OS_dispatch_queue> _processorQueue;
	FBVideoProcessor* _processor;
	/*^block*/id _consumerCallback;
	id<FBMPConsumerPort> _filterCommandConsumerPort;

}

@property (nonatomic,readonly) id<FBMPConsumerPort> filterCommandConsumerPort;              //@synthesize filterCommandConsumerPort=_filterCommandConsumerPort - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)consumerPorts;
-(id)videoEditsFilterConfig;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(id)producerPorts;
-(id)initWithFilterConfig:(id)arg1 consumeCallback:(/*^block*/id)arg2 ;
-(void)sendFilterCommands:(id)arg1 ;
-(id)initWithFilterConfig:(id)arg1 ;
-(BOOL)allowsConnectionsWithConsumerPortMapping:(id)arg1 ;
-(void)processVideoData:(id)arg1 metadata:(FBMPDataMetadata)arg2 ;
-(void)processFilterCommandData:(id)arg1 ;
-(void)processFilterData:(id)arg1 metadata:(FBMPDataMetadata)arg2 ;
-(void)_performOnProcessorQueue:(/*^block*/id)arg1 ;
-(void)willDisconnectToMove;
-(void)didReconnectToMove;
-(id<FBMPConsumerPort>)filterCommandConsumerPort;
@end
