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

@interface FBPresenceManagementIgCreateAndConnectData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _pageId;
	NSString* _username;
	NSString* _phoneNumber;
	NSString* _email;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                        //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * username;                      //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * email;                         //@synthesize email=_email - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)phoneNumber;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)email;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end
