/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSideFeedUnitController.h>
#import <Messenger/FBSideFeedUnitCollectionViewControllerDelegate.h>
#import <Messenger/FBContactsSearchDelegate.h>
#import <Messenger/FBOnlineFriendsSearchDelegate.h>
#import <Messenger/FBPassthroughOverlayViewDelegate.h>
#import <Messenger/MNOnlineStatusListener.h>

@protocol FBContactsSearch;
@class FBChatListSideFeedUnitView, FBSideFeedUnitCollectionViewController, FBOnlineFriendsSearch, MNOnlineStatusManager, FBPassthroughOverlayView, NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface FBChatListSideFeedUnitController : FBSideFeedUnitController <FBSideFeedUnitCollectionViewControllerDelegate, FBContactsSearchDelegate, FBOnlineFriendsSearchDelegate, FBPassthroughOverlayViewDelegate, MNOnlineStatusListener> {

	FBChatListSideFeedUnitView* _chatListUnitView;
	FBSideFeedUnitCollectionViewController* _unitCollectionViewController;
	FBSideFeedUnitCollectionViewController* _searchCollectionViewController;
	FBOnlineFriendsSearch* _onlineFriendsSearch;
	id<FBContactsSearch> _contactsSearch;
	MNOnlineStatusManager* _onlineStatusManager;
	FBPassthroughOverlayView* _passthroughOverlayView;
	BOOL _isExclusiveMode;
	BOOL _isSearchActiveInExclusiveMode;
	BOOL _isSearchEntered;
	BOOL _isUserOnline;
	NSArray* _filteredFriends;
	NSMutableDictionary* _clickHistory;
	NSMutableSet* _indexPathAnimations;
	BOOL _alwaysExpanded;
	FBSideFeedUnitCollectionViewController* _collectionViewController;

}

@property (nonatomic,retain) FBSideFeedUnitCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,getter=isAlwaysExpanded,nonatomic) BOOL alwaysExpanded;                                    //@synthesize alwaysExpanded=_alwaysExpanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFinishSearch:(id)arg1 ;
-(BOOL)shouldHideResult:(id)arg1 ;
-(void)didPickResult:(id)arg1 ;
-(id)getUnitNameForAnalytics;
-(id)initWithSession:(id)arg1 contactsSearch:(id)arg2 onlineStatusManager:(id)arg3 ;
-(void)setAlwaysExpanded:(BOOL)arg1 ;
-(void)refreshChatList;
-(void)_resetLogginHistory;
-(id)_onlineFriendsSearch;
-(void)setUpChatListOnUnitView:(id)arg1 ;
-(void)setUpChatListOffUnitView:(id)arg1 ;
-(void)_seeMoreButtonClicked;
-(void)_editingChanged:(id)arg1 ;
-(void)_editingStarted:(id)arg1 ;
-(void)_editingEnded:(id)arg1 ;
-(void)_updateSeeMoreButtonVisibility:(id)arg1 ;
-(void)_turnOffChat;
-(void)_turnOnChat;
-(void)_addSearchOverlayView;
-(BOOL)_isShowingSearchResults;
-(id)_contactResultAtIndex:(unsigned long long)arg1 ;
-(id)_shortDisplayForLastActiveTime:(long long)arg1 ;
-(void)didFinishOnlineFriendsSearch;
-(void)passthroughOverlayViewDidReceiveTouch;
-(void)changedOnlineStatus:(BOOL)arg1 ;
-(BOOL)isAlwaysExpanded;
-(void)configureCell:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)didSelectCellWithIndex:(unsigned long long)arg1 ;
-(void)didHighlightCell:(id)arg1 ;
-(void)didUnhighlightCell:(id)arg1 ;
-(void)logAnalyticsEvent:(id)arg1 itemPosition:(unsigned long long)arg2 history:(id)arg3 ;
-(void)didChangeHeightAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)willInsertItemsAtIndexes:(id)arg1 ;
-(void)willDeleteItemsAtIndexes:(id)arg1 ;
-(id)uniqueIDForItemAtIndex:(unsigned long long)arg1 ;
-(id)graphQLIDForItemPosition:(unsigned long long)arg1 ;
-(id)trackingStringForItemPosition:(unsigned long long)arg1 ;
-(BOOL)isModelNeeded;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)numberOfItems;
-(void)didScroll;
-(FBSideFeedUnitCollectionViewController *)collectionViewController;
-(void)setCollectionViewController:(FBSideFeedUnitCollectionViewController *)arg1 ;
-(void)search;
-(CGSize)sizeForItemAtIndex:(unsigned long long)arg1 ;
@end
