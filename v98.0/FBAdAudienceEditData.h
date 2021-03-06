/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBAdCustomTargettingOptions;

@interface FBAdAudienceEditData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _adAudienceId;
	NSString* _name;
	FBAdCustomTargettingOptions* _targetSpec;

}

@property (nonatomic,copy) NSString * clientMutationId;                           //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                    //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * adAudienceId;                               //@synthesize adAudienceId=_adAudienceId - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) FBAdCustomTargettingOptions * targetSpec;              //@synthesize targetSpec=_targetSpec - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(FBAdCustomTargettingOptions *)targetSpec;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTargetSpec:(FBAdCustomTargettingOptions *)arg1 ;
-(NSString *)adAudienceId;
-(void)setAdAudienceId:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

