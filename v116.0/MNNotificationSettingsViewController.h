/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNSettingsCellSwitchDelegate.h>
#import <Messenger/MNSettingsOptionSelectorViewControllerDelegate.h>
#import <Messenger/MNSettingsSectionFooterViewDelegate.h>
#import <Messenger/MNGlobalMutePickerDelegate.h>
#import <Messenger/MNGlobalMuterDelegate.h>

@protocol MNGlobalMuteStatusReading, MNGlobalMuteStatusWriting, MNNotificationSettingsViewControllerDelegate;
@class FBUserSession, MNGlobalMuter, NSNumber, MNUserSettings, OrcaPushRegistrar, MNErrorToastFactory, MNGlobalMutePicker, MNSettingsView, NSArray, MNSettingsOptionSelectorViewController, FBMobileConfigContextManager, NSString;

@interface MNNotificationSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNSettingsCellSwitchDelegate, MNSettingsOptionSelectorViewControllerDelegate, MNSettingsSectionFooterViewDelegate, MNGlobalMutePickerDelegate, MNGlobalMuterDelegate> {

	FBUserSession* _session;
	MNGlobalMuter* _globalMuter;
	NSNumber* _previousMuteUntil;
	MNUserSettings* _userSettings;
	OrcaPushRegistrar* _pushRegistrar;
	MNErrorToastFactory* _errorToastFactory;
	MNGlobalMutePicker* _globalMutePicker;
	MNSettingsView* _settingsView;
	NSArray* _settingsSections;
	MNSettingsOptionSelectorViewController* _durationSelector;
	NSArray* _settingsSectionFooterViews;
	FBMobileConfigContextManager* _configManager;
	NSString* _applicationName;
	long long _muteSettingsSectionIndex;
	id<MNGlobalMuteStatusReading> _globalMuteStatusReader;
	id<MNGlobalMuteStatusWriting> _globalMuteStatusWriter;
	BOOL _hasSentMontageNotificationRequest;
	BOOL _hasFinishedMontageNotificationRequest;
	BOOL _previousMontageNotificationSettingsDisabled;
	BOOL _montageNotificationSettingsDisabled;
	id<MNNotificationSettingsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNNotificationSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_subscribeForPushNotificationsChanges;
-(void)_unsubscribeFromPushNotificationsChanges;
-(void)_systemNotificationStateChanged:(id)arg1 ;
-(id)initWithUserSettings:(id)arg1 pushRegistrar:(id)arg2 errorToastFactory:(id)arg3 configManager:(id)arg4 applicationName:(id)arg5 session:(id)arg6 globalMuteStatusReader:(id)arg7 globalMuteStatusWriter:(id)arg8 ;
-(void)didToggleSettingsSwitch:(id)arg1 ;
-(void)_reinitializeAndRefreshTableViewWithFooterViewsNeedUpdate:(BOOL)arg1 ;
-(void)_logToggleSettingsWithLabel:(id)arg1 nextState:(BOOL)arg2 prevState:(BOOL)arg3 ;
-(void)settingsOptionSelector:(id)arg1 optionSelectedWithTitle:(id)arg2 identifier:(long long)arg3 ;
-(void)settingsSectionFooterViewDidTapSubtitleLink:(id)arg1 withResult:(id)arg2 ;
-(void)_turnOnPushTapped;
-(void)_showPreviewSettingTapped:(id)arg1 ;
-(void)_didReceiveMontageNotificationResponse:(id)arg1 ;
-(void)_montageNotificationResponseFailed:(id)arg1 ;
-(void)_montageNotificationsSettingTapped:(id)arg1 ;
-(void)_montageNotificationPreferenceRequestDidFail:(id)arg1 ;
-(void)_montageNotificationPreferenceRequestDidSucceed:(BOOL)arg1 ;
-(void)_doNotDisturbTapped:(id)arg1 ;
-(void)_inAppNotificationSettingTapped:(id)arg1 ;
-(id)_createTurnOnPushSection;
-(id)_createDoNotDisturbSection;
-(id)_createPreviewSection;
-(id)_createInAppNotificationSection;
-(id)_createMontageSection;
-(void)globalMutePicker:(id)arg1 didSelectMuteType:(long long)arg2 ;
-(void)globalMutePickerWillSelectCancel:(id)arg1 ;
-(void)_logMuteSelectionWithMuteType:(long long)arg1 ;
-(id)_duationSettingsRowIndexPath;
-(void)_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_initializeSettingsSections;
-(void)_initializeSettingsSectionFooterViews;
-(void)globalMuter:(id)arg1 couldNotMuteAllWithError:(id)arg2 ;
-(void)globalMuterDidMuteAll:(id)arg1 ;
-(void)setDelegate:(id<MNNotificationSettingsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNNotificationSettingsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
@end

