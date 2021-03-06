/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextInjecting.h>

@protocol MNThreadSummaryOptimisticStateApplying, MNIncrementalPersistenceCoordinating;
@class FBProviderMapData, FBMAggregatedMessageQuerierProvider, MNPendingThreadController, MNRequestHandlerChainManager, MNUserProvider, MNThreadMontageThumbnailFactory, MNThreadImageManager, FBMLoggedInUserInfoManager, MNMontageListViewModelInboxMontageThreadKeysListeningAnnouncer, MNThreadSummarySubscribingAnnouncer, MNThreadSummaryOptimisticCacheUpdateListeningAnnouncer, MNThreadMessageSubscribingAnnouncer, FBMMessageSendListeningAnnouncer, MNPendingThreadRequestListeningAnnouncer, FBMSPForcedFetchDeltaHandlerListeningAnnouncer, FBMobileConfigContextManager, MNUserSessionObservingCenter, NSNotificationCenter, MNThreadUpdateService, NSString;

@interface MNMontageViewModelSubscriptionServiceInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBMAggregatedMessageQuerierProvider* _messageQuerierProvider;
	MNPendingThreadController* _pendingThreadController;
	MNRequestHandlerChainManager* _handlerChainManager;
	MNUserProvider* _userProvider;
	id<MNThreadSummaryOptimisticStateApplying> _threadSummaryOptimisticStateApplier;
	MNThreadMontageThumbnailFactory* _threadMontageThumbnailFactory;
	MNThreadImageManager* _threadImageManager;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNMontageListViewModelInboxMontageThreadKeysListeningAnnouncer* _montageThreadKeysAnnouncer;
	MNThreadSummarySubscribingAnnouncer* _threadSummaryAnnouncer;
	MNThreadSummaryOptimisticCacheUpdateListeningAnnouncer* _threadSummaryOptimisticAnnouncer;
	MNThreadMessageSubscribingAnnouncer* _threadMessageAnnouncer;
	FBMMessageSendListeningAnnouncer* _messageSendAnnouncer;
	MNPendingThreadRequestListeningAnnouncer* _pendingThreadAnnouncer;
	FBMSPForcedFetchDeltaHandlerListeningAnnouncer* _forcedFetchAnnouncer;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	MNUserSessionObservingCenter* _userSessionObservingCenter;
	NSNotificationCenter* _notificationCenter;
	MNThreadUpdateService* _threadUpdateService;
	id<MNIncrementalPersistenceCoordinating> _incrementalPersistenceCoordinator;

}

@property (nonatomic,readonly) FBMAggregatedMessageQuerierProvider * messageQuerierProvider;                                             //@synthesize messageQuerierProvider=_messageQuerierProvider - In the implementation block
@property (nonatomic,readonly) MNPendingThreadController * pendingThreadController;                                                      //@synthesize pendingThreadController=_pendingThreadController - In the implementation block
@property (nonatomic,readonly) MNRequestHandlerChainManager * handlerChainManager;                                                       //@synthesize handlerChainManager=_handlerChainManager - In the implementation block
@property (nonatomic,readonly) MNUserProvider * userProvider;                                                                            //@synthesize userProvider=_userProvider - In the implementation block
@property (nonatomic,readonly) id<MNThreadSummaryOptimisticStateApplying> threadSummaryOptimisticStateApplier;                           //@synthesize threadSummaryOptimisticStateApplier=_threadSummaryOptimisticStateApplier - In the implementation block
@property (nonatomic,readonly) MNThreadMontageThumbnailFactory * threadMontageThumbnailFactory;                                          //@synthesize threadMontageThumbnailFactory=_threadMontageThumbnailFactory - In the implementation block
@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                                                                //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                                                     //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,readonly) MNMontageListViewModelInboxMontageThreadKeysListeningAnnouncer * montageThreadKeysAnnouncer;              //@synthesize montageThreadKeysAnnouncer=_montageThreadKeysAnnouncer - In the implementation block
@property (nonatomic,readonly) MNThreadSummarySubscribingAnnouncer * threadSummaryAnnouncer;                                             //@synthesize threadSummaryAnnouncer=_threadSummaryAnnouncer - In the implementation block
@property (nonatomic,readonly) MNThreadSummaryOptimisticCacheUpdateListeningAnnouncer * threadSummaryOptimisticAnnouncer;                //@synthesize threadSummaryOptimisticAnnouncer=_threadSummaryOptimisticAnnouncer - In the implementation block
@property (nonatomic,readonly) MNThreadMessageSubscribingAnnouncer * threadMessageAnnouncer;                                             //@synthesize threadMessageAnnouncer=_threadMessageAnnouncer - In the implementation block
@property (nonatomic,readonly) FBMMessageSendListeningAnnouncer * messageSendAnnouncer;                                                  //@synthesize messageSendAnnouncer=_messageSendAnnouncer - In the implementation block
@property (nonatomic,readonly) MNPendingThreadRequestListeningAnnouncer * pendingThreadAnnouncer;                                        //@synthesize pendingThreadAnnouncer=_pendingThreadAnnouncer - In the implementation block
@property (nonatomic,readonly) FBMSPForcedFetchDeltaHandlerListeningAnnouncer * forcedFetchAnnouncer;                                    //@synthesize forcedFetchAnnouncer=_forcedFetchAnnouncer - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * mobileConfigContextManager;                                                //@synthesize mobileConfigContextManager=_mobileConfigContextManager - In the implementation block
@property (nonatomic,readonly) MNUserSessionObservingCenter * userSessionObservingCenter;                                                //@synthesize userSessionObservingCenter=_userSessionObservingCenter - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                                                                //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) MNThreadUpdateService * threadUpdateService;                                                              //@synthesize threadUpdateService=_threadUpdateService - In the implementation block
@property (nonatomic,readonly) id<MNIncrementalPersistenceCoordinating> incrementalPersistenceCoordinator;                               //@synthesize incrementalPersistenceCoordinator=_incrementalPersistenceCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(MNThreadUpdateService *)threadUpdateService;
-(MNUserProvider *)userProvider;
-(MNThreadImageManager *)threadImageManager;
-(MNUserSessionObservingCenter *)userSessionObservingCenter;
-(MNPendingThreadController *)pendingThreadController;
-(MNPendingThreadRequestListeningAnnouncer *)pendingThreadAnnouncer;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(FBMMessageSendListeningAnnouncer *)messageSendAnnouncer;
-(MNThreadSummarySubscribingAnnouncer *)threadSummaryAnnouncer;
-(MNRequestHandlerChainManager *)handlerChainManager;
-(MNThreadMessageSubscribingAnnouncer *)threadMessageAnnouncer;
-(FBMAggregatedMessageQuerierProvider *)messageQuerierProvider;
-(id<MNThreadSummaryOptimisticStateApplying>)threadSummaryOptimisticStateApplier;
-(MNThreadMontageThumbnailFactory *)threadMontageThumbnailFactory;
-(MNMontageListViewModelInboxMontageThreadKeysListeningAnnouncer *)montageThreadKeysAnnouncer;
-(MNThreadSummaryOptimisticCacheUpdateListeningAnnouncer *)threadSummaryOptimisticAnnouncer;
-(FBMSPForcedFetchDeltaHandlerListeningAnnouncer *)forcedFetchAnnouncer;
-(id)montageContentPrefetcherProvider;
-(id<MNIncrementalPersistenceCoordinating>)incrementalPersistenceCoordinator;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)mobileConfigContextManager;
-(NSNotificationCenter *)notificationCenter;
@end

