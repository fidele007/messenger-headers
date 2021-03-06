/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBPushUserSettings;
@class NSUserDefaults, FBMForegroundJobScheduler, UIApplication, FBPushRegistrar, NSMutableArray, NSString;

@interface OrcaPushRegistrar : NSObject <FBViewerContextClassProvidable> {

	id<FBPushUserSettings> _userSettings;
	NSUserDefaults* _userDefaults;
	FBMForegroundJobScheduler* _foregroundScheduler;
	unsigned long long _scheduledBlockId;
	UIApplication* _application;
	FBPushRegistrar* _pushRegistrar;
	NSMutableArray* _apnsRegistrationCompletionBlocks;

}

@property (nonatomic,retain) UIApplication * application;                                    //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) FBPushRegistrar * pushRegistrar;                                //@synthesize pushRegistrar=_pushRegistrar - In the implementation block
@property (nonatomic,retain) NSMutableArray * apnsRegistrationCompletionBlocks;              //@synthesize apnsRegistrationCompletionBlocks=_apnsRegistrationCompletionBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPushRegistrar:(FBPushRegistrar *)arg1 ;
-(void)registerForPushIfNecessary;
-(FBPushRegistrar *)pushRegistrar;
-(void)setMessagePreviews:(BOOL)arg1 withfailureBlock:(/*^block*/id)arg2 ;
-(id)initWithPushRegistrar:(id)arg1 application:(id)arg2 pushUserSettings:(id)arg3 userDefaults:(id)arg4 foregroundScheduler:(id)arg5 ;
-(void)_registerForPushPermissions;
-(void)_executeAPNSRegistrationCompletionBlocks;
-(void)_postNuxAppEventTokenRegistrationComplete;
-(BOOL)hasRegisteredForPush;
-(void)addAPNSRegistrationCompletionBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)apnsRegistrationCompletionBlocks;
-(void)setApnsRegistrationCompletionBlocks:(NSMutableArray *)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)unregisterForPush;
-(void)setMessagePreviewSettingLocally:(BOOL)arg1 ;
-(void)addFBRegistrationFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)hasMessagePreviews;
-(void)unregisterForRemoteNotificationsAndLog:(id)arg1 ;
-(void)updateLastPushReceivedTime;
-(BOOL)eligibleForPushInterstitial;
-(void)dealloc;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)stop;
-(void)start;
-(UIApplication *)application;
-(void)setApplication:(UIApplication *)arg1 ;
@end

