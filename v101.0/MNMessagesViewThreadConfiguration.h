/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMessageSendConversionContext, MNComposerExtensionTarget, MNTextAndAttachmentForwardContent, MNMessagesViewNavigationOriginType;

@interface MNMessagesViewThreadConfiguration : FBValueObject <NSCopying> {

	BOOL _autoSendReplyContent;
	BOOL _shouldForceDisableAutoRotation;
	MNMessageSendConversionContext* _messageSendConversionContext;
	MNComposerExtensionTarget* _initialComposerExtensionTarget;
	MNTextAndAttachmentForwardContent* _replyContent;
	MNMessagesViewNavigationOriginType* _navigationOriginType;

}

@property (nonatomic,copy,readonly) MNMessageSendConversionContext * messageSendConversionContext;              //@synthesize messageSendConversionContext=_messageSendConversionContext - In the implementation block
@property (nonatomic,copy,readonly) MNComposerExtensionTarget * initialComposerExtensionTarget;                 //@synthesize initialComposerExtensionTarget=_initialComposerExtensionTarget - In the implementation block
@property (nonatomic,copy,readonly) MNTextAndAttachmentForwardContent * replyContent;                           //@synthesize replyContent=_replyContent - In the implementation block
@property (nonatomic,readonly) BOOL autoSendReplyContent;                                                       //@synthesize autoSendReplyContent=_autoSendReplyContent - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceDisableAutoRotation;                                             //@synthesize shouldForceDisableAutoRotation=_shouldForceDisableAutoRotation - In the implementation block
@property (nonatomic,copy,readonly) MNMessagesViewNavigationOriginType * navigationOriginType;                  //@synthesize navigationOriginType=_navigationOriginType - In the implementation block
-(MNMessageSendConversionContext *)messageSendConversionContext;
-(MNComposerExtensionTarget *)initialComposerExtensionTarget;
-(MNTextAndAttachmentForwardContent *)replyContent;
-(MNMessagesViewNavigationOriginType *)navigationOriginType;
-(BOOL)autoSendReplyContent;
-(BOOL)shouldForceDisableAutoRotation;
-(id)initWithMessageSendConversionContext:(id)arg1 initialComposerExtensionTarget:(id)arg2 replyContent:(id)arg3 autoSendReplyContent:(BOOL)arg4 shouldForceDisableAutoRotation:(BOOL)arg5 navigationOriginType:(id)arg6 ;
@end
