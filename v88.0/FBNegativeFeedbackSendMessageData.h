/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBNegativeFeedbackSendMessageData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _negativeFeedbackActionId;
	NSString* _negativeFeedbackMessageBody;
	NSString* _negativeFeedbackMessageRecipientId;

}

@property (nonatomic,copy) NSString * clientMutationId;                                //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                         //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * negativeFeedbackActionId;                        //@synthesize negativeFeedbackActionId=_negativeFeedbackActionId - In the implementation block
@property (nonatomic,copy) NSString * negativeFeedbackMessageBody;                     //@synthesize negativeFeedbackMessageBody=_negativeFeedbackMessageBody - In the implementation block
@property (nonatomic,copy) NSString * negativeFeedbackMessageRecipientId;              //@synthesize negativeFeedbackMessageRecipientId=_negativeFeedbackMessageRecipientId - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setNegativeFeedbackActionId:(NSString *)arg1 ;
-(void)setNegativeFeedbackMessageBody:(NSString *)arg1 ;
-(void)setNegativeFeedbackMessageRecipientId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)negativeFeedbackActionId;
-(NSString *)negativeFeedbackMessageBody;
-(NSString *)negativeFeedbackMessageRecipientId;
@end

