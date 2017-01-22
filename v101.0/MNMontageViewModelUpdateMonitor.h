/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelUpdateMonitoring.h>
#import <Messenger/MNThreadSummarySubscribing.h>
#import <Messenger/MNThreadSummaryOptimisticCacheUpdateListening.h>
#import <Messenger/MNThreadMessageSubscribing.h>
#import <Messenger/FBMMessageSendListening.h>
#import <Messenger/FBMSPForcedFetchDeltaHandlerListening.h>
#import <Messenger/MNMontageViewModelMessageExpirationListening.h>
#import <Messenger/MNPendingThreadRequestListening.h>

@protocol MNMontageLoadingStateMutating, MNViewModelUpdating;
@class FBMLoggedInUserInfoManager, MNViewModelUpdateBuffer, FBTimeThrottler, NSString;

@interface MNMontageViewModelUpdateMonitor : NSObject <MNViewModelUpdateMonitoring, MNThreadSummarySubscribing, MNThreadSummaryOptimisticCacheUpdateListening, MNThreadMessageSubscribing, FBMMessageSendListening, FBMSPForcedFetchDeltaHandlerListening, MNMontageViewModelMessageExpirationListening, MNPendingThreadRequestListening> {

	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNViewModelUpdateBuffer* _updateBuffer;
	FBTimeThrottler* _updateThrottler;
	id<MNMontageLoadingStateMutating> _loadingStateMutator;
	id<MNViewModelUpdating> _updater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNViewModelUpdating> updater;              //@synthesize updater=_updater - In the implementation block
-(void)willCreateThreadForPendingThread:(id)arg1 ;
-(void)didCreateThreadWithKey:(id)arg1 forPendingThread:(id)arg2 ;
-(void)didFailToCreateThreadForPendingThread:(id)arg1 error:(id)arg2 ;
-(void)didCancelCreatingThreadForPendingThread:(id)arg1 ;
-(void)willRetryCreatingThreadForPendingThread:(id)arg1 ;
-(void)didScheduleSendingMessage:(id)arg1 toPendingThread:(id)arg2 ;
-(void)didCancelSendingMessage:(id)arg1 fromPendingThread:(id)arg2 ;
-(void)didUpdateOptimisticStateForThreadKey:(id)arg1 ;
-(void)didUpdateOptimisticStateForAllThreadKeys;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 ;
-(void)willRetryMessage:(id)arg1 ;
-(void)message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didHandleLazyForceFetchForThreadWithKey:(id)arg1 ;
-(void)didHandleLazyForceFetchMessageWithId:(id)arg1 onThreadWithKey:(id)arg2 ;
-(void)_applyAllPendingUpdates;
-(void)_applyUpdateForOutgoingMessage:(id)arg1 ;
-(void)messagesDidExpireInMontageThreads:(id)arg1 ;
-(void)messagesDidPossiblyReviveInMontageThreadsDueToClockChange:(id)arg1 ;
-(void)_scheduleUpdates:(id)arg1 ;
-(void)_applyUpdates:(id)arg1 ;
-(void)_scheduleUpdatesForMontageThreadKeys:(id)arg1 ;
-(void)_applyUpdateForPendingThread:(id)arg1 ;
-(id)initWithLoggedInUserInfoManager:(id)arg1 queue:(id)arg2 loadingStateMutator:(id)arg3 ;
-(void)setUpdater:(id<MNViewModelUpdating>)arg1 ;
-(id<MNViewModelUpdating>)updater;
@end
