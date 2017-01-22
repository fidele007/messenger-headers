/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MNInboxMontageAttachmentGenerationPlaceholder, FBMessageOutgoingAttachment, FBOutgoingMessage;

@interface AttachmentGenerationState : NSObject {

	NSString* _generationId;
	MNInboxMontageAttachmentGenerationPlaceholder* _placeholder;
	FBMessageOutgoingAttachment* _generatedAttachment;
	FBOutgoingMessage* _message;

}

@property (nonatomic,copy) NSString * generationId;                                                  //@synthesize generationId=_generationId - In the implementation block
@property (nonatomic,copy) MNInboxMontageAttachmentGenerationPlaceholder * placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) FBMessageOutgoingAttachment * generatedAttachment;                        //@synthesize generatedAttachment=_generatedAttachment - In the implementation block
@property (nonatomic,copy) FBOutgoingMessage * message;                                              //@synthesize message=_message - In the implementation block
-(NSString *)generationId;
-(void)setGenerationId:(NSString *)arg1 ;
-(FBMessageOutgoingAttachment *)generatedAttachment;
-(void)setGeneratedAttachment:(FBMessageOutgoingAttachment *)arg1 ;
-(FBOutgoingMessage *)message;
-(void)setPlaceholder:(MNInboxMontageAttachmentGenerationPlaceholder *)arg1 ;
-(void)setMessage:(FBOutgoingMessage *)arg1 ;
-(MNInboxMontageAttachmentGenerationPlaceholder *)placeholder;
@end
