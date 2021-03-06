/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBScenePath;


@protocol FBGraphQLConnectionSyncStoreProtocol <NSObject>
@property (nonatomic,retain) FBScenePath * scenePath; 
@required
-(unsigned long long)indexOfNode:(id)arg1;
-(void)applyFilter:(id)arg1;
-(unsigned long long)countOfNodes;
-(void)syncNext:(/*^block*/id)arg1;
-(BOOL)nodeIsSynced:(id)arg1;
-(BOOL)canSyncMoreNext;
-(BOOL)canSyncMorePrevious;
-(void)syncPrevious:(/*^block*/id)arg1;
-(void)forceRefresh:(/*^block*/id)arg1;
-(void)updateNodes:(id)arg1;
-(void)setScenePath:(id)arg1;
-(FBScenePath *)scenePath;
-(id)allNodes;
-(void)cancelSync;
-(BOOL)isSyncing;
-(void)addListener:(id)arg1;
-(void)removeListener:(id)arg1;
-(id)nodeAtIndex:(unsigned long long)arg1;

@end

