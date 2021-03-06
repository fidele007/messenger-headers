/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@protocol MNAuthenticationManager, MNThreadMessageCaching;
@class FBProviderMapData, ZRApplicationState, ZRTokenUpdater, ZRTokenRefreshCoordinator, MNUserSettings, MNUserSetUpStatePersister, FBUserSession, MNSPDataStore, FBMSPErrorRetryManager, FBMemoryProfiler, FBMessagingStore, FBMMQTTManager, FBUpdater, FBContactStore, MNUserProvider, MNFetchedThreadKeyTracker, MNThreadUpdateService, FBMNetworkMonitorController, MNZRBannerDismissalManager, MNSecureMessagingServiceProvider, MNBadgeCountUpdateService, MNInboxService, MNInboxFetchConfigFactory, MNEmojiOmnistore, FBNetworkerMonitor, FBMobileConfigContextManager, NSString;

@interface MNAdvancedSettingsViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	ZRApplicationState* _zeroRatingState;
	ZRTokenUpdater* _zeroTokenUpdater;
	ZRTokenRefreshCoordinator* _zeroTokenRefreshCoordinator;
	MNUserSettings* _userSettings;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	FBUserSession* _session;
	MNSPDataStore* _spDataStore;
	FBMSPErrorRetryManager* _spErrorRetryManager;
	FBMemoryProfiler* _memoryProfiler;
	FBMessagingStore* _messagingStore;
	FBMMQTTManager* _mqttManager;
	FBUpdater* _updater;
	FBContactStore* _contactStore;
	id<MNAuthenticationManager> _authManager;
	MNUserProvider* _userProvider;
	MNFetchedThreadKeyTracker* _fetchedThreadKeyTracker;
	id<MNThreadMessageCaching> _threadMessageCache;
	MNThreadUpdateService* _threadUpdateService;
	FBMNetworkMonitorController* _networkMonitorController;
	MNZRBannerDismissalManager* _zeroRatingBannerDismissalManager;
	MNSecureMessagingServiceProvider* _secureMessagingServiceProvider;
	MNBadgeCountUpdateService* _badgeService;
	MNInboxService* _inboxService;
	MNInboxFetchConfigFactory* _inboxFetchConfigFactory;
	MNEmojiOmnistore* _emojiOmnistore;
	FBNetworkerMonitor* _networkerMonitor;
	FBMobileConfigContextManager* _mobileConfigContextManager;

}

