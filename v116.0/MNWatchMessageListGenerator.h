/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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

