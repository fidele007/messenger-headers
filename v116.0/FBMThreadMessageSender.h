/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNThreadMessageSubscribing.h>
#import <FBSharedFramework/MNThreadSummarySubscribing.h>
#import <FBSharedFramework/MNThreadUpdateRunnerListening.h>
#import <FBSharedFramework/MNSecureMessagingServiceListening.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol MNMessageSendScheduling, MNMessageSendClientTriggeredThreadDeletionListening, MNAuthenticationManager, MNSecureThreadServiceControlling;
@class MNPendingThreadController, FBUserSession, NSNotificationCenter, MNThreadMessageSubscribingAnnouncer, MNThreadUpdateRunnerListeningAnnouncer, MNMessageSyncEventListeningAnnouncer, FBMMessageSendStatesGating, MNOmnipickerGating, MNMessageSendConversionLoggingService, FBMThreadMessageManualRetryListeningAnnouncer, NSString;

@interface FBMThreadMessageSender : NSObject <MNThreadMessageSubscribing, MNThreadSummarySubscribing, MNThreadUpdateRunnerListening, MNSecureMessagingServiceListening, FBViewerContextClassProvidable> {

	id<MNMessageSendScheduling> _messageSendScheduler;
	MNPendingThreadController* _pendingThreadController;
	id<MNMessageSendClientTriggeredThreadDeletionListening> _messageSendClientTriggeredThreadDeletionListener;
	id<MNAuthenticationManager> _authManager;
	FBUserSession* _session;
	NSNotificationCenter* _notificationCenter;
	MNThreadMessageSubscribingAnnouncer* _threadMessageSubscribingAnnouncer;
	MNThreadUpdateRunnerListeningAnnouncer* _threadSummaryUpdateRunnerListeningAnnouncer;
	MNMessageSyncEventListeningAnnouncer* _syncEventListeningAnnouncer;
	FBMMessageSendStatesGating* _sendStatesGating;
	MNOmnipickerGating* _omnipickerGating;
	MNMessageSendConversionLoggingService* _sendConversionLoggingService;
	id<MNSecureThreadServiceControlling> _secureThreadServiceControlling;
	FBMThreadMessageManualRetryListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sendReplaceMessageToThreadWithKey:(id)arg1 replacedMessageId:(id)arg2 attachment:(id)arg3 messageLifeType:(long long)arg4 clientTags:(id)arg5 sendConversionContext:(id)arg6 listener:(id)arg7 ;
-(void)cancelMessageWithOfflineThreadingId:(id)arg1 forPendingThreadWithOfflineId:(id)arg2 ;
-(void)cancelMessageWithOfflineThreadingId:(id)arg1 ;
-(void)retryAllMessagesForPendingThreadWithOfflineId:(id)arg1 ;
-(void)retryAllMessagesForThreadWithKey:(id)arg1 ;
-(id)sendMessageToThreadTarget:(id)arg1 text:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 messageLifeTime:(long long)arg5 clientTags:(id)arg6 extensibleMessageData:(id)arg7 sendConversionContext:(id)arg8 listener:(id)arg9 ;
-(void)retryMessageWithOfflineThreadingId:(id)arg1 forPendingThreadWithOfflineId:(id)arg2 ;
-(void)retryMessageWithOfflineThreadingId:(id)arg1 ;
-(void)_mqttConnectStatusDidChange:(id)arg1 ;
-(void)forwardMessageToThreadKey:(id)arg1 forwardContent:(id)arg2 clientTags:(id)arg3 sendConversionContext:(id)arg4 ;
-(void)_createThreadWithInvitees:(id)arg1 message:(id)arg2 ;
-(void)_createThreadWithInviteeByUserId:(id)arg1 message:(id)arg2 ;
-(void)_createMontageThreadWithMessage:(id)arg1 ;
-(void)_syncPendingThreadForSyncedMessageSet:(id)arg1 threadKey:(id)arg2 ;
-(void)secureMessagingServiceDidBecomeAvailable;
-(void)didCompleteThreadClientUpdate:(id)arg1 ;
-(void)didFailThreadClientUpdate:(id)arg1 error:(id)arg2 ;
-(void)willRunThreadClientUpdate:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_startObservations;
-(void)_stopObservations;
-(void)dealloc;
-(void)_didEnterBackground:(id)arg1 ;
@end

