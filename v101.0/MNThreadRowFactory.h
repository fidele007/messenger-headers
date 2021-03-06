/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendQuerying, MNAuthenticationManager;
@class MNThreadTypingStateTracker, MNThreadImageManager, MNThreadCellLayoutFactory, MNThreadParticipantNameFormatter, MNDateFormatter, FBMobileConfigContextManager, FBUserSession;

@interface MNThreadRowFactory : NSObject {

	id<MNMessageSendQuerying> _messageSendQuerier;
	MNThreadTypingStateTracker* _threadTypingStateTracker;
	MNThreadImageManager* _threadImageManager;
	MNThreadCellLayoutFactory* _threadCellLayoutFactory;
	MNThreadParticipantNameFormatter* _participantNameFormatter;
	MNDateFormatter* _dateFormatter;
	id<MNAuthenticationManager> _authManager;
	FBMobileConfigContextManager* _configManager;
	FBUserSession* _session;

}
-(id)initWithMessageSendQuerier:(id)arg1 threadTypingStateTracker:(id)arg2 threadImageManager:(id)arg3 threadCellLayoutFactory:(id)arg4 participantNameFormatter:(id)arg5 dateFormatter:(id)arg6 authManager:(id)arg7 configManager:(id)arg8 session:(id)arg9 ;
-(id)threadRowForThreadSummary:(id)arg1 loadedThreadSnippet:(id)arg2 loadedThreadGenericSnippet:(id)arg3 messageMetadata:(id)arg4 loadedUserIdToUserMap:(id)arg5 ;
-(id)threadRowForPendingThread:(id)arg1 loadedThreadSnippet:(id)arg2 loadedThreadGenericSnippet:(id)arg3 loadedUserIdToUserMap:(id)arg4 ;
@end

