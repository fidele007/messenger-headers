/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNServiceControllable.h>

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
-(id)initWithInjector:(id)arg1 ;
-(void)didEnterForeground;
-(BOOL)_shouldBePersistingExtensionThreadData;
-(void)_restoreContentExtensionSendQueue;
-(void)_performInitialPersistOfExtensionThreadDataIfNecessary;
-(void)_endBackgroundTaskWithId:(unsigned long long)arg1 ;
-(void)_restoredSendQueueFromContentExtension:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
-(void)didEnterBackground;
@end

