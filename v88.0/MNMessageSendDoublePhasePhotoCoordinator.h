/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSendSchedulerListening.h>
#import <Messenger/MNMessageSendAttachmentContextProvider.h>
#import <Messenger/MNMessageSendAttachmentProgressListening.h>
#import <Messenger/MNMessageSyncEventListening.h>

@protocol OS_dispatch_queue, FBMessageOutgoingAttachmentPreparing, MNAuthenticationManager;
@class NSObject, MNPhotoDoublePhaseSendExperimentContext, MNMessageSendDoublePhaseAnalyticsLogger, MNMessageSendDoublePhaseEventListeningAnnouncer, FBMessageAttachmentPhotoQualityPreparer, NSMutableDictionary, FBUserSession, NSString;

@interface MNMessageSendDoublePhasePhotoCoordinator : NSObject <MNMessageSendSchedulerListening, MNMessageSendAttachmentContextProvider, MNMessageSendAttachmentProgressListening, MNMessageSyncEventListening> {

	NSObject*<OS_dispatch_queue> _queue;
	MNPhotoDoublePhaseSendExperimentContext* _experimentContext;
	MNMessageSendDoublePhaseAnalyticsLogger* _doublePhaseAnalyticsLogger;
	MNMessageSendDoublePhaseEventListeningAnnouncer* _doublePhaseEventAnnouncer;
	id<FBMessageOutgoingAttachmentPreparing> _attachmentPreparer;
	FBMessageAttachmentPhotoQualityPreparer* _qualityPreparer;
	NSMutableDictionary* _offlineThreadingIdToSinglePhotoAttachmentFbId;
	NSMutableDictionary* _offlineThreadingIdToServerMessageId;
	NSMutableDictionary* _offlineThreadingIdToThreadKey;
	FBUserSession* _session;
	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)messageDidSyncViaOmnistore:(id)arg1 messageId:(id)arg2 ;
-(void)message:(id)arg1 attachmentPreparationProgressDidChange:(double)arg2 ;
-(void)message:(id)arg1 attachmentPreparationDidSucceedWithPreparedAttachment:(id)arg2 ;
-(void)messageDidSyncViaSyncProtocol:(id)arg1 messageId:(id)arg2 ;
-(void)messageDidSyncViaThreadFetch:(id)arg1 messageId:(id)arg2 ;
-(BOOL)_shouldUseDoublePhaseSendForMessage:(id)arg1 ;
-(void)_startSecondPhaseOfMessage:(id)arg1 ;
-(double)_maxDimensionFromPhotoMessageContent:(id)arg1 ;
-(void)_invalidateCacheForOfflineThreadingId:(id)arg1 ;
-(void)_prepareSecondPhaseWithAttachment:(id)arg1 forMessage:(id)arg2 withOriginalAttachmentFbId:(id)arg3 allowRetry:(BOOL)arg4 ;
-(void)_messageAttachmentPreparationDidComplete:(id)arg1 ;
-(void)_messageAttachmentPreparationDidFail:(id)arg1 error:(id)arg2 ;
-(void)_sendDeltaForcedFetchForMessageId:(id)arg1 threadKey:(id)arg2 offlineThreadingId:(id)arg3 ;
-(void)_sendDeltaForcedFetchIfPossibleWithOfflineThreadingId:(id)arg1 ;
-(void)_messageDidSync:(id)arg1 messageId:(id)arg2 ;
-(void)_sendRequestSucceeded:(id)arg1 offlineThreadingId:(id)arg2 ;
-(void)_sendRequestFailed:(id)arg1 offlineThreadingId:(id)arg2 error:(id)arg3 ;
-(id)messageAttachmentContextForOutgoingMessage:(id)arg1 ;
-(id)initWithSession:(id)arg1 authManager:(id)arg2 attachmentPreparer:(id)arg3 photoQualityPreparer:(id)arg4 analytics:(id)arg5 clock:(id)arg6 queue:(id)arg7 ;
@end
