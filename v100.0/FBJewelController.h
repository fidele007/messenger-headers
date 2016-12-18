/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNotificationsMQTTListener.h>
#import <Messenger/FBAppService.h>

@class NSNotificationCenter, FBExperimentManager, FBApplication, FBUserSession, FBMQTTManager, NSMutableDictionary, NSDate, FBKVOController, FBJewelManager, NSDictionary, NSString;

@interface FBJewelController : NSObject <FBNotificationsMQTTListener, FBAppService> {

	NSNotificationCenter* _notificationCenter;
	FBExperimentManager* _experimentManager;
	FBDictionaryRegistry* _jewelManagerRegistry;
	FBApplication* _application;
	FBUserSession* _session;
	FBMQTTManager* _mqttManager;
	NSMutableDictionary* _mqttListeners;
	NSDate* _timeOnLastOpen;
	FBKVOController* _KVOController;
	FBJewelManager* _friendRequestJewelManager;
	FBJewelManager* _messagesJewelManager;
	FBJewelManager* _directInboxJewelManager;
	BOOL _running;
	unsigned long long _notificationJewelUpdatesSinceLaunch;
	unsigned long long _notificationJewelUpdatesSinceLastForegrounding;
	NSDictionary* _productsActivelyBadged;
	BOOL _friendRequestBadgingEnabled;
	BOOL _messagesBadgingEnabled;
	BOOL _messagesApplicationBadgingEnabled;
	BOOL _videoHomeBadgingEnabled;
	BOOL _isFriendRequestPushNotificationClickingThrough;
	BOOL _isPushNotificationClickingThrough;
	FBJewelManager* _notificationJewelManager;
	FBJewelManager* _C2CMarketplaceJewelManager;
	FBJewelManager* _videoHomeJewelManager;

}

