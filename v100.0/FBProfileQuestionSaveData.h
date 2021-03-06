/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBPrivacyData;

@interface FBProfileQuestionSaveData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _profileQuestionId;
	NSString* _session;
	FBPrivacyData* _privacy;
	NSString* _profileQuestionOptionId;

}

@property (nonatomic,copy) NSString * clientMutationId;                     //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                              //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * profileQuestionId;                    //@synthesize profileQuestionId=_profileQuestionId - In the implementation block
@property (nonatomic,copy) NSString * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) FBPrivacyData * privacy;                         //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy) NSString * profileQuestionOptionId;              //@synthesize profileQuestionOptionId=_profileQuestionOptionId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(FBPrivacyData *)privacy;
-(void)setPrivacy:(FBPrivacyData *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)profileQuestionOptionId;
-(void)setProfileQuestionOptionId:(NSString *)arg1 ;
-(NSString *)profileQuestionId;
-(void)setProfileQuestionId:(NSString *)arg1 ;
-(NSString *)session;
-(void)setSession:(NSString *)arg1 ;
@end

