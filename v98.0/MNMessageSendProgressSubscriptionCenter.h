/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSendSchedulerListening.h>
#import <Messenger/MNMessageSendAttachmentProgressListening.h>
#import <Messenger/MNPendingThreadRequestListening.h>

@protocol MNMessageSendQuerying, MNPendingThreadQuerying, FBMessageOutgoingAttachmentPreparationProgressTracking, OS_dispatch_queue, MNMessageSendSchedulerListening, MNMessageSendAttachmentProgressListening, MNPendingThreadRequestListening;
@class NSObject, NSMutableDictionary, NSString;

@interface MNMessageSendProgressSubscriptionCenter : NSObject <MNMessageSendSchedulerListening, MNMessageSendAttachmentProgressListening, MNPendingThreadRequestListening> {

	id<MNMessageSendQuerying> _sendQuerier;
	id<MNPendingThreadQuerying> _pendingThreadQuerier;
	id<FBMessageOutgoingAttachmentPreparationProgressTracking> _progressTracker;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNMessageSendSchedulerListening> _queueDispatchedSelfSendListener;
	id<MNMessageSendAttachmentProgressListening> _queueDispatchedSelfProgressListener;
	id<MNPendingThreadRequestListening> _queueDispatchedSelfThreadCreationListener;
	NSMutableDictionary* _offlineThreadingIdToCallbacksMap;
	NSMutableDictionary* _offlineThreadingIdToServerPostProcessingProgressTimerMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willCreateThreadForPendingThread:(id)arg1 ;
-(void)didCreateThreadWithKey:(id)arg1 forPendingThread:(id)arg2 ;
-(void)didFailToCreateThreadForPendingThread:(id)arg1 error:(id)arg2 ;
-(void)didCancelCreatingThreadForPendingThread:(id)arg1 ;
-(void)willRetryCreatingThreadForPendingThread:(id)arg1 ;
-(void)didScheduleSendingMessage:(id)arg1 toPendingThread:(id)arg2 ;
-(void)didCancelSendingMessage:(id)arg1 fromPendingThread:(id)arg2 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didEnqueueMessageAndWillSendImmediately:(id)arg1 ;
-(void)didEnqueueMessageAndWillWaitInQueue:(id)arg1 ;
-(void)willSendQueuedMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 andWillSendNextMessageInQueueImmediately:(id)arg2 ;
-(void)didCancelMessage:(id)arg1 andWillSendNextMessageInQueueImmediately:(id)arg2 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 errorType:(unsigned long long)arg3 ;
-(id)startSubscriptionForMessageWithOfflineThreadingId:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)message:(id)arg1 attachmentPreparationProgressDidChange:(double)arg2 ;
-(void)message:(id)arg1 attachmentPreparationDidSucceedWithPreparedAttachment:(id)arg2 ;
-(void)message:(id)arg1 attachmentPreparationDidFailWithError:(id)arg2 isRetriable:(BOOL)arg3 ;
-(id)initWithSendQuerier:(id)arg1 pendingThreadQuerier:(id)arg2 progressTracker:(id)arg3 sendAnnouncer:(id)arg4 progressAnnouncer:(id)arg5 threadCreationAnnouncer:(id)arg6 queue:(id)arg7 ;
-(id)_outgoingMessageForOfflineThreadingId:(id)arg1 ;
-(id)_getOrCreateCallbackSetForOfflineThreadingId:(id)arg1 ;
-(id)_progressForOfflineThreadingId:(id)arg1 ;
-(void)_cancelCallback:(/*^block*/id)arg1 forOfflineThreadingId:(id)arg2 ;
-(void)_invokeCallbacksForOfflineThreadingId:(id)arg1 progress:(double)arg2 ;
-(void)_didSendMessage:(id)arg1 ;
-(void)_didCancelMessage:(id)arg1 ;
-(void)_cleanUpForOfflineThreadingId:(id)arg1 ;
-(void)_invokeCallbacksForMessage:(id)arg1 uploadProgress:(double)arg2 isInServerPostProcessing:(BOOL)arg3 ;
-(double)_serverPostProcessingProgressEstimateForOfflineThreadingId:(id)arg1 ;
-(void)_beginServerPostProcessingProgressEstimateTimerForMessage:(id)arg1 totalTimeEstimate:(double)arg2 ;
-(id)_findMessageWithSendStateForOfflineThreadingIdInPendingThreads:(id)arg1 ;
-(id)_sendStateInfoForMessageWithOfflineThreadingId:(id)arg1 ;
-(void)_updateProgressForMessage:(id)arg1 totalTimeEstimate:(double)arg2 ;
@end

