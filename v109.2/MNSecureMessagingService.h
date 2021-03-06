/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBBackgroundingListener.h>
#import <Messenger/MNSecureMessagingStartupStateMachineListener.h>
#import <Messenger/MNSecureMessagingRegistrationStateUpdateListening.h>
#import <Messenger/MNSecureMessagingCapabilityManualOverrideExecutorDelegate.h>
#import <Messenger/MNSecureMessagingAccessProtectedDataFailureListening.h>
#import <Messenger/MNSecureThreadServiceControlling.h>
#import <Messenger/MNSecureMessageSending.h>
#import <Messenger/MNSecureImageRequesting.h>
#import <Messenger/MNSecureMessagingBadgeCounting.h>
#import <Messenger/MNSecureMessagingDeviceInformation.h>
#import <Messenger/MNSecureMessagingRegisteredDeviceStatusUpdateRunning.h>
#import <Messenger/MNSecureMessagingServiceManipulating.h>
#import <Messenger/MNSecureMessagingCapabilityManualOverriding.h>
#import <Messenger/MNEndToEndEncrypting.h>

@protocol MNAuthenticationManager, MNSecureMessagingPreKeySyncCoordinating, MNSecureMessagingMasterKeyProviding, MNSecureMessagingSendHandling, MNEphemeralMessageExpirationTimerStoreListening, MNEphemeralMessagingTombstonedMessageDeleting, MNSecureMessagingRegisteredDeviceStatusChangeListening, MNGlobalMuteStatusReading, FBClock, MNDispatchedEndToEndEncrypting, OS_dispatch_queue, MNSecureMessagingServiceAPIRequestFulfilling;
@class NSSet, FBOmnistore, MNSecureMessagingStoredProcedureRunner, FBUserSession, FBVersionedFileHandler, FBAnalytics, FBBackgroundingAnnouncer, MNEphemeralMessagingSystemController, MNSecureMessagingStore, MNSecureMessagingSessionCryptoStateStore, MNSecureMessagingOutgoingMessageCoordinator, MNSecureMessagingRegistrationRunner, MNUnprotectedCustomBlobStore, MNBouncedMessageTracker, MNSecureMessagingCryptoKeychainStore, MNSecureMessagingRegistrationStateCache, MNSecureMessagingCryptoStateLoader, MNSecureMessagingRegistrationCryptoStateUpdater, MNSecureMessagingCryptoKeychainStorageAnalyticsLogger, MNSecureThreadCacheInvalidatingAnnouncementInterceptor, MNSecureThreadMessageReceivedListeningAnnouncer, MNSecureMessagingStoreListenerAnnouncer, MNSecureMessageSendListeningAnnouncer, MNSecureThreadExistenceInfoCacheObservingAnnouncer, MNSecureMessagingRegisteredDeviceStatusChangeListeningAnnouncer, MNSecureMessagingOtherDeviceStatusChangeListeningAnnouncer, MNSecureMessagingCryptoStateUpdateListeningAnnouncer, MNSecureMessagingServiceListeningAnnouncer, MNSecureThreadUpdater, MNSecureMessagingPacketReceiver, MNSecureMessagingImageRequester, MNSecureMessagingVideoRequester, MNSecureThreadExistenceInfoCache, MNSecureThreadExistenceInfoCacheUpdater, MNSecureEphemeralMessagingDiskStateDeleter, MNSecureMessagingRegisteredDeviceStatusUpdateHandler, MNSecureMessagingDisableOtherDeviceRunner, MNSecureMessageSendRetrier, MNBadgeCountUpdateService, MNSecureMessagingStartupStateMachine, MNSecureMessagingBadgeCounter, MNSecureMessagingStoreOpenedDelayer, MNSecureMessagingCryptoStateLoaderListeningAnnouncer, MNSecureMessagingCapabilityManualOverrideExecutor, MNSecureMessagingCapabilityStore, MNLocalNotificationController, FBMobileConfigContextManager, FBMigrationRunner, MNSecureMessagingPreStartMigrationRunner, NSString, NSObject, NSData, MNSecureMessagingRegistrationState;

