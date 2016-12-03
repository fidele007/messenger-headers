/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionPersistenceWriter.h>
#import <Messenger/FBGraphQLConnectionPersistenceIdleDetectorListener.h>

@protocol OS_dispatch_source;
@class FBGraphQLConnectionStorePersistentPageLoader, NSString, NSObject, FBGraphQLConnectionStoreChunk, FBGraphQLConnectionStorePersistenceCoordinatorListenerAnnouncer, FBGraphQLConnectionStore, FBGraphQLConnectionPersistenceBehavior;

@interface FBGraphQLConnectionStorePersistenceCoordinator : NSObject <FBGraphQLConnectionPersistenceWriter, FBGraphQLConnectionPersistenceIdleDetectorListener> {

	BOOL _isLinkedWithStore;
	BOOL _hasLoadedRemainingEdges;
	FBGraphQLConnectionStorePersistentPageLoader* _persistentPageLoader;
	NSString* _diskCacheKey;
	unsigned long long _persistenceEdgeCountLimit;
	NSObject*<OS_dispatch_source> _coalescenceTimer;
	FBGraphQLConnectionStoreChunk* _pendingChunk;
	/*^block*/id _restoredEdgeFilter;
	long long _persistenceStrategy;
	FBGraphQLConnectionStorePersistenceCoordinatorListenerAnnouncer* _announcer;
	FBGraphQLConnectionStore* _store;
	FBGraphQLConnectionPersistenceBehavior* _behavior;

}

@property (nonatomic,readonly) FBGraphQLConnectionPersistenceBehavior * behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDiskCache:(id)arg1 uniqueIdentifier:(id)arg2 persistedEdgeCountLimit:(unsigned long long)arg3 restoredEdgeFilter:(/*^block*/id)arg4 persistenceDelay:(double)arg5 persistenceStrategy:(long long)arg6 ;
-(void)linkWithAndInitializeStateForStore:(id)arg1 ;
-(void)persistenceBehaviorShouldPersistPage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)immediatelyPersistPendingStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)graphQLConnectionPersistenceIdleDetectorDidDetectIdleState:(id)arg1 ;
-(void)fetchPageType:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(FBGraphQLConnectionPersistenceBehavior *)behavior;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

