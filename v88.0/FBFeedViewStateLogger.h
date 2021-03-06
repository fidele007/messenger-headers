/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCollectionViewUpdateListener.h>

@protocol FBFeedViewStateLoggerDataSourceInfoProviding;
@class FBFeedShimmeringStoriesHelper, FBFeedViewStateInfo, NSMutableArray, NSString;

@interface FBFeedViewStateLogger : NSObject <FBCollectionViewUpdateListener> {

	id<FBFeedViewStateLoggerDataSourceInfoProviding> _feedDataSource;
	FBFeedShimmeringStoriesHelper* _shimmeringStoriesHelper;
	FBFeedViewStateInfo* _beforeUpdateInfo;
	NSMutableArray* _deletes;
	NSMutableArray* _inserts;
	NSMutableArray* _reloads;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)enabledForSession:(id)arg1 feedDataSource:(id)arg2 ;
-(void)saveStateBeforeUpdateForCollectionView:(id)arg1 ;
-(void)logStateAfterUpdateForCollectionView:(id)arg1 ;
-(void)collectionViewWillBeginSingleUpdate:(id)arg1 ;
-(void)collectionViewDidEndSingleUpdate:(id)arg1 ;
-(void)collectionView:(id)arg1 willInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 willDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 willReloadItemsAtIndexPaths:(id)arg2 ;
-(void)collectionViewWillBeginUpdates:(id)arg1 ;
-(void)collectionViewDidEndUpdates:(id)arg1 ;
-(id)initWithFeedDataSource:(id)arg1 shimmeringStoriesHelper:(id)arg2 ;
@end

