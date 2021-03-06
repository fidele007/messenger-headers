/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBMessengerMentionsChangeNotificationSettingsData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _threadFbid;
	NSString* _muteSettings;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * threadFbid;                    //@synthesize threadFbid=_threadFbid - In the implementation block
@property (nonatomic,copy) NSString * muteSettings;                  //@synthesize muteSettings=_muteSettings - In the implementation block
-(NSString *)muteSettings;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)threadFbid;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setThreadFbid:(NSString *)arg1 ;
-(void)setMuteSettings:(NSString *)arg1 ;
@end