@interface MNSecureMessagingService : NSObject <FBBackgroundingListener, MNSecureMessagingStartupStateMachineListener, MNSecureMessagingRegistrationStateUpdateListening, MNSecureMessagingCapabilityManualOverrideExecutorDelegate, MNSecureMessagingAccessProtectedDataFailureListening, MNSecureThreadServiceControlling, MNSecureMessageSending, MNSecureImageRequesting, MNSecureMessagingBadgeCounting, MNSecureMessagingDeviceInformation, MNSecureMessagingRegisteredDeviceStatusUpdateRunning, MNSecureMessagingServiceManipulating, MNSecureMessagingCapabilityManualOverriding, MNEndToEndEncrypting> {

	FBOmnistore* _omnistore;
	MNSecureMessagingStoredProcedureRunner* _storedProcedureRunner;
	FBUserSession* _session;
	FBVersionedFileHandler* _versionedFileHandler;
	FBAnalytics* _analytics;
	id<MNAuthenticationManager> _authManager;
	FBBackgroundingAnnouncer* _backgroundingAnnouncer;
	MNEphemeralMessagingSystemController* _ephemeralMessageSystemController;
	MNSecureMessagingStore* _messagingStore;
	MNSecureMessagingSessionCryptoStateStore* _cryptoStateStore;
	MNSecureMessagingOutgoingMessageCoordinator* _sendMessageCoordinator;
	MNSecureMessagingRegistrationRunner* _registrationRunner;
	MNUnprotectedCustomBlobStore* _unprotectedBlobStore;
	MNBouncedMessageTracker* _bouncedMessageTracker;
	id<MNSecureMessagingPreKeySyncCoordinating> _preKeySyncCoordinator;
	MNSecureMessagingCryptoKeychainStore* _cryptoKeychainStore;
	MNSecureMessagingRegistrationStateCache* _registrationStateCache;
	MNSecureMessagingCryptoStateLoader* _cryptoStateLoader;
	MNSecureMessagingRegistrationCryptoStateUpdater* _cryptoStateUpdater;
	id<MNSecureMessagingMasterKeyProviding> _masterKeyProvider;
	MNSecureMessagingCryptoKeychainStorageAnalyticsLogger* _cryptoStateCoordinatorLogger;
	id<MNSecureMessagingSendHandling> _sendHandler;
	MNSecureThreadCacheInvalidatingAnnouncementInterceptor* _cacheInvalidatingAnnouncementInterceptor;
	MNSecureThreadMessageReceivedListeningAnnouncer* _receivedMessageAnnouncer;
	MNSecureMessagingStoreListenerAnnouncer* _storeListenerAnnouncer;
	MNSecureMessageSendListeningAnnouncer* _sendListenerAnnouncer;
	MNSecureThreadExistenceInfoCacheObservingAnnouncer* _threadExistenceInfoCacheObserverAnnouncer;
	MNSecureMessagingRegisteredDeviceStatusChangeListeningAnnouncer* _deviceStatusChangeListeningAnnouncer;
	MNSecureMessagingOtherDeviceStatusChangeListeningAnnouncer* _otherDeviceStatusChangeListeningAnnouncer;
	MNSecureMessagingCryptoStateUpdateListeningAnnouncer* _cryptoStateUpdateListenerAnnouncer;
	MNSecureMessagingServiceListeningAnnouncer* _serviceListenerAnnouncer;
	MNSecureThreadUpdater* _threadUpdater;
	MNSecureMessagingPacketReceiver* _packetReceiver;
	MNSecureMessagingImageRequester* _imageRequester;
	MNSecureMessagingVideoRequester* _videoRequester;
	MNSecureThreadExistenceInfoCache* _threadExistenceInfoCache;
	MNSecureThreadExistenceInfoCacheUpdater* _threadExistenceInfoCacheUpdater;
	MNSecureEphemeralMessagingDiskStateDeleter* _ephemeralMessagingDiskStateDeleter;
	id<MNEphemeralMessageExpirationTimerStoreListening> _dispatchedEphemeralMessageExpirationTimerStoreListener;
	id<MNEphemeralMessagingTombstonedMessageDeleting> _dispatchedEphemeralTombstonedMessageDeleter;
	MNSecureMessagingRegisteredDeviceStatusUpdateHandler* _deviceStatusUpdateRunner;
	id<MNSecureMessagingRegisteredDeviceStatusChangeListening> _notificationPosterDeviceStatusChangeListenerDispatched;
	MNSecureMessagingDisableOtherDeviceRunner* _remoteDeviceDisabler;
	MNSecureMessageSendRetrier* _sendRetrier;
	MNBadgeCountUpdateService* _badgeCountService;
	MNSecureMessagingStartupStateMachine* _startupStateMachine;
	MNSecureMessagingBadgeCounter* _secureMessagingBadgeCounter;
	MNSecureMessagingStoreOpenedDelayer* _storeOpenedDelayer;
	MNSecureMessagingCryptoStateLoaderListeningAnnouncer* _stateLoaderAnnouncer;
	MNSecureMessagingCapabilityManualOverrideExecutor* _manualOverrideExecutor;
	/*^block*/id _serviceEnabledCompletionBlock;
	MNSecureMessagingCapabilityStore* _capabilityStore;
	MNLocalNotificationController* _localNotificationController;
	id<MNGlobalMuteStatusReading> _globalMuteStatusReader;
	FBMobileConfigContextManager* _mobileConfigManager;
	FBMigrationRunner* _migrationRunner;
	MNSecureMessagingPreStartMigrationRunner* _preStartMigrationRunner;
	id<FBClock> _clock;
	NSString* _appGroup;
	id<MNDispatchedEndToEndEncrypting> _endToEndEncrypter;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isServiceStarted;
	long long _serviceState;
	id<MNSecureMessagingServiceAPIRequestFulfilling> _apiRequestFulfiller;

}

