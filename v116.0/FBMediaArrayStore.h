/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionSyncStoreProtocol.h>

@class FBScenePath, FBGraphQLConnectionSyncStoreListenerAnnouncer, FBGraphQLConsistentLookasideCache, NSMutableArray, FBMediaSetStoreManager, FBGraphQLMemResponseController, NSString;

@interface FBMediaArrayStore : NSObject <FBGraphQLConnectionSyncStoreProtocol> {

	FBGraphQLConnectionSyncStoreListenerAnnouncer* _announcer;
	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;
	BOOL _hasSynced;
	NSMutableArray* _mediaObjectObservationHandles;
	FBMediaSetStoreManager* _mediaStoreManager;
	long long _networkRequestThresholdInSeconds;
	FBGraphQLMemResponseController* _memResponseController;
	id _requestID;
	FBScenePath* _scenePath;
	NSMutableArray* _media;

}

@property (nonatomic,copy) NSMutableArray * media;                  //@synthesize media=_media - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBScenePath * scenePath;               //@synthesize scenePath=_scenePath - In the implementation block
-(unsigned long long)indexOfNode:(id)arg1 ;
-(void)applyFilter:(id)arg1 ;
-(unsigned long long)countOfNodes;
-(void)syncNext:(/*^block*/id)arg1 ;
-(BOOL)nodeIsSynced:(id)arg1 ;
-(BOOL)canSyncMoreNext;
-(void)_observeMedia;
-(void)_unobserveMedia;
-(void)_sync:(/*^block*/id)arg1 ;
-(id)_parseResponse:(id)arg1 forPhotoIDs:(id)arg2 ;
-(void)_updateMedia:(id)arg1 ;
-(void)_didUpdateMediaObject:(id)arg1 ;
-(id)_photoIDsForMedia:(id)arg1 ;
-(void)_handleResponse:(id)arg1 photoIDs:(id)arg2 requestFinished:(BOOL)arg3 error:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)canSyncMorePrevious;
-(void)syncPrevious:(/*^block*/id)arg1 ;
-(void)forceRefresh:(/*^block*/id)arg1 ;
-(void)updateNodes:(id)arg1 ;
-(id)initWithMedia:(id)arg1 consistentLookasideCache:(id)arg2 mediaSetStoreManager:(id)arg3 memResponseController:(id)arg4 networkRequestThresholdInSeconds:(long long)arg5 ;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(FBScenePath *)scenePath;
-(id)allNodes;
-(void)dealloc;
-(void)invalidate;
-(void)cancelSync;
-(BOOL)isSyncing;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSMutableArray *)media;
-(void)setMedia:(NSMutableArray *)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
@end

