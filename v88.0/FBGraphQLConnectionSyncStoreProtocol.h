/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBScenePath;


@protocol FBGraphQLConnectionSyncStoreProtocol <NSObject>
@property (nonatomic,retain) FBScenePath * scenePath; 
@required
-(void)setScenePath:(id)arg1;
-(unsigned long long)countOfNodes;
-(FBScenePath *)scenePath;
-(void)applyFilter:(id)arg1;
-(unsigned long long)indexOfNode:(id)arg1;
-(void)syncNext:(/*^block*/id)arg1;
-(BOOL)nodeIsSynced:(id)arg1;
-(BOOL)canSyncMoreNext;
-(BOOL)canSyncMorePrevious;
-(void)syncPrevious:(/*^block*/id)arg1;
-(void)forceRefresh:(/*^block*/id)arg1;
-(id)allNodes;
-(void)updateNodes:(id)arg1;
-(void)cancelSync;
-(BOOL)isSyncing;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;
-(id)nodeAtIndex:(unsigned long long)arg1;

@end

