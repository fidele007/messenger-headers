/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNMultiPeoplePickerViewDelegate.h>
#import <Messenger/MNPeoplePickerSearchBarViewControllerActionButtonDelegate.h>
#import <Messenger/MNProfileImageListViewControllerDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/MNPeoplePickerSearchBarViewControllerSearchBarDataSource.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNMultiPeoplePickerViewControllerDelegate, MNMultiPeoplePickerViewControllerActionButtonDelegate, MNMultiPeoplePickerViewControllerDataSource;
@class FBKeyboardObserver, FBWebRTCCallButtonImageProvider, MNPeoplePickerSearchBarViewControllerFactory, MNMultiPeoplePickerView, MNMultiPeoplePickerConfiguration, MNProfileImageListViewController, MNPeoplePickerSearchBarViewController, NSArray, UIView, NSString;

@interface MNMultiPeoplePickerViewController : FBContainerViewController <MNMultiPeoplePickerViewDelegate, MNPeoplePickerSearchBarViewControllerActionButtonDelegate, MNProfileImageListViewControllerDelegate, FBKeyboardObserverDelegate, MNPeoplePickerSearchBarViewControllerSearchBarDataSource, FBClassProvidable> {

	id<FBProvider> _profileImageListViewControllerProvider;
	FBKeyboardObserver* _keyboardObserver;
	unsigned long long _appearanceState;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	MNPeoplePickerSearchBarViewControllerFactory* _peoplePickerSearchBarViewControllerFactory;
	BOOL _sendButtonEnabled;
	BOOL _showsBlockingUI;
	BOOL _showsAccessoryViewBelowSearchBar;
	id<MNMultiPeoplePickerViewControllerDelegate> _delegate;
	id<MNMultiPeoplePickerViewControllerActionButtonDelegate> _actionButtonDelegate;
	id<MNMultiPeoplePickerViewControllerDataSource> _dataSource;
	MNMultiPeoplePickerView* _multiPeoplePickerView;
	MNMultiPeoplePickerConfiguration* _multiPeoplePickerConfiguration;
	MNProfileImageListViewController* _profileImageListViewController;
	MNPeoplePickerSearchBarViewController* _peoplePickerSearchBarViewController;

}

@property (nonatomic,retain) MNProfileImageListViewController * profileImageListViewController;                                  //@synthesize profileImageListViewController=_profileImageListViewController - In the implementation block
@property (nonatomic,retain) MNPeoplePickerSearchBarViewController * peoplePickerSearchBarViewController;                        //@synthesize peoplePickerSearchBarViewController=_peoplePickerSearchBarViewController - In the implementation block
@property (nonatomic,readonly) BOOL singlePickMode; 
@property (assign,nonatomic,__weak) id<MNMultiPeoplePickerViewControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNMultiPeoplePickerViewControllerActionButtonDelegate> actionButtonDelegate;              //@synthesize actionButtonDelegate=_actionButtonDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNMultiPeoplePickerViewControllerDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) MNMultiPeoplePickerView * multiPeoplePickerView;                                                  //@synthesize multiPeoplePickerView=_multiPeoplePickerView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pickedContacts; 
@property (assign,getter=isSendButtonEnabled,nonatomic) BOOL sendButtonEnabled;                                                  //@synthesize sendButtonEnabled=_sendButtonEnabled - In the implementation block
@property (nonatomic,retain) UIView * headerView; 
@property (assign,nonatomic) BOOL showsBlockingUI;                                                                               //@synthesize showsBlockingUI=_showsBlockingUI - In the implementation block
@property (nonatomic,copy,readonly) MNMultiPeoplePickerConfiguration * multiPeoplePickerConfiguration;                           //@synthesize multiPeoplePickerConfiguration=_multiPeoplePickerConfiguration - In the implementation block
@property (assign,nonatomic) BOOL showsAccessoryViewBelowSearchBar;                                                              //@synthesize showsAccessoryViewBelowSearchBar=_showsAccessoryViewBelowSearchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)updateContainerTopContentInset;
-(void)endSearching;
-(void)peoplePickerSearchBarController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3 ;
-(void)peoplePickerSearchBarController:(id)arg1 didTapSecondaryActionButtonForContact:(id)arg2 ;
-(BOOL)peoplePickerSearchBarController:(id)arg1 shouldShowPersonFromSearch:(id)arg2 ;
-(void)peoplePickerSearchBarControllerWillBeginSearch:(id)arg1 ;
-(void)peoplePickerSearchBarControllerWillEndSearch:(id)arg1 ;
-(void)peoplePickerSearchBarControllerDidChangePickedContacts:(id)arg1 ;
-(id)peoplePickerSearchBarControllerStringForSearchBarPlaceholderText:(id)arg1 ;
-(void)peoplePickerSearchBarController:(id)arg1 didDeselectContact:(id)arg2 ;
-(double)containerTopContentInsetForPeoplePickerSearchBarViewController:(id)arg1 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(NSArray *)pickedContacts;
-(void)configureWithMultiPeoplePickerConfiguration:(id)arg1 suggestedContactsRetriever:(id)arg2 customContactSearch:(id)arg3 ;
-(void)_updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(void)setSendButtonEnabled:(BOOL)arg1 ;
-(void)addPickedContact:(id)arg1 ;
-(void)setActionButtonDelegate:(id<MNMultiPeoplePickerViewControllerActionButtonDelegate>)arg1 ;
-(void)clearPickedContacts;
-(void)filterPickedContactsWithPredicateBlock:(/*^block*/id)arg1 ;
-(void)restartPeopleSuggestionsRetrieving;
-(void)scrollSuggestionsViewToTopAnimated:(BOOL)arg1 ;
-(void)setShowsBlockingUI:(BOOL)arg1 ;
-(MNMultiPeoplePickerView *)multiPeoplePickerView;
-(void)removePickedContact:(id)arg1 ;
-(BOOL)isSendButtonEnabled;
-(BOOL)showsBlockingUI;
-(void)showSuggestionsView;
-(MNMultiPeoplePickerConfiguration *)multiPeoplePickerConfiguration;
-(BOOL)singlePickMode;
-(void)setShowsAccessoryViewBelowSearchBar:(BOOL)arg1 ;
-(id)accessoryViewAboveSearchBar;
-(id)accessoryViewBelowSearchBar;
-(void)peoplePickerSearchBarViewController:(id)arg1 didUpdateAllActionButtonsToNormalState:(BOOL)arg2 ;
-(id<MNMultiPeoplePickerViewControllerActionButtonDelegate>)actionButtonDelegate;
-(void)profileImageListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)_didPressSend:(id)arg1 ;
-(void)_didPressAudioCall:(id)arg1 ;
-(void)_didPressVideoCall:(id)arg1 ;
-(void)_updatePickedContacts;
-(void)_updateBottomBar;
-(void)_updateMaxUserSelection;
-(void)multiPeoplePickerViewDidTapOverlayView:(id)arg1 ;
-(BOOL)showsAccessoryViewBelowSearchBar;
-(MNProfileImageListViewController *)profileImageListViewController;
-(void)setProfileImageListViewController:(MNProfileImageListViewController *)arg1 ;
-(MNPeoplePickerSearchBarViewController *)peoplePickerSearchBarViewController;
-(void)setPeoplePickerSearchBarViewController:(MNPeoplePickerSearchBarViewController *)arg1 ;
-(void)setDataSource:(id<MNMultiPeoplePickerViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<MNMultiPeoplePickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMultiPeoplePickerViewControllerDataSource>)dataSource;
-(id<MNMultiPeoplePickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)startSearching;
-(void)_searchButtonPressed:(id)arg1 ;
@end

