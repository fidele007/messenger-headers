/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAggregatedAppMessageQuerying, MNAuthenticationManager;
@class MNAppMessageAttachmentUtils, FBEmoticonTranslator, MNWatchAttachmentStyleRendererManager;

@interface MNWatchMessageListGenerator : NSObject {

	id<MNAggregatedAppMessageQuerying> _messageQuerier;
	id<MNAuthenticationManager> _authManager;
	MNAppMessageAttachmentUtils* _attachmentUtils;
	FBEmoticonTranslator* _emoticonTranslator;
	MNWatchAttachmentStyleRendererManager* _attachmentStyleRendererManager;

}
-(id)_messageRowFromAppMessage:(id)arg1 isLastMessage:(BOOL)arg2 threadSummary:(id)arg3 ;
-(id)initWithMessageQuerier:(id)arg1 authManager:(id)arg2 attachmentUtils:(id)arg3 emoticonTranslator:(id)arg4 attachmentStyleRendererManager:(id)arg5 ;
-(id)generateMessageListWithThreadKey:(id)arg1 threadSummary:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
@end
