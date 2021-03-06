/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSHashTable, NSMapTable, NSSet;

@interface FBMPGraph : NSObject <NSCopying> {

	NSHashTable* _inputs;
	NSHashTable* _triggerableInputs;
	NSHashTable* _outputs;
	NSMapTable* _connections;
	NSMapTable* _consumerPortConnections;

}

@property (nonatomic,copy,readonly) NSSet * inputs; 
@property (nonatomic,copy,readonly) NSSet * triggerableInputs; 
@property (nonatomic,copy,readonly) NSSet * outputs; 
-(BOOL)connectInput:(id)arg1 toOutput:(id)arg2 portConnections:(const vector<std::__1::pair<id<FBMPProducerPort>, id<FBMPConsumerPort> >, std::__1::allocator<std::__1::pair<id<FBMPProducerPort>, id<FBMPConsumerPort> > > >*)arg3 ;
-(BOOL)_connectProducerPort:(id)arg1 toConsumerPort:(id)arg2 ;
-(BOOL)_disconnectProducerPort:(id)arg1 fromConsumerPort:(id)arg2 ;
-(BOOL)_hasConnnectionsForInput:(id)arg1 ;
-(id)incomingConnections:(id)arg1 ;
-(vector<std::__1::pair<id<FBMPProducerPort>, id<FBMPConsumerPort> >, std::__1::allocator<std::__1::pair<id<FBMPProducerPort>, id<FBMPConsumerPort> > > >*)connectInput:(id)arg1 toOutput:(id)arg2 ;
-(BOOL)disconnectInput:(id)arg1 fromOutput:(id)arg2 disconnectPortBlock:(/*^block*/id)arg3 ;
-(id)_validateOutputConnections;
-(BOOL)_existValidPath;
-(BOOL)_foundTerminalOutputFromInput:(id)arg1 exploredInputs:(id)arg2 ;
-(NSSet *)triggerableInputs;
-(id)consumerPortsForProducerPort:(id)arg1 ;
-(BOOL)replaceInput:(id)arg1 withInput:(id)arg2 connectPortBlock:(/*^block*/id)arg3 disconnectPortBlock:(/*^block*/id)arg4 ;
-(BOOL)_isConnected:(id)arg1 toOutput:(id)arg2 ;
-(id)outgoingConnections:(id)arg1 ;
-(id)adjacencyList;
-(BOOL)canConnectInput:(id)arg1 toOutput:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validate;
-(NSSet *)outputs;
-(NSSet *)inputs;
@end

