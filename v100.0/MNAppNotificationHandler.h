/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/FBMAppInitializedListening.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol MNSecureThreadServiceControlling;
@class MNAppNotificationHandlerInjector, NSMutableArray, NSString;

@interface MNAppNotificationHandler : NSObject <FBClassInjectable, FBMAppInitializedListening, UIAlertViewDelegate> {

	MNAppNotificationHandlerInjector* _injector;
	BOOL _readyToHandleNotifications;
	id<MNSecureThreadServiceControlling> _secureMessagingService;
	NSMutableArray* _queuedActions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)applicationDidCompleteSettingUpBackgroundServices;
-(void)applicationDidCompleteSettingUpAllServices;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 actionIdentifier:(id)arg3 responseInfo:(id)arg4 userTappedNotification:(BOOL)arg5 isColdStart:(BOOL)arg6 notificationHandledBlock:(/*^block*/id)arg7 ;
-(BOOL)_handleNonAPNSNotification:(id)arg1 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 actionIdentifier:(id)arg3 responseInfo:(id)arg4 userTappedNotification:(BOOL)arg5 ;
-(void)_navigateToThreadQuery:(id)arg1 ;
-(void)_doHandleNotificationsForApplication:(id)arg1 launchedWithOptions:(id)arg2 userTapped:(BOOL)arg3 ;
-(void)handleNotificationsForApplication:(id)arg1 launchedWithOptions:(id)arg2 userTapped:(BOOL)arg3 ;
-(void)discardPendingNotifications;
@end

