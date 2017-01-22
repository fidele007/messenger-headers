/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBMessengerInvitesSendData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSArray* _inviteePhoneNumbers;
	NSArray* _inviteeFbids;
	NSArray* _inviteeContactTokenIds;
	NSString* _invitedAppId;
	NSString* _threadFbid;

}

@property (nonatomic,copy) NSString * clientMutationId;                   //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                            //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSArray * inviteePhoneNumbers;                 //@synthesize inviteePhoneNumbers=_inviteePhoneNumbers - In the implementation block
@property (nonatomic,copy) NSArray * inviteeFbids;                        //@synthesize inviteeFbids=_inviteeFbids - In the implementation block
@property (nonatomic,copy) NSArray * inviteeContactTokenIds;              //@synthesize inviteeContactTokenIds=_inviteeContactTokenIds - In the implementation block
@property (nonatomic,copy) NSString * invitedAppId;                       //@synthesize invitedAppId=_invitedAppId - In the implementation block
@property (nonatomic,copy) NSString * threadFbid;                         //@synthesize threadFbid=_threadFbid - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)threadFbid;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setThreadFbid:(NSString *)arg1 ;
-(void)setInviteePhoneNumbers:(NSArray *)arg1 ;
-(void)setInviteeFbids:(NSArray *)arg1 ;
-(NSArray *)inviteePhoneNumbers;
-(NSArray *)inviteeFbids;
-(NSArray *)inviteeContactTokenIds;
-(void)setInviteeContactTokenIds:(NSArray *)arg1 ;
-(NSString *)invitedAppId;
-(void)setInvitedAppId:(NSString *)arg1 ;
@end
