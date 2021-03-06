/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <FBSharedFramework/MNServiceControllable.h>

@protocol FBBackgroundingListener, MNThreadSummarySubscribing, MNThreadMessageSubscribing, MNMessagesSyncSnapshotListening, OS_dispatch_queue;
@class MNNotificationContentExtensionInboxThreadListIdentifiersPersister, MNNCEOutgoingSendQueueRestorer, MNNCEThreadClientUpdateOptimisticCacheRestorer, MNThreadStore, MNNotificationContentExtensionThreadDataAppEventThrottler, MNNotificationContentExtensionAdaptersServiceInjector, NSObject, NSString;

@interface MNNotificationContentExtensionAdaptersService : NSObject <FBClassInjectable, MNServiceControllable> {

	MNNotificationContentExtensionInboxThreadListIdentifiersPersister* _inboxListPersister;
	MNNCEOutgoingSendQueueRestorer* _outgoingSendQueueRestorer;
	MNNCEThreadClientUpdateOptimisticCacheRestorer* _clientUpdateOptimisticCacheRestorer;
	MNThreadStore* _threadStore;
	MNNotificationContentExtensionThreadDataAppEventThrottler* _extensionThreadDataUpdateThrottler;
	MNNotificationContentExtensionAdaptersServiceInjector* _injector;
	id<FBBackgroundingListener> _dispatchedSelfBackgroundListener;
	id<MNThreadSummarySubscribing> _dispatchedThreadSummarySubscriber;
	id<MNThreadMessageSubscribing> _dispatchedMessageSubscriber;
	id<MNMessagesSyncSnapshotListening> _dispatchedSnapshotListener;
	id<FBBackgroundingListener> _dispatchedBackgroundListenerForDataPreparingSystem;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _didSetupThreadDataSubscriptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(BOOL)_shouldBePersistingExtensionThreadData;
-(void)_restoreContentExtensionSendQueue;
-(void)_performInitialPersistOfExtensionThreadDataIfNecessary;
-(void)_endBackgroundTaskWithId:(unsigned long long)arg1 ;
-(void)_restoredSendQueueFromContentExtension:(id)arg1 ;
-(void)handleIdle;
-(id)initWithInjector:(id)arg1 ;
-(void)didEnterForeground;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)didEnterBackground;
@end

