/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBTableViewController.h>
#import <Messenger/FBFNSettingsPrivacySelectorViewControllerDelegate.h>
#import <Messenger/FBFNSettingsTableHeaderFooterDelegate.h>
#import <Messenger/FBLocationAccessManagerDelegate.h>
#import <Messenger/FBFNInlineUpsellViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBFNSettingsInviteFriendPicker, FBFNSettingsDelegate;
@class FBUserSession, FBFNSettingsDataController, FBFNSettingsTableHeaderFooterView, UIAlertView, FBKVOController, FBLocationAccessManager, UIImage, FBFNSettingsAppearanceConfiguration, NSMutableOrderedSet, FBFNInlineUpsellDataSource, FBFNInlineUpsellView, UIActivityIndicatorView, NSString;

@interface FBFNSettingsTableViewController : FBTableViewController <FBFNSettingsPrivacySelectorViewControllerDelegate, FBFNSettingsTableHeaderFooterDelegate, FBLocationAccessManagerDelegate, FBFNInlineUpsellViewDelegate, UIAlertViewDelegate> {

	FBUserSession* _session;
	FBFNSettingsDataController* _dataController;
	FBFNSettingsTableHeaderFooterView* _locationSharingFooter;
	FBFNSettingsTableHeaderFooterView* _notificationSettingFooter;
	UIAlertView* _iOSLocationServicesOffAlert;
	FBKVOController* _kvoController;
	id<FBFNSettingsInviteFriendPicker> _inviteFriendsPicker;
	FBLocationAccessManager* _locationAccessManager;
	UIImage* _auraIcon;
	UIImage* _auraIconOff;
	UIImage* _inviteNearbyFriendsIcon;
	UIImage* _locationSettingsIcon;
	UIImage* _notificationSettingsIcon;
	UIImage* _bugIcon;
	BOOL _didStartTTIMeasurementOnce;
	BOOL _shouldShowReportAProblemFlow;
	BOOL _locationSharingToggleSwitchEnabled;
	FBFNSettingsAppearanceConfiguration* _configuration;
	NSMutableOrderedSet* _sections;
	FBFNInlineUpsellDataSource* _nearbyFriendsUpsellSource;
	FBFNInlineUpsellView* _upsellView;
	UIActivityIndicatorView* _loadingView;
	unsigned long long _surface;
	BOOL _privacyOptionLoading;
	BOOL _togglesLoading;
	BOOL _notificationSettingEnabled;
	BOOL _iOSLocationServicesOffAlertDidShow;
	BOOL _isLoadingData;
	id<FBFNSettingsDelegate> _delegate;

}

@property (assign,nonatomic) BOOL privacyOptionLoading;                             //@synthesize privacyOptionLoading=_privacyOptionLoading - In the implementation block
@property (assign,nonatomic) BOOL togglesLoading;                                   //@synthesize togglesLoading=_togglesLoading - In the implementation block
@property (assign,nonatomic) BOOL notificationSettingEnabled;                       //@synthesize notificationSettingEnabled=_notificationSettingEnabled - In the implementation block
@property (assign,nonatomic) BOOL iOSLocationServicesOffAlertDidShow;               //@synthesize iOSLocationServicesOffAlertDidShow=_iOSLocationServicesOffAlertDidShow - In the implementation block
@property (assign,nonatomic) BOOL isLoadingData;                                    //@synthesize isLoadingData=_isLoadingData - In the implementation block
@property (assign,nonatomic,__weak) id<FBFNSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instructionView:(id)arg1 ;
+(id)locationInstructionTitle;
-(BOOL)isLoadingData;
-(BOOL)fb_showNavBarSearchField;
-(void)inlineUpsellViewStartNUX:(id)arg1 ;
-(void)_settingsDataChanged;
-(void)_settingsDataLocationServiceChanged;
-(BOOL)iOSLocationServicesOffAlertDidShow;
-(void)setIOSLocationServicesOffAlertDidShow:(BOOL)arg1 ;
-(void)_dataDirty;
-(void)didTapLearnMoreHeaderFooterView:(id)arg1 ;
-(void)didTapManageYourLocationServicesHeaderFooterView:(id)arg1 ;
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(BOOL)fb_showBackArrowButton;
-(void)privacySelector:(id)arg1 didSelectPrivacyOptions:(id)arg2 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 dataController:(id)arg3 surface:(unsigned long long)arg4 inviteFriendsPicker:(id)arg5 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 dataController:(id)arg3 surface:(unsigned long long)arg4 inviteFriendsPicker:(id)arg5 upsellDataSource:(id)arg6 ;
-(void)_updateSections;
-(void)refreshFromServer;
-(void)setNotificationSettingEnabled:(BOOL)arg1 ;
-(void)setPrivacyOptionLoading:(BOOL)arg1 ;
-(BOOL)togglesLoading;
-(void)setIsLoadingData:(BOOL)arg1 ;
-(void)setTogglesLoading:(BOOL)arg1 ;
-(BOOL)notificationSettingEnabled;
-(void)_setNotificationSettingEnabled:(BOOL)arg1 ;
-(void)_setLocationSharingEnabled:(BOOL)arg1 ;
-(long long)_numberOfRowsForInviteAndBugReportSection;
-(BOOL)_shouldShowInviteFlow;
-(void)_didToggleLocationSharing:(id)arg1 ;
-(BOOL)_shouldEnableLocationSharingUI;
-(BOOL)privacyOptionLoading;
-(void)_customizeNotificationSettingsCell:(id)arg1 ;
-(void)_customizeLocationSettingsCell:(id)arg1 ;
-(void)_customizeBugReportAndInviteCell:(id)arg1 indexPath:(id)arg2 ;
-(void)_didToggleNotificationSetting:(id)arg1 ;
-(void)_showLocationHistorySettings;
-(void)_didTapARowInInviteAndBugReportSection:(long long)arg1 ;
-(void)_startInviteFlow;
-(void)_showBugReporter;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 dataController:(id)arg3 surface:(unsigned long long)arg4 ;
-(void)setDelegate:(id<FBFNSettingsDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBFNSettingsDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_reloadSettings:(id)arg1 ;
@end
