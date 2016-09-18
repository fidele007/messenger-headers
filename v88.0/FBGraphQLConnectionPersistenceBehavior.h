/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionStoreListener.h>

@protocol FBGraphQLConnectionPersistenceWriter, OS_dispatch_source;
@class NSObject, FBGraphQLConnectionStoreChunk, NSString;

@interface FBGraphQLConnectionPersistenceBehavior : NSObject <FBGraphQLConnectionStoreListener> {

	id<FBGraphQLConnectionPersistenceWriter> _writer;
	BOOL _includeUpdates;
	unsigned long long _pageFormat;
	double _persistenceDelay;
	unsigned long long _persistenceEdgeCountLimit;
	NSObject*<OS_dispatch_source> _coalescenceTimer;
	FBGraphQLConnectionStoreChunk* _pendingChunk;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)_persistPendingStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_removeCoalescenceTimer;
-(id)_generatePagesFromPendingChunk;
-(void)_schedulePersistenceForState:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_containsIndexPathWithinPersistenceLimit:(id)arg1 ;
-(id)initWithWriter:(id)arg1 persistenceDelay:(double)arg2 persistedEdgeCountLimit:(unsigned long long)arg3 includeUpdates:(BOOL)arg4 pageFormat:(unsigned long long)arg5 ;
-(void)immediatelyPersistPendingStateWithCompletionHandler:(/*^block*/id)arg1 ;
@end
