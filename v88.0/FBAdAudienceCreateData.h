/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBAdCustomTargettingOptions;

@interface FBAdAudienceCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _adAccountId;
	NSString* _name;
	FBAdCustomTargettingOptions* _targetSpec;
	NSString* _descriptionText;

}

@property (nonatomic,copy) NSString * clientMutationId;                           //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                    //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * adAccountId;                                //@synthesize adAccountId=_adAccountId - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) FBAdCustomTargettingOptions * targetSpec;              //@synthesize targetSpec=_targetSpec - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                            //@synthesize descriptionText=_descriptionText - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTargetSpec:(FBAdCustomTargettingOptions *)arg1 ;
-(NSString *)adAccountId;
-(void)setAdAccountId:(NSString *)arg1 ;
-(FBAdCustomTargettingOptions *)targetSpec;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
@end

