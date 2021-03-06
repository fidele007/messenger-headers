/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNOmniMSuggestionModeSettingControllerDelegate.h>
#import <Messenger/MNSettingsSectionFooterViewDelegate.h>
#import <Messenger/MNSettingsCellSwitchDelegate.h>
#import <Messenger/MNOmniMRidesPrefSettingControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNModalPresentation;
@class MNSettingsView, NSArray, MNOmniMSuggestionModeSettingController, FBMobileConfigContextManager, MNOmniMSettingsStore, MNOmniMRidesPrefSettingController, MNOmniMNuxViewController, NSString;

@interface MNOmniMSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNOmniMSuggestionModeSettingControllerDelegate, MNSettingsSectionFooterViewDelegate, MNSettingsCellSwitchDelegate, MNOmniMRidesPrefSettingControllerDelegate, FBClassProvidable> {

	MNSettingsView* _settingsView;
	NSArray* _settingsSections;
	MNOmniMSuggestionModeSettingController* _omniMSuggestionModeController;
	NSArray* _settingsSectionFooterViews;
	FBMobileConfigContextManager* _configManager;
	MNOmniMSettingsStore* _omniMSettingsStore;
	NSArray* _sectionHeaderTexts;
	MNOmniMRidesPrefSettingController* _omniMRidesPrefController;
	id<MNModalPresentation> _modalPresenter;
	MNOmniMNuxViewController* _nuxViewController;
	long long _source;

}

@property (assign,nonatomic) long long source;                      //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_initializeSettingsSections;
-(void)_initializeSettingsSectionFooterViews;
-(void)_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_logToggleSettingsWithLabel:(id)arg1 nextState:(BOOL)arg2 prevState:(BOOL)arg3 ;
-(void)didToggleSettingsSwitch:(id)arg1 ;
-(void)settingsSectionFooterViewDidTapSubtitleLink:(id)arg1 withResult:(id)arg2 ;
-(void)omniMRidesPrefSettingControllerDidUpdate:(id)arg1 ;
-(id)initWithOmniMSuggestionModeController:(id)arg1 omniMRidesPrefController:(id)arg2 configManager:(id)arg3 omniMSettingsStore:(id)arg4 modalPresenter:(id)arg5 nuxViewController:(id)arg6 ;
-(void)_logSettingsOpenSource;
-(id)_createEnabledSection;
-(id)_createConfidenceThresholdSection;
-(id)_createRidesPrefSection;
-(BOOL)_shouldShowNuxSection;
-(id)_createNuxSection;
-(void)_suggestionsEnabledSettingTapped:(id)arg1 ;
-(void)_suggestionModeSettingTapped:(id)arg1 ;
-(void)_ridesEnabledSettingTapped:(id)arg1 ;
-(void)_ridesPrefSettingTapped:(id)arg1 ;
-(void)_nuxSettingTapped:(id)arg1 ;
-(void)omniMSuggestionModeSettingControllerDidUpdate:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_reloadTable;
@end