@property (assign,nonatomic) long long serviceState;                                                  //@synthesize serviceState=_serviceState - In the implementation block
@property (retain) id<MNSecureMessagingServiceAPIRequestFulfilling> apiRequestFulfiller;              //@synthesize apiRequestFulfiller=_apiRequestFulfiller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * unreadThreadKeys; 
@property (copy,readonly) NSData * ourIdentityKey; 
@property (readonly) BOOL canSendSecureMessage; 
@property (copy,readonly) MNSecureMessagingRegistrationState * registrationState; 
@property (readonly) BOOL multiDeviceSupported; 
@property (assign,nonatomic) BOOL useFakeOmnistore; 
-(void)addRegisteredDeviceStatusChangeListener:(id)arg1 ;
-(BOOL)useFakeOmnistore;
-(BOOL)canSendSecureMessage;
-(NSData *)ourIdentityKey;
-(void)setUseFakeOmnistore:(BOOL)arg1 ;
-(void)runUpdateToMakeThisDevicePrimary;
-(void)forceReregistration;
-(void)topUpPrekeys;
-(NSSet *)unreadThreadKeys;
-(void)addServiceListener:(id)arg1 ;
-(void)removeServiceListener:(id)arg1 ;
-(void)addSendListener:(id)arg1 ;
-(void)removeSendListener:(id)arg1 ;
-(void)addThreadExistenceInfoCacheObserver:(id)arg1 ;
-(void)removeThreadExistenceInfoCacheObserver:(id)arg1 ;
-(void)addIncomingMessageListener:(id)arg1 ;
-(void)removeIncomingMessageListener:(id)arg1 ;
-(void)removeRegisteredDeviceStatusChangeListener:(id)arg1 ;
-(void)addOtherDeviceStatusChangeListener:(id)arg1 ;
-(void)removeOtherDeviceStatusChangeListener:(id)arg1 ;
-(id)bouncedMessageIdsForThreadWithKey:(id)arg1 ;
-(id)readThreadAndMessagesForReportingFlowForKey:(id)arg1 messageRange:(id)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)executeBlockAfterStoreOpened:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)readRemoteFingerprintForUserId:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)readDeviceInformationForUserId:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)secureThreadExistenceInfoForOtherUserId:(id)arg1 ;
-(void)updateSecureThreadExistenceInfoForOtherUserIdIfUnknown:(id)arg1 ;
-(id)fetchUrlFromSecureVideoSource:(id)arg1 queue:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)deleteAllMessagingContentWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)userDidSendMessageFromThisDevice;
-(void)userDidOpenInboxThreadList;
-(void)runUpdateToDisableDeviceWithIdentityKey:(id)arg1 completionBlock:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(long long)capabilityForCurrentUser;
-(BOOL)multiDeviceSupported;
-(BOOL)secureServiceIsInStateThatAllowsOverriding;
-(void)performManualOverrideWithServiceEnabled:(BOOL)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setServiceState:(long long)arg1 ;
-(long long)serviceState;
-(void)failedToAccessProtectedData;
-(void)setApiRequestFulfiller:(id<MNSecureMessagingServiceAPIRequestFulfilling>)arg1 ;
-(id<MNSecureMessagingServiceAPIRequestFulfilling>)apiRequestFulfiller;
-(void)_startDependingOnCapability:(id)arg1 ;
-(void)_performFullStartDueToAllowedCapability:(id)arg1 ;
-(void)_performFullStartWithLoggedInUserCryptoEngine:(id)arg1 ;
-(void)_subscribeToProtectedDataNotification;
-(void)_runPreStartMigrationAndLoadState;
-(void)_unsubscribeFromNotifications;
-(void)_protectedMessagingDataDidBecomeAvailable;
-(void)_protectedMessagingDataWillBecomeUnavailable;
-(void)_performManualOverrideWithServiceEnabled:(BOOL)arg1 dispatchedCompletionBlock:(/*^block*/id)arg2 ;
-(void)didStartOmnistoreSyncingWithSendMessageCoordinator:(id)arg1 threadUpdater:(id)arg2 imageRequester:(id)arg3 videoRequester:(id)arg4 secureMessagingBadgeCounter:(id)arg5 deviceStatusUpdateRunner:(id)arg6 notificationPoster:(id)arg7 messagingCryptoEngine:(id)arg8 externalCryptoEngine:(id)arg9 bouncedMessageTracker:(id)arg10 packetReceiver:(id)arg11 preKeySyncCoordinator:(id)arg12 endToEndEncrypter:(id)arg13 sendRetrier:(id)arg14 remoteDeviceDisabler:(id)arg15 ;
-(void)didStartCryptoServices;
-(void)didDeleteMessagingStoreWithReason:(long long)arg1 ;
-(void)didBeginRegistration;
-(void)didCompleteRegistration;
-(void)didFailRegistrationRequest;
-(void)setupSecureMessagingServiceWithServiceEnabledBlock:(/*^block*/id)arg1 ;
-(void)runUpdateToEnableThisDevice;
-(void)generatePreKeyBundleWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)encryptData:(id)arg1 forPreKeyBundle:(id)arg2 completion:(/*^block*/id)arg3 callbackQueue:(id)arg4 ;
-(void)decryptData:(id)arg1 withPreKey:(id)arg2 completion:(/*^block*/id)arg3 callbackQueue:(id)arg4 ;
-(id)initWithOmnistore:(id)arg1 userSession:(id)arg2 versionedFileHandler:(id)arg3 authManager:(id)arg4 badgeCountService:(id)arg5 localNotificationController:(id)arg6 backgroundAnnouncer:(id)arg7 analytics:(id)arg8 ephemeralMessageSystemController:(id)arg9 globalMuteStatusReader:(id)arg10 mobileConfigManager:(id)arg11 currentUserIsIsMinor:(BOOL)arg12 clock:(id)arg13 migrationRunner:(id)arg14 appGroup:(id)arg15 queue:(id)arg16 ;
-(void)runSecureThreadSummaryUpdate:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(void)handleIdle;
-(void)didEnterForeground;
-(id)readThreadWithKey:(id)arg1 messageRange:(id)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)readThreadsInRange:(id)arg1 numberOfMessagesPerThread:(long long)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(void)setExternalSecureThreadCacheInvalidator:(id)arg1 ;
-(id)readThreadSummariesWithOtherUserFbIds:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)fetchImageFromSecurePhotoSource:(id)arg1 queue:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)stop;
-(void)_stop;
-(MNSecureMessagingRegistrationState *)registrationState;
-(void)start:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)_loadState;
-(void)addSubscriber:(id)arg1 ;
-(void)didEnterBackground;
@end

