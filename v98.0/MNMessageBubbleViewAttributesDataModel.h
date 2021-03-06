/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription, NSString;

@interface MNMessageBubbleViewAttributesDataModel : FBValueObject <NSCopying> {

	BOOL _isFromMe;
	BOOL _isMessageTextHybird;
	BOOL _isMessageBodyFiltered;
	BOOL _hasPhotosViewModel;
	BOOL _hasFileAttachments;
	BOOL _hasVideoAttachments;
	BOOL _hasAttachmentViewModel;
	BOOL _previousIsSameMessageGroup;
	BOOL _nextIsSameMessageGroup;
	BOOL _hasAttributionViewModel;
	BOOL _isDisplayableEphemeralMessage;
	BOOL _isDisplayAsSent;
	BOOL _shouldShowNonPushableBubble;
	BOOL _highlighted;
	FBStringWithRedactedDescription* _messageBody;
	NSString* _montageReplyMessageId;
	long long _messageRowBubbleStyle;

}

@property (nonatomic,readonly) BOOL isFromMe;                                                   //@synthesize isFromMe=_isFromMe - In the implementation block
@property (nonatomic,readonly) BOOL isMessageTextHybird;                                        //@synthesize isMessageTextHybird=_isMessageTextHybird - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * messageBody;              //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,readonly) BOOL isMessageBodyFiltered;                                      //@synthesize isMessageBodyFiltered=_isMessageBodyFiltered - In the implementation block
@property (nonatomic,readonly) BOOL hasPhotosViewModel;                                         //@synthesize hasPhotosViewModel=_hasPhotosViewModel - In the implementation block
@property (nonatomic,readonly) BOOL hasFileAttachments;                                         //@synthesize hasFileAttachments=_hasFileAttachments - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoAttachments;                                        //@synthesize hasVideoAttachments=_hasVideoAttachments - In the implementation block
@property (nonatomic,readonly) BOOL hasAttachmentViewModel;                                     //@synthesize hasAttachmentViewModel=_hasAttachmentViewModel - In the implementation block
@property (nonatomic,readonly) BOOL previousIsSameMessageGroup;                                 //@synthesize previousIsSameMessageGroup=_previousIsSameMessageGroup - In the implementation block
@property (nonatomic,readonly) BOOL nextIsSameMessageGroup;                                     //@synthesize nextIsSameMessageGroup=_nextIsSameMessageGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * montageReplyMessageId;                           //@synthesize montageReplyMessageId=_montageReplyMessageId - In the implementation block
@property (nonatomic,readonly) long long messageRowBubbleStyle;                                 //@synthesize messageRowBubbleStyle=_messageRowBubbleStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributionViewModel;                                    //@synthesize hasAttributionViewModel=_hasAttributionViewModel - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayableEphemeralMessage;                              //@synthesize isDisplayableEphemeralMessage=_isDisplayableEphemeralMessage - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayAsSent;                                            //@synthesize isDisplayAsSent=_isDisplayAsSent - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNonPushableBubble;                                //@synthesize shouldShowNonPushableBubble=_shouldShowNonPushableBubble - In the implementation block
@property (nonatomic,readonly) BOOL highlighted;                                                //@synthesize highlighted=_highlighted - In the implementation block
-(BOOL)isMessageBodyFiltered;
-(BOOL)previousIsSameMessageGroup;
-(NSString *)montageReplyMessageId;
-(BOOL)nextIsSameMessageGroup;
-(BOOL)isDisplayableEphemeralMessage;
-(id)initWithIsFromMe:(BOOL)arg1 isMessageTextHybird:(BOOL)arg2 messageBody:(id)arg3 isMessageBodyFiltered:(BOOL)arg4 hasPhotosViewModel:(BOOL)arg5 hasFileAttachments:(BOOL)arg6 hasVideoAttachments:(BOOL)arg7 hasAttachmentViewModel:(BOOL)arg8 previousIsSameMessageGroup:(BOOL)arg9 nextIsSameMessageGroup:(BOOL)arg10 montageReplyMessageId:(id)arg11 messageRowBubbleStyle:(long long)arg12 hasAttributionViewModel:(BOOL)arg13 isDisplayableEphemeralMessage:(BOOL)arg14 isDisplayAsSent:(BOOL)arg15 shouldShowNonPushableBubble:(BOOL)arg16 highlighted:(BOOL)arg17 ;
-(BOOL)isMessageTextHybird;
-(BOOL)hasPhotosViewModel;
-(BOOL)hasFileAttachments;
-(BOOL)hasVideoAttachments;
-(BOOL)hasAttachmentViewModel;
-(long long)messageRowBubbleStyle;
-(BOOL)hasAttributionViewModel;
-(BOOL)isDisplayAsSent;
-(BOOL)shouldShowNonPushableBubble;
-(BOOL)highlighted;
-(FBStringWithRedactedDescription *)messageBody;
-(BOOL)isFromMe;
@end

