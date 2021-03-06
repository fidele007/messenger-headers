/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBTextWithEntitiesInput;

@interface FBRequestNoteUpdateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _componentFlowRequestId;
	NSString* _action;
	FBTextWithEntitiesInput* _body;
	NSString* _requestNoteId;

}

@property (nonatomic,copy) NSString * clientMutationId;                    //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                             //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * componentFlowRequestId;              //@synthesize componentFlowRequestId=_componentFlowRequestId - In the implementation block
@property (nonatomic,copy) NSString * action;                              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) FBTextWithEntitiesInput * body;                 //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * requestNoteId;                       //@synthesize requestNoteId=_requestNoteId - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)componentFlowRequestId;
-(void)setComponentFlowRequestId:(NSString *)arg1 ;
-(NSString *)requestNoteId;
-(void)setRequestNoteId:(NSString *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(FBTextWithEntitiesInput *)body;
-(void)setBody:(FBTextWithEntitiesInput *)arg1 ;
@end

