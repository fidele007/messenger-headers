/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@class MNLocalNotificationController, MNAccountNotificationsFetcher, MNAccountSettings, NSString;

@interface MNAccountLocalNotificationsScheduler : NSObject <FBClassProvidable> {

	MNLocalNotificationController* _localNotificationController;
	MNAccountNotificationsFetcher* _accountNotificationsFetcher;
	MNAccountSettings* _accountSettings;
	BOOL _schedulingNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didFetchNotifications:(id)arg1 ;
-(id)initWithLocalNotificationController:(id)arg1 accountNotificationsController:(id)arg2 accountSettings:(id)arg3 ;
-(void)_didFailToFetchNotificationsWithError:(id)arg1 ;
-(void)_scheduleLocalNotificationsForAccountNotificationsIfNecessary:(id)arg1 ;
-(void)_completeScheduling;
-(void)_scheduleLocalNotificationForAccountNotification:(id)arg1 ;
-(void)scheduleLocalNotificationsForSwitchedAccountsIfNecessary;
-(id)initWithProviderMapData:(id)arg1 ;
@end

