/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryBlockRenderStackDelegate, FBRichStoryBlockRenderStackDataSource, FBRichStoryBlockRenderableGenerator, OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSMutableOrderedSet, BFExecutor, NSArray;

@interface FBRichStoryBlockRenderStack : NSObject {

	mutex _accessLock;
	id<FBRichStoryBlockRenderStackDelegate> _delegate;
	id<FBRichStoryBlockRenderStackDataSource> _dataSource;
	id<FBRichStoryBlockRenderableGenerator> _generator;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NSMutableOrderedSet* _pendingBlocksSet;
	BFExecutor* _renderExecutor;

}

@property (nonatomic,readonly) NSMutableOrderedSet * pendingBlocksSet;                                   //@synthesize pendingBlocksSet=_pendingBlocksSet - In the implementation block
@property (nonatomic,readonly) BFExecutor * renderExecutor;                                              //@synthesize renderExecutor=_renderExecutor - In the implementation block
@property (nonatomic,__weak,readonly) id<FBRichStoryBlockRenderStackDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<FBRichStoryBlockRenderStackDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<FBRichStoryBlockRenderableGenerator> generator;                 //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> renderQueue;                                 //@synthesize renderQueue=_renderQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingBlocks; 
-(NSMutableOrderedSet *)pendingBlocksSet;
-(id)_generateNextStoryBlock;
-(id)_getNextPendingStoryBlock;
-(BFExecutor *)renderExecutor;
-(id)initWithGenerator:(id)arg1 renderQueue:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4 ;
-(void)generateRenderableForStoryBlock:(id)arg1 ;
-(void)cancelRenderableGenerationForStoryBlock:(id)arg1 ;
-(id<FBRichStoryBlockRenderStackDataSource>)dataSource;
-(id<FBRichStoryBlockRenderStackDelegate>)delegate;
-(id<FBRichStoryBlockRenderableGenerator>)generator;
-(NSObject*<OS_dispatch_queue>)renderQueue;
-(NSArray *)pendingBlocks;
@end

