/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSessionStateMachineDelegate.h>

@protocol FBProvider, OS_dispatch_queue, MNSessionStateMachineTransitionHandlerDelegate;
@class UIApplication, FBAPISessionStore, FBMAppProperties, FBUserSession, MNServiceController, NSObject, MNLigerAdapter, MNAppEventMonitor, MNIdleServiceDelayController;

@interface MNSessionStateMachineTransitionHandler : NSObject <MNSessionStateMachineDelegate> {

	UIApplication* _application;
	FBAPISessionStore* _apiSessionStore;
	FBMAppProperties* _appProperties;
	FBUserSession* _session;
	MNServiceController* _serviceController;
	id<FBProvider> _mobileConfigContextManagerProvider;
	id<FBProvider> _stateRestorationStrategyProvider;
	id<FBProvider> _storeOpenerProvider;
	id<FBProvider> _syncStoreProvider;
	id<FBProvider> _messagingStoreProvider;
	id<FBProvider> _backgroundPolicyDeciderProvider;
	NSObject*<OS_dispatch_queue> _storeOpeningQueue;
	MNLigerAdapter* _ligerAdapter;
	MNAppEventMonitor* _eventMonitor;
	MNIdleServiceDelayController* _idleServiceDelayController;
	id<MNSessionStateMachineTransitionHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSessionStateMachineTransitionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithApplication:(id)arg1 session:(id)arg2 apiSessionStore:(id)arg3 appProperties:(id)arg4 serviceController:(id)arg5 mobileConfigContextManagerProvider:(id)arg6 stateRestorationStrategyProvider:(id)arg7 storeOpenerProvider:(id)arg8 syncStoreProvider:(id)arg9 messagingStoreProvider:(id)arg10 ligerAdapter:(id)arg11 idleServicesDelayController:(id)arg12 ;
-(void)willTransitionFromStateNotReadyForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStateReadyForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStateBackgroundOnlyForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStateRestoreCompleteForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStateCompleteForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willTransitionFromStatePresentedLoggedInUIForApplicationState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_configureNetwork:(id)arg1 ;
-(void)_configureFBAnalytics:(id)arg1 ;
-(void)_startBackgroundServices:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)_openStoresAndRestoreState:(long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_startForegroundServices:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)_presentLoggedInUI:(long long)arg1 ;
-(void)_restoreStateInStore:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_openStores:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<MNSessionStateMachineTransitionHandlerDelegate>)arg1 ;
-(id<MNSessionStateMachineTransitionHandlerDelegate>)delegate;
@end