@property (assign,nonatomic) BOOL friendRequestBadgingEnabled;                                  //@synthesize friendRequestBadgingEnabled=_friendRequestBadgingEnabled - In the implementation block
@property (assign,nonatomic) BOOL messagesBadgingEnabled;                                       //@synthesize messagesBadgingEnabled=_messagesBadgingEnabled - In the implementation block
@property (assign,nonatomic) BOOL messagesApplicationBadgingEnabled;                            //@synthesize messagesApplicationBadgingEnabled=_messagesApplicationBadgingEnabled - In the implementation block
@property (assign,nonatomic) BOOL videoHomeBadgingEnabled;                                      //@synthesize videoHomeBadgingEnabled=_videoHomeBadgingEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long friendRequestVisibleBadgeCount; 
@property (nonatomic,readonly) unsigned long long notificationVisibleBadgeCount; 
@property (nonatomic,readonly) unsigned long long messagesVisibleBadgeCount; 
@property (nonatomic,readonly) unsigned long long C2CMarketplaceVisibleBadgeCount; 
@property (nonatomic,readonly) unsigned long long videoHomeVisibleBadgeCount; 
@property (nonatomic,readonly) FBJewelManager * friendRequestJewelManager;                      //@synthesize friendRequestJewelManager=_friendRequestJewelManager - In the implementation block
@property (nonatomic,readonly) FBJewelManager * notificationJewelManager;                       //@synthesize notificationJewelManager=_notificationJewelManager - In the implementation block
@property (nonatomic,readonly) FBJewelManager * C2CMarketplaceJewelManager;                     //@synthesize C2CMarketplaceJewelManager=_C2CMarketplaceJewelManager - In the implementation block
@property (nonatomic,readonly) FBJewelManager * videoHomeJewelManager;                          //@synthesize videoHomeJewelManager=_videoHomeJewelManager - In the implementation block
@property (assign,nonatomic) BOOL isFriendRequestPushNotificationClickingThrough;               //@synthesize isFriendRequestPushNotificationClickingThrough=_isFriendRequestPushNotificationClickingThrough - In the implementation block
@property (assign,nonatomic) BOOL isPushNotificationClickingThrough;                            //@synthesize isPushNotificationClickingThrough=_isPushNotificationClickingThrough - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)signalAppServiceToHandleInitialSessionIdle_DEPRECATED;
-(unsigned long long)messagesVisibleBadgeCount;
-(BOOL)_friendRequestsBadgingEnabled;
-(long long)_friendRequestsBadgeValue;
-(long long)_notificationBadgeValue;
-(long long)_messagesBadgeValue;
-(long long)_videoHomeBadgeValue;
-(long long)_directInboxBadgeValue;
-(void)_updateApplicationIconBadgeNumber:(id)arg1 ;
-(void)_logProductBadgingWithProductName:(id)arg1 currentBadgeCount:(unsigned long long)arg2 newBadgeCount:(unsigned long long)arg3 ;
-(BOOL)_combinedTabFriendRequestBadgingEnabled;
-(void)_logNotificationJewelUpdateTimeIfRequired;
-(void)_increaseNotificationJewelUpdateCounters;
-(id)_visibleBadgeCountForProductsExcludingProduct:(id)arg1 ;
-(void)_updateNotificationBadgeCount;
-(void)setFriendRequestJewelBadgeCount:(unsigned long long)arg1 ;
-(void)setMessageJewelBadgeCount:(unsigned long long)arg1 ;
-(void)setVideoHomeJewelBadgeCount:(unsigned long long)arg1 ;
-(void)_applicationFinishedEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(void)_messageBadgingDidDisable:(id)arg1 ;
-(void)_messageBadgingDidEnable:(id)arg1 ;
-(void)clearMessageJewelBadgeCount;
-(void)_handleMQTTNotificationForNewFriendRequest;
-(void)_handleMQTTNotificationForRemovedFriendRequest:(id)arg1 ;
-(void)_handleMQTTNotificationForFriendRequestsSeen;
-(void)_notificationBadgingDidDisable:(id)arg1 ;
-(void)_notificationBadgingDidEnable:(id)arg1 ;
-(void)clearVideoHomeJewelBadgeCount;
-(void)_videoHomeBadgingDidDisable;
-(void)_videoHomeBadgingDidEnable;
-(void)clearFriendJewelBadgeCount;
-(void)setMessagesBadgingEnabled:(BOOL)arg1 ;
-(void)setVideoHomeBadgingEnabled:(BOOL)arg1 ;
-(BOOL)_doNotWaitForIdleToFetchNotifications;
-(void)_syncWithReason:(long long)arg1 ;
-(void)_logJewelConsistencyInState:(long long)arg1 ;
-(unsigned long long)notificationVisibleBadgeCount;
-(void)setDirectInboxJewelBadgeCount:(unsigned long long)arg1 ;
-(void)setC2CMarketplaceJewelBadgeCount:(unsigned long long)arg1 ;
-(void)notificationsUpdatesAvailable;
-(id)initWithNotificationCenter:(id)arg1 experimentManager:(id)arg2 jewelManagerRegistry:(FBDictionaryRegistry*)arg3 badgeFilterType:(unsigned long long)arg4 application:(id)arg5 session:(id)arg6 ;
-(void)setMessagesApplicationBadgingEnabled:(BOOL)arg1 ;
-(unsigned long long)friendRequestVisibleBadgeCount;
-(unsigned long long)directInboxVisibleBadgeCount;
-(unsigned long long)C2CMarketplaceVisibleBadgeCount;
-(unsigned long long)videoHomeVisibleBadgeCount;
-(void)setFriendRequestBadgingEnabled:(BOOL)arg1 ;
-(BOOL)friendRequestBadgingEnabled;
-(BOOL)messagesBadgingEnabled;
-(BOOL)messagesApplicationBadgingEnabled;
-(BOOL)videoHomeBadgingEnabled;
-(FBJewelManager *)friendRequestJewelManager;
-(FBJewelManager *)notificationJewelManager;
-(FBJewelManager *)C2CMarketplaceJewelManager;
-(FBJewelManager *)videoHomeJewelManager;
-(BOOL)isFriendRequestPushNotificationClickingThrough;
-(void)setIsFriendRequestPushNotificationClickingThrough:(BOOL)arg1 ;
-(BOOL)isPushNotificationClickingThrough;
-(void)setIsPushNotificationClickingThrough:(BOOL)arg1 ;
-(void)dealloc;
-(long long)applicationIconBadgeNumber;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end
