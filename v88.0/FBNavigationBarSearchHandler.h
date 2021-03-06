/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchTextFieldProtocol, FBNavigationBarSearchHandlerDelegate;
@class FBUserSession, UINavigationController, FBKVOController, UIView, FBNavigationBarSearchKeyboardShortcut, FBSearchNotificationTicker;

@interface FBNavigationBarSearchHandler : NSObject {

	FBUserSession* _session;
	UINavigationController* _navigationController;
	FBKVOController* _topNavigationItemObserver;
	UIView*<FBSearchTextFieldProtocol> _searchField;
	FBNavigationBarSearchKeyboardShortcut* _searchKeyboardShortcuts;
	BOOL _shouldEnabledKeyboardShortcuts;
	BOOL _tickerEnabled;
	id<FBNavigationBarSearchHandlerDelegate> _delegate;
	unsigned long long _searchTextAlignment;
	unsigned long long _searchDisplayMode;
	/*^block*/id _searchBlock;
	/*^block*/id _searchInternalSettingsManagerCreationBlock;
	/*^block*/id _searchInternalSettingsTapBlock;
	/*^block*/id _searchUnreadBadgeViewProviderBlock;
	/*^block*/id _voiceSearchViewProviderBlock;
	/*^block*/id _searchPopoverDisplayStatusBlock;
	FBSearchNotificationTicker* _notificationTicker;

}

@property (nonatomic,retain) FBSearchNotificationTicker * notificationTicker;                       //@synthesize notificationTicker=_notificationTicker - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationBarSearchHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long searchTextAlignment;                                //@synthesize searchTextAlignment=_searchTextAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long searchDisplayMode;                                  //@synthesize searchDisplayMode=_searchDisplayMode - In the implementation block
@property (nonatomic,readonly) UIView*<FBSearchTextFieldProtocol> searchField;                      //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,copy) id searchBlock;                                                          //@synthesize searchBlock=_searchBlock - In the implementation block
@property (nonatomic,copy) id searchInternalSettingsManagerCreationBlock;                           //@synthesize searchInternalSettingsManagerCreationBlock=_searchInternalSettingsManagerCreationBlock - In the implementation block
@property (nonatomic,copy) id searchInternalSettingsTapBlock;                                       //@synthesize searchInternalSettingsTapBlock=_searchInternalSettingsTapBlock - In the implementation block
@property (nonatomic,copy) id searchUnreadBadgeViewProviderBlock;                                   //@synthesize searchUnreadBadgeViewProviderBlock=_searchUnreadBadgeViewProviderBlock - In the implementation block
@property (nonatomic,copy) id voiceSearchViewProviderBlock;                                         //@synthesize voiceSearchViewProviderBlock=_voiceSearchViewProviderBlock - In the implementation block
@property (nonatomic,copy) id searchPopoverDisplayStatusBlock;                                      //@synthesize searchPopoverDisplayStatusBlock=_searchPopoverDisplayStatusBlock - In the implementation block
@property (assign,nonatomic) BOOL searchBarUserInteractionEnabled; 
-(id)initWithSession:(id)arg1 navigationController:(id)arg2 enableKeyboardShortcuts:(BOOL)arg3 ;
-(BOOL)shouldShowSearchBarForViewController:(id)arg1 ;
-(void)createSearchField;
-(void)updateSearchBar:(BOOL)arg1 animated:(BOOL)arg2 destinationViewController:(id)arg3 ;
-(void)launchSearch:(id)arg1 event:(id)arg2 ;
-(void)_setupSearchNotifications;
-(void)_onSearchFieldUnreadCountUpdated:(id)arg1 ;
-(void)_onSearchFieldBreakingNews:(id)arg1 ;
-(void)_updateSearchFieldTextWithChange:(id)arg1 object:(id)arg2 ;
-(void)_updateRightAccessoryForSearchFieldWithDestinationViewController:(id)arg1 ;
-(void)showTickerIfNeeded;
-(void)setNotificationTicker:(FBSearchNotificationTicker *)arg1 ;
-(FBSearchNotificationTicker *)notificationTicker;
-(BOOL)_isMovableNavigationBarVisible;
-(void)_animateTicker;
-(void)updateSearchBarAfterNavigationTransitionDidEndWithVisibleViewController:(id)arg1 shouldReactivateSearchPopover:(BOOL)arg2 ;
-(BOOL)searchBarUserInteractionEnabled;
-(void)setSearchBarUserInteractionEnabled:(BOOL)arg1 ;
-(unsigned long long)searchTextAlignment;
-(void)setSearchTextAlignment:(unsigned long long)arg1 ;
-(unsigned long long)searchDisplayMode;
-(id)searchInternalSettingsManagerCreationBlock;
-(void)setSearchInternalSettingsManagerCreationBlock:(id)arg1 ;
-(id)searchInternalSettingsTapBlock;
-(void)setSearchInternalSettingsTapBlock:(id)arg1 ;
-(id)searchUnreadBadgeViewProviderBlock;
-(void)setSearchUnreadBadgeViewProviderBlock:(id)arg1 ;
-(id)voiceSearchViewProviderBlock;
-(void)setVoiceSearchViewProviderBlock:(id)arg1 ;
-(id)searchPopoverDisplayStatusBlock;
-(void)setSearchPopoverDisplayStatusBlock:(id)arg1 ;
-(void)launchSearchWithSearchContext:(id)arg1 ;
-(void)setSearchDisplayMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBNavigationBarSearchHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNavigationBarSearchHandlerDelegate>)delegate;
-(UIView*<FBSearchTextFieldProtocol>)searchField;
-(void)setSearchBlock:(id)arg1 ;
-(id)searchBlock;
-(void)_handleLongPress:(id)arg1 ;
@end

