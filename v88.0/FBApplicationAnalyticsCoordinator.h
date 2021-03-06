/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, FBAnalytics, NSNotificationCenter, NSUserDefaults, UIApplication, NSNumber;

@interface FBApplicationAnalyticsCoordinator : NSObject {

	NSMutableSet* _applicationObservers;
	FBAnalytics* _analytics;
	NSNotificationCenter* _notificationCenter;
	NSUserDefaults* _userDefaults;
	UIApplication* _application;
	id _orientationObserver;
	long long _currentOrientation;
	double _applicationLaunchTimestamp;
	double _applicationForegroundTimestamp;
	double _applicationBackgroundTimestamp;
	double _applicationAccumulatedBackgroundTime;
	double _sessionStartTimestamp;
	BOOL _applicationIsInBackground;
	BOOL _applicationBackgroundInit;
	BOOL _logContentOnActive;
	BOOL _appDidEnterForeground;
	NSNumber* _lastAppIconBadgeNumber;

}

@property (nonatomic,readonly) double timeSinceInit; 
@property (nonatomic,readonly) double timeSinceInitInForeground; 
@property (nonatomic,readonly) double timeSinceSessionStart; 
@property (nonatomic,readonly) double timeSinceLastForeground; 
+(void)logApplicationInit;
+(void)setSharedAnalyticsCoordinator:(id)arg1 ;
+(id)sharedAnalyticsCoordinator;
+(BOOL)hasSharedAnalyticsCoordinator;
-(void)observeEverything;
-(id)initWithAnalytics:(id)arg1 application:(id)arg2 ;
-(void)logApplicationLaunch:(BOOL)arg1 ;
-(void)observeApplication;
-(void)logApplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(double)timeSinceInit;
-(double)timeSinceInitInForeground;
-(void)logApplicationIconBadgeNumber:(long long)arg1 andEvent:(id)arg2 ;
-(void)unobserveApplication;
-(void)logApplicationPushNotificationsSettings:(id)arg1 ;
-(void)logDeviceAndApplicationInfo:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 application:(id)arg2 notificationCenter:(id)arg3 userDefaults:(id)arg4 ;
-(id)initWithAnalytics:(id)arg1 application:(id)arg2 notificationCenter:(id)arg3 ;
-(void)observeOrientation;
-(void)_applicationDidBecomeActive;
-(void)_applicationDidEnterForegroundAndIsUsable;
-(void)_applicationWillChangeStatusBarOrientation:(id)arg1 ;
-(void)logApplicationData:(id)arg1 forState:(id)arg2 ;
-(void)applicationDidEnterForegroundAndIsUsable;
-(void)logOrientationEventWithInterfaceOrientation:(long long)arg1 oldOrientation:(long long)arg2 ;
-(void)_logState:(id)arg1 timestamp:(double)arg2 logModuleInfo:(BOOL)arg3 ;
-(void)_applicationDidSuspend;
-(void)logApplicationPush:(id)arg1 withType:(int)arg2 userInfo:(id)arg3 ;
-(void)_logApplication:(id)arg1 iconBadgeNumberEvent:(id)arg2 ;
-(void)logDeviceAndApplicationInfo:(id)arg1 queue:(id)arg2 ;
-(void)unobserveOrientation;
-(void)logApplicationForeground;
-(void)logApplicationFirstLaunch;
-(void)logSessionStart;
-(void)clearSessionStartTimeStamp;
-(void)_setSessionStartTimestamp:(double)arg1 ;
-(double)timeSinceSessionStart;
-(double)timeSinceLastForeground;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidFinishLaunching:(BOOL)arg1 ;
-(void)applicationWillTerminate;
-(void)_applicationDidEnterBackground;
-(void)applicationWillResignActive;
-(void)_applicationWillResignActive;
-(void)_applicationWillTerminate;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)_applicationWillEnterForeground;
-(void)_applicationDidFinishLaunching;
-(void)_applicationDidResume:(id)arg1 ;
@end

