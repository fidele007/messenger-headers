/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNAuthenticationManager, MNMessageIdNormalizing, MNMessageSendQuerying, FBWebRTCAdminDeltaHandler, FBMAttachmentURLFormatting;
@class MNCDNAssetURLReceivedListeningAnnouncer, MNMessagingQuickReplyStoreService, MNNewLocallyNotifiableMessageHelper, FBMSPNewMessageListenerAnnouncer, FBMSPNewMessageDetailListenerAnnouncer, FBMSendEventLogger, FBMSPThreadUpdater, NSString;

@interface FBMSPNewMessageHandler : NSObject <FBViewerContextClassProvidable> {

	id<MNAuthenticationManager> _authenticationManager;
	MNCDNAssetURLReceivedListeningAnnouncer* _cdnUrlReceivedAnnouncer;
	id<MNMessageIdNormalizing> _messageIdNormalizer;
	id<MNMessageSendQuerying> _messageSendQuerier;
	MNMessagingQuickReplyStoreService* _messagingQuickReplyStore;
	MNNewLocallyNotifiableMessageHelper* _newLocallyNotifiableMessageHelper;
	FBMSPNewMessageListenerAnnouncer* _newMessageAnnouncer;
	FBMSPNewMessageDetailListenerAnnouncer* _newMessageDetailAnnouncer;
	FBMSendEventLogger* _sendEventLogger;
	FBMSPThreadUpdater* _threadUpdater;
	id<FBWebRTCAdminDeltaHandler> _callLogHandler;
	id<FBMAttachmentURLFormatting> _urlFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_buildMessageFromDelta:(id)arg1 ;
-(id)incrementalPersistenceJobDescriptionsForDelta:(id)arg1 ;
-(id)threadRelationshipForDelta:(id)arg1 ;
-(void)handleDelta:(id)arg1 isMontageMessage:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithAuthenticationManager:(id)arg1 cdnUrlReceivedAnnouncer:(id)arg2 messageIdNormalizer:(id)arg3 messageSendQuerier:(id)arg4 messagingQuickReplyStore:(id)arg5 newLocallyNotifiableMessageHelper:(id)arg6 newMessageAnnouncer:(id)arg7 newMessageDetailAnnouncer:(id)arg8 sendEventLogger:(id)arg9 threadUpdater:(id)arg10 callLogHandler:(id)arg11 urlFormatter:(id)arg12 ;
-(void)_logNewMessageIfNeccesary:(id)arg1 ;
@end

