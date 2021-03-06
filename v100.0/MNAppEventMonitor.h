/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAppEventMonitoring.h>

@class NSSet, NSNotificationCenter, NSString;

@interface MNAppEventMonitor : NSObject <MNAppEventMonitoring> {

	NSSet* _eventProcessors;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(void)markProcessStartWithPreMainTime:(long long)arg1 ;
-(void)markMain;
-(void)markDidFinishLaunching;
-(void)markExceptionUploadBegin;
-(void)markExceptionUploadEnd;
-(void)markWillEnterForeground;
-(void)markDidBecomeActive;
-(void)markDidEnterBackground;
-(void)markWillResignActive;
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadKeys:(id)arg1 ;
-(void)applicationDidEnterSetupFlowWithLoggedInUser:(BOOL)arg1 ;
-(void)applicationDidCompleteSetupFlow;
-(void)inboxDidDisplayThreadList;
-(void)inboxDidLoadThreadListDataModel;
-(void)inboxDidFailToLoadThreadListDataModel;
-(void)inboxViewAppearanceStateDidChangeTo:(unsigned long long)arg1 ;
-(void)willNavigateFromViewController:(id)arg1 toViewController:(id)arg2 navigationController:(id)arg3 isSelectedNavigationController:(BOOL)arg4 ;
-(void)didNavigateFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)tabBarControllerDidSelectViewController:(id)arg1 ;
-(void)inboxWillLoadMontageCamera;
-(void)inboxDidLoadMontageCamera;
-(id)initWithEventProcessors:(id)arg1 notificationCenter:(id)arg2 ;
-(void)mqttConnectionStatusChanged:(id)arg1 ;
-(void)_makeAnnouncersProcessEvent:(id)arg1 ;
-(void)markTigonDidStart:(id)arg1 identifier:(long long)arg2 ;
-(void)markTigonDidEndWithSuccess:(BOOL)arg1 identifier:(long long)arg2 ;
-(void)didOpenDatabase;
-(void)didFailToOpenDatabaseWithError:(id)arg1 ;
-(void)didCreateDatabaseTables;
-(void)didDiscardDatabaseFile;
-(void)willDiscardDatabaseContents;
-(void)syncProtocolQueueCreationSucceeded;
-(void)syncProtocolQueueCreationFailedWithError:(id)arg1 ;
-(void)syncProtocolDeltaRequestSucceeded;
-(void)syncProtocolDeltaRequestFailedWithError:(id)arg1 ;
-(void)markNavigationTriggeredByPush;
-(void)markConfigurationSetupBegin;
-(void)markConfigurationSetupEnd;
-(void)markBackgroundServicesBegin;
-(void)markBackgroundServicesEnd;
-(void)markForegroundServicesBegin;
-(void)markForegroundServicesEnd;
-(void)markRestoreStateBegin;
-(void)markRestoreStateEnd;
-(void)dealloc;
@end

