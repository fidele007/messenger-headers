/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBAddContactpointData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _country;
	NSString* _contactPoint;
	NSString* _source;
	NSString* _promoType;
	NSString* _qpId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * country;                       //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * contactPoint;                  //@synthesize contactPoint=_contactPoint - In the implementation block
@property (nonatomic,copy) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * promoType;                     //@synthesize promoType=_promoType - In the implementation block
@property (nonatomic,copy) NSString * qpId;                          //@synthesize qpId=_qpId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)promoType;
-(void)setPromoType:(NSString *)arg1 ;
-(NSString *)qpId;
-(void)setQpId:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)contactPoint;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)country;
-(void)setContactPoint:(NSString *)arg1 ;
@end

