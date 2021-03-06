/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMMessagesSnapshotStateMachineDelegate.h>
#import <Messenger/FBMSPQueueCreationListener.h>
#import <Messenger/FBMMessagesSnapshotThreadsCriticalFetcherSyncProtocolDelegate.h>

@protocol FBMSPErrorRetryManagerDelegate;
@class NSNotificationCenter, FBExponentialBackoffTimer, FBAnalytics, MNUserSettings, FBBackgroundTaskHandler, MNMessagesSyncSnapshotListeningAnnouncer, FBMThreadFetchStateClearer, NSDate, FBMMessagesSnapshotStateMachine, NSString;

@interface FBMSPErrorRetryManager : NSObject <FBMMessagesSnapshotStateMachineDelegate, FBMSPQueueCreationListener, FBMMessagesSnapshotThreadsCriticalFetcherSyncProtocolDelegate> {

	NSNotificationCenter* _notificationCenter;
	FBExponentialBackoffTimer* _retrySnapshotTimer;
	FBAnalytics* _analytics;
	MNUserSettings* _userSettings;
	FBBackgroundTaskHandler* _backgroundTaskHandler;
	/*^block*/id _stateMachineCreationBlock;
	MNMessagesSyncSnapshotListeningAnnouncer* _announer;
	FBMThreadFetchStateClearer* _threadFetchedStateClearer;
	BOOL _hasSnapshotBeenAttemptedBefore;
	long long _mostSevereAwaitingSnapshotReason;
	NSDate* _dateLastSnapshotRetryFiredOn;
	long long _lastSnapshotFiredOffReason;
	unsigned long long _backgroundTaskIdForOngoingSnapshot;
	id<FBMSPErrorRetryManagerDelegate> _delegate;
	FBMMessagesSnapshotStateMachine* _messagesSnapshotStateMachine;

}

@property (retain) FBMMessagesSnapshotStateMachine * messagesSnapshotStateMachine;              //@synthesize messagesSnapshotStateMachine=_messagesSnapshotStateMachine - In the implementation block
@property (assign,nonatomic,__weak) id<FBMSPErrorRetryManagerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL isSnapshotFetching; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetSnapshot;
-(void)retrySnapshotWithReason:(long long)arg1 ;
-(void)addMessagesSyncSnapshotListener:(id)arg1 ;
-(void)removeMessagesSyncSnapshotListener:(id)arg1 ;
-(BOOL)isSnapshotFetching;
-(void)messagesSnapshotStateMachine:(id)arg1 stateDidChangeFrom:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)messagesSnapshotStateMachineDidCompleteNonCriticalFetch:(id)arg1 ;
-(void)messagesSnapshotStateMachine:(id)arg1 criticalFetchDidFailWithError:(id)arg2 ;
-(void)threadsCriticalFetcher:(id)arg1 fetchedDataUpToSequenceId:(long long)arg2 ;
-(id)initWithNotificationCenter:(id)arg1 threadStateClearer:(id)arg2 analytics:(id)arg3 userSettings:(id)arg4 retrySnapshotTimer:(id)arg5 stateMachineCreationBlock:(/*^block*/id)arg6 backgroundTaskHandler:(id)arg7 ;
-(void)syncProtocolDidCreateQueueWithSyncToken:(id)arg1 ;
-(FBMMessagesSnapshotStateMachine *)messagesSnapshotStateMachine;
-(void)_retrySnapshotNowWithReason:(long long)arg1 ;
-(void)_retrySnapshotWithExponentialBackoffIfNecessary;
-(void)_retrySnapshotNowFromTimer;
-(void)_backgroundTaskTimedOut;
-(void)setMessagesSnapshotStateMachine:(FBMMessagesSnapshotStateMachine *)arg1 ;
-(void)_announceSnapshotSucceeded;
-(void)_cleanupAfterSnapshotFinishedExecuting;
-(void)_announceSnapshotFailureAndQueueRetry:(id)arg1 ;
-(id)lastSnapshotRetry;
-(void)setDelegate:(id<FBMSPErrorRetryManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMSPErrorRetryManagerDelegate>)delegate;
@end

