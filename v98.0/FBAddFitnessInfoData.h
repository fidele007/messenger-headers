/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBAddFitnessInfoData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _userId;
	NSNumber* _steps;
	NSNumber* _distance;
	NSNumber* _flights;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * userId;                        //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSNumber * steps;                         //@synthesize steps=_steps - In the implementation block
@property (nonatomic,copy) NSNumber * distance;                      //@synthesize distance=_distance - In the implementation block
@property (nonatomic,copy) NSNumber * flights;                       //@synthesize flights=_flights - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setDistance:(NSNumber *)arg1 ;
-(NSNumber *)distance;
-(NSNumber *)steps;
-(void)setSteps:(NSNumber *)arg1 ;
-(void)setFlights:(NSNumber *)arg1 ;
-(NSNumber *)flights;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
@end

