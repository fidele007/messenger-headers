/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadListMonitorListener.h>
#import <Messenger/FBMSPForcedFetchDeltaHandlerListening.h>
#import <FBSharedFramework/MNUserChangedListener.h>
#import <FBSharedFramework/MNEphemeralMessageExpirationTimerStoreListening.h>
#import <Messenger/MNThreadTypingStateTrackerListener.h>
#import <Messenger/MNThreadRowsViewModelBackfeederListener.h>
#import <Messenger/MNSingleModelMonitoring.h>

@protocol MNUserMonitoring, OS_dispatch_queue, MNThreadListMonitorListener, FBMSPForcedFetchDeltaHandlerListening, MNUserChangedListener, MNEphemeralMessageExpirationTimerStoreListening, MNThreadTypingStateTrackerListener, MNThreadRowsViewModelBackfeederListener, MNModelInvalidating;
@class MNThreadListMonitor, FBMSPForcedFetchDeltaHandlerListeningAnnouncer, MNEphemeralMessagingSystemController, MNThreadTypingStateTracker, MNThreadRowsViewModelBackfeeder, NSObject, MNUserToThreadRowsMapper, NSMutableSet, FBTimeThrottler, NSString;

@interface MNThreadRowMonitor : NSObject <MNThreadListMonitorListener, FBMSPForcedFetchDeltaHandlerListening, MNUserChangedListener, MNEphemeralMessageExpirationTimerStoreListening, MNThreadTypingStateTrackerListener, MNThreadRowsViewModelBackfeederListener, MNSingleModelMonitoring> {

	MNThreadListMonitor* _threadListMonitor;
	FBMSPForcedFetchDeltaHandlerListeningAnnouncer* _forcedFetchAnnouncer;
	MNEphemeralMessagingSystemController* _ephemeralSystemController;
	id<MNUserMonitoring> _userMonitor;
	MNThreadTypingStateTracker* _typingStateTracker;
	MNThreadRowsViewModelBackfeeder* _threadRowsBackfeeder;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNThreadListMonitorListener> _threadListMonitorListener;
	id<FBMSPForcedFetchDeltaHandlerListening> _forcedFetchListener;
	id<MNUserChangedListener> _userChangedListener;
	id<MNEphemeralMessageExpirationTimerStoreListening> _ephemeralMessageExpirationListener;
	id<MNThreadTypingStateTrackerListener> _typingStateListener;
	id<MNThreadRowsViewModelBackfeederListener> _threadRowsViewModelListener;
	MNUserToThreadRowsMapper* _userToThreadRowsMapper;
	NSMutableSet* _pendingInvalidations;
	FBTimeThrottler* _throttler;
	id<MNModelInvalidating> _invalidator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNModelInvalidating> invalidator;              //@synthesize invalidator=_invalidator - In the implementation block
-(void)didHandleLazyForceFetchForThreadWithKey:(id)arg1 ;
-(void)didHandleLazyForceFetchMessageWithId:(id)arg1 onThreadWithKey:(id)arg2 ;
-(id<MNModelInvalidating>)invalidator;
-(void)setInvalidator:(id<MNModelInvalidating>)arg1 ;
-(id)initWithThreadListMonitor:(id)arg1 forcedFetchAnnouncer:(id)arg2 ephemeralSystemController:(id)arg3 userMonitor:(id)arg4 typingStateTracker:(id)arg5 threadRowsBackfeeder:(id)arg6 queue:(id)arg7 ;
-(void)threadRowsViewModelBackfeederDidReceiveUpdateWithThreadRowsViewModel:(id)arg1 ;
-(void)didTypingStateChangeWithSenderId:(id)arg1 inThreadWithKey:(id)arg2 ;
-(void)reloadThreadList;
-(void)reloadThreadWithKey:(id)arg1 ;
-(void)removeThreadWithKeyFromList:(id)arg1 ;
-(void)_submitPendingInvalidations;
-(void)_scheduleInvalidationForKey:(id)arg1 ;
-(void)usersDidUpdate:(id)arg1 ;
-(void)usersDidDelete:(id)arg1 ;
-(void)ephemeralMessageExpirationTimersAddedForThreadWithKey:(id)arg1 ;
-(void)ephemeralMessageExpirationTimersExpiredForThreadsWithKeys:(id)arg1 ;
-(void)stopMonitoring;
-(void)startMonitoring;
@end

