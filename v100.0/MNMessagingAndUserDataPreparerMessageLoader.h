/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendQuerying, MNGlobalDeleteMessagePlaceholderStoreReading, MNAuthenticationManager, MNEphemeralMessageStatusCalculating, MNThreadMessageOptimisticStateApplying;
@class MNAPNSMessageStore;

@interface MNMessagingAndUserDataPreparerMessageLoader : NSObject {

	id<MNMessageSendQuerying> _messageSendQuerier;
	id<MNGlobalDeleteMessagePlaceholderStoreReading> _globalDeleteMessageStoreReader;
	MNAPNSMessageStore* _apnsMessageStore;
	id<MNAuthenticationManager> _authManager;
	id<MNEphemeralMessageStatusCalculating> _ephemeralStatusCalculator;
	id<MNThreadMessageOptimisticStateApplying> _messageOptimisticUpdateApplier;

}
-(id)initWithMessageSendQuerier:(id)arg1 globalDeleteMessageStoreReader:(id)arg2 apnsMessageStore:(id)arg3 authManager:(id)arg4 ephemeralMessageStatusCalculator:(id)arg5 messageOptimisticUpdateApplier:(id)arg6 ;
-(id)allMessagesForThreadKey:(id)arg1 confirmedMessages:(id)arg2 loadingConfiguration:(id)arg3 indexedParticipantInfoSet:(id)arg4 ;
@end

