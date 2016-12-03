/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchTextFieldProtocol, FBNavigationBarSearchHandlerDelegate;
@class FBUserSession, UINavigationController, FBKVOController, UIView, FBNavigationBarSearchKeyboardShortcut;

@interface FBNavigationBarSearchHandler : NSObject {

	FBUserSession* _session;
	UINavigationController* _navigationController;
	FBKVOController* _topNavigationItemObserver;
	UIView*<FBSearchTextFieldProtocol> _searchField;
	FBNavigationBarSearchKeyboardShortcut* _searchKeyboardShortcuts;
	BOOL _shouldEnabledKeyboardShortcuts;
	id<FBNavigationBarSearchHandlerDelegate> _delegate;
	unsigned long long _searchTextAlignment;
	unsigned long long _searchDisplayMode;
	/*^block*/id _searchBlock;
	/*^block*/id _searchInternalSettingsManagerCreationBlock;
	/*^block*/id _searchInternalSettingsTapBlock;
	/*^block*/id _voiceSearchViewProviderBlock;
	/*^block*/id _searchPopoverDisplayStatusBlock;

}

@property (assign,nonatomic,__weak) id<FBNavigationBarSearchHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long searchTextAlignment;                                //@synthesize searchTextAlignment=_searchTextAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long searchDisplayMode;                                  //@synthesize searchDisplayMode=_searchDisplayMode - In the implementation block
@property (nonatomic,readonly) UIView*<FBSearchTextFieldProtocol> searchField;                      //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,copy) id searchBlock;                                                          //@synthesize searchBlock=_searchBlock - In the implementation block
@property (nonatomic,copy) id searchInternalSettingsManagerCreationBlock;                           //@synthesize searchInternalSettingsManagerCreationBlock=_searchInternalSettingsManagerCreationBlock - In the implementation block
@property (nonatomic,copy) id searchInternalSettingsTapBlock;                                       //@synthesize searchInternalSettingsTapBlock=_searchInternalSettingsTapBlock - In the implementation block
@property (nonatomic,copy) id voiceSearchViewProviderBlock;                                         //@synthesize voiceSearchViewProviderBlock=_voiceSearchViewProviderBlock - In the implementation block
@property (nonatomic,copy) id searchPopoverDisplayStatusBlock;                                      //@synthesize searchPopoverDisplayStatusBlock=_searchPopoverDisplayStatusBlock - In the implementation block
@property (assign,nonatomic) BOOL searchBarUserInteractionEnabled; 
-(void)setSearchDisplayMode:(unsigned long long)arg1 ;
-(id)initWithSession:(id)arg1 navigationController:(id)arg2 enableKeyboardShortcuts:(BOOL)arg3 ;
-(BOOL)shouldShowSearchBarForViewController:(id)arg1 ;
-(void)createSearchField;
-(BOOL)shouldShowSearchBarForViewController:(id)arg1 isRoot:(BOOL)arg2 ;
-(void)updateSearchBar:(BOOL)arg1 animated:(BOOL)arg2 destinationViewController:(id)arg3 ;
-(void)launchSearch:(id)arg1 event:(id)arg2 ;
-(void)launchSearchWithSearchContext:(id)arg1 ;
-(void)_updateSearchFieldTextWithChange:(id)arg1 object:(id)arg2 ;
-(void)_updateRightAccessoryForSearchFieldWithDestinationViewController:(id)arg1 ;
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
-(id)voiceSearchViewProviderBlock;
-(void)setVoiceSearchViewProviderBlock:(id)arg1 ;
-(id)searchPopoverDisplayStatusBlock;
-(void)setSearchPopoverDisplayStatusBlock:(id)arg1 ;
-(void)setDelegate:(id<FBNavigationBarSearchHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNavigationBarSearchHandlerDelegate>)delegate;
-(UIView*<FBSearchTextFieldProtocol>)searchField;
-(void)setSearchBlock:(id)arg1 ;
-(id)searchBlock;
-(void)_handleLongPress:(id)arg1 ;
@end