@property (nonatomic,readonly) ZRApplicationState * zeroRatingState;                                           //@synthesize zeroRatingState=_zeroRatingState - In the implementation block
@property (nonatomic,readonly) ZRTokenUpdater * zeroTokenUpdater;                                              //@synthesize zeroTokenUpdater=_zeroTokenUpdater - In the implementation block
@property (nonatomic,readonly) ZRTokenRefreshCoordinator * zeroTokenRefreshCoordinator;                        //@synthesize zeroTokenRefreshCoordinator=_zeroTokenRefreshCoordinator - In the implementation block
@property (nonatomic,readonly) MNUserSettings * userSettings;                                                  //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,readonly) MNUserSetUpStatePersister * userSetUpStatePersister;                            //@synthesize userSetUpStatePersister=_userSetUpStatePersister - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNSPDataStore * spDataStore;                                                    //@synthesize spDataStore=_spDataStore - In the implementation block
@property (nonatomic,readonly) FBMSPErrorRetryManager * spErrorRetryManager;                                   //@synthesize spErrorRetryManager=_spErrorRetryManager - In the implementation block
@property (nonatomic,readonly) FBMemoryProfiler * memoryProfiler;                                              //@synthesize memoryProfiler=_memoryProfiler - In the implementation block
@property (nonatomic,readonly) FBMessagingStore * messagingStore;                                              //@synthesize messagingStore=_messagingStore - In the implementation block
@property (nonatomic,readonly) FBMMQTTManager * mqttManager;                                                   //@synthesize mqttManager=_mqttManager - In the implementation block
@property (nonatomic,readonly) FBUpdater * updater;                                                            //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) FBContactStore * contactStore;                                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<MNAuthenticationManager> authManager;                                        //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,readonly) MNUserProvider * userProvider;                                                  //@synthesize userProvider=_userProvider - In the implementation block
@property (nonatomic,readonly) MNFetchedThreadKeyTracker * fetchedThreadKeyTracker;                            //@synthesize fetchedThreadKeyTracker=_fetchedThreadKeyTracker - In the implementation block
@property (nonatomic,readonly) id<MNThreadMessageCaching> threadMessageCache;                                  //@synthesize threadMessageCache=_threadMessageCache - In the implementation block
@property (nonatomic,readonly) MNThreadUpdateService * threadUpdateService;                                    //@synthesize threadUpdateService=_threadUpdateService - In the implementation block
@property (nonatomic,readonly) FBMNetworkMonitorController * networkMonitorController;                         //@synthesize networkMonitorController=_networkMonitorController - In the implementation block
@property (nonatomic,readonly) MNZRBannerDismissalManager * zeroRatingBannerDismissalManager;                  //@synthesize zeroRatingBannerDismissalManager=_zeroRatingBannerDismissalManager - In the implementation block
@property (nonatomic,readonly) MNSecureMessagingServiceProvider * secureMessagingServiceProvider;              //@synthesize secureMessagingServiceProvider=_secureMessagingServiceProvider - In the implementation block
@property (nonatomic,readonly) MNBadgeCountUpdateService * badgeService;                                       //@synthesize badgeService=_badgeService - In the implementation block
@property (nonatomic,readonly) MNInboxService * inboxService;                                                  //@synthesize inboxService=_inboxService - In the implementation block
@property (nonatomic,readonly) MNInboxFetchConfigFactory * inboxFetchConfigFactory;                            //@synthesize inboxFetchConfigFactory=_inboxFetchConfigFactory - In the implementation block
@property (nonatomic,readonly) MNEmojiOmnistore * emojiOmnistore;                                              //@synthesize emojiOmnistore=_emojiOmnistore - In the implementation block
@property (nonatomic,readonly) FBNetworkerMonitor * networkerMonitor;                                          //@synthesize networkerMonitor=_networkerMonitor - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * mobileConfigContextManager;                      //@synthesize mobileConfigContextManager=_mobileConfigContextManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(FBMNetworkMonitorController *)networkMonitorController;
-(FBMemoryProfiler *)memoryProfiler;
-(MNUserSetUpStatePersister *)userSetUpStatePersister;
-(ZRApplicationState *)zeroRatingState;
-(ZRTokenUpdater *)zeroTokenUpdater;
-(FBMMQTTManager *)mqttManager;
-(id)loomServiceProvider;
-(MNInboxFetchConfigFactory *)inboxFetchConfigFactory;
-(MNInboxService *)inboxService;
-(id)groupsSettingsVCProvider;
-(id)spSettingsViewControllerProvider;
-(MNBadgeCountUpdateService *)badgeService;
-(MNEmojiOmnistore *)emojiOmnistore;
-(id)simpleSearchViewControllerProvider;
-(id)loadLatestThreadViewControllerProvider;
-(FBMessagingStore *)messagingStore;
-(FBMSPErrorRetryManager *)spErrorRetryManager;
-(MNFetchedThreadKeyTracker *)fetchedThreadKeyTracker;
-(id<MNThreadMessageCaching>)threadMessageCache;
-(MNThreadUpdateService *)threadUpdateService;
-(MNZRBannerDismissalManager *)zeroRatingBannerDismissalManager;
-(ZRTokenRefreshCoordinator *)zeroTokenRefreshCoordinator;
-(FBNetworkerMonitor *)networkerMonitor;
-(MNUserProvider *)userProvider;
-(MNSecureMessagingServiceProvider *)secureMessagingServiceProvider;
-(MNSPDataStore *)spDataStore;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)mobileConfigContextManager;
-(id<MNAuthenticationManager>)authManager;
-(FBContactStore *)contactStore;
-(FBUserSession *)session;
-(FBUpdater *)updater;
-(MNUserSettings *)userSettings;
@end

