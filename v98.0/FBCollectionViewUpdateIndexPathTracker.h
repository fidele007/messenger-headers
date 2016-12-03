/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCollectionViewUpdateListener.h>

@protocol FBCollectionViewUpdateTrackingIndexPathProvider;
@class NSIndexPath, FBCollectionViewUpdateIndexPathListenerAnnouncer, NSString;

@interface FBCollectionViewUpdateIndexPathTracker : NSObject <FBCollectionViewUpdateListener> {

	NSIndexPath* _referenceIndexPath;
	long long _newSection;
	long long _newItem;
	BOOL _validChange;
	FBCollectionViewUpdateIndexPathListenerAnnouncer* _listenerAnnouncer;
	id<FBCollectionViewUpdateTrackingIndexPathProvider> _trackingIndexPathProvider;

}

@property (nonatomic,readonly) FBCollectionViewUpdateIndexPathListenerAnnouncer * listenerAnnouncer;                            //@synthesize listenerAnnouncer=_listenerAnnouncer - In the implementation block
@property (assign,nonatomic,__weak) id<FBCollectionViewUpdateTrackingIndexPathProvider> trackingIndexPathProvider;              //@synthesize trackingIndexPathProvider=_trackingIndexPathProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBCollectionViewUpdateIndexPathListenerAnnouncer *)listenerAnnouncer;
-(id)_indexPathToTrackForCollectionView:(id)arg1 ;
-(void)saveStateBeforeUpdateForCollectionView:(id)arg1 ;
-(void)announceMovementAfterUpdateForCollectionView:(id)arg1 ;
-(void)resetStateAfterUpdateForCollectionView:(id)arg1 ;
-(void)collectionViewWillBeginSingleUpdate:(id)arg1 ;
-(void)collectionViewWillEndSingleUpdate:(id)arg1 ;
-(void)collectionViewDidEndSingleUpdate:(id)arg1 ;
-(void)collectionView:(id)arg1 willInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 willDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 willReloadItemsAtIndexPaths:(id)arg2 ;
-(void)collectionViewWillBeginUpdates:(id)arg1 ;
-(void)collectionViewWillEndUpdates:(id)arg1 ;
-(void)collectionViewDidEndUpdates:(id)arg1 ;
-(id<FBCollectionViewUpdateTrackingIndexPathProvider>)trackingIndexPathProvider;
-(void)setTrackingIndexPathProvider:(id<FBCollectionViewUpdateTrackingIndexPathProvider>)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
