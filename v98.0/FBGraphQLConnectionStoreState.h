/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLConnectionStateInterface.h>

@class NSArray, NSString;

@interface FBGraphQLConnectionStoreState : NSObject <FBGraphQLConnectionStateInterface> {

	NSArray* _chunks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headConnectionLocation;
-(id)tailConnectionLocation;
-(id)edgesInChunkAtIndex:(unsigned long long)arg1 ;
-(id)edgesAtIndexPaths:(id)arg1 ;
-(unsigned long long)numberOfChunks;
-(void)enumerateChunksUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithChunks:(id)arg1 ;
-(id)edgesInAllChunks;
-(void)enumerateEdgesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesInChunk:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initialConnectionLocation;
-(id)chunkAtIndex:(unsigned long long)arg1 ;
-(id)tailLocation;
-(id)headLocation;
-(id)stateByRemovingChunksAtIndexes:(id)arg1 ;
-(id)connectionChunkAtIndex:(unsigned long long)arg1 ;
-(void)enumerateConnectionChunksUsingBlock:(/*^block*/id)arg1 ;
-(id)connectionStateByRemovingChunksAtIndexes:(id)arg1 ;
-(void)enumerateEdgesAtIndexPaths:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)stateByPrependingChunk:(id)arg1 ;
-(id)stateByReplacingChunksInRange:(NSRange)arg1 withChunk:(id)arg2 ;
-(id)stateByAppendingChunk:(id)arg1 ;
-(id)stateByAddingEdges:(id)arg1 atIndexPaths:(id)arg2 ;
-(unsigned long long)indexOfChunkPassingTest:(/*^block*/id)arg1 ;
-(id)stateByInsertingChunk:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)stateByAddingEdge:(id)arg1 atIndexPath:(id)arg2 ;
-(id)stateByUpdatingEdges:(id)arg1 atIndexPaths:(id)arg2 ;
-(id)stateByRemovingEdgesAtIndexPaths:(id)arg1 ;
-(NSString *)description;
-(id)initialLocation;
@end

