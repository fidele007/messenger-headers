/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelSubscriptionServiceProviding.h>

@protocol MNPresenceSubscribing, MNInboxUnitUpdateListening, MNPYMMUpdateListener, MNInboxTopActiveNowContactSubscriberListening, MNCYMKContactAdditionListening, MNInboxViewModelViewStateMutating, MNInboxUnreadMessagesViewModelMutating, FBMThreadMessageSenderListening, MNMontageBroadcastSenderAttachmentGenerationListener, MNViewModelUpdateBackfeeding, OS_dispatch_queue;
@class MNThreadListViewModelSubscriptionServiceDependencies, MNInboxService, MNPYMMStore, MNInboxViewModelCompositionConfiguration, MNThreadStore, MNThreadListViewModelSubscriptionServiceProvider, MNInboxViewModelElementLoader, MNInboxTopActiveNowContactSubscriber, MNInboxViewModelElementUpdateBackfeeder, MNInboxUnitsViewModelLoader, MNInboxUnitsViewModelUpdateMonitor, MNInboxPresenceViewModelLoader, MNInboxPresenceViewModelUpdateMonitor, MNCYMKViewModelLoader, MNCYMKViewModelUpdateMonitor, MNCYMKContactAdditionListeningAnnouncer, MNCameraRollSectionViewModelSubscriptionServiceProvider, MNInboxViewModelViewStateStore, MNInboxUnreadMessagesStore, MNMontageViewModelSubscriptionServiceProvider, FBMLoggedInUserInfoManager, MNUserSortRankPolicy, MNMontageBroadcastSender, MNInboxMontageAttachmentGenerationPlaceholderStore, NSObject, NSString;

@interface MNInboxViewModelSubscriptionServiceProvider : NSObject <MNViewModelSubscriptionServiceProviding> {

	MNThreadListViewModelSubscriptionServiceDependencies* _threadListServiceDependencies;
	MNInboxService* _inboxService;
	MNPYMMStore* _pymmStore;
	id<MNPresenceSubscribing> _presenceSubscriptionService;
	MNInboxViewModelCompositionConfiguration* _compositionConfiguration;
	MNThreadStore* _threadStore;
	MNThreadListViewModelSubscriptionServiceProvider* _primaryThreadListServiceProvider;
	MNThreadListViewModelSubscriptionServiceProvider* _secondaryThreadListServiceProvider;
	MNInboxViewModelElementLoader* _inboxViewModelElementLoader;
	MNInboxTopActiveNowContactSubscriber* _inboxTopActiveNowContactSubscriber;
	MNInboxViewModelElementUpdateBackfeeder* _inboxViewModelElementUpdateBackfeeder;
	MNInboxUnitsViewModelLoader* _inboxUnitsViewModelLoader;
	MNInboxUnitsViewModelUpdateMonitor* _inboxUnitsViewModelUpdateMonitor;
	id<MNInboxUnitUpdateListening> _dispatchedInboxUnitUpdateListener;
	id<MNPYMMUpdateListener> _dispatchedInboxUnitsPYMMOrderUpdateListener;
	id<MNPYMMUpdateListener> _dispatchedPYMMUpdateListener;
	MNInboxPresenceViewModelLoader* _presenceViewModelLoader;
	MNInboxPresenceViewModelUpdateMonitor* _presenceViewModelUpdateMonitor;
	id<MNInboxTopActiveNowContactSubscriberListening> _dispatchedTopActiveNowContactSubscriberListener;
	MNCYMKViewModelLoader* _cymkViewModelLoader;
	MNCYMKViewModelUpdateMonitor* _cymkViewModelUpdateMonitor;
	MNCYMKContactAdditionListeningAnnouncer* _cymkContactAdditionListeningAnnouncer;
	id<MNCYMKContactAdditionListening> _cymkContactAdditionListener;
	MNCameraRollSectionViewModelSubscriptionServiceProvider* _cameraRollSectionServiceProvider;
	id<MNInboxViewModelViewStateMutating> _inboxViewModelViewStateMutator;
	MNInboxViewModelViewStateStore* _inboxViewModelViewStateStore;
	id<MNInboxUnreadMessagesViewModelMutating> _inboxUnreadMessagesMutator;
	MNInboxUnreadMessagesStore* _inboxUnreadMessagesStore;
	MNMontageViewModelSubscriptionServiceProvider* _montageViewModelSubscriptionServiceProvider;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNUserSortRankPolicy* _userSortRankPolicy;
	MNMontageBroadcastSender* _montageBroadcastSender;
	MNInboxMontageAttachmentGenerationPlaceholderStore* _montageAttachmentGenerationPlaceholderStore;
	id<FBMThreadMessageSenderListening> _dispatchedThreadMessageSenderListener;
	id<MNMontageBroadcastSenderAttachmentGenerationListener> _dispatchedMontageAttachmentGenerationListener;
	id<MNViewModelUpdateBackfeeding> _dispatchedMontageViewModelBackfeederForAttachmentGenerationStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)unreadMessagesMutator;
-(id)viewStateMutator;
-(BOOL)_shouldLoadCameraRoll;
-(void)startWithQueue:(id)arg1 ;
-(id)initWithThreadListServiceDependencies:(id)arg1 inboxService:(id)arg2 handlerChainManager:(id)arg3 pymmStore:(id)arg4 presenceSubscriptionService:(id)arg5 userSortRankPolicy:(id)arg6 pendingRequestsStore:(id)arg7 threadListType:(long long)arg8 compositionConfigurationFactory:(id)arg9 session:(id)arg10 loggedInUserInfoManager:(id)arg11 recentContactsRetriever:(id)arg12 topContactsRetriever:(id)arg13 montageViewModelSubscriptionServiceProvider:(id)arg14 montageBroadcastSender:(id)arg15 retrieverWithThreadSummaries:(id)arg16 cymkContactAdditionListeningAnnouncer:(id)arg17 ;
-(id)additionalPageRequesterForSubscriptionServiceType:(long long)arg1 ;
-(id)_childSingleViewModelLoadingBehaviors;
-(id)_childViewModelSubscriptionCoordinators;
-(BOOL)_shouldLoadCYMKSection;
-(void)startMonitoring;
-(void)stop;
-(void)stopMonitoring;
-(id)coordinator;
-(id)serviceIdentifier;
@end
