/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNServiceControllable.h>

@protocol OS_dispatch_queue, FBProvider, MNMActionsServiceFulfilling;
@class FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, NSObject, MNMActionsStoreListenerAnnouncer, FBMobileConfigContextManager, NSString;

@interface MNMActionsService : NSObject <FBViewerContextClassProvidable, MNServiceControllable> {

	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _messagingStoreDelayer;
	NSObject*<OS_dispatch_queue> _queue;
	MNMActionsStoreListenerAnnouncer* _actionsListenerAnnouncer;
	FBMobileConfigContextManager* _configManager;
	id<FBProvider> _omniMSettingsStoreProvider;
	id<MNMActionsServiceFulfilling> _actionServiceFulfiller;

}

@property (retain) id<MNMActionsServiceFulfilling> actionServiceFulfiller;              //@synthesize actionServiceFulfiller=_actionServiceFulfiller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)actionsForThreadKey:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)markAllActionsExpiredForThreadKey:(id)arg1 ;
-(void)markActionExpired:(id)arg1 ;
-(void)addActions:(id)arg1 forThreadKey:(id)arg2 overwriteExisting:(BOOL)arg3 ;
-(id<MNMActionsServiceFulfilling>)actionServiceFulfiller;
-(void)setActionServiceFulfiller:(id<MNMActionsServiceFulfilling>)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)handleIdle;
@end

