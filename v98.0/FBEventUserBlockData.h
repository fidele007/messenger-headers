/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBEventContext;

@interface FBEventUserBlockData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _targetUserId;
	NSString* _blockType;
	FBEventContext* _context;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * targetUserId;                  //@synthesize targetUserId=_targetUserId - In the implementation block
@property (nonatomic,copy) NSString * blockType;                     //@synthesize blockType=_blockType - In the implementation block
@property (nonatomic,copy) FBEventContext * context;                 //@synthesize context=_context - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(void)setBlockType:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)targetUserId;
-(void)setTargetUserId:(NSString *)arg1 ;
-(FBEventContext *)context;
-(void)setContext:(FBEventContext *)arg1 ;
-(NSString *)blockType;
@end

