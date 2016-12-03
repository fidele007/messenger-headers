/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNPendingRequestsStoreListener.h>
#import <Messenger/MNSettingsCellSwitchDelegate.h>
#import <Messenger/MNSettingsSectionFooterViewDelegate.h>
#import <Messenger/MNContactsSyncSettingControllerDelegate.h>

@protocol MNInviteEligibilityChecking;
@class MNInviteSender, MNContactsSyncSettingController, FBLazyCreator, MNPendingRequestsThreadListNavigationHandler, FBLocaleMap, MNSettingsSection, MNPendingRequestsStore, MNContactSettingsConfiguration, FBMobileConfigContextManager, MNSettingsView, NSArray, NSString;

@interface MNContactSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNPendingRequestsStoreListener, MNSettingsCellSwitchDelegate, MNSettingsSectionFooterViewDelegate, MNContactsSyncSettingControllerDelegate> {

	MNInviteSender* _inviteSender;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	MNContactsSyncSettingController* _contactsSyncSettingController;
	FBLazyCreator* _blockedUsersListViewControllerCreator;
	MNPendingRequestsThreadListNavigationHandler* _pendingRequestsThreadListNavigationHandler;
	FBLocaleMap* _localeMap;
	MNSettingsSection* _syncContactsSection;
	MNPendingRequestsStore* _pendingRequestsStore;
	MNContactSettingsConfiguration* _configuration;
	FBMobileConfigContextManager* _configManager;
	MNSettingsView* _settingsView;
	NSArray* _settingsSections;
	NSArray* _settingsSectionFooterViews;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pendingRequestsMetadataDidUpdateFromOldMetadata:(id)arg1 toNewMetadata:(id)arg2 ;
-(void)settingsSectionFooterViewDidTapSubtitleLink:(id)arg1 withResult:(id)arg2 ;
-(id)initWithContactsSyncSettingController:(id)arg1 blockedUsersListViewControllerProvider:(id)arg2 pendingRequestsThreadListNavigationHandler:(id)arg3 pendingRequestsStore:(id)arg4 localeMap:(id)arg5 inviteSender:(id)arg6 inviteEligibilityChecker:(id)arg7 configuration:(id)arg8 mobileConfigContextManager:(id)arg9 ;
-(void)didToggleSettingsSwitch:(id)arg1 ;
-(void)_initializeSettingsSections;
-(void)_initializeSettingsSectionFooterViews;
-(void)_reinitializeAndRefreshTableViewWithFooterViewsNeedUpdate:(BOOL)arg1 ;
-(void)_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_chatRequestsSettingTapped:(id)arg1 ;
-(void)_syncContactSettingTapped:(id)arg1 ;
-(void)_inviteSettingTapped:(id)arg1 ;
-(void)_blockedListSettingTapped:(id)arg1 ;
-(void)_openURL:(id)arg1 hideActionBarButton:(BOOL)arg2 ;
-(void)contactsSyncSettingControllerDidPressLearnMore:(id)arg1 ;
-(void)contactsSyncSettingControllerDidChangeContactSyncStatus:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

