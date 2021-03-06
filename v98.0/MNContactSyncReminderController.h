/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserSettingsListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBMAppUserSetupListening.h>

@protocol FBProvider;
@class MNLocalNotificationController, MNUserSettings, NSString;

@interface MNContactSyncReminderController : NSObject <MNUserSettingsListener, FBViewerContextClassProvidable, FBMAppUserSetupListening> {

	MNLocalNotificationController* _localNotificationController;
	MNUserSettings* _userSettings;
	id<FBProvider> _setupFlowConfiguratorProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithLocalNotificationController:(id)arg1 userSettings:(id)arg2 setupFlowConfiguratorProvider:(id)arg3 ;
-(void)_scheduleReminderIfNecessary;
-(BOOL)_shouldScheduleReminder;
-(void)_scheduleReminder;
-(void)deletePendingNotifications;
-(void)userSettingsDidUpdateSetting:(id)arg1 ;
-(void)applicationDidEnterSetupFlowWithLoggedInUser:(BOOL)arg1 ;
-(void)applicationDidCompleteSetupFlow;
-(void)dealloc;
@end

