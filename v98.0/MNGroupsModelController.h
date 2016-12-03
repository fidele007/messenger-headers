/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMMQTTPinnedGroupsEventListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, FBMGroupThreadsFetching, FBMPinnedThreadsRestoring, MNAuthenticationManager, MNGroupsModelControllerDelegate;
@class FBMMQTTPinnedGroupsUpdateHandler, FBMPinnedGroupsManager, MNThreadStore, MNPinnedGroupsEditManager, MNUserStore, NSOrderedSet, FBMobileConfigContextManager, NSArray, NSString;

@interface MNGroupsModelController : NSObject <FBMMQTTPinnedGroupsEventListener, FBClassProvidable> {

	FBMMQTTPinnedGroupsUpdateHandler* _pinnedGroupsUpdateHandler;
	FBMPinnedGroupsManager* _pinnedGroupsManager;
	MNThreadStore* _threadStore;
	MNPinnedGroupsEditManager* _editGroupsManager;
	id<FBProvider> _fetcherProvider;
	id<FBMGroupThreadsFetching> _fetcher;
	id<FBMPinnedThreadsRestoring> _backgroundRestorer;
	MNUserStore* _userStore;
	id<MNAuthenticationManager> _authManager;
	unsigned long long _userRequestId;
	BOOL _hasFetchedThreads;
	BOOL _hasStartedFetchingMoreThreads;
	NSOrderedSet* _groupThreadKeysInView;
	FBMobileConfigContextManager* _configManager;
	BOOL _hasLoadedGroupThreadViewModels;
	id<MNGroupsModelControllerDelegate> _delegate;
	NSArray* _groupThreadViewModels;

}

@property (assign,nonatomic,__weak) id<MNGroupsModelControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupThreadViewModels;                           //@synthesize groupThreadViewModels=_groupThreadViewModels - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedGroupThreadViewModels;                            //@synthesize hasLoadedGroupThreadViewModels=_hasLoadedGroupThreadViewModels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_fetchGroups;
-(void)_beginLoadViewModelsForThreadKeys;
-(id)_moreThreadsFetcher;
-(BOOL)canFetchMoreThreadViewModels;
-(void)_fetchMoreGroups;
-(void)_didFetchGroupThreads:(id)arg1 updateTime:(long long)arg2 ;
-(void)_didFailToFetchPinnedThreads:(id)arg1 ;
-(void)_didFetchMoreGroupThreads:(id)arg1 updateTime:(long long)arg2 ;
-(void)_handleFetchedGroupThreads:(id)arg1 updateTime:(long long)arg2 ;
-(void)_handlePinnedThreadsRestorerSuccessWithThreads:(id)arg1 ;
-(void)_handlePinnedThreadsRestorerFailureWithError:(id)arg1 ;
-(void)_completeViewModelPreparationWithThreads:(id)arg1 users:(id)arg2 ;
-(void)_fetchUsersAndBuildViewModelsWithSummaries:(id)arg1 ;
-(void)_handleUserFetchError:(id)arg1 ;
-(void)didReceivePinnedGroupsUpdate:(id)arg1 ;
-(void)beginReloadGroupThreadViewModels;
-(void)beginReloadGroupThreadViewModelForThreadKey:(id)arg1 ;
-(void)fetchMoreGroupThreadViewModelsIfRequired;
-(void)removeGroupWithKey:(id)arg1 ;
-(void)moveGroupWithKey:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(NSArray *)groupThreadViewModels;
-(BOOL)hasLoadedGroupThreadViewModels;
-(void)setDelegate:(id<MNGroupsModelControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGroupsModelControllerDelegate>)delegate;
@end

