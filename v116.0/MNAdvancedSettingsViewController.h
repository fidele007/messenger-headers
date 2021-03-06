/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <FBSharedFramework/FBClassInjectable.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <FBSharedFramework/FBTweakViewControllerDelegate.h>
#import <Messenger/FBAlertViewCreating.h>

@class MNAdvancedSettingsViewControllerInjector, MNRegistrationExperimentOverrides, UIAlertView, UIAlertController, UITableView, NSString;

@interface MNAdvancedSettingsViewController : UIViewController <FBClassInjectable, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate, FBTweakViewControllerDelegate, FBAlertViewCreating> {

	MNAdvancedSettingsViewControllerInjector* _injector;
	MNRegistrationExperimentOverrides* _registrationExperimentOverrides;
	UIAlertView* _profileAlertView;
	UIAlertView* _clearCacheAlertView;
	UIAlertView* _crashNowAlertView;
	UIAlertView* _crashNowArrayOverreleaseAlertView;
	UIAlertView* _resnapshotAlertView;
	UIAlertController* _loomAlertController;
	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)_setUpNotificationObserver;
-(void)userDidSwitchTigonDebugMonitor:(id)arg1 ;
-(void)userDidEnableUserCertsMonitor:(id)arg1 ;
-(void)_memoryProfilerSwitch:(id)arg1 ;
-(void)_userDidSwitchForceMessengerRegistration:(id)arg1 ;
-(BOOL)shouldAllowForcedLoomTrace;
-(void)_userDidSwitchForceAuthenticationOptions:(id)arg1 ;
-(id)_lastExceptionURL;
-(void)userDidSwitchAnalyticsEnabled:(id)arg1 ;
-(void)userDidSwitchPerformanceMonitor:(id)arg1 ;
-(void)_simulateMemoryWarning;
-(void)_clearZeroRatingBannerSetting;
-(void)_corruptThreads;
-(void)_crashNow;
-(void)_crashNowArrayOverrelease;
-(id)_buildStr;
-(void)userDidSwitchNetworkMonitor:(id)arg1 ;
-(void)userDidSwitchSSLLoggingEnabled:(id)arg1 ;
-(void)userDidSwitchFLEXEnabled:(id)arg1 ;
-(id)analyticsModule;
-(id)initWithInjector:(id)arg1 ;
-(id)alertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)zeroRatingStatusChanged:(id)arg1 ;
-(void)tweakViewControllerPressedDone:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

