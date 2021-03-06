/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesSyncIrisDeltaProcessing.h>

@protocol MNAuthenticationManager, MNMessageIdNormalizing, MNMessageSendQuerying;
@class FBMSPThreadUpdater, FBMSPSentMessageListenerAnnouncer, FBMSendEventLogger, NSString;

@interface FBMSPSentMessageDeltaHandler : NSObject <FBViewerContextClassProvidable, MNMessagesSyncIrisDeltaProcessing> {

	id<MNAuthenticationManager> _authenticationManager;
	FBMSPThreadUpdater* _threadUpdater;
	FBMSPSentMessageListenerAnnouncer* _sentMessageAnnouncer;
	id<MNMessageIdNormalizing> _messageIdNormalizer;
	id<MNMessageSendQuerying> _messageSendQuerier;
	FBMSendEventLogger* _sendEventLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)deltaType;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 ;
-(id)initWithAuthenticationManager:(id)arg1 threadUpdater:(id)arg2 sentMessageAnnouncer:(id)arg3 messageIdNormalizer:(id)arg4 messageSendQuerier:(id)arg5 sendEventLogger:(id)arg6 ;
-(id)_buildConfirmedMessageFromDeltaSentMessage:(id)arg1 ;
-(void)_processSentMessageFromDeltaSentMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_findOutgoingMessageForOfflineThreadId:(id)arg1 ;
-(void)_logSendingMessagePushedIfNecessary:(id)arg1 sendStateInfo:(id)arg2 ;
@end

