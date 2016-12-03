/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/MNThreadSummaryOptimisticStateApplying.h>
#import <Messenger/MNThreadMessageOptimisticStateApplying.h>

@protocol FBProvider, MNThreadSummaryOptimisticCacheUpdateListening, MNThreadUpdateRunnerListening, MNAuthenticationManager, MNThreadClientUpdateOptimisticCacheDiskHandling, MNThreadClientUpdateSkipRunDeciding, OS_dispatch_queue, MNThreadClientUpdateRunning, MNThreadSummarySingleUpdateListening, MNThreadSummaryNetworkFetchedListening, MNThreadSummarySubscribing, MNThreadMessageSubscribing, MNThreadClientUpdateOptimisticStorageAppExtensionRestoreListening, MNThreadSummaryUpdateWithSourceUpdateListening, MNSecureThreadSummaryUpdateRunning;
@class MNThreadMarkService, MNThreadSummarySingleUpdateListeningAnnouncer, MNThreadSummaryNetworkFetchedListeningAnnouncer, MNThreadSummarySubscribingAnnouncer, MNThreadMessageSubscribingAnnouncer, MNThreadClientUpdateOptimisticStorageAppExtensionRestoreListeningAnnouncer, NSObject, MNThreadUpdater, MNClientUpdateOptimisticCache, MNClientUpdateOptimisticCachePopulator, FBMCustomDictionaryStore, MNThreadMarkUpdateHandler, MNSimpleGraphRequestUpdateHandler, MNThreadCustomizationUpdateHandler, MNThreadGraphQLMutationRunner, NSString;

@interface MNThreadUpdateRunningService : NSObject <MNServiceControllable, MNThreadSummaryOptimisticStateApplying, MNThreadMessageOptimisticStateApplying> {

	MNThreadMarkService* _threadMarkService;
	id<FBProvider> _threadCustomizationUpdateRunnerProvider;
	id<MNThreadSummaryOptimisticCacheUpdateListening> _optimisticCacheUpdateListener;
	id<MNThreadUpdateRunnerListening> _summaryUpdateRunnerListener;
	id<MNAuthenticationManager> _authenticationManager;
	MNThreadSummarySingleUpdateListeningAnnouncer* _threadSingleUpdateAnnouncer;
	MNThreadSummaryNetworkFetchedListeningAnnouncer* _threadFetchedFromNetworkAnnouncer;
	MNThreadSummarySubscribingAnnouncer* _summarySubscribingAnnouncer;
	MNThreadMessageSubscribingAnnouncer* _messagesSubscribingAnnouncer;
	MNThreadClientUpdateOptimisticStorageAppExtensionRestoreListeningAnnouncer* _appExtensionOptimisticUpdateCacheRestoreAnnouncer;
	id<MNThreadClientUpdateOptimisticCacheDiskHandling> _optimisticUpdateCacheDiskHandler;
	id<MNThreadClientUpdateSkipRunDeciding> _updateSkipDecider;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	MNThreadUpdater* _threadUpdater;
	MNClientUpdateOptimisticCache* _optimisticUpdateCache;
	MNClientUpdateOptimisticCachePopulator* _updateCachePopulator;
	id<MNThreadClientUpdateRunning> _updateRunner;
	id<MNThreadSummarySingleUpdateListening> _cachePopulatorDispatcher;
	id<MNThreadSummaryNetworkFetchedListening> _cacheNetworkFetchDispatcher;
	id<MNThreadSummarySubscribing> _summaryCacheSubscribingDispatcher;
	id<MNThreadMessageSubscribing> _messageCacheSubscribingDispatcher;
	id<MNThreadClientUpdateOptimisticStorageAppExtensionRestoreListening> _appExtensionUpdateCacheRestoreListeningDispatcher;
	id<MNThreadSummaryUpdateWithSourceUpdateListening> _apnsMarkHandlerUpdateListeningDispatcher;
	id<MNSecureThreadSummaryUpdateRunning> _secureThreadUpdateRunner;
	FBMCustomDictionaryStore* _optimisiticStateDiskStore;
	MNThreadMarkUpdateHandler* _markUpdateHandler;
	MNSimpleGraphRequestUpdateHandler* _simpleGraphRequestHandler;
	MNThreadCustomizationUpdateHandler* _customizationUpdateHandler;
	MNThreadGraphQLMutationRunner* _graphQLMutationRunner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runSummaryUpdate:(id)arg1 ;
-(void)runClientUpdate:(id)arg1 completionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)threadSummaryWithAllOptimisticUpdatesApplied:(id)arg1 ;
-(id)messageSetWithAllOptimisticUpdatesApplied:(id)arg1 forSyncedThreadKey:(id)arg2 ;
-(void)runBatchSummaryUpdates:(id)arg1 completionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 messagingRegionHeaderHelper:(id)arg3 threadSummaryCacheReader:(id)arg4 apnsMessageStoreReader:(id)arg5 messagingStore:(id)arg6 messagingStoreDatabaseDelayer:(id)arg7 optimisticUpdateCacheDiskHandler:(id)arg8 updateSkipDecider:(id)arg9 threadUpdateAnnouncer:(id)arg10 threadUpdateWithSourceAnnouncer:(id)arg11 threadFetchedFromNetworkAnnouncer:(id)arg12 summarySubscribingAnnouncer:(id)arg13 messagesSubscribingAnnouncer:(id)arg14 appExtensionOptimisticUpdateCacheRestoreAnnouncer:(id)arg15 externalThreadMarkRunner:(id)arg16 summaryUpdateRunnerListener:(id)arg17 optimisticStateUpdateListener:(id)arg18 threadCustomizationUpdateRunnerProvider:(id)arg19 secureThreadUpdateRunner:(id)arg20 queue:(id)arg21 ;
-(void)runBatchSummaryUpdates:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
