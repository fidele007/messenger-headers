/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSArray, FBMemoizedOperation, FBMagicStoryMemoizedCollectionIndexData;

@interface FBMagicStoryCollectionIndex : NSObject {

	FBUserSession* _session;
	/*^block*/id _mergeAlgorithmBlock;
	NSArray* _filteringProcessors;
	NSArray* _finalizingProcessors;
	NSArray* _classifierProcessors;
	FBMemoizedOperation* _currentOperation;
	BOOL _updating;
	BOOL _needsUpdate;
	double _mostRecentGenerationStartTime;
	double _mostRecentGenerationFinishedTime;
	BOOL _collectionsReady;
	FBMagicStoryMemoizedCollectionIndexData* _collectionIndexData;

}

@property (assign,nonatomic) BOOL collectionsReady;                                                        //@synthesize collectionsReady=_collectionsReady - In the implementation block
@property (nonatomic,readonly) FBMagicStoryMemoizedCollectionIndexData * collectionIndexData;              //@synthesize collectionIndexData=_collectionIndexData - In the implementation block
+(void)_enumerateCollectionsFromDateSortedFbAssets:(id)arg1 withMergeAlgorithm:(/*^block*/id)arg2 usingEnumerationBlock:(/*^block*/id)arg3 ;
+(void)fetchMemoizedCollectionIndexDataWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FBMagicStoryMemoizedCollectionIndexData *)collectionIndexData;
-(void)indexAssetsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_memoizedCollectionGenerationOperation;
-(void)_indexAssetsAgainIfNeeded;
-(void)_finalizeAndAddCollection:(id)arg1 withLatestAssetUrl:(id)arg2 toOriginalCache:(id)arg3 andClassifiedCache:(id)arg4 ;
-(void)_indexUnsortedAssets:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)analyticsDictionaryForMostRecentGeneration;
-(BOOL)collectionsReady;
-(void)setCollectionsReady:(BOOL)arg1 ;
-(void)setNeedsUpdate;
-(id)initWithSession:(id)arg1 ;
@end
