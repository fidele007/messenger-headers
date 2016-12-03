/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBContinuousContactUploadSettingUpdateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _phoneId;
	NSString* _status;
	NSString* _source;
	NSString* _isRetry;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * phoneId;                       //@synthesize phoneId=_phoneId - In the implementation block
@property (nonatomic,copy) NSString * status;                        //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * isRetry;                       //@synthesize isRetry=_isRetry - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)isRetry;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)phoneId;
-(void)setPhoneId:(NSString *)arg1 ;
-(void)setIsRetry:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
@end

