/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Messenger/FBGraphQLConnectionStoreListener.h>
#import <Messenger/FBGraphQLConnectionControllerListener.h>
#import <Messenger/FBComponentTableViewDataSourceSelectionEventListener.h>
#import <Messenger/FBComponentTableViewDataSourceSectionHeaderHandler.h>
#import <Messenger/FBStreamListener.h>
#import <Messenger/FBSavedStreamPagingInfoDeciderDelegate.h>
#import <Messenger/FBComponentTableViewDataSourceEventListener.h>

@protocol FBGraphQLConnectionInterface, FBSavedItemsGraphQLConnectionStoreAdapterDelegate;
@class FBStream, NSMutableArray, NSMutableDictionary, NSMutableSet, FBComponentTableViewDataSource, FBSaveDashboardContext, FBUserPreferences, FBSavedStreamPagingInfoDecider, FBSavedDashboardStoreManager, FBMemTimelineAppCollectionItem, FBSavedListStatefulWriteInterface, FBSavedListStatefulWriteInterfaceHelper, UITableView, NSString;

@interface FBSavedItemsGraphQLConnectionStoreAdapter : NSObject <FBComponentTableViewDataSourceCellConfigProvider, FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener, FBComponentTableViewDataSourceSelectionEventListener, FBComponentTableViewDataSourceSectionHeaderHandler, FBStreamListener, FBSavedStreamPagingInfoDeciderDelegate, FBComponentTableViewDataSourceEventListener> {

	FBStream* _stream;
	NSMutableArray* _groupNameArray;
	NSMutableDictionary* _groupNameToSectionIndexMap;
	NSMutableSet* _itemSet;
	id<FBGraphQLConnectionInterface> _connection;
	FBComponentTableViewDataSource* _dataSource;
	FBSaveDashboardContext* _saveContext;
	FBUserPreferences* _preferences;
	BOOL _didLoadFromCache;
	BOOL _shouldClearCache;
	FBSavedStreamPagingInfoDecider* _pagingInfoDecider;
	FBSavedDashboardStoreManager* _storeManager;
	FBMemTimelineAppCollectionItem* _currentPostConsumeItem;
	BOOL _isChronological;
	FBSavedListStatefulWriteInterface* _statefulWriteInterface;
	FBSavedListStatefulWriteInterfaceHelper* _statefulWriteInterfaceHelper;
	BOOL _didLoadInitalEdges;
	BOOL _didReachEndOfEdges;
	id<FBSavedItemsGraphQLConnectionStoreAdapterDelegate> _delegate;
	UITableView* _tableView;
	NSString* _notifId;
	NSString* _filter;

}

@property (nonatomic,copy) NSString * filter;                                                                    //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL didLoadInitalEdges;                                                            //@synthesize didLoadInitalEdges=_didLoadInitalEdges - In the implementation block
@property (assign,nonatomic) BOOL didReachEndOfEdges;                                                            //@synthesize didReachEndOfEdges=_didReachEndOfEdges - In the implementation block
@property (assign,nonatomic,__weak) id<FBSavedItemsGraphQLConnectionStoreAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) FBComponentTableViewDataSource * dataSource;                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL isStreamLoading; 
@property (assign,nonatomic) BOOL streamEnabled; 
@property (nonatomic,copy) NSString * notifId;                                                                   //@synthesize notifId=_notifId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadTail;
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 ;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(double)_timespanSinceCacheLoad;
-(BOOL)_connectionNeedsResetDueToRemovedItem;
-(void)_bootstrapConnectionCache:(id)arg1 ;
-(BOOL)_removeItemFromNotificationItems:(id)arg1 ;
-(void)_removeItemsFromDataSource:(id)arg1 ;
-(void)_recordRemovedItemTimeForSection:(id)arg1 ;
-(long long)_dataSourceNumberOfSections;
-(unsigned long long)_dataSourceEnqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2 ;
-(void)_resetItemAndSectionTracking;
-(void)_didFinishLoading:(unsigned long long)arg1 withEdges:(id)arg2 ;
-(BOOL)_containsItem:(id)arg1 ;
-(id)_indexPathForItem:(id)arg1 ;
-(long long)_dataSourceNumberOfObjectsInSection:(long long)arg1 ;
-(id)_dataSourceObjectAtIndexPath:(id)arg1 ;
-(BOOL)_isNotificationItem:(id)arg1 ;
-(void)setDidLoadInitalEdges:(BOOL)arg1 ;
-(void)setDidReachEndOfEdges:(BOOL)arg1 ;
-(id)_getDataModelsForNotificationSetType:(id)arg1 ;
-(void)_didFinishChronologicalLoadOfType:(unsigned long long)arg1 withEdges:(id)arg2 ;
-(void)_updateCacheTimeIfNeededForConnection;
-(long long)_sectionForGroup:(id)arg1 ;
-(long long)_addGroup:(id)arg1 ;
-(long long)_addGroup:(id)arg1 atIndex:(long long)arg2 ;
-(void)_updateDataModel:(id)arg1 withViewedState:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_groupNameForSectionIndex:(long long)arg1 ;
-(void)_replaceDataSourceItemsWithEdges:(id)arg1 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)dataSource:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)dataSource:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)pagingInfoForDecider:(id)arg1 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(id)initWithFilter:(id)arg1 componentProvider:(Class)arg2 toolbox:(id)arg3 scenePath:(id)arg4 isChronological:(BOOL)arg5 ;
-(long long)numberOfItemsInFilter;
-(void)loadHeadWithCacheClear:(BOOL)arg1 ;
-(BOOL)streamEnabled;
-(void)setStreamEnabled:(BOOL)arg1 ;
-(BOOL)isStreamLoading;
-(void)triggerPostConsumeForItem:(id)arg1 ;
-(void)updateItem:(id)arg1 withViewedState:(id)arg2 ;
-(BOOL)didLoadInitalEdges;
-(BOOL)didReachEndOfEdges;
-(NSString *)notifId;
-(void)setNotifId:(NSString *)arg1 ;
-(void)setDelegate:(id<FBSavedItemsGraphQLConnectionStoreAdapterDelegate>)arg1 ;
-(void)dealloc;
-(FBComponentTableViewDataSource *)dataSource;
-(id<FBSavedItemsGraphQLConnectionStoreAdapterDelegate>)delegate;
-(void)setFilter:(NSString *)arg1 ;
-(void)removeItem:(id)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_addItem:(id)arg1 ;
-(void)_removeItem:(id)arg1 ;
-(NSString *)filter;
@end

