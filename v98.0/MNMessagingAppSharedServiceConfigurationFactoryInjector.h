/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, FBUserSession, UIApplication, NSString;

@interface MNMessagingAppSharedServiceConfigurationFactoryInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	UIApplication* _application;

}

@property (nonatomic,readonly) FBUserSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)loomServiceProvider;
-(id)secureThreadsServiceProvider;
-(id)startupNetworkAnalyticsServiceProvider;
-(id)accountRecoveryIdRegistrationServiceProvider;
-(id)calendarSyncServiceProvider;
-(id)applicationShortcutItemsConfigurerServiceProvider;
-(id)omnistoreServiceProvider;
-(id)crossProcessDiskCommunicationAdapterServiceProvider;
-(id)notificationServiceDeltaDeserializeServiceProvider;
-(id)badgeCountServiceProvider;
-(id)inboxTabBadgeCountServiceProvider;
-(id)loggedInCheckpointServiceProvider;
-(id)networkLinkConditionerEmpathyServiceProvider;
-(id)zeroRatingServiceProvider;
-(id)reactivationNotificationFetchingServiceProvider;
-(id)threadDeleteUserInvalidationServiceProvider;
-(id)addressBookContactSyncServiceProvider;
-(id)apnsPushServiceProvider;
-(id)contactSyncServiceProvider;
-(id)emojiFontServiceProvider;
-(id)messageSendServiceProvider;
-(id)messagingQuickReplyStoreServiceProvider;
-(id)mqttConnectStateTrackerServiceProvider;
-(id)omnistoreMobileConfigServiceProvider;
-(id)omnistoreNuxServiceProvider;
-(id)omnistoreUserPrefsServiceProvider;
-(id)presenceServiceProvider;
-(id)realTimeBannerServiceProvider;
-(id)syncProtocolServiceAdapterProvider;
-(id)threadSummaryUpdateServiceProvider;
-(id)threadUpdateServiceProvider;
-(id)watchRequestHandlerServiceProvider;
-(id)pushRegistrationServiceProvider;
-(id)notificationAccessTokenSyncServiceProvider;
-(id)messageLiveLocationThreadSummaryUpdateProcessorServiceProvider;
-(id)flowStateServiceProvider;
-(id)loggedInUserRefreshServiceProvider;
-(id)nonEssentialServicesProvider;
-(id)messageLocalNotificationServiceProvider;
-(id)viewLifecycleManagerProvider;
-(id)photoViewNodeReusePoolProvider;
-(id)crashReportInfoUpdatingServiceProvider;
-(id)ephemeralMessagingSetupServiceProvider;
-(id)connectionStatusToastControllerServiceProvider;
-(id)keyboardStateTrackerServiceProvider;
-(id)appTerminationServiceProvider;
-(id)montageViewModelSubscriptionServiceProvider;
-(id)webKitCleanupServiceProvider;
-(id)deprecationServiceProvider;
-(id)credentialValidationServiceProvider;
-(id)invalidTokenErrorNotificationHandlingServiceProvider;
-(id)legacySyncEngineManagingServiceProvider;
-(id)spCoordinatorServiceProvider;
-(id)networkMonitorControllerServiceProvider;
-(id)orcaPersistManagerServiceProvider;
-(id)nuxBootstrapperServiceProvider;
-(id)imageStreamingServiceInitializerRegistryServiceProvider;
-(id)invitesInterstitialServiceProvider;
-(id)spotlightUserIndexServiceProvider;
-(id)notificationServiceTweaksSerializationServiceProvider;
-(id)notificationServiceExtensionEventProcessingServiceProvider;
-(id)accountNotificationsFetchingServiceProvider;
-(id)accountSwitchingPolicyBridgeServiceProvider;
-(id)canonicalGroupFetcherServiceProvider;
-(id)compactDiskServiceProvider;
-(id)composerExtensionOrderFetcherServiceProvider;
-(id)mActionsServiceProvider;
-(id)montageRecentForwardedMessageStoreServiceProvider;
-(id)mapSnapshotterControllerServiceProvider;
-(id)threadTypingStateTrackerServiceProvider;
-(id)configManagerProvider;
-(id)exceptionHandlerProvider;
-(id)contactSyncStateLoggingServiceProvider;
-(id)messagesDiskRestorerServiceProvider;
-(id)frequentlyUsedEmojisStoreServiceProvider;
-(id)groupThreadsFetcherServiceProvider;
-(id)internalStarRatingServiceProvider;
-(id)keyboardCacheServiceProvider;
-(id)linkTimeLoggingServiceProvider;
-(id)mAIUserActionServiceProvider;
-(id)messagesNetworkPrefetcherServiceProvider;
-(id)messagingRegionFetcherServiceProvider;
-(id)nuxControllerServiceProvider;
-(id)pushNotificationToggledSurveyCoordinatorServiceProvider;
-(id)qplPerfLoggerGatekeeperServiceProvider;
-(id)recentMessagesTrackingServiceProvider;
-(id)searchNullStateViewModelSubscriptionServiceProvider;
-(id)starRatingServiceProvider;
-(id)voicemailAssetDownloaderServiceProvider;
-(id)webRTCCallTabBadgeUpdateServiceProvider;
-(id)notificationContentExtensionAdaptersServiceProvider;
-(id)contactStoreIntegrityVerifierServiceProvider;
-(id)secureThreadAppNotificationServiceProvider;
-(id)secureMessagingDeviceUpgradePromptServiceProvider;
-(id)groupsTabBadgeUpdateServiceProvider;
-(id)imageDuplicateCrawlerServiceProvider;
-(id)messagingStorePruningServiceProvider;
-(id)permissionLoggingServiceProvider;
-(id)watchDataServiceProvider;
-(id)watchLogFileServiceProvider;
-(id)mqttServiceProvider;
-(id)syncEngineServiceProvider;
-(id)threadSharedMediaModelCacheServiceProvider;
-(id)threadStoreServiceProvider;
-(id)voipCoordinatorServiceProvider;
-(id)webRTCServiceProvider;
-(id)updaterServiceProvider;
-(id)inboxViewModelSubscriptionServiceProviderWithIdentifier:(id)arg1 ;
-(id)groupsViewModelSubscriptionServiceProviderWithIdentifier:(id)arg1 ;
-(UIApplication *)application;
-(FBUserSession *)session;
@end

