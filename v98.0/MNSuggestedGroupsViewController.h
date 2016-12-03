/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Messenger/FBContactsSearchDelegate.h>
#import <Messenger/MNPeopleSearchTableSelectionDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNDismissableViewController.h>

@protocol MNAuthenticationManager, MNSuggestedGroupsViewControllerDelegate;
@class MNSuggestedGroupsView, FBAnalytics, FBCombinedContactsSearch, FBMThreadParticipantFilter, MNPeopleSearchResultsDataSource, MNPeopleSearchTableDelegate, FBMPinnedGroupsManager, UISearchDisplayController, UINavigationItem, UIBarButtonItem, NSString;

@interface MNSuggestedGroupsViewController : UIViewController <UISearchBarDelegate, FBContactsSearchDelegate, MNPeopleSearchTableSelectionDelegate, FBClassProvidable, MNDismissableViewController> {

	id<MNAuthenticationManager> _authManager;
	MNSuggestedGroupsView* _suggestedGroupsView;
	FBAnalytics* _analytics;
	FBCombinedContactsSearch* _groupSearch;
	FBMThreadParticipantFilter* _threadParticipantFilter;
	MNPeopleSearchResultsDataSource* _suggestedGroupsViewDataSource;
	MNPeopleSearchTableDelegate* _tableDelegate;
	FBMPinnedGroupsManager* _pinnedGroupsManager;
	UISearchDisplayController* _searchDisplayController;
	UINavigationItem* _navigationItem;
	UIBarButtonItem* _cancelButtonItem;
	BOOL _isObserving;
	BOOL _animateViewStateChange;
	/*^block*/id _dismissBlock;
	id<MNSuggestedGroupsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSuggestedGroupsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL suggestionsDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id dismissBlock;                                                            //@synthesize dismissBlock=_dismissBlock - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)setDismissBlock:(id)arg1 ;
-(id)analyticsExtras;
-(id)dismissBlock;
-(long long)dismissButtonItem;
-(long long)dismissButtonPosition;
-(void)didDismiss;
-(void)setSuggestionsDisabled:(BOOL)arg1 ;
-(void)_fetchAllGroups;
-(void)_logAnalyticsEvent:(id)arg1 ;
-(void)_updateSuggestedGroupList;
-(BOOL)_shouldHideGroup:(id)arg1 ;
-(void)didFinishSearch:(id)arg1 ;
-(BOOL)shouldHideResult:(id)arg1 ;
-(void)didPickResult:(id)arg1 ;
-(BOOL)shouldSelectResultWhenTapped:(id)arg1 ;
-(void)selectedResult:(id)arg1 withAnalyticsExtras:(id)arg2 ;
-(BOOL)suggestionsDisabled;
-(void)setDelegate:(id<MNSuggestedGroupsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNSuggestedGroupsViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldDismiss;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)search;
@end

