/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, FBEventContext;

@interface FBEventInviteData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _eventId;
	NSArray* _inviteeIds;
	NSString* _invitedThroughMessenger;
	NSString* _inviteNotificationType;
	FBEventContext* _context;

}

@property (nonatomic,copy) NSString * clientMutationId;                     //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                              //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * eventId;                              //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) NSArray * inviteeIds;                            //@synthesize inviteeIds=_inviteeIds - In the implementation block
@property (nonatomic,copy) NSString * invitedThroughMessenger;              //@synthesize invitedThroughMessenger=_invitedThroughMessenger - In the implementation block
@property (nonatomic,copy) NSString * inviteNotificationType;               //@synthesize inviteNotificationType=_inviteNotificationType - In the implementation block
@property (nonatomic,copy) FBEventContext * context;                        //@synthesize context=_context - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(NSArray *)inviteeIds;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setInviteeIds:(NSArray *)arg1 ;
-(NSString *)invitedThroughMessenger;
-(void)setInvitedThroughMessenger:(NSString *)arg1 ;
-(NSString *)inviteNotificationType;
-(void)setInviteNotificationType:(NSString *)arg1 ;
-(FBEventContext *)context;
-(void)setContext:(FBEventContext *)arg1 ;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
@end

