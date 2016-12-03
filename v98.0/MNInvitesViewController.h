/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDelegate.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDataSource.h>
#import <Messenger/MNInvitesViewDelegate.h>
#import <Messenger/MNInvitesHeaderViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNInviteEligibilityChecking, FBProvider, MNInvitesViewControllerDelegate;
@class FBUserSession, MNContactsRetrieverSimpleLogger, MNInvitesCooldownController, MNMultiPeoplePickerViewController, MNInviteListSelectableContactsRetriever, MNInvitesViewControllerConfiguration, MNInvitesHeaderView, MNInvitesView, NSString;

@interface MNInvitesViewController : UIViewController <MNMultiPeoplePickerViewControllerDelegate, MNMultiPeoplePickerViewControllerDataSource, MNInvitesViewDelegate, MNInvitesHeaderViewDelegate, FBClassProvidable> {

	FBUserSession* _session;
	MNContactsRetrieverSimpleLogger* _contactsRetrieverSimpleLogger;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	MNInvitesCooldownController* _invitesCooldownController;
	id<FBProvider> _multiPeoplePickerViewControllerProvider;
	MNMultiPeoplePickerViewController* _presentedMultiPeoplePickerViewController;
	MNInviteListSelectableContactsRetriever* _inviteListSelectableContactsRetriever;
	MNInvitesViewControllerConfiguration* _invitesViewControllerConfiguration;
	MNInvitesHeaderView* _invitesHeaderView;
	MNInvitesView* _invitesView;
	id<MNInvitesViewControllerDelegate> _delegate;
	unsigned long long _source;

}

@property (assign,nonatomic,__weak) id<MNInvitesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                                      //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)mn_addChildViewController:(id)arg1 ;
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(BOOL)multiPeoplePickerViewController:(id)arg1 shouldShowPersonFromSearch:(id)arg2 ;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3 ;
-(id)multiPeoplePickerViewControllerStringForSearchBarPlaceholderText:(id)arg1 ;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectSuggestionsFilteringInviteContactsTypeWithIndex:(long long)arg2 ;
-(id)multiPeoplePickerViewControllerAccessoryViewAboveSearchBar:(id)arg1 ;
-(id)_multiPeoplePickerConfiguration;
-(void)invitesHeaderViewDidPressSkipButton:(id)arg1 ;
-(void)configureWithInvitesViewControllerConfiguration:(id)arg1 ;
-(void)invitesViewDidPressBottomBarButton:(id)arg1 ;
-(id)initWithMultiPeoplePickerViewControllerProvider:(id)arg1 inviteListSelectableContactsRetriever:(id)arg2 inviteEligibilityChecker:(id)arg3 invitesCooldownController:(id)arg4 session:(id)arg5 analytics:(id)arg6 ;
-(void)_addMultiPeoplePickerViewControllerWithPickedContacts:(id)arg1 withSelectedInviteContactsType:(unsigned long long)arg2 fromSource:(unsigned long long)arg3 ;
-(void)_didTapRightBarButton;
-(void)_skipButtonTapped;
-(id)_pickedContactsWhenDismissed;
-(void)_configureNavigationItemForInviteMultiPeoplePickerViewController:(id)arg1 ;
-(void)_updateNavigationBarButtonItemsAfterInvite:(id)arg1 ;
-(void)setDelegate:(id<MNInvitesViewControllerDelegate>)arg1 ;
-(id<MNInvitesViewControllerDelegate>)delegate;
-(unsigned long long)source;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidLoad;
@end

