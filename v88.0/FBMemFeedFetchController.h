/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLConnectionControllerListener.h>
#import <Messenger/FBStreamListener.h>
#import <Messenger/FBGraphQLConnectionControllerLoadListener.h>
#import <Messenger/FBGraphQLConnectionControllerNetworkListener.h>
#import <Messenger/FBInvalidating.h>

@protocol FBMemFeedFetchControllerDelegate;
@class FBGraphQLConnectionController, FBFlattenedArrayController, FBMemFeedFetchControllerListenerAnnouncer, FBFeedFetchControllerQueue, NSString;

@interface FBMemFeedFetchController : NSObject <FBGraphQLConnectionControllerListener, FBStreamListener, FBGraphQLConnectionControllerLoadListener, FBGraphQLConnectionControllerNetworkListener, FBInvalidating> {

	FBGraphQLConnectionController* _connection;
	FBFlattenedArrayController* _models;
	BOOL _isBootstrapped;
	BOOL _shouldShowHeadStreamLoadGap;
	FBMemFeedFetchControllerListenerAnnouncer* _announcer;
	FBFeedFetchControllerQueue* _fetchControllerQueue;
	BOOL _valid;
	BOOL _isRestoringPersistedState;
	id<FBMemFeedFetchControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMemFeedFetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isRestoringPersistedState;                                  //@synthesize isRestoringPersistedState=_isRestoringPersistedState - In the implementation block
@property (assign,nonatomic) BOOL allowUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                       //@synthesize valid=_valid - In the implementation block
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didReceiveEdgesFromNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didLoadEdgesFromNetworkLoad:(id)arg2 ;
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 ;
-(void)stream:(id)arg1 didCancelLoading:(unsigned long long)arg2 requestAnalyticsUUID:(id)arg3 ;
-(void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)_bootstrap;
-(BOOL)_shouldShowLoadingGapFromStreamContext:(id)arg1 ;
-(void)_emitChange:(vector<FBFlattenedArrayControllerChange, std::__1::allocator<FBFlattenedArrayControllerChange> >*)arg1 shouldShowLoadingGap:(BOOL)arg2 source:(id)arg3 ;
-(void)_cleanUpHeadStreamLoadInCaseOfFailure:(unsigned long long)arg1 ;
-(id)initWithConnection:(id)arg1 graphQLPagedDownloadingAnnouncingInterface:(id)arg2 ;
-(BOOL)allowUpdates;
-(void)setAllowUpdates:(BOOL)arg1 ;
-(unsigned long long)numberOfEdges;
-(id)edgeAtIndex:(unsigned long long)arg1 ;
-(BOOL)anyEdgeInIndexesWouldBeDeletedOnPruning:(id)arg1 ;
-(void)beginTrackingStore;
-(BOOL)performFetchForNextPage;
-(BOOL)isRestoringPersistedState;
-(void)setDelegate:(id<FBMemFeedFetchControllerDelegate>)arg1 ;
-(id<FBMemFeedFetchControllerDelegate>)delegate;
-(void)invalidate;
-(BOOL)isValid;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
