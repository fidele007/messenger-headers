/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/MNAccountSwitchingControllerDataSource.h>
#import <Messenger/MNAccountAuthenticatingDataSource.h>
#import <Messenger/MNAccountSwitchingControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNAvatarImageDecorating;
@class FBMLoggedInUserInfoManager, MNCDNProfileImageDownloader, MNAccountNotificationsFetcher, MNAccountRemovalController, MNAccountSwitchingController, MNAccountStore, MNAccountSettings, MNLoginErrorHandler, MNAccountSwitchingDialogPresenter, MNAccountCell, NSArray, NSDictionary, FBAnalytics, NSString;

@interface MNAccountsViewController : UITableViewController <MNAccountSwitchingControllerDataSource, MNAccountAuthenticatingDataSource, MNAccountSwitchingControllerDelegate, FBViewerContextClassProvidable> {

	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	id<MNAvatarImageDecorating> _avatarImageDecorator;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNAccountNotificationsFetcher* _accountNotificationsFetcher;
	MNAccountRemovalController* _accountRemovalController;
	MNAccountSwitchingController* _accountSwitchingController;
	MNAccountStore* _accountStore;
	MNAccountSettings* _accountSettings;
	MNLoginErrorHandler* _loginErrorHandler;
	MNAccountSwitchingDialogPresenter* _accountSwitchingDialogPresenter;
	MNAccountCell* _sizingCell;
	NSArray* _accounts;
	NSDictionary* _accountNotificationBadgeCounts;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithLoggedInUserInfoManager:(id)arg1 avatarImageDecorator:(id)arg2 profileImageDownloader:(id)arg3 accountNotificationsFetcher:(id)arg4 accountRemovalController:(id)arg5 accountSwitchingController:(id)arg6 accountStore:(id)arg7 accountSettings:(id)arg8 loginErrorHandler:(id)arg9 analytics:(id)arg10 ;
-(void)_configureTableView;
-(void)_fetchAccounts;
-(id)_loggedInUser;
-(void)_switchWithAccountSwitchingRequest:(id)arg1 accountSwitchingRequestSource:(id)arg2 ;
-(id)_accountCellWithTableView:(id)arg1 ;
-(void)_configureAccountCell:(id)arg1 forRowAtIndexPath:(id)arg2 withShouldDownloadProfileImage:(BOOL)arg3 ;
-(void)_confirmAndRemoveAccountAtIndexPath:(id)arg1 ;
-(id)_loggedInUserAccountCellViewModel;
-(id)_accountCellViewModelWithAccount:(id)arg1 ;
-(id)_accountCellViewModelForRowAtIndexPath:(id)arg1 ;
-(void)_removeAccountAtIndexPath:(id)arg1 ;
-(void)_resetEditingStateForCellAtIndexPath:(id)arg1 ;
-(void)_didFailAccountSwitchingWithLoginError:(id)arg1 ;
-(void)_didFailAccountSwitchingWithError:(id)arg1 ;
-(void)_didFailAccountSwitchingWithAttemptToSwitchToLoggedInAccount;
-(void)_hidePersistentLoadingDialog;
-(void)_configureNavigationBarTitle;
-(void)_configureAddAccountRightBarButtonItem;
-(void)_didTapAddAccountRightBarButton;
-(void)_showPersistentLoadingDialogIfNecessary;
-(void)_didFetchAccounts:(id)arg1 ;
-(void)_fetchNotificationBadgeCountsIfNecessary;
-(void)_didFetchNotifications:(id)arg1 ;
-(void)fetchShouldSwitchToAcccountWithAccountDisplayName:(id)arg1 shouldSwitchBlock:(/*^block*/id)arg2 shouldCancelBlock:(/*^block*/id)arg3 ;
-(void)fetchShouldRequirePasswordForNextLoginWithDidFetchRequirePasswordForNextLoginBlock:(/*^block*/id)arg1 ;
-(void)fetchUsernameAndPasswordWithDidProvideUsernameAndPasswordBlock:(/*^block*/id)arg1 didCancelBlock:(/*^block*/id)arg2 ;
-(void)fetchLoginApprovalCodeWithDidFetchLoginApprovalCodeBlock:(/*^block*/id)arg1 didCancelBlock:(/*^block*/id)arg2 ;
-(void)fetchPasswordForAccountWithDisplayName:(id)arg1 didFetchPasswordBlock:(/*^block*/id)arg2 didCancelBlock:(/*^block*/id)arg3 ;
-(void)accountSwitchingController:(id)arg1 didFailLoginWithError:(id)arg2 ;
-(void)accountSwitchingController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)accountSwitchingControllerDidFailWithAttemptToSwitchToLoggedInAccount:(id)arg1 ;
-(void)accountSwitchingControllerDidCancel:(id)arg1 ;
-(void)accountSwitchingControllerWillLogout:(id)arg1 ;
-(void)switchToAccountWithFBID:(id)arg1 withAccountSwitchingRequestSource:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_removeAccount:(id)arg1 ;
-(void)_configureNavigationBar;
@end
